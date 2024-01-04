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
public class JinLOA4_4 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JinLOA4_4().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JinLOA4_4.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("JinLOA4_4.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 07:47:55 GMT"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA4.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("JinLOA4.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setDescription("JinLOA4").setPosition(new float[] {0f,1f,3f}).setCenterOfRotation(new float[] {0f,1f,0f}))
        .addChild(new HAnimHumanoid().setDEF("hanim_JinLOA4").setName("JinLOA4").setLoa(4)
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName").setValue(new MFString0().getArray()))
            .setMetadata(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName("creationDate").setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName("gender").setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat4().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint("hanim_JinLOA4").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f,1.024209f,-0.015921f})
            .addChild(new HAnimSegment("hanim_humanoid_root").setDEF("hanim_sacrum").setName("sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f,1.024209f,-0.015921f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("JinLOA4TextureAtlas").setUrl(new MFString6().getArray())))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt327().getArray()).setCoordIndex(new MFInt328().getArray())
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f9().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f,0.876897f,-0.015921f})
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f,0.876897f,-0.015921f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3211().getArray()).setCoordIndex(new MFInt3212().getArray())
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f13().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {0.0946575f,1.025046f,-0.01834875f})
                .addChild(new HAnimSegment("hanim_l_hip").setDEF("hanim_l_thigh").setName("l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0946575f,1.025046f,-0.01834875f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3215().getArray()).setCoordIndex(new MFInt3216().getArray())
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f17().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {0.09261f,0.506943f,-0.01943775f})
                  .addChild(new HAnimSegment("hanim_l_knee").setDEF("hanim_l_calf").setName("l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.09261f,0.506943f,-0.01943775f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3219().getArray()).setCoordIndex(new MFInt3220().getArray())
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f21().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_talocrural").setName("l_talocrural").setCenter(new float[] {0.08883f,0.1183518f,-0.01045125f})
                    .addChild(new HAnimSegment("hanim_l_talocrural").setDEF("hanim_l_talus").setName("l_talus")
                      .addChild(new Transform().setTranslation(new float[] {0.08883f,0.1183518f,-0.01045125f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3223().getArray()).setCoordIndex(new MFInt3224().getArray())
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f25().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_talocalcaneonavicular").setName("l_talocalcaneonavicular").setCenter(new float[] {0.0783f,0.045756f,0.0048645f})
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setDEF("hanim_l_navicular").setName("l_navicular")
                        .addChild(new Transform().setTranslation(new float[] {0.0783f,0.045756f,0.0048645f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3227().getArray()).setCoordIndex(new MFInt3228().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f29().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_1").setName("l_cuneonavicular_1").setCenter(new float[] {0.067365f,0.0398133f,0.0183915f})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setDEF("hanim_l_cuneiform_1").setName("l_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {0.067365f,0.0398133f,0.0183915f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3231().getArray()).setCoordIndex(new MFInt3232().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f33().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setDEF("hanim_l_tarsometatarsal_1").setName("l_tarsometatarsal_1").setCenter(new float[] {0.06462f,0.0288207f,0.04419f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsal_1").setName("l_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {0.06462f,0.0288207f,0.04419f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3235().getArray()).setCoordIndex(new MFInt3236().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f37().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_1").setCenter(new float[] {0.0621225f,0.01788669f,0.0936225f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_proximal_phalanx_1").setName("l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {0.0621225f,0.01788669f,0.0936225f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3239().getArray()).setCoordIndex(new MFInt3240().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f41().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_distal_interphalangeal_1").setName("l_tarsal_distal_interphalangeal_1").setCenter(new float[] {0.0621225f,0.01504926f,0.1153125f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_phalanx_1").setName("l_tarsal_distal_phalanx_1")
                                .addChild(new Transform().setTranslation(new float[] {0.0621225f,0.01504926f,0.1153125f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3243().getArray()).setCoordIndex(new MFInt3244().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f45().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_2").setName("l_cuneonavicular_2").setCenter(new float[] {0.0814275f,0.041571f,0.02142675f})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setDEF("hanim_l_cuneiform_2").setName("l_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {0.0814275f,0.041571f,0.02142675f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3247().getArray()).setCoordIndex(new MFInt3248().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f49().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setDEF("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(new float[] {0.08019f,0.032364f,0.0410625f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsal_2").setName("l_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {0.08019f,0.032364f,0.0410625f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3251().getArray()).setCoordIndex(new MFInt3252().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f53().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(new float[] {0.08253f,0.01857024f,0.09783f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {0.08253f,0.01857024f,0.09783f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3255().getArray()).setCoordIndex(new MFInt3256().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f57().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0.0843075f,0.01568259f,0.1140075f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_middle_phalanx_2").setName("l_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {0.0843075f,0.01568259f,0.1140075f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3259().getArray()).setCoordIndex(new MFInt3260().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f61().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.0843075f,0.01218393f,0.123435f})
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_phalanx_2").setName("l_tarsal_distal_phalanx_2")
                                  .addChild(new Transform().setTranslation(new float[] {0.0843075f,0.01218393f,0.123435f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3263().getArray()).setCoordIndex(new MFInt3264().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f65().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray())))))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_3").setName("l_cuneonavicular_3").setCenter(new float[] {0.09297f,0.0414036f,0.019818f})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setDEF("hanim_l_cuneiform_3").setName("l_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {0.09297f,0.0414036f,0.019818f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3267().getArray()).setCoordIndex(new MFInt3268().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f69().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setDEF("hanim_l_tarsometatarsal_3").setName("l_tarsometatarsal_3").setCenter(new float[] {0.09459f,0.032364f,0.0393975f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsal_3").setName("l_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {0.09459f,0.032364f,0.0393975f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3271().getArray()).setCoordIndex(new MFInt3272().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f73().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsophalangeal_3").setName("l_metatarsophalangeal_3").setCenter(new float[] {0.09648f,0.01867068f,0.0954225f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_phalanx_3").setName("l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {0.09648f,0.01867068f,0.0954225f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3275().getArray()).setCoordIndex(new MFInt3276().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f77().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0.098865f,0.01478421f,0.110475f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_middle_phalanx_3").setName("l_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {0.098865f,0.01478421f,0.110475f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3279().getArray()).setCoordIndex(new MFInt3280().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f81().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0.1004175f,0.01218393f,0.1197f})
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_phalanx_3").setName("l_tarsal_distal_phalanx_3")
                                  .addChild(new Transform().setTranslation(new float[] {0.1004175f,0.01218393f,0.1197f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3283().getArray()).setCoordIndex(new MFInt3284().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f85().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))))))))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_calcaneocuboid").setName("l_calcaneocuboid").setCenter(new float[] {0.0891f,0.0718983f,-0.025965f})
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setDEF("hanim_l_calcaneus").setName("l_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {0.0891f,0.0718983f,-0.025965f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3287().getArray()).setCoordIndex(new MFInt3288().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f89().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setDEF("hanim_l_transversetarsal").setName("l_transversetarsal").setCenter(new float[] {0.1106325f,0.0437472f,0.002089125f})
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setDEF("hanim_l_cuboid").setName("l_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {0.1106325f,0.0437472f,0.002089125f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3291().getArray()).setCoordIndex(new MFInt3292().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f93().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_4").setName("l_tarsometatarsal_4").setCenter(new float[] {0.1064925f,0.0304389f,0.03843f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsal_4").setName("l_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {0.1064925f,0.0304389f,0.03843f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3295().getArray()).setCoordIndex(new MFInt3296().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f97().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsophalangeal_4").setName("l_metatarsophalangeal_4").setCenter(new float[] {0.1098675f,0.01779741f,0.09117f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_phalanx_4").setName("l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {0.1098675f,0.01779741f,0.09117f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3299().getArray()).setCoordIndex(new MFInt32100().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f101().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0.114165f,0.01518318f,0.1063125f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_middle_phalanx_4").setName("l_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {0.114165f,0.01518318f,0.1063125f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32103().getArray()).setCoordIndex(new MFInt32104().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f105().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0.1156725f,0.01161756f,0.1136925f})
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_phalanx_4").setName("l_tarsal_distal_phalanx_4")
                                  .addChild(new Transform().setTranslation(new float[] {0.1156725f,0.01161756f,0.1136925f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32107().getArray()).setCoordIndex(new MFInt32108().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f109().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_5").setName("l_tarsometatarsal_5").setCenter(new float[] {0.120825f,0.02597211f,0.03474f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setDEF("hanim_l_metatarsal_5").setName("l_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {0.120825f,0.02597211f,0.03474f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32111().getArray()).setCoordIndex(new MFInt32112().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f113().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setDEF("hanim_l_metatarsophalangeal_5").setName("l_metatarsophalangeal_5").setCenter(new float[] {0.124065f,0.01695204f,0.0865575f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_phalanx_5").setName("l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {0.124065f,0.01695204f,0.0865575f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32115().getArray()).setCoordIndex(new MFInt32116().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f117().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray()))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0.1263825f,0.01346175f,0.09414f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_middle_phalanx_5").setName("l_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {0.1263825f,0.01346175f,0.09414f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32119().getArray()).setCoordIndex(new MFInt32120().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f121().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0.1272825f,0.01061874f,0.10188f})
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_phalanx_5").setName("l_tarsal_distal_phalanx_5")
                                  .addChild(new Transform().setTranslation(new float[] {0.1272825f,0.01061874f,0.10188f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32123().getArray()).setCoordIndex(new MFInt32124().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f125().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray())))))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-0.0946575f,1.025046f,-0.01834875f})
                .addChild(new HAnimSegment("hanim_r_hip").setDEF("hanim_r_thigh").setName("r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.0946575f,1.025046f,-0.01834875f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32127().getArray()).setCoordIndex(new MFInt32128().getArray())
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f129().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-0.09261f,0.506943f,-0.01943775f})
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.09261f,0.506943f,-0.01943775f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32131().getArray()).setCoordIndex(new MFInt32132().getArray())
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f133().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_talocrural").setName("r_talocrural").setCenter(new float[] {-0.0884475f,0.1183518f,-0.01045125f})
                    .addChild(new HAnimSegment("hanim_r_talocrural").setDEF("hanim_r_talus").setName("r_talus")
                      .addChild(new Transform().setTranslation(new float[] {-0.0884475f,0.1183518f,-0.01045125f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32135().getArray()).setCoordIndex(new MFInt32136().getArray())
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f137().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(new float[] {-0.07794f,0.045756f,0.0048645f})
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setDEF("hanim_r_navicular").setName("r_navicular")
                        .addChild(new Transform().setTranslation(new float[] {-0.07794f,0.045756f,0.0048645f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32139().getArray()).setCoordIndex(new MFInt32140().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f141().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(new float[] {-0.0669825f,0.0398133f,0.0183915f})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setDEF("hanim_r_cuneiform_1").setName("r_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {-0.0669825f,0.0398133f,0.0183915f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32143().getArray()).setCoordIndex(new MFInt32144().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f145().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setDEF("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(new float[] {-0.06426f,0.0288207f,0.04419f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setDEF("hanim_r_metatarsal_1").setName("r_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {-0.06426f,0.0288207f,0.04419f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32147().getArray()).setCoordIndex(new MFInt32148().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f149().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setDEF("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(new float[] {-0.0617625f,0.01788669f,0.0936225f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setDEF("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {-0.0617625f,0.01788669f,0.0936225f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32151().getArray()).setCoordIndex(new MFInt32152().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f153().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setDEF("hanim_r_tarsal_distal_interphalangeal_1").setName("r_tarsal_distal_interphalangeal_1").setCenter(new float[] {-0.06174f,0.01504926f,0.1153125f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_1").setDEF("hanim_r_tarsal_distal_phalanx_1").setName("r_tarsal_distal_phalanx_1")
                                .addChild(new Transform().setTranslation(new float[] {-0.06174f,0.01504926f,0.1153125f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32155().getArray()).setCoordIndex(new MFInt32156().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f157().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(new float[] {-0.081045f,0.041571f,0.02142675f})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setDEF("hanim_r_cuneiform_2").setName("r_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {-0.081045f,0.041571f,0.02142675f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32159().getArray()).setCoordIndex(new MFInt32160().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f161().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setDEF("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(new float[] {-0.07983f,0.032364f,0.0410625f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsal_2").setName("r_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {-0.07983f,0.032364f,0.0410625f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32163().getArray()).setCoordIndex(new MFInt32164().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f165().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(new float[] {-0.0821475f,0.01857024f,0.09783f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {-0.0821475f,0.01857024f,0.09783f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32167().getArray()).setCoordIndex(new MFInt32168().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f169().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {-0.083925f,0.01568259f,0.1140075f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {-0.083925f,0.01568259f,0.1140075f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32171().getArray()).setCoordIndex(new MFInt32172().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f173().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.083925f,0.01218393f,0.123435f})
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_phalanx_2").setName("r_tarsal_distal_phalanx_2")
                                  .addChild(new Transform().setTranslation(new float[] {-0.083925f,0.01218393f,0.123435f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32175().getArray()).setCoordIndex(new MFInt32176().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f177().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray())))))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(new float[] {-0.09261f,0.0414036f,0.019818f})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setDEF("hanim_r_cuneiform_3").setName("r_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {-0.09261f,0.0414036f,0.019818f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32179().getArray()).setCoordIndex(new MFInt32180().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f181().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setDEF("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_3").setCenter(new float[] {-0.09423f,0.032364f,0.0393975f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setDEF("hanim_r_metatarsal_3").setName("r_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {-0.09423f,0.032364f,0.0393975f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32183().getArray()).setCoordIndex(new MFInt32184().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f185().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setDEF("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(new float[] {-0.0960975f,0.01867068f,0.0954225f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setDEF("hanim_r_tarsal_proximal_phalanx_3").setName("r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {-0.0960975f,0.01867068f,0.0954225f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32187().getArray()).setCoordIndex(new MFInt32188().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f189().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {-0.098505f,0.01478421f,0.110475f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {-0.098505f,0.01478421f,0.110475f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32191().getArray()).setCoordIndex(new MFInt32192().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f193().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setCenter(new float[] {-0.100035f,0.01218393f,0.1197f})
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_phalanx_3").setName("r_tarsal_distal_phalanx_3")
                                  .addChild(new Transform().setTranslation(new float[] {-0.100035f,0.01218393f,0.1197f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32195().getArray()).setCoordIndex(new MFInt32196().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f197().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))))))))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(new float[] {-0.0887175f,0.0718983f,-0.025965f})
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setDEF("hanim_r_calcaneus").setName("r_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {-0.0887175f,0.0718983f,-0.025965f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32199().getArray()).setCoordIndex(new MFInt32200().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f201().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setDEF("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(new float[] {-0.1102725f,0.0437472f,0.002089125f})
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setDEF("hanim_r_cuboid").setName("r_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {-0.1102725f,0.0437472f,0.002089125f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32203().getArray()).setCoordIndex(new MFInt32204().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f205().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setDEF("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_4").setCenter(new float[] {-0.1061325f,0.0304389f,0.03843f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setDEF("hanim_r_metatarsal_4").setName("r_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {-0.1061325f,0.0304389f,0.03843f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32207().getArray()).setCoordIndex(new MFInt32208().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f209().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setDEF("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(new float[] {-0.1095075f,0.01779741f,0.09117f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setDEF("hanim_r_tarsal_proximal_phalanx_4").setName("r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {-0.1095075f,0.01779741f,0.09117f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32211().getArray()).setCoordIndex(new MFInt32212().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f213().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {-0.1137825f,0.01518318f,0.1063125f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {-0.1137825f,0.01518318f,0.1063125f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32215().getArray()).setCoordIndex(new MFInt32216().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f217().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setCenter(new float[] {-0.1153125f,0.01161756f,0.1136925f})
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_phalanx_4").setName("r_tarsal_distal_phalanx_4")
                                  .addChild(new Transform().setTranslation(new float[] {-0.1153125f,0.01161756f,0.1136925f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32219().getArray()).setCoordIndex(new MFInt32220().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f221().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))))))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setDEF("hanim_r_tarsometatarsal_5").setName("r_tarsometatarsal_5").setCenter(new float[] {-0.1204425f,0.02597211f,0.03474f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setDEF("hanim_r_metatarsal_5").setName("r_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {-0.1204425f,0.02597211f,0.03474f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32223().getArray()).setCoordIndex(new MFInt32224().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f225().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setDEF("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(new float[] {-0.1236825f,0.01695204f,0.0865575f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setDEF("hanim_r_tarsal_proximal_phalanx_5").setName("r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {-0.1236825f,0.01695204f,0.0865575f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32227().getArray()).setCoordIndex(new MFInt32228().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f229().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {-0.126f,0.01346175f,0.09414f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_middle_phalanx_5").setName("r_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {-0.126f,0.01346175f,0.09414f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32231().getArray()).setCoordIndex(new MFInt32232().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f233().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setCenter(new float[] {-0.1269225f,0.01061874f,0.10188f})
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_phalanx_5").setName("r_tarsal_distal_phalanx_5")
                                  .addChild(new Transform().setTranslation(new float[] {-0.1269225f,0.01061874f,0.10188f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32235().getArray()).setCoordIndex(new MFInt32236().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f237().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f238().getArray())))))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0f,1.147527f,-0.01376325f})
                .addChild(new HAnimSegment("hanim_vl5").setDEF("hanim_l5").setName("l5")
                  .addChild(new Transform().setTranslation(new float[] {0f,1.147527f,-0.01376325f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32239().getArray()).setCoordIndex(new MFInt32240().getArray())
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f241().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))))))
                .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_vl4").setName("vl4").setCenter(new float[] {0f,1.177659f,-0.01376325f})
                  .addChild(new HAnimSegment("hanim_vl4").setDEF("hanim_l4").setName("l4")
                    .addChild(new Transform().setTranslation(new float[] {0f,1.177659f,-0.01376325f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32243().getArray()).setCoordIndex(new MFInt32244().getArray())
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f245().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))))))
                  .addChild(new HAnimJoint("hanim_vl4").setDEF("hanim_vl3").setName("vl3").setCenter(new float[] {0f,1.197747f,-0.01376325f})
                    .addChild(new HAnimSegment("hanim_vl3").setDEF("hanim_l3").setName("l3")
                      .addChild(new Transform().setTranslation(new float[] {0f,1.197747f,-0.01376325f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32247().getArray()).setCoordIndex(new MFInt32248().getArray())
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f249().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))))))
                    .addChild(new HAnimJoint("hanim_vl3").setDEF("hanim_vl2").setName("vl2").setCenter(new float[] {0f,1.218114f,-0.01376325f})
                      .addChild(new HAnimSegment("hanim_vl2").setDEF("hanim_l2").setName("l2")
                        .addChild(new Transform().setTranslation(new float[] {0f,1.218114f,-0.01376325f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32251().getArray()).setCoordIndex(new MFInt32252().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f253().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))))
                      .addChild(new HAnimJoint("hanim_vl2").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {0f,1.239597f,-0.01376325f})
                        .addChild(new HAnimSegment("hanim_vl1").setDEF("hanim_l1").setName("l1")
                          .addChild(new Transform().setTranslation(new float[] {0f,1.239597f,-0.01376325f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32255().getArray()).setCoordIndex(new MFInt32256().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f257().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))))))
                        .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vt12").setName("vt12").setCenter(new float[] {0f,1.268613f,-0.01376325f})
                          .addChild(new HAnimSegment("hanim_vt12").setDEF("hanim_t12").setName("t12")
                            .addChild(new Transform().setTranslation(new float[] {0f,1.268613f,-0.01376325f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32259().getArray()).setCoordIndex(new MFInt32260().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f261().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))))))
                          .addChild(new HAnimJoint("hanim_vt12").setDEF("hanim_vt11").setName("vt11").setCenter(new float[] {0f,1.297908f,-0.01376325f})
                            .addChild(new HAnimSegment("hanim_vt11").setDEF("hanim_t11").setName("t11")
                              .addChild(new Transform().setTranslation(new float[] {0f,1.297908f,-0.01376325f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32263().getArray()).setCoordIndex(new MFInt32264().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f265().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))))))
                            .addChild(new HAnimJoint("hanim_vt11").setDEF("hanim_vt10").setName("vt10").setCenter(new float[] {0f,1.319112f,-0.01378575f})
                              .addChild(new HAnimSegment("hanim_vt10").setDEF("hanim_t10").setName("t10")
                                .addChild(new Transform().setTranslation(new float[] {0f,1.319112f,-0.01378575f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32267().getArray()).setCoordIndex(new MFInt32268().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f269().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))))))
                              .addChild(new HAnimJoint("hanim_vt10").setDEF("hanim_vt9").setName("vt9").setCenter(new float[] {0f,1.337247f,-0.01376325f})
                                .addChild(new HAnimSegment("hanim_vt9").setDEF("hanim_t9").setName("t9")
                                  .addChild(new Transform().setTranslation(new float[] {0f,1.337247f,-0.01376325f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32271().getArray()).setCoordIndex(new MFInt32272().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f273().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))))))
                                .addChild(new HAnimJoint("hanim_vt9").setDEF("hanim_vt8").setName("vt8").setCenter(new float[] {0f,1.355382f,-0.01376325f})
                                  .addChild(new HAnimSegment("hanim_vt8").setDEF("hanim_t8").setName("t8")
                                    .addChild(new Transform().setTranslation(new float[] {0f,1.355382f,-0.01376325f})
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32275().getArray()).setCoordIndex(new MFInt32276().getArray())
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f277().getArray()))
                                          .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))))))
                                  .addChild(new HAnimJoint("hanim_vt8").setDEF("hanim_vt7").setName("vt7").setCenter(new float[] {0f,1.374912f,-0.01376325f})
                                    .addChild(new HAnimSegment("hanim_vt7").setDEF("hanim_t7").setName("t7")
                                      .addChild(new Transform().setTranslation(new float[] {0f,1.374912f,-0.01376325f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32279().getArray()).setCoordIndex(new MFInt32280().getArray())
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f281().getArray()))
                                            .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_vt7").setDEF("hanim_vt6").setName("vt6").setCenter(new float[] {0f,1.390815f,-0.01376325f})
                                      .addChild(new HAnimSegment("hanim_vt6").setDEF("hanim_t6").setName("t6")
                                        .addChild(new Transform().setTranslation(new float[] {0f,1.390815f,-0.01376325f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32283().getArray()).setCoordIndex(new MFInt32284().getArray())
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f285().getArray()))
                                              .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_vt6").setDEF("hanim_vt5").setName("vt5").setCenter(new float[] {0f,1.410066f,-0.01376325f})
                                        .addChild(new HAnimSegment("hanim_vt5").setDEF("hanim_t5").setName("t5")
                                          .addChild(new Transform().setTranslation(new float[] {0f,1.410066f,-0.01376325f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32287().getArray()).setCoordIndex(new MFInt32288().getArray())
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f289().getArray()))
                                                .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_vt5").setDEF("hanim_vt4").setName("vt4").setCenter(new float[] {0f,1.429038f,-0.01376325f})
                                          .addChild(new HAnimSegment("hanim_vt4").setDEF("hanim_t4").setName("t4")
                                            .addChild(new Transform().setTranslation(new float[] {0f,1.429038f,-0.01376325f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32291().getArray()).setCoordIndex(new MFInt32292().getArray())
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f293().getArray()))
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))))))
                                          .addChild(new HAnimJoint("hanim_vt4").setDEF("hanim_vt3").setName("vt3").setCenter(new float[] {0f,1.451916f,-0.01376325f})
                                            .addChild(new HAnimSegment("hanim_vt3").setDEF("hanim_t3").setName("t3")
                                              .addChild(new Transform().setTranslation(new float[] {0f,1.451916f,-0.01376325f})
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32295().getArray()).setCoordIndex(new MFInt32296().getArray())
                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f297().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray()))))))
                                            .addChild(new HAnimJoint("hanim_vt3").setDEF("hanim_vt2").setName("vt2").setCenter(new float[] {0f,1.482606f,-0.01378575f})
                                              .addChild(new HAnimSegment("hanim_vt2").setDEF("hanim_t2").setName("t2")
                                                .addChild(new Transform().setTranslation(new float[] {0f,1.482606f,-0.01378575f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32299().getArray()).setCoordIndex(new MFInt32300().getArray())
                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f301().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))))
                                              .addChild(new HAnimJoint("hanim_vt2").setDEF("hanim_vt1").setName("vt1").setCenter(new float[] {0f,1.51218f,-0.01376325f})
                                                .addChild(new HAnimSegment("hanim_vt1").setDEF("hanim_t1").setName("t1")
                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.51218f,-0.01376325f})
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32303().getArray()).setCoordIndex(new MFInt32304().getArray())
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f305().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray()))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setCenter(new float[] {0f,1.544265f,-0.01506375f})
                                                  .addChild(new HAnimSegment("hanim_vc7").setDEF("hanim_c7").setName("c7")
                                                    .addChild(new Transform().setTranslation(new float[] {0f,1.544265f,-0.01506375f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32307().getArray()).setCoordIndex(new MFInt32308().getArray())
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f309().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))))))
                                                  .addChild(new HAnimJoint("hanim_vc7").setDEF("hanim_vc6").setName("vc6").setCenter(new float[] {0f,1.559331f,-0.01506375f})
                                                    .addChild(new HAnimSegment("hanim_vc6").setDEF("hanim_c6").setName("c6")
                                                      .addChild(new Transform().setTranslation(new float[] {0f,1.559331f,-0.01506375f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32311().getArray()).setCoordIndex(new MFInt32312().getArray())
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f313().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))))))
                                                    .addChild(new HAnimJoint("hanim_vc6").setDEF("hanim_vc5").setName("vc5").setCenter(new float[] {0f,1.574676f,-0.01506375f})
                                                      .addChild(new HAnimSegment("hanim_vc5").setDEF("hanim_c5").setName("c5")
                                                        .addChild(new Transform().setTranslation(new float[] {0f,1.574676f,-0.01506375f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32315().getArray()).setCoordIndex(new MFInt32316().getArray())
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f317().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))))))
                                                      .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0f,1.590021f,-0.01506375f})
                                                        .addChild(new HAnimSegment("hanim_vc4").setDEF("hanim_c4").setName("c4")
                                                          .addChild(new Transform().setTranslation(new float[] {0f,1.590021f,-0.01506375f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32319().getArray()).setCoordIndex(new MFInt32320().getArray())
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f321().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_vc4").setDEF("hanim_vc3").setName("vc3").setCenter(new float[] {0f,1.605924f,-0.01506375f})
                                                          .addChild(new HAnimSegment("hanim_vc3").setDEF("hanim_c3").setName("c3")
                                                            .addChild(new Transform().setTranslation(new float[] {0f,1.605924f,-0.01506375f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32323().getArray()).setCoordIndex(new MFInt32324().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f325().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_vc3").setDEF("hanim_vc2").setName("vc2").setCenter(new float[] {0f,1.620432f,-0.01506375f})
                                                            .addChild(new HAnimSegment("hanim_vc2").setDEF("hanim_c2").setName("c2")
                                                              .addChild(new Transform().setTranslation(new float[] {0f,1.620432f,-0.01506375f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32327().getArray()).setCoordIndex(new MFInt32328().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f329().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_vc2").setDEF("hanim_vc1").setName("vc1").setCenter(new float[] {0f,1.63494f,-0.01506375f})
                                                              .addChild(new HAnimSegment("hanim_vc1").setDEF("hanim_c1").setName("c1")
                                                                .addChild(new Transform().setTranslation(new float[] {0f,1.63494f,-0.01506375f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32331().getArray()).setCoordIndex(new MFInt32332().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f333().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f334().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0f,1.627686f,-0.01544175f})
                                                                .addChild(new HAnimSegment("hanim_skullbase").setDEF("hanim_skull").setName("skull")
                                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.627686f,-0.01544175f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32335().getArray().append(new MFInt32336().getArray()).append(new MFInt32337().getArray())).setCoordIndex(new MFInt32338().getArray().append(new MFInt32339().getArray()).append(new MFInt32340().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f341().getArray().append(new MFVec2f342().getArray())))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f343().getArray().append(new MFVec3f344().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {0.0505125f,1.76607f,0.03294f})
                                                                  .addChild(new HAnimSegment("hanim_l_eyelid_joint").setDEF("hanim_l_eyelid").setName("l_eyelid")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0505125f,1.76607f,0.03294f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32345().getArray()).setCoordIndex(new MFInt32346().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f347().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(new float[] {-0.0505125f,1.76607f,0.03294f})
                                                                  .addChild(new HAnimSegment("hanim_r_eyelid_joint").setDEF("hanim_r_eyelid").setName("r_eyelid")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0505125f,1.76607f,0.03294f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32349().getArray()).setCoordIndex(new MFInt32350().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f351().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f352().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {0.0481275f,1.742076f,0.0830475f})
                                                                  .addChild(new HAnimSegment("hanim_l_eyeball_joint").setDEF("hanim_l_eyeball").setName("l_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0481275f,1.742076f,0.0830475f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32353().getArray()).setCoordIndex(new MFInt32354().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f355().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {-0.0481275f,1.742076f,0.0830475f})
                                                                  .addChild(new HAnimSegment("hanim_r_eyeball_joint").setDEF("hanim_r_eyeball").setName("r_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0481275f,1.742076f,0.0830475f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32357().getArray()).setCoordIndex(new MFInt32358().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f359().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f360().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0.0217485f,1.753236f,0.1069425f})
                                                                  .addChild(new HAnimSegment("hanim_l_eyebrow_joint").setDEF("hanim_l_eyebrow").setName("l_eyebrow")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0217485f,1.753236f,0.1069425f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32361().getArray()).setCoordIndex(new MFInt32362().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f363().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f364().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(new float[] {-0.0217485f,1.753236f,0.1069425f})
                                                                  .addChild(new HAnimSegment("hanim_r_eyebrow_joint").setDEF("hanim_r_eyebrow").setName("r_eyebrow")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0217485f,1.753236f,0.1069425f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32365().getArray()).setCoordIndex(new MFInt32366().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f367().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray())))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_temporomandibular").setName("temporomandibular").setCenter(new float[] {0f,1.627965f,0.01537875f})
                                                                  .addChild(new HAnimSegment("hanim_temporomandibular").setDEF("hanim_jaw").setName("jaw")
                                                                    .addChild(new Transform().setTranslation(new float[] {0f,1.627965f,0.01537875f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32369().getArray()).setCoordIndex(new MFInt32370().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f371().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f372().getArray())))))))))))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.038475f,1.498788f,-0.01378575f})
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setDEF("hanim_l_clavicle").setName("l_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {0.038475f,1.498788f,-0.01378575f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32373().getArray()).setCoordIndex(new MFInt32374().getArray())
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f375().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setDEF("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {0.12294f,1.477863f,-0.012897f})
                                                    .addChild(new HAnimSegment("hanim_l_sternoclavicular").setDEF("hanim_l_scapula").setName("l_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {0.12294f,1.477863f,-0.012897f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32377().getArray()).setCoordIndex(new MFInt32378().getArray())
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f379().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))))))
                                                    .addChild(new HAnimJoint("hanim_l_sternoclavicular").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.16506f,1.461402f,-0.003267f})
                                                      .addChild(new HAnimSegment("hanim_l_shoulder").setDEF("hanim_l_upperarm").setName("l_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {0.16506f,1.461402f,-0.003267f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32381().getArray()).setCoordIndex(new MFInt32382().getArray())
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f383().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f384().getArray()))))))
                                                      .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {0.1820925f,1.151712f,-0.0056295f})
                                                        .addChild(new HAnimSegment("hanim_l_elbow").setDEF("hanim_l_forearm").setName("l_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1820925f,1.151712f,-0.0056295f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32385().getArray()).setCoordIndex(new MFInt32386().getArray())
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f387().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f388().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(new float[] {0.181935f,0.898101f,-0.00502425f})
                                                          .addChild(new HAnimSegment("hanim_l_radiocarpal").setDEF("hanim_l_carpal").setName("l_carpal")
                                                            .addChild(new Transform().setTranslation(new float[] {0.181935f,0.898101f,-0.00502425f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32389().getArray()).setCoordIndex(new MFInt32390().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f391().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(new float[] {0.1812825f,0.875502f,0.0193275f})
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_1").setDEF("hanim_l_trapezium").setName("l_trapezium")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1812825f,0.875502f,0.0193275f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32393().getArray()).setCoordIndex(new MFInt32394().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f395().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_1").setDEF("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(new float[] {0.180495f,0.858762f,0.0259875f})
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpal_1").setName("l_metacarpal_1")
                                                                .addChild(new Transform().setTranslation(new float[] {0.180495f,0.858762f,0.0259875f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32397().getArray()).setCoordIndex(new MFInt32398().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f399().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f400().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(new float[] {0.181035f,0.83421f,0.035775f})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_proximal_phalanx_1")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.181035f,0.83421f,0.035775f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32401().getArray()).setCoordIndex(new MFInt32402().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f403().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f404().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(new float[] {0.182655f,0.811053f,0.0496575f})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_distal_phalanx_1").setName("l_carpal_distal_phalanx_1")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.182655f,0.811053f,0.0496575f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32405().getArray()).setCoordIndex(new MFInt32406().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f407().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f408().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(new float[] {0.1812825f,0.876618f,0.00841725f})
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_2").setDEF("hanim_l_trapezoid").setName("l_trapezoid")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1812825f,0.876618f,0.00841725f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32409().getArray()).setCoordIndex(new MFInt32410().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f411().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f412().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_2").setDEF("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(new float[] {0.1812825f,0.852624f,0.009729f})
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpal_2").setName("l_metacarpal_2")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1812825f,0.852624f,0.009729f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32413().getArray()).setCoordIndex(new MFInt32414().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f415().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(new float[] {0.183735f,0.790128f,0.015075f})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_proximal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.183735f,0.790128f,0.015075f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32417().getArray()).setCoordIndex(new MFInt32418().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f419().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f420().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.18171f,0.752463f,0.014184f})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_middle_phalanx_2")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.18171f,0.752463f,0.014184f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32421().getArray()).setCoordIndex(new MFInt32422().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f423().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f424().getArray()))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.180675f,0.721215f,0.01338525f})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_phalanx_2").setName("l_carpal_distal_phalanx_2")
                                                                      .addChild(new Transform().setTranslation(new float[] {0.180675f,0.721215f,0.01338525f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32425().getArray()).setCoordIndex(new MFInt32426().getArray())
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f427().getArray()))
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray())))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(new float[] {0.18108f,0.878571f,-0.004797f})
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_3").setDEF("hanim_l_capitate").setName("l_capitate")
                                                              .addChild(new Transform().setTranslation(new float[] {0.18108f,0.878571f,-0.004797f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32429().getArray()).setCoordIndex(new MFInt32430().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f431().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f432().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_3").setDEF("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(new float[] {0.18108f,0.850392f,-0.00625275f})
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpal_3").setName("l_metacarpal_3")
                                                                .addChild(new Transform().setTranslation(new float[] {0.18108f,0.850392f,-0.00625275f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32433().getArray()).setCoordIndex(new MFInt32434().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f435().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f436().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(new float[] {0.18369f,0.787338f,-0.00391725f})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_proximal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.18369f,0.787338f,-0.00391725f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32437().getArray()).setCoordIndex(new MFInt32438().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f439().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.18171f,0.747999f,-0.003537f})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_middle_phalanx_3")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.18171f,0.747999f,-0.003537f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32441().getArray()).setCoordIndex(new MFInt32442().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f443().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f444().getArray()))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.180675f,0.713403f,-0.00375975f})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_phalanx_3").setName("l_carpal_distal_phalanx_3")
                                                                      .addChild(new Transform().setTranslation(new float[] {0.180675f,0.713403f,-0.00375975f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32445().getArray()).setCoordIndex(new MFInt32446().getArray())
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f447().getArray()))
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f448().getArray())))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_4_5").setName("l_midcarpal_4_5").setCenter(new float[] {0.18108f,0.875223f,-0.02574f})
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setDEF("hanim_l_hamate").setName("l_hamate")
                                                              .addChild(new Transform().setTranslation(new float[] {0.18108f,0.875223f,-0.02574f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32449().getArray()).setCoordIndex(new MFInt32450().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f451().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setDEF("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(new float[] {0.18108f,0.85095f,-0.01991925f})
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpal_4").setName("l_metacarpal_4")
                                                                .addChild(new Transform().setTranslation(new float[] {0.18108f,0.85095f,-0.01991925f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32453().getArray()).setCoordIndex(new MFInt32454().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f455().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f456().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(new float[] {0.18369f,0.786222f,-0.02144025f})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_proximal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.18369f,0.786222f,-0.02144025f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32457().getArray()).setCoordIndex(new MFInt32458().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f459().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f460().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.18171f,0.752184f,-0.020646f})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_middle_phalanx_4")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.18171f,0.752184f,-0.020646f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32461().getArray()).setCoordIndex(new MFInt32462().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f463().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray()))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.180675f,0.720099f,-0.0197775f})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_phalanx_4").setName("l_carpal_distal_phalanx_4")
                                                                      .addChild(new Transform().setTranslation(new float[] {0.180675f,0.720099f,-0.0197775f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32465().getArray()).setCoordIndex(new MFInt32466().getArray())
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f467().getArray()))
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f468().getArray())))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(new float[] {0.1816425f,0.853461f,-0.0327825f})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpal_5").setName("l_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1816425f,0.853461f,-0.0327825f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32469().getArray()).setCoordIndex(new MFInt32470().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f471().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f472().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(new float[] {0.18333f,0.791244f,-0.0370575f})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {0.18333f,0.791244f,-0.0370575f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32473().getArray()).setCoordIndex(new MFInt32474().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f475().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.181665f,0.77004f,-0.0371475f})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.181665f,0.77004f,-0.0371475f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32477().getArray()).setCoordIndex(new MFInt32478().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f479().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.18081f,0.746883f,-0.0369675f})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_phalanx_5").setName("l_carpal_distal_phalanx_5")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.18081f,0.746883f,-0.0369675f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32481().getArray()).setCoordIndex(new MFInt32482().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f483().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f484().getArray())))))))))))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.038475f,1.498788f,-0.01378575f})
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setDEF("hanim_r_clavicle").setName("r_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.038475f,1.498788f,-0.01378575f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32485().getArray()).setCoordIndex(new MFInt32486().getArray())
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f487().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray()))))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setDEF("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.12294f,1.477863f,-0.012897f})
                                                    .addChild(new HAnimSegment("hanim_r_sternoclavicular").setDEF("hanim_r_scapula").setName("r_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.12294f,1.477863f,-0.012897f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32489().getArray()).setCoordIndex(new MFInt32490().getArray())
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f491().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f492().getArray()))))))
                                                    .addChild(new HAnimJoint("hanim_r_sternoclavicular").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.1647f,1.461402f,-0.003267f})
                                                      .addChild(new HAnimSegment("hanim_r_shoulder").setDEF("hanim_r_upperarm").setName("r_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1647f,1.461402f,-0.003267f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32493().getArray()).setCoordIndex(new MFInt32494().getArray())
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f495().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f496().getArray()))))))
                                                      .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-0.1817325f,1.151712f,-0.0056295f})
                                                        .addChild(new HAnimSegment("hanim_r_elbow").setDEF("hanim_r_forearm").setName("r_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1817325f,1.151712f,-0.0056295f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32497().getArray()).setCoordIndex(new MFInt32498().getArray())
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f499().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(new float[] {-0.181575f,0.898101f,-0.005022f})
                                                          .addChild(new HAnimSegment("hanim_r_radiocarpal").setDEF("hanim_r_carpal").setName("r_carpal")
                                                            .addChild(new Transform().setTranslation(new float[] {-0.181575f,0.898101f,-0.005022f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32501().getArray()).setCoordIndex(new MFInt32502().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f503().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_1").setName("r_midcarpal_1").setCenter(new float[] {-0.1809675f,0.875502f,0.0193275f})
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_1").setDEF("hanim_r_trapezium").setName("r_trapezium")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1809675f,0.875502f,0.0193275f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32505().getArray()).setCoordIndex(new MFInt32506().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f507().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f508().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_1").setDEF("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-0.180135f,0.858762f,0.0259875f})
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpal_1").setName("r_metacarpal_1")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.180135f,0.858762f,0.0259875f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32509().getArray()).setCoordIndex(new MFInt32510().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f511().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f512().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-0.1806525f,0.83421f,0.035775f})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_proximal_phalanx_1")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1806525f,0.83421f,0.035775f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32513().getArray()).setCoordIndex(new MFInt32514().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f515().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f516().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-0.1822725f,0.811053f,0.0496575f})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_distal_phalanx_1").setName("r_carpal_distal_phalanx_1")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1822725f,0.811053f,0.0496575f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32517().getArray()).setCoordIndex(new MFInt32518().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f519().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f520().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_2").setName("r_midcarpal_2").setCenter(new float[] {-0.1809675f,0.876618f,0.00841725f})
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_2").setDEF("hanim_r_trapezoid").setName("r_trapezoid")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1809675f,0.876618f,0.00841725f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32521().getArray()).setCoordIndex(new MFInt32522().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f523().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f524().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_2").setDEF("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-0.1809f,0.852624f,0.009729f})
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpal_2").setName("r_metacarpal_2")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f,0.852624f,0.009729f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32525().getArray()).setCoordIndex(new MFInt32526().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f527().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f528().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-0.1833525f,0.790128f,0.015075f})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_proximal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1833525f,0.790128f,0.015075f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32529().getArray()).setCoordIndex(new MFInt32530().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f531().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f532().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1813275f,0.752463f,0.014184f})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_middle_phalanx_2")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1813275f,0.752463f,0.014184f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32533().getArray()).setCoordIndex(new MFInt32534().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f535().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f536().getArray()))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1802925f,0.721215f,0.01338525f})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_phalanx_2").setName("r_carpal_distal_phalanx_2")
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1802925f,0.721215f,0.01338525f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32537().getArray()).setCoordIndex(new MFInt32538().getArray())
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f539().getArray()))
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f540().getArray())))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_3").setName("r_midcarpal_3").setCenter(new float[] {-0.18072f,0.878571f,-0.004797f})
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_3").setDEF("hanim_r_capitate").setName("r_capitate")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.18072f,0.878571f,-0.004797f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32541().getArray()).setCoordIndex(new MFInt32542().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f543().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f544().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_3").setDEF("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {-0.18072f,0.850392f,-0.00625275f})
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpal_3").setName("r_metacarpal_3")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.18072f,0.850392f,-0.00625275f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32545().getArray()).setCoordIndex(new MFInt32546().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f547().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f548().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-0.1833075f,0.787338f,-0.00391725f})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_proximal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1833075f,0.787338f,-0.00391725f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32549().getArray()).setCoordIndex(new MFInt32550().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f551().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f552().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.1813275f,0.747999f,-0.003537f})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_middle_phalanx_3")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1813275f,0.747999f,-0.003537f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32553().getArray()).setCoordIndex(new MFInt32554().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f555().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f556().getArray()))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1802925f,0.713403f,-0.00375975f})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_phalanx_3").setName("r_carpal_distal_phalanx_3")
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1802925f,0.713403f,-0.00375975f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32557().getArray()).setCoordIndex(new MFInt32558().getArray())
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f559().getArray()))
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f560().getArray())))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_4_5").setName("r_midcarpal_4_5").setCenter(new float[] {-0.18072f,0.875223f,-0.02574f})
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setDEF("hanim_r_hamate").setName("r_hamate")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.18072f,0.875223f,-0.02574f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32561().getArray()).setCoordIndex(new MFInt32562().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f563().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f564().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setDEF("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {-0.18072f,0.85095f,-0.01991925f})
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpal_4").setName("r_metacarpal_4")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.18072f,0.85095f,-0.01991925f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32565().getArray()).setCoordIndex(new MFInt32566().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f567().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f568().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {-0.1833075f,0.786222f,-0.02144025f})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_proximal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1833075f,0.786222f,-0.02144025f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32569().getArray()).setCoordIndex(new MFInt32570().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f571().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.1813275f,0.752184f,-0.020646f})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_middle_phalanx_4")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1813275f,0.752184f,-0.020646f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32573().getArray()).setCoordIndex(new MFInt32574().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f575().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f576().getArray()))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1802925f,0.720099f,-0.0197775f})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_phalanx_4").setName("r_carpal_distal_phalanx_4")
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1802925f,0.720099f,-0.0197775f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32577().getArray()).setCoordIndex(new MFInt32578().getArray())
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f579().getArray()))
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f580().getArray())))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {-0.18126f,0.853461f,-0.0327825f})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpal_5").setName("r_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.18126f,0.853461f,-0.0327825f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32581().getArray()).setCoordIndex(new MFInt32582().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f583().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f584().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {-0.18297f,0.791244f,-0.0370575f})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_phalanx_5").setName("r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.18297f,0.791244f,-0.0370575f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32585().getArray()).setCoordIndex(new MFInt32586().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f587().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f588().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.181305f,0.77004f,-0.0371475f})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.181305f,0.77004f,-0.0371475f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32589().getArray()).setCoordIndex(new MFInt32590().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f591().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f592().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.18045f,0.746883f,-0.0369675f})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_phalanx_5").setName("r_carpal_distal_phalanx_5")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.18045f,0.746883f,-0.0369675f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32593().getArray()).setCoordIndex(new MFInt32594().getArray())
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f595().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f596().getArray()))))))))))))))))))))))))))))))))))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t12"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t11"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t10"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t9"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t8"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t7"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t6"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_t1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c7"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c6"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_c1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_jaw"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_calcaneus"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_calcaneus"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_capitate"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_capitate"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_cuboid"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_cuboid"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_cuneiform_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_cuneiform_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_cuneiform_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_cuneiform_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_cuneiform_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_cuneiform_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_eyeball"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_eyeball"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_eyebrow"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_eyebrow"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_eyelid"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_eyelid"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_hamate"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_hamate"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metatarsal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metatarsal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metatarsal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metatarsal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metatarsal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metatarsal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_metatarsal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_metatarsal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_navicular"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_navicular"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_trapezium"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_trapezoid"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_trapezoid"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_JinLOA4").setUSE("hanim_r_upperarm"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_midcarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_midcarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE("hanim_r_transversetarsal"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.86f});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec2f9 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.0293787f,0.00061425f,0f,0.02545317f,-0.0121815f,-0.00984375f,0.02545317f,-0.010467f,-0.0170505f,0.02545317f,-0.00839925f,-0.0196875f,0.02545317f,0.00061425f,-0.0170505f,0.02545317f,0.00962775f,-0.00984375f,0.02545317f,0.0116955f,0f,0.02545317f,0.01341f,0.00984375f,0.02545317f,0.0116955f,0.0170505f,0.02545317f,0.00962775f,0.0196875f,0.02545317f,0.00061425f,0.0170505f,0.02545317f,-0.00839925f,0.00984375f,0.02545317f,-0.010467f,0f,0.01469493f,-0.0198945f,-0.0127305f,0.01469493f,-0.01714725f,-0.02205f,0.01469493f,-0.00964125f,-0.02547f,0.01469493f,0.00061425f,-0.02205f,0.01469493f,0.0108675f,-0.0127305f,0.01469493f,0.01571625f,0f,0.01469493f,0.0184635f,0.0127305f,0.01469493f,0.01571625f,0.02205f,0.01469493f,0.0108675f,0.02547f,0.01469493f,0.00061425f,0.02205f,0.01469493f,-0.00964125f,0.0127305f,0.01469493f,-0.01714725f,0f,0f,-0.021636f,-0.0147015f,0f,-0.0184635f,-0.02547f,0f,-0.00979425f,-0.0294075f,0f,0.00061425f,-0.02547f,0f,0.012456f,-0.0147015f,0f,0.0184635f,0f,0f,0.021636f,0.0147015f,0f,0.0184635f,0.02547f,0f,0.012456f,0.0294075f,0f,0.00061425f,0.02547f,0f,-0.00979425f,0.0147015f,0f,-0.0184635f,0f,-0.01469493f,-0.0184635f,-0.0127305f,-0.01469493f,-0.01571625f,-0.02205f,-0.01469493f,-0.008208f,-0.02547f,-0.01469493f,0.00061425f,-0.02205f,-0.01469493f,0.0108675f,-0.0127305f,-0.01469493f,0.01571625f,0f,-0.01469493f,0.0184635f,0.0127305f,-0.01469493f,0.01571625f,0.02205f,-0.01469493f,0.0108675f,0.02547f,-0.01469493f,0.00061425f,0.02205f,-0.01469493f,-0.008208f,0.0127305f,-0.01469493f,-0.01571625f,0f,-0.02545317f,-0.00979425f,-0.00735075f,-0.02545317f,-0.008208f,-0.0127305f,-0.02545317f,-0.0053055f,-0.0147015f,-0.02545317f,0.00061425f,-0.0127305f,-0.02545317f,0.006534f,-0.00735075f,-0.02545317f,0.0108675f,0f,-0.02545317f,0.012456f,0.00735075f,-0.02545317f,0.0108675f,0.0127305f,-0.02545317f,0.006534f,0.0147015f,-0.02545317f,0.00061425f,0.0127305f,-0.02545317f,-0.0053055f,0.00735075f,-0.02545317f,-0.008208f,0f,-0.0293787f,0.00061425f});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec2f13 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.301041f,0.003204f,0f,0.280674f,-0.0635625f,-0.0513675f,0.280674f,-0.05463f,-0.088965f,0.280674f,-0.04383f,-0.102735f,0.280674f,0.003204f,-0.088965f,0.280674f,0.0502425f,-0.0513675f,0.280674f,0.06102f,0f,0.280674f,0.069975f,0.0513675f,0.280674f,0.06102f,0.088965f,0.280674f,0.0502425f,0.102735f,0.280674f,0.003204f,0.088965f,0.280674f,-0.04383f,0.0513675f,0.280674f,-0.05463f,0f,0.2244555f,-0.103815f,-0.0664425f,0.2244555f,-0.0894825f,-0.115065f,0.2244555f,-0.05031f,-0.1328625f,0.2244555f,0.003204f,-0.115065f,0.2244555f,0.0567225f,-0.0664425f,0.2244555f,0.0820125f,0f,0.2244555f,0.096345f,0.0664425f,0.2244555f,0.0820125f,0.115065f,0.2244555f,0.0567225f,0.1328625f,0.2244555f,0.003204f,0.115065f,0.2244555f,-0.05031f,0.0664425f,0.2244555f,-0.0894825f,0f,0.1477863f,-0.112905f,-0.0767025f,0.1477863f,-0.096345f,-0.1328625f,0.1477863f,-0.05112f,-0.1534275f,0.1477863f,0.003204f,-0.1328625f,0.1477863f,0.0650025f,-0.0767025f,0.1477863f,0.096345f,0f,0.1477863f,0.112905f,0.0767025f,0.1477863f,0.096345f,0.1328625f,0.1477863f,0.0650025f,0.1534275f,0.1477863f,0.003204f,0.1328625f,0.1477863f,-0.05112f,0.0767025f,0.1477863f,-0.096345f,0f,0.0710892f,-0.096345f,-0.0664425f,0.0710892f,-0.0820125f,-0.115065f,0.0710892f,-0.04284f,-0.1328625f,0.0710892f,0.003204f,-0.115065f,0.0710892f,0.0567225f,-0.0664425f,0.0710892f,0.0820125f,0f,0.0710892f,0.096345f,0.0664425f,0.0710892f,0.0820125f,0.115065f,0.0710892f,0.0567225f,0.1328625f,0.0710892f,0.003204f,0.115065f,0.0710892f,-0.04284f,0.0664425f,0.0710892f,-0.0820125f,0f,0.01495998f,-0.05112f,-0.0383625f,0.01495998f,-0.04284f,-0.0664425f,0.01495998f,-0.0276975f,-0.0767025f,0.01495998f,0.003204f,-0.0664425f,0.01495998f,0.03411f,-0.0383625f,0.01495998f,0.0567225f,0f,0.01495998f,0.0650025f,0.0383625f,0.01495998f,0.0567225f,0.0664425f,0.01495998f,0.03411f,0.0767025f,0.01495998f,0.003204f,0.0664425f,0.01495998f,-0.0276975f,0.0383625f,0.01495998f,-0.04284f,0f,-0.00558837f,0.003204f});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
private class MFVec2f17 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0666f,-0.00196974f,0f,0.0369675f,-0.00196974f,0.0722025f,-0.02961f,-0.00196974f,0.090045f,-0.0757575f,-0.00196974f,0.0400725f,-0.0757575f,-0.00196974f,-0.0400725f,-0.02961f,-0.00196974f,-0.090045f,0.0369675f,-0.00196974f,-0.0722025f,0.0666f,-0.106578f,0f,0.0369675f,-0.106578f,0.0722025f,-0.02961f,-0.106578f,0.090045f,-0.0757575f,-0.106578f,0.0400725f,-0.0757575f,-0.106578f,-0.0400725f,-0.02961f,-0.106578f,-0.090045f,0.0369675f,-0.106578f,-0.0722025f,0.0666f,-0.287928f,0f,0.0369675f,-0.287928f,0.0722025f,-0.02961f,-0.287928f,0.090045f,-0.0757575f,-0.287928f,0.0400725f,-0.0757575f,-0.287928f,-0.0400725f,-0.02961f,-0.287928f,-0.090045f,0.0369675f,-0.287928f,-0.0722025f,0.0757575f,-0.472626f,0f,0.0426825f,-0.472626f,0.080595f,-0.0316575f,-0.472626f,0.1005075f,-0.0754875f,-0.472626f,0.04473f,-0.0754875f,-0.472626f,-0.04473f,-0.0316575f,-0.472626f,-0.1005075f,0.0426825f,-0.472626f,-0.080595f,0.048285f,-0.2453526f,0f,0.02556f,-0.2453526f,0.055395f,-0.0255375f,-0.2453526f,0.069075f,-0.0592425f,-0.2453526f,0.030735f,-0.0592425f,-0.2453526f,-0.030735f,-0.0255375f,-0.2453526f,-0.069075f,0.02556f,-0.2453526f,-0.055395f,0.04851f,-0.425475f,0f,0.0275625f,-0.425475f,0.04401f,-0.0194895f,-0.425475f,0.0548775f,-0.0572175f,-0.425475f,0.0244125f,-0.0572175f,-0.425475f,-0.0244125f,-0.0194895f,-0.425475f,-0.0548775f,0.0275625f,-0.425475f,-0.04401f,0.0461475f,0.053568f,0f,0.02421f,0.053568f,0.0534375f,-0.025065f,0.053568f,0.0666225f,-0.064575f,0.053568f,0.029655f,-0.064575f,0.053568f,-0.029655f,-0.025065f,0.053568f,-0.0666225f,0.02421f,0.053568f,-0.0534375f,0.041445f,-0.528147f,0f,0.023175f,-0.528147f,0.0421425f,-0.01792125f,-0.528147f,0.0516375f,-0.0508725f,-0.528147f,0.0250425f,-0.0508725f,-0.528147f,-0.0213255f,-0.01792125f,-0.528147f,-0.047925f,0.023175f,-0.528147f,-0.03843f,0.01412325f,-0.555489f,0f,0.00612675f,-0.555489f,0.02052f,-0.0118395f,-0.555489f,0.02466f,-0.0262575f,-0.555489f,0.013041f,-0.0262575f,-0.555489f,-0.00932625f,-0.0118395f,-0.555489f,-0.02095425f,0.00612675f,-0.555489f,-0.01680525f});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFVec2f21 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9632f,0.3942f,0.9402f,0.3943f,0.8884f,0.3943f,0.8469f,0.3942f,0.8469f,0.3941f,0.8884f,0.3941f,0.9402f,0.3941f,0.9325f,0.3742f,0.9208f,0.3742f,0.8947f,0.3742f,0.8737f,0.3742f,0.8737f,0.3741f,0.8947f,0.3741f,0.9208f,0.3741f});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0161685f,0.02702952f,0.0005265f,0.008172f,0.02702952f,0.0210465f,-0.00979425f,0.02702952f,0.0252f,-0.02421f,0.02702952f,0.0135675f,-0.02421f,0.02702952f,-0.00879975f,-0.00979425f,0.02702952f,-0.02042775f,0.008172f,0.02702952f,-0.01627875f,0.0525825f,-0.1287027f,0.0005265f,0.03285f,-0.1010538f,0.0454275f,0.02781f,-0.0454212f,0.05445f,0.047655f,-0.0533448f,0.0005265f,-0.01824975f,-0.1010538f,0.0577575f,-0.016803f,-0.0454212f,0.0653175f,-0.050715f,-0.1287027f,0.0282375f,-0.0525825f,-0.0533448f,0.02203425f,-0.050715f,-0.1501857f,-0.03078f,-0.0525825f,-0.0533448f,-0.02098125f,-0.01824975f,-0.1501857f,-0.0653175f,-0.016803f,-0.0533448f,-0.05328f,0.03285f,-0.1501857f,-0.0529875f,0.02781f,-0.0533448f,-0.0424125f,0.0252225f,-0.00008928f,0.04266f,0.0434925f,-0.00008928f,0.0005265f,-0.015876f,-0.00008928f,0.052155f,-0.048825f,-0.00008928f,0.02556f,-0.048825f,-0.00008928f,-0.020799f,-0.015876f,-0.00008928f,-0.0463725f,0.0252225f,-0.00008928f,-0.0369f,0.0361575f,-0.360468f,0.000072f,0.020736f,-0.360189f,0.0352125f,-0.0139275f,-0.360189f,0.0438975f,-0.041715f,-0.360468f,0.01957725f,-0.041715f,-0.361026f,-0.0219645f,-0.0139275f,-0.361026f,-0.039195f,0.020736f,-0.361026f,-0.03051f,0.015912f,-0.405387f,0.00053775f,0.008109f,-0.405387f,0.018315f,-0.009423f,-0.405387f,0.0227025f,-0.02349f,-0.405387f,0.010404f,-0.02349f,-0.405666f,-0.0106065f,-0.009423f,-0.405666f,-0.01932075f,0.008109f,-0.405666f,-0.01492875f});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1});
  }
}
private class MFVec2f25 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f,0.1089f,0.2217f,0.1285f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2685f,0.0797f,0.2165f,0.148f,0.2759f,0.0832f,0.2428f,0.156f,0.2563f,0.142f,0.2584f,0.1419f,0.2431f,0.1588f,0.2715f,0.1062f,0.2761f,0.1011f,0.2698f,0.09f,0.2775f,0.078f,0.2629f,0.0863f,0.248f,0.0935f,0.2498f,0.0895f,0.2702f,0.0748f,0.2296f,0.1148f,0.2397f,0.101f,0.2249f,0.1266f,0.2295f,0.1126f,0.2207f,0.1406f,0.2252f,0.1591f,0.2245f,0.1634f,0.2202f,0.1406f,0.2407f,0.0951f,0.2662f,0.1249f,0.2599f,0.1313f,0.2623f,0.1418f,0.2691f,0.1232f,0.2231f,0.166f,0.2217f,0.1285f,0.227f,0.1089f,0.2407f,0.0951f,0.2533f,0.0835f,0.2685f,0.0797f,0.2759f,0.0832f,0.2824f,0.0941f,0.273f,0.1232f,0.2623f,0.1418f,0.2433f,0.1632f,0.2231f,0.166f,0.2165f,0.148f});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01888425f,-0.00048546f,-0.02673f,-0.02574f,-0.00380556f,-0.00636525f,-0.007992f,0.00138942f,-0.0362025f,0.0195975f,-0.00000279f,-0.026685f,0.0253125f,-0.00250542f,-0.0119025f,0.01702125f,-0.00196137f,0.01264725f,-0.0011925f,-0.00084258f,0.0186795f,-0.01707525f,-0.00244683f,0.01269675f,-0.001647f,-0.0304389f,0.02226825f,-0.0230625f,-0.0364932f,0.01236825f,0.02014875f,-0.0385857f,0.01298025f,0.0058995f,-0.0413199f,-0.042525f,0.023265f,-0.0376929f,-0.030825f,-0.0229275f,-0.0376929f,-0.031815f,-0.007767f,-0.01427085f,-0.037845f,-0.02074275f,-0.01469214f,-0.02835f,0.017901f,-0.01356498f,-0.02799f,0.029475f,-0.0280953f,-0.00175275f,0.016137f,-0.01812384f,0.01304325f,-0.0005265f,-0.01453311f,0.01937925f,-0.01824975f,-0.01602018f,0.01307475f,-0.028485f,-0.018135f,-0.00858375f,0.0250875f,-0.00302157f,-0.00114075f,0.02646f,-0.0460908f,-0.01491075f,0.026055f,-0.0462861f,-0.00322875f,0.0299475f,-0.02681748f,-0.0132165f,-0.011691f,-0.0334242f,0.01910475f,-0.00853425f,-0.01525851f,0.01736325f,0.00914625f,-0.0344565f,0.01941075f,0.00866025f,-0.01631034f,0.0173475f,0.00538425f,0.00155682f,-0.03618f,-0.0008325f,0.0093744f,-0.007218f,-0.0065925f,-0.0412362f,-0.0426375f,0.00473175f,-0.01390536f,-0.0377775f,-0.0299475f,-0.0442773f,-0.0086805f,-0.009819f,-0.0564975f,0.015084f,-0.00224325f,-0.0531216f,0.01739475f,0.0059445f,-0.0573345f,0.015282f,0.01442925f,-0.0615195f,0.0103635f,0.01940175f,-0.0695826f,-0.00330975f,0.0197685f,-0.0691362f,-0.013689f,0.0172485f,-0.0594828f,-0.0268425f,0.003114f,-0.0634167f,-0.03627f,-0.00527625f,-0.0635841f,-0.0363375f,-0.01844325f,-0.0601524f,-0.02763f,-0.024525f,-0.0680202f,-0.007659f,-0.01870425f,-0.0598455f,0.00988875f});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
private class MFVec2f29 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f,0.0879f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2271f,0.0958f,0.2224f,0.1067f,0.2032f,0.149f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.227f,0.1089f,0.2165f,0.148f,0.2217f,0.1285f,0.2407f,0.0951f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.21f,0.1541f,0.2053f,0.1595f,0.2032f,0.149f,0.2132f,0.1285f,0.2224f,0.1067f,0.2314f,0.0879f,0.2271f,0.0958f,0.2197f,0.1123f,0.2163f,0.1174f,0.2104f,0.1443f,0.227f,0.1089f,0.2217f,0.1285f,0.2165f,0.148f,0.2129f,0.1643f,0.2171f,0.1588f,0.2178f,0.1526f,0.2213f,0.1179f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2271f,0.0958f,0.2271f,0.0958f,0.2314f,0.0879f});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.020187f,0.02244555f,0.015273f,-0.015471f,-0.0288486f,0.0096525f,-0.01847925f,0.00010323f,0.0092205f,-0.01220175f,-0.0389484f,0.01282275f,0.01949175f,-0.041013f,0.0153675f,0.00893475f,0.0330336f,0.01449675f,-0.015237f,0.01856745f,0.01163925f,-0.00267075f,0.0293508f,0.01615275f,0.008703f,-0.0414315f,0.014472f,-0.00310725f,-0.0412641f,0.0163035f,0.008865f,0.0421569f,0.0069525f,-0.012546f,0.0361026f,-0.0029475f,-0.001179f,0.0391716f,0.003789f,0.019656f,0.0381114f,0.004095f,-0.014112f,-0.0411804f,-0.003051f,0.020025f,-0.0421569f,-0.00332325f,0.00342225f,-0.042129f,-0.001908f,-0.017298f,-0.0296856f,-0.0036315f,-0.020187f,-0.00037107f,-0.003717f,-0.01367325f,-0.02748429f,0.0177795f,-0.01657575f,-0.00632772f,0.01735875f,-0.0136665f,0.0063333f,0.0197325f,-0.002268f,0.01376586f,0.0240975f,0.0077535f,0.01616247f,0.02223675f,0.017028f,0.00956133f,0.02277f,0.01638f,-0.0350424f,0.02286f,0.00803925f,-0.0352935f,0.02228625f,-0.00348975f,-0.0351819f,0.024165f,-0.0110835f,-0.0337032f,0.02086425f,0.00978525f,0.0370233f,-0.00663525f,0.0011025f,0.0344565f,-0.00963225f,-0.00749475f,0.0322245f,-0.016029f,-0.01420425f,0.00032085f,-0.01639575f,-0.011502f,-0.0272304f,-0.01621125f,-0.00959625f,-0.0342891f,-0.01546425f,0.00462375f,-0.0350424f,-0.0146475f,0.0162855f,-0.0349587f,-0.01656f,0.015939f,0.0349587f,-0.009837f,0.0289125f,0.01792854f,0.010395f,0.028485f,0.02492586f,0.0022635f,0.0256275f,0.0308574f,-0.006651f,0.0259425f,-0.0317223f,-0.0126675f,0.0288f,-0.0370233f,-0.0029115f,0.0283725f,-0.0359631f,0.0118845f,0.026595f,-0.0377208f,0.01888425f,0.027135f,0.00725679f,0.018792f});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
private class MFVec2f33 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f,0.1355f,0.2132f,0.1171f,0.1958f,0.1447f,0.1899f,0.1499f,0.2047f,0.1286f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2032f,0.149f,0.2132f,0.1285f,0.2163f,0.1174f,0.2047f,0.1286f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1171f,0.2059f,0.1148f,0.1953f,0.1244f,0.1858f,0.1369f,0.1864f,0.1452f,0.1825f,0.1473f,0.1953f,0.1244f,0.1953f,0.1244f,0.2059f,0.1148f,0.2059f,0.1148f});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00001575f,-0.0309411f,0.00956925f,-0.00594675f,-0.0214551f,0.010161f,-0.006975f,0.00699732f,0.008919f,0.0067905f,0.02550618f,0.0108f,0.006723f,-0.0347913f,0.01055925f,-0.0104715f,0.00498573f,0.0242325f,-0.00677925f,-0.0308853f,0.02493f,-0.01165725f,-0.02098359f,0.023355f,0.00548775f,0.01546776f,0.0267075f,0.00554625f,-0.0349587f,0.0270225f,-0.004518f,-0.02288079f,-0.00387675f,-0.00752625f,0.00606546f,-0.0043065f,-0.0012465f,-0.0330057f,-0.0007065f,-0.004284f,0.02452689f,-0.00189f,0.00828225f,0.0353214f,0.0026235f,0.00784575f,-0.0353214f,0.0027765f,0.01261575f,0.022599f,0.0097695f,0.01341675f,0.02709369f,0.00604125f,0.013032f,-0.0316386f,0.00616275f,0.0123615f,-0.0313038f,0.01110375f,0.011385f,-0.0314433f,0.024795f,0.01132425f,0.01329435f,0.0245025f,-0.005454f,-0.0273978f,0.033075f,-0.009432f,-0.02026377f,0.03168f,-0.008379f,0.00027342f,0.0325125f,0.005607f,0.00836721f,0.0348525f,0.00893925f,0.00723726f,0.033255f,0.0089955f,-0.028458f,0.0335025f,0.005202f,-0.0305226f,0.035145f});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
private class MFVec2f37 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f,0.1457f,0.1567f,0.1378f,0.1506f,0.1431f,0.1539f,0.1386f,0.1751f,0.1447f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1689f,0.1382f,0.1638f,0.1444f,0.1645f,0.1416f,0.1607f,0.138f,0.1731f,0.1071f,0.1859f,0.1202f,0.175f,0.1048f,0.1985f,0.1126f,0.1682f,0.1025f,0.1699f,0.1017f,0.1795f,0.1136f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.2059f,0.1148f,0.1985f,0.1126f,0.175f,0.1048f,0.1699f,0.1017f,0.1682f,0.1025f,0.1731f,0.1071f,0.1523f,0.1336f,0.1463f,0.1377f,0.1493f,0.1348f,0.1682f,0.1025f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1864f,0.1452f,0.1858f,0.1369f,0.2059f,0.1148f,0.2059f,0.1148f,0.1953f,0.1244f,0.1953f,0.1244f,0.1825f,0.1473f});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.012645f,-0.02645478f,0.03114f,-0.0139905f,0.0065286f,0.0378225f,-0.01709325f,-0.0149823f,0.0366525f,-0.0110025f,-0.00982359f,0.00403875f,-0.0092475f,0.01510785f,0.0070065f,-0.01176975f,-0.02420883f,0.0489375f,-0.01200375f,0.00229896f,0.04968f,-0.01401075f,-0.0149823f,0.0513f,-0.00650025f,-0.01986201f,0.0056745f,-0.01602225f,-0.01275588f,0.0237375f,-0.01284075f,0.01002447f,0.0258975f,-0.01196775f,-0.02599164f,0.022266f,0.00855225f,0.01028115f,0.03663f,0.0076365f,0.02196009f,0.010089f,0.0086445f,-0.02645478f,0.0343575f,0.0068535f,-0.02408607f,0.0076095f,0.01029825f,0.00463977f,0.0493425f,0.0103365f,-0.0242172f,0.04851f,0.00777825f,0.01613457f,0.023985f,-0.00774f,0.01597554f,-0.0015795f,-0.00404775f,-0.01988991f,-0.0008775f,-0.00892575f,-0.00999378f,-0.00244125f,0.00821925f,0.02645478f,0.00090225f,0.00827775f,-0.02397447f,0.001215f,0.013806f,0.01096191f,0.022293f,0.0137655f,0.01680138f,0.00836775f,0.01367775f,0.01837773f,0.00511875f,0.0138825f,-0.01858698f,0.0053685f,0.0129915f,-0.01862046f,0.00759825f,0.0147015f,-0.02096127f,0.0340425f,0.015858f,-0.01937655f,0.044055f,0.01585575f,0.0008091f,0.04464f,0.0145485f,0.00512244f,0.03492f,-0.007983f,-0.02108961f,0.054f,-0.00984825f,-0.01411461f,0.055935f,-0.00817875f,-0.00104904f,0.0546075f,0.01035675f,0.00071982f,0.054315f,0.014976f,-0.0021762f,0.0504225f,0.01497825f,-0.01743471f,0.0499275f,0.0103905f,-0.02109519f,0.0536175f,-0.0004095f,-0.00832815f,-0.007542f,0.00247725f,-0.01427643f,-0.0063495f,0.01100025f,-0.01705806f,-0.00570375f,0.01291275f,-0.01503252f,-0.00388575f,0.0127395f,0.01549566f,-0.004086f,0.0111015f,0.0186651f,-0.00641475f,0.00048375f,0.01185471f,-0.0067185f});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1});
  }
}
private class MFVec2f41 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f,0.1294f,0.142f,0.1322f,0.1446f,0.131f,0.1613f,0.0957f,0.1341f,0.1263f,0.1554f,0.0919f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1392f,0.1292f,0.16f,0.0958f,0.1443f,0.128f,0.1415f,0.1284f,0.1616f,0.0962f,0.1346f,0.0953f,0.1273f,0.0961f,0.126f,0.0891f,0.1339f,0.0889f,0.1175f,0.0992f,0.228f,0.0809f,0.2186f,0.0857f,0.2172f,0.0848f,0.2097f,0.0859f,0.2098f,0.0901f,0.2285f,0.0738f,0.1152f,0.1058f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1682f,0.1025f,0.1699f,0.1017f,0.2293f,0.0837f,0.1648f,0.0986f,0.112f,0.093f,0.1632f,0.098f,0.113f,0.0993f,0.2302f,0.0796f,0.1153f,0.1053f,0.2293f,0.0736f,0.1463f,0.1377f,0.1523f,0.1336f,0.1699f,0.1017f,0.1682f,0.1025f,0.1493f,0.1348f,0.1699f,0.1017f,0.1648f,0.0986f,0.2302f,0.0796f,0.2293f,0.0736f,0.113f,0.0993f,0.112f,0.093f,0.1682f,0.1025f,0.1341f,0.1263f,0.1554f,0.0919f,0.1559f,0.0889f,0.1571f,0.0927f,0.1363f,0.1268f,0.1317f,0.1272f});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01130175f,0.00057474f,0.01175625f,0.01140525f,0.00945531f,0.0218745f,-0.01178775f,0.00989334f,0.02217825f,-0.01310175f,-0.00340938f,0.0224055f,-0.01130625f,-0.01556541f,0.0214965f,0.0116685f,-0.01556541f,0.021555f,0.013086f,-0.00373581f,0.02215575f,-0.01133775f,-0.00268677f,0.01186875f,-0.01011375f,0.01280052f,0.0095895f,-0.00871875f,0.01214487f,0.00541125f,-0.0105345f,-0.00405666f,0.00642375f,0.00998325f,0.01230948f,0.0102915f,0.0098955f,-0.01287864f,0.01062f,-0.009747f,-0.01285353f,0.01026f,-0.00821025f,-0.01231785f,0.0048645f,-0.00927225f,-0.01328319f,-0.0004815f,-0.00950625f,0.01322739f,0.00024975f,-0.0115155f,-0.00405666f,0.00186525f,0.01279575f,0.01556541f,-0.000081f,0.012834f,-0.01328877f,-0.0009225f,0.012663f,-0.01230948f,0.005751f,0.01269225f,0.01254105f,0.00571725f,0.01275975f,0.00970641f,0.010143f,0.01310175f,-0.00761391f,0.0104535f,0.01280475f,0.00140895f,0.0114705f,-0.00895275f,-0.0035433f,-0.00364725f,-0.0075285f,-0.00954738f,-0.00585225f,0.00968175f,-0.00956133f,-0.005994f,0.0096525f,0.01198026f,-0.00535725f,-0.00738225f,0.01020303f,-0.0053325f,0.017019f,-0.00739071f,-0.00074025f,0.01692f,-0.00682155f,0.0031275f,0.01717425f,-0.0041013f,0.00585225f,0.017001f,0.00112995f,0.00644175f,0.01697625f,0.00593712f,0.00567225f,0.01693575f,0.00757764f,0.00310725f,0.0169965f,0.00933255f,-0.000252f,-0.0091215f,0.0059985f,0.0272925f,0.0088965f,0.00565812f,0.0270225f,0.01011825f,-0.00391158f,0.0273825f,0.00914175f,-0.01203606f,0.0268425f,-0.00878625f,-0.01203327f,0.0267525f,-0.010053f,-0.00345681f,0.027585f});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1});
  }
}
private class MFVec2f45 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f,0.113f,0.1423f,0.0921f,0.1396f,0.0889f,0.1257f,0.1107f,0.1415f,0.0903f,0.1274f,0.1123f,0.1297f,0.1214f,0.15f,0.0896f,0.1273f,0.1223f,0.1313f,0.1227f,0.1521f,0.0901f,0.1498f,0.0859f,0.0527f,0.151f,0.0282f,0.1325f,0.0446f,0.0894f,0.0746f,0.0899f,0.1016f,0.0977f,0.1554f,0.0919f,0.0779f,0.162f,0.1341f,0.1263f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1554f,0.0919f,0.0779f,0.162f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00774f,0.00759438f,0.01677375f,-0.00797625f,0.00795708f,0.0172485f,-0.00783f,-0.00243567f,0.02045925f,-0.00768825f,-0.01095354f,0.01622475f,0.007515f,-0.01095354f,0.01563525f,0.0079335f,-0.00243567f,0.020061f,0.01067175f,0.00978174f,0.00911475f,-0.011529f,0.01022814f,0.0091035f,-0.0127575f,-0.00127224f,0.0099675f,-0.01131075f,-0.0123318f,0.008964f,0.01059075f,-0.01228995f,0.00923175f,0.012528f,-0.00472068f,0.009999f,0.01141425f,0.01229274f,0.0001845f,-0.011781f,0.01273077f,0.0004905f,-0.013095f,-0.00057474f,0.00071775f,-0.01129725f,-0.01273077f,-0.00019125f,0.01167525f,-0.01273077f,-0.00013275f,0.013095f,-0.00089838f,0.000468f,0.0087795f,0.00871596f,-0.0053235f,-0.00913725f,0.00905355f,-0.00506025f,-0.01005975f,-0.00032364f,-0.004761f,-0.00880425f,-0.00883035f,-0.0055935f,0.0090225f,-0.00883314f,-0.0054945f,0.00999f,-0.0007812f,-0.0049635f});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
private class MFVec2f49 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f,0.1044f,0.2186f,0.1086f,0.2128f,0.1035f,0.2098f,0.0996f,0.2047f,0.1286f,0.2132f,0.1171f,0.1953f,0.1244f,0.2059f,0.1148f,0.2224f,0.1067f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.2132f,0.1285f,0.2047f,0.1286f,0.1953f,0.1244f,0.1953f,0.1244f,0.2132f,0.1171f,0.2163f,0.1174f,0.2098f,0.0996f,0.2179f,0.1044f,0.2224f,0.1067f,0.2224f,0.1067f,0.2186f,0.1086f,0.2128f,0.1035f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2224f,0.1067f,0.2132f,0.1285f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1285f,0.2224f,0.1067f,0.2224f,0.1067f,0.2224f,0.1067f});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0054405f,-0.0367443f,0.0068985f,0.005895f,0.0298251f,0.00609075f,0.00539775f,-0.0371628f,0.0172755f,0.0065025f,0.02081619f,0.0175905f,-0.007272f,0.02373732f,0.00776475f,-0.0073395f,-0.036549f,0.007524f,-0.00857475f,0.0136989f,0.02367f,-0.00851625f,-0.0367164f,0.023985f,0.00582525f,0.0372186f,-0.00206775f,-0.00578025f,0.0335358f,-0.00041175f,0.0055935f,-0.0372186f,-0.00209025f,-0.00621675f,-0.0370791f,-0.00025875f,-0.01110825f,0.01799271f,0.0017865f,-0.01212525f,0.01422621f,0.005634f,-0.0133065f,0.00667368f,0.02042325f,-0.01323675f,-0.0296856f,0.02070225f,-0.012348f,-0.029574f,0.00692325f,-0.01152225f,-0.029853f,0.001908f,0.01318275f,0.01580814f,0.015165f,0.01258425f,0.02291706f,0.00468675f,0.0125415f,0.02648547f,0.000144f,0.01238625f,-0.0304947f,0.0001215f,0.01219725f,-0.0301878f,0.00678375f,0.01212075f,-0.0304668f,0.01487475f,-0.00573075f,0.00830304f,0.03069f,0.00843525f,0.01510785f,0.024345f,0.0105795f,0.01184913f,0.0236025f,0.00968625f,-0.02704068f,0.023355f,0.00644175f,-0.0317223f,0.0245025f,-0.0059895f,-0.0313317f,0.0315f,-0.007965f,-0.02692908f,0.03015f,-0.00802125f,0.00331173f,0.029925f,0.00494325f,0.0333126f,-0.0083025f,-0.0046755f,0.0302715f,-0.006804f,-0.00879075f,0.01684602f,-0.0052065f,-0.00918f,-0.0280395f,-0.005094f,-0.00595125f,-0.0334521f,-0.0064035f,0.0047655f,-0.0335637f,-0.008118f,0.009198f,-0.0282069f,-0.00667125f,0.00933975f,0.02478078f,-0.006651f});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1});
  }
}
private class MFVec2f53 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f,0.1048f,0.1833f,0.0898f,0.1856f,0.0872f,0.1731f,0.1071f,0.1985f,0.1126f,0.2017f,0.0948f,0.1859f,0.1202f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1937f,0.091f,0.1795f,0.1136f,0.2068f,0.0986f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1731f,0.1071f,0.2017f,0.0948f,0.1859f,0.1202f,0.1795f,0.1136f,0.1731f,0.1071f,0.1682f,0.1025f,0.1682f,0.1025f,0.1731f,0.1071f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.1953f,0.1244f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.1856f,0.0872f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00846f,0.00700569f,0.0384525f,0.00755325f,0.02164761f,0.0121455f,-0.00701775f,0.00672111f,0.0397575f,-0.0079335f,0.01840005f,0.0132165f,-0.0069255f,-0.0300204f,0.037485f,0.0087165f,0.00145638f,0.0508275f,-0.00527175f,0.00107973f,0.05247f,-0.0052335f,-0.02777724f,0.0516375f,0.00776475f,0.01434339f,0.0252f,-0.00779175f,0.01257453f,0.0271125f,0.0077265f,0.0300204f,-0.002052f,-0.00735075f,0.02289474f,0.00402975f,0.0074115f,-0.0300204f,0.0362025f,0.00646875f,-0.0282348f,0.01052775f,-0.0087165f,-0.02764611f,0.010737f,0.00866475f,-0.02774376f,0.0500175f,-0.0087165f,-0.02764611f,0.010737f,0.00662175f,-0.0279558f,-0.002367f,-0.00729225f,-0.02753172f,0.0043425f,-0.01338075f,0.0137268f,0.012042f,-0.01334025f,0.00789012f,0.025965f,-0.01258425f,0.00204786f,0.03861f,-0.01122975f,-0.00238266f,0.0486f,-0.01122525f,-0.02335788f,0.04797f,-0.012447f,-0.02500119f,0.037575f,-0.0141885f,-0.02266875f,0.0112275f,-0.01414125f,-0.02265759f,0.011007f,-0.0132075f,-0.02261853f,0.0085095f,-0.01339875f,0.01557099f,0.008253f,0.013554f,0.00360468f,0.03726f,0.012861f,0.01099539f,0.023895f,0.01267875f,0.01831635f,0.0108045f,0.01280025f,0.02433438f,0.0005895f,0.01188f,-0.02467476f,0.00032175f,0.011745f,-0.02489796f,0.01047375f,0.01266525f,-0.02664729f,0.0359325f,0.01374975f,-0.02481147f,0.047115f,0.01371375f,-0.00112158f,0.04779f,0.0084465f,-0.02414466f,0.05436f,-0.004347f,-0.02418372f,0.05607f,-0.00830925f,-0.02126538f,0.055665f,-0.00831375f,-0.00530379f,0.056115f,-0.0044415f,-0.00305784f,0.0566325f,0.00852975f,-0.00270072f,0.054945f,0.01130175f,-0.00413478f,0.0537975f,0.011331f,-0.02248182f,0.05328f,0.005031f,0.02565963f,-0.01033425f,-0.00814725f,0.01929285f,-0.00422325f,-0.01288575f,0.01362078f,-0.001035f,-0.0127125f,-0.02021355f,-0.00080325f,-0.00875475f,-0.02349738f,-0.0035775f,0.003861f,-0.02389077f,-0.01012725f,0.00684225f,-0.02202147f,-0.00858375f,0.007677f,0.02242323f,-0.008343f});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1});
  }
}
private class MFVec2f57 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f,0.0796f,0.2439f,0.0803f,0.2062f,0.05f,0.2147f,0.0491f,0.2302f,0.0796f,0.2205f,0.0532f,0.2301f,0.0734f,0.2486f,0.0743f,0.2013f,0.0552f,0.2187f,0.0481f,0.221f,0.0541f,0.2293f,0.0736f,0.1746f,0.075f,0.1709f,0.0678f,0.1706f,0.0686f,0.1745f,0.076f,0.1824f,0.0523f,0.1886f,0.0572f,0.183f,0.0511f,0.1834f,0.0508f,0.1882f,0.0556f,0.1885f,0.0566f,0.1716f,0.0676f,0.1748f,0.0736f,0.2444f,0.0847f,0.2027f,0.042f,0.2022f,0.0485f,0.2464f,0.0799f,0.2486f,0.0741f,0.2011f,0.0554f,0.2293f,0.0837f,0.2177f,0.0418f,0.1769f,0.0796f,0.1648f,0.0986f,0.1632f,0.098f,0.1766f,0.0777f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.2022f,0.0485f,0.2027f,0.042f,0.1811f,0.0824f,0.1801f,0.0847f,0.1769f,0.0796f,0.2464f,0.0799f,0.2486f,0.0741f,0.1632f,0.098f,0.2187f,0.0481f,0.221f,0.0541f,0.2302f,0.0796f,0.2293f,0.0837f,0.1699f,0.1017f,0.1682f,0.1025f});
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00763425f,0.00902286f,0.00594f,-0.00729225f,-0.00829746f,0.0062505f,-0.00758925f,0.0007254f,0.0072675f,-0.0062505f,-0.00109647f,0.00726075f,-0.005454f,-0.0051057f,0.01727775f,-0.004437f,-0.01525851f,0.016902f,-0.00542025f,-0.01237644f,0.0061155f,0.006102f,-0.01510506f,0.015516f,0.00520425f,-0.01256337f,0.00484425f,0.00741375f,-0.00361584f,0.0158805f,0.00617625f,0.00984033f,0.01557225f,0.00526275f,0.01166778f,0.00470925f,0.00675675f,-0.0020925f,0.00569475f,-0.00459f,0.01020303f,0.016884f,-0.005067f,0.01150317f,0.00584775f,0.007587f,0.00907587f,0.003942f,0.0076185f,-0.00872712f,0.004077f,0.007731f,0.00005022f,0.00530775f,0.006624f,-0.01305162f,-0.0004725f,0.00682875f,0.01168173f,-0.0009045f,-0.007731f,-0.01299024f,0.00155025f,-0.00770175f,0.0118575f,0.00151425f,0.00633825f,-0.01393884f,-0.00673875f,0.00638775f,0.01525851f,-0.0059355f,-0.00759825f,0.01488186f,-0.004284f,-0.00756f,-0.01397232f,-0.0051255f,-0.00556425f,-0.01040391f,-0.01095525f,0.00302625f,-0.01038159f,-0.01194525f,0.0030645f,0.01211418f,-0.01132875f,-0.0055935f,0.01187982f,-0.0103005f,0.01179225f,0.00694989f,-0.00029925f,0.01127925f,0.00900054f,-0.00412875f,0.011097f,0.01023651f,-0.0058635f,0.011097f,-0.01065501f,-0.00644175f,0.01107675f,-0.01024488f,-0.00354375f,0.01183275f,-0.00710334f,-0.00024525f,0.0118935f,-0.00000279f,0.000756f,-0.012465f,0.00898938f,-0.00096525f,-0.01247175f,0.00690525f,0.0022905f,-0.012456f,0.00061101f,0.0032985f,-0.01216575f,-0.00665694f,0.00247725f,-0.01253475f,-0.01000494f,-0.00087525f,-0.01237725f,-0.01045134f,-0.00389925f,-0.01241325f,0.01020861f,-0.00329625f});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
private class MFVec2f61 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f,0.0949f,0.0775f,0.1651f,0.0639f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00716175f,-0.01308789f,0.0101025f,-0.00780075f,-0.00272583f,0.01039275f,0.006813f,-0.01308789f,0.0085545f,0.00780075f,-0.00272583f,0.008532f,0.0066555f,0.00545445f,0.00858375f,-0.006588f,0.00609336f,0.0101745f,-0.0072315f,-0.00222084f,0.0011025f,-0.00621675f,-0.01237365f,0.00072675f,0.00432225f,-0.01221741f,-0.00065925f,0.00563625f,-0.00073098f,-0.00029475f,0.00439875f,0.01272798f,-0.000603f,-0.00636975f,0.01308789f,0.00070875f,-0.006138f,-0.00215946f,-0.0041085f,-0.0053325f,-0.01026162f,-0.0044595f,0.00227475f,-0.01014723f,-0.0055035f,0.003366f,-0.0006975f,-0.005112f,0.00231075f,0.01069407f,-0.00544275f,-0.0054045f,0.01095354f,-0.00448875f,-0.003681f,-0.00893637f,0.0130995f,-0.00404325f,-0.00293787f,0.01334025f,-0.003402f,0.00176049f,0.0131715f,0.00421425f,0.00139221f,0.0122445f,0.004815f,-0.00285975f,0.0122715f,0.0042345f,-0.00893637f,0.01226475f});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
private class MFVec2f65 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1638f,0.0538f,0.174f,0.0396f,0.1747f,0.0423f,0.1756f,0.0403f,0.1632f,0.0573f,0.066f,0.0493f,0.0915f,0.0082f,0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.004788f,-0.00739908f,0.00733725f,-0.00468225f,-0.0007812f,0.009396f,0.00655425f,-0.0007812f,0.00803475f,0.005112f,-0.00739908f,0.0059985f,0.00587025f,0.00609615f,0.00668925f,-0.00446625f,0.00645327f,0.0082035f,-0.00716175f,-0.00959202f,0.00066375f,-0.00780075f,0.00077283f,0.00095625f,0.006813f,-0.00959202f,-0.000882f,0.00780075f,0.00077283f,-0.0009045f,0.0066555f,0.00895311f,-0.00085275f,-0.006588f,0.00959202f,0.00073575f,-0.0057645f,0.00065565f,-0.00352125f,-0.00533475f,-0.00643374f,-0.00377325f,0.004095f,-0.00643374f,-0.00478575f,0.00477675f,0.00071424f,-0.00478575f,0.004041f,0.00594828f,-0.00479475f,-0.0049815f,0.00638352f,-0.00370125f});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1});
  }
}
private class MFVec2f69 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f,0.0828f,0.2197f,0.0903f,0.2186f,0.1086f,0.2179f,0.1044f,0.2314f,0.0879f,0.2128f,0.1035f,0.2098f,0.0996f,0.2271f,0.0958f,0.2224f,0.1067f,0.2197f,0.1123f,0.2224f,0.1067f,0.2314f,0.0879f,0.2226f,0.0828f,0.2314f,0.0879f,0.2314f,0.0879f,0.2197f,0.0903f,0.2179f,0.1044f,0.2098f,0.0996f,0.2098f,0.0996f,0.2186f,0.1086f,0.2197f,0.1123f,0.2224f,0.1067f,0.2098f,0.0996f,0.2226f,0.0828f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00706725f,0.01710828f,0.01984275f,0.005418f,-0.037386f,0.0196695f,-0.00611775f,-0.0366048f,0.0085095f,-0.00566325f,0.0299925f,0.00770175f,0.00551925f,0.02679516f,0.0003195f,-0.0061605f,-0.0369954f,0.01888425f,-0.00505575f,0.02097243f,0.0192015f,0.004824f,-0.0366606f,0.000414f,-0.005733f,0.037386f,-0.00045675f,-0.00596475f,-0.0370791f,-0.0004815f,0.01248975f,0.0111042f,0.01667025f,0.01122975f,0.01751841f,0.00281025f,0.01070325f,-0.0335916f,0.00288675f,0.010962f,-0.0340659f,0.01652175f,-0.0107595f,0.02760705f,0.0064395f,-0.01020825f,0.01942119f,0.0168885f,-0.01125225f,-0.0338985f,0.0166005f,-0.01114875f,-0.0335916f,0.0085725f,-0.01101375f,-0.0339264f,0.00197775f,-0.01082475f,0.0316386f,0.001998f,-0.00515925f,0.01299861f,0.02718f,0.006399f,0.00975663f,0.0278775f,0.01032525f,0.00514197f,0.02574f,0.0089235f,-0.031248f,0.025605f,0.004995f,-0.0330615f,0.0278325f,-0.0057015f,-0.0327546f,0.0269775f,-0.009081f,-0.0309411f,0.02547f,-0.00812025f,0.01220346f,0.02574f});
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1});
  }
}
private class MFVec2f73 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f,0.0629f,0.1801f,0.0847f,0.1811f,0.0824f,0.1937f,0.091f,0.2128f,0.1035f,0.2098f,0.0996f,0.2197f,0.0903f,0.2138f,0.0778f,0.1989f,0.0701f,0.1984f,0.068f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.1937f,0.091f,0.2068f,0.0986f,0.2138f,0.0778f,0.2061f,0.0729f,0.2061f,0.0729f,0.1989f,0.0701f,0.1984f,0.068f,0.1952f,0.0651f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.2017f,0.0948f,0.2017f,0.0948f,0.2226f,0.0828f,0.2138f,0.0778f,0.1937f,0.091f,0.1811f,0.0824f,0.1856f,0.0872f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.2017f,0.0948f,0.1937f,0.091f,0.1937f,0.091f,0.1856f,0.0872f,0.1856f,0.0872f,0.1811f,0.0824f,0.2061f,0.0729f,0.2061f,0.0729f,0.2138f,0.0778f,0.2138f,0.0778f,0.2226f,0.0828f,0.2226f,0.0828f,0.2138f,0.0778f,0.2138f,0.0778f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.1811f,0.0824f,0.1801f,0.0847f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0079065f,0.00024552f,0.0492525f,-0.00573975f,-0.02774376f,0.0516825f,-0.005688f,0.00145638f,0.0524925f,-0.00663975f,0.01434339f,0.026865f,-0.00778275f,-0.0279558f,-0.000702f,-0.006678f,0.0300204f,-0.00038475f,0.00531f,-0.0300204f,0.0359325f,0.006714f,0.00598734f,0.037935f,0.0049095f,-0.0287928f,0.01025775f,-0.006993f,-0.0300204f,0.0378675f,-0.0059445f,0.00700569f,0.0401175f,0.003798f,-0.0283464f,0.00008325f,0.00577575f,0.01953558f,0.0117945f,0.005994f,0.01276146f,0.0248625f,0.00799875f,-0.02776329f,0.0483075f,-0.00685125f,0.02164761f,0.01381275f,0.00544725f,0.02615067f,0.0002565f,-0.00793575f,-0.0282348f,0.01219275f,-0.01024875f,-0.02520486f,0.04968f,-0.01136925f,-0.02713554f,0.0379125f,-0.01229175f,-0.02538342f,0.01240425f,-0.0121545f,-0.02514627f,0.00165375f,-0.01119375f,0.02582424f,0.00193275f,-0.0113265f,0.01929285f,0.01301625f,-0.0111375f,0.01197468f,0.0261f,-0.0104445f,0.00459513f,0.0394425f,-0.0102645f,-0.00031248f,0.050355f,0.01050975f,0.00936324f,0.0220005f,0.010269f,0.01616526f,0.00888075f,0.010143f,0.0205065f,0.00129375f,0.008703f,-0.02508768f,0.00115425f,0.00961425f,-0.0254169f,0.0085815f,0.00996075f,-0.02663055f,0.0339975f,0.01220625f,-0.02484216f,0.04383f,0.01201725f,-0.00222921f,0.044595f,0.0111645f,0.00258354f,0.0351f,0.00909f,-0.02434833f,0.0523575f,-0.0038565f,-0.02433438f,0.05562f,-0.00636975f,-0.02320722f,0.0556425f,-0.00638325f,-0.00313875f,0.0561825f,-0.0040365f,-0.00254448f,0.056205f,0.008883f,-0.00366327f,0.053145f,0.0115875f,-0.00498294f,0.052155f,0.0117405f,-0.02279988f,0.0515475f,0.00415125f,0.02358666f,-0.0053055f,-0.00651375f,0.02699325f,-0.00614475f,-0.009333f,0.02430369f,-0.00452025f,-0.01023075f,-0.02328534f,-0.004779f,-0.0074565f,-0.02507373f,-0.00627525f,0.003114f,-0.02541969f,-0.00539775f,0.00633825f,-0.02327976f,-0.00469575f,0.007686f,0.01935144f,-0.0045675f});
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1});
  }
}
private class MFVec2f77 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f,0.0686f,0.1709f,0.0678f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1716f,0.0676f,0.1882f,0.0556f,0.1745f,0.076f,0.1748f,0.0736f,0.1886f,0.0572f,0.2327f,0.0796f,0.2439f,0.0803f,0.2076f,0.0485f,0.2162f,0.0476f,0.2201f,0.0466f,0.2302f,0.0796f,0.2219f,0.0517f,0.2301f,0.0734f,0.2486f,0.0743f,0.2027f,0.0537f,0.2224f,0.0526f,0.2293f,0.0736f,0.1746f,0.075f,0.1885f,0.0566f,0.1801f,0.0847f,0.1811f,0.0824f,0.1952f,0.0651f,0.195f,0.0629f,0.2293f,0.0837f,0.1769f,0.0796f,0.2191f,0.0403f,0.1766f,0.0777f,0.2037f,0.047f,0.2486f,0.0741f,0.2026f,0.0539f,0.2444f,0.0847f,0.1915f,0.0602f,0.2041f,0.0405f,0.1915f,0.0578f,0.2464f,0.0799f,0.1801f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1811f,0.0824f,0.1952f,0.0651f,0.1915f,0.0602f,0.2464f,0.0799f,0.2486f,0.0741f,0.2037f,0.047f,0.2041f,0.0405f,0.195f,0.0629f,0.1766f,0.0777f,0.2201f,0.0466f,0.2224f,0.0526f,0.2302f,0.0796f,0.2293f,0.0837f,0.1801f,0.0847f,0.1811f,0.0824f});
  }
}
private class MFVec3f78 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0035865f,-0.00371628f,0.01654425f,-0.00243675f,-0.01515807f,0.0158625f,0.006633f,-0.0149823f,0.0138645f,0.00811575f,-0.00371628f,0.01366875f,0.00715275f,0.00794313f,0.013716f,-0.0025515f,0.00830304f,0.0159885f,0.00519075f,0.01068849f,0.0037305f,-0.00379575f,-0.01313253f,0.00619425f,-0.00378675f,0.01106793f,0.005985f,0.00481725f,-0.01331388f,0.003771f,-0.006363f,0.00897543f,0.00635625f,-0.0063315f,-0.00882756f,0.0064935f,-0.006219f,-0.00005022f,0.007722f,-0.0049365f,-0.00184419f,0.00778725f,0.00671175f,-0.00277326f,0.005058f,-0.00761175f,-0.01403928f,-0.0043245f,-0.00756225f,0.01515807f,-0.003519f,0.00612675f,-0.01405881f,-0.00769725f,0.0060345f,0.01394721f,-0.00675675f,-0.007326f,-0.01315206f,0.001944f,-0.00712125f,0.01158129f,0.00150975f,0.0074565f,0.00922932f,0.00315675f,0.007623f,-0.00027342f,0.00463725f,0.006696f,-0.01311579f,-0.0016785f,0.006453f,0.01097865f,-0.0022185f,0.007353f,-0.01210302f,0.00319725f,-0.0061065f,-0.01029789f,-0.0100845f,0.00211275f,-0.01030905f,-0.01212975f,0.0020475f,0.01092006f,-0.01140075f,-0.00607275f,0.01164546f,-0.009495f,0.01062225f,-0.00740466f,-0.00639675f,0.01090575f,-0.00693315f,-0.0033975f,0.01123425f,-0.00642816f,-0.00096525f,0.011367f,-0.00053289f,-0.0002475f,0.01128375f,0.00420453f,-0.0009855001f,0.01078425f,0.0050778f,-0.00366525f,0.010575f,0.0065565f,-0.0059265f,-0.01120725f,0.00911493f,-0.0000225f,-0.01064925f,0.00704196f,0.00384075f,-0.01054125f,-0.0000558f,0.00491625f,-0.0106155f,-0.00713961f,0.0039195f,-0.01139175f,-0.01043739f,0.0004545f,-0.01148625f,-0.01098702f,-0.00341775f,-0.01146825f,0.01109583f,-0.002808f});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
private class MFVec2f81 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1651f,0.0639f,0.1293f,0.0261f,0.0949f,0.0775f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00593775f,-0.00182466f,0.01074375f,-0.0051615f,-0.01218951f,0.01020825f,0.00803025f,-0.01218951f,0.0074565f,0.00902475f,-0.00182466f,0.00741375f,0.00801f,0.00635562f,0.00753525f,-0.0049005f,0.00699174f,0.0100215f,-0.005985f,0.00017019f,0.00147375f,-0.00483525f,-0.0112716f,0.000792f,0.0042345f,-0.01109583f,-0.001206f,0.0057195f,0.00017019f,-0.001404f,0.00475425f,0.0118296f,-0.0013545f,-0.00495f,0.01218951f,0.00091575f,-0.00504225f,0.00020367f,-0.0027f,-0.004176f,-0.0086211f,-0.003312f,0.00137025f,-0.00851508f,-0.004473f,0.0025335f,0.00025668f,-0.00459675f,0.00177525f,0.00929349f,-0.004599f,-0.004257f,0.00951948f,-0.00320175f,-0.001494f,-0.00801009f,0.01286325f,-0.001917f,-0.00194184f,0.013329f,-0.00141975f,0.00268398f,0.01272825f,0.0058725f,0.00232407f,0.011439f,0.0064035f,-0.00189441f,0.01141425f,0.00580275f,-0.00801009f,0.011367f});
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
private class MFVec2f85 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1747f,0.0423f,0.174f,0.0396f,0.1638f,0.0538f,0.1756f,0.0403f,0.1632f,0.0573f,0.0915f,0.0082f,0.066f,0.0493f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.003492f,-0.0007812f,0.0085905f,-0.003735f,-0.00739908f,0.00668925f,0.0047835f,-0.00739908f,0.00477675f,0.00618525f,-0.0007812f,0.00656775f,0.00549225f,0.00609615f,0.00536625f,-0.00339075f,0.00645327f,0.00747f,-0.00748125f,0.00077283f,0.00153675f,-0.006705f,-0.00959202f,0.00100125f,0.00648675f,-0.00959202f,-0.0017505f,0.00748125f,0.00077283f,-0.00179325f,0.0064665f,0.00895311f,-0.00167175f,-0.006444f,0.00959202f,0.0008145f,-0.005868f,0.00067239f,-0.0031095f,-0.00535725f,-0.00646722f,-0.00359325f,0.00341325f,-0.00646722f,-0.00540225f,0.004113f,0.00070866f,-0.0053775f,0.0034605f,0.00591759f,-0.00533025f,-0.00523575f,0.00634725f,-0.00374175f});
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
private class MFVec2f89 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f,0.0964f,0.2768f,0.1211f,0.2792f,0.1228f,0.2886f,0.0939f,0.2493f,0.1586f,0.2252f,0.161f,0.2241f,0.1634f,0.2489f,0.1638f,0.2727f,0.0786f,0.2746f,0.076f,0.2809f,0.1238f,0.2914f,0.0926f,0.2206f,0.1691f,0.249f,0.1672f,0.2762f,0.0729f,0.2769f,0.1234f,0.2869f,0.0933f,0.2461f,0.1652f,0.2661f,0.1399f,0.2685f,0.1417f,0.27f,0.1429f,0.2661f,0.1424f,0.24f,0.098f,0.2266f,0.1229f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2759f,0.0832f,0.2685f,0.0797f,0.2623f,0.1418f,0.2231f,0.166f,0.273f,0.1232f,0.2824f,0.0941f,0.2759f,0.0832f,0.2685f,0.0797f,0.2533f,0.0835f,0.2165f,0.148f,0.2231f,0.166f,0.2433f,0.1632f,0.2623f,0.1418f,0.2665f,0.0671f,0.2628f,0.0703f,0.2363f,0.0929f,0.2213f,0.1179f,0.2178f,0.1526f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.2664f,0.0668f});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.02246625f,-0.0695547f,-0.01966275f,0.007749f,-0.0695547f,-0.0302625f,0.00761625f,-0.0578646f,-0.0345825f,0.0249075f,-0.0578646f,-0.0229275f,-0.0191295f,-0.0695547f,-0.02045925f,-0.0273375f,-0.0695268f,0.00784125f,-0.02889f,-0.0578646f,0.00734175f,-0.02185875f,-0.0578646f,-0.0237825f,0.028035f,-0.0695268f,0.00784125f,0.0298575f,-0.0578646f,0.00734175f,0.007614f,-0.0326151f,-0.037305f,0.026415f,-0.0316107f,-0.0254925f,-0.031905f,-0.02765448f,0.007596f,-0.0235575f,-0.0329499f,-0.0263475f,0.03186f,-0.03069f,0.007596f,0.006633f,-0.01295676f,-0.03276f,0.024705f,-0.01326645f,-0.02082375f,-0.0233775f,-0.01366542f,-0.02184525f,-0.004806f,-0.0695547f,-0.03042f,-0.0050445f,-0.0578646f,-0.0347175f,-0.00520875f,-0.0329499f,-0.03744f,-0.00605925f,-0.01306836f,-0.032895f,0.0067815f,-0.0695268f,0.00784125f,-0.0095445f,-0.0695268f,0.00784125f,0.029205f,-0.0676017f,0.0252675f,0.031905f,-0.0576693f,0.0248175f,0.0314325f,-0.0316386f,0.0245475f,-0.024885f,-0.0673227f,0.027765f,0.009243f,-0.0682992f,0.027495f,-0.0073575f,-0.0682713f,0.0289125f,-0.02808f,-0.0558279f,0.02718f,-0.03096f,-0.02651337f,0.0271125f,-0.0233325f,0.00995472f,0.0278775f,0.0198765f,0.00786222f,0.028485f,0.00562725f,0.00513918f,-0.0270225f,0.022995f,0.00876339f,-0.01532925f,-0.0231975f,0.00876339f,-0.01631025f,0.02619f,0.00036828f,0.00059625f,0.025785f,0.00015903f,0.01227825f,-0.00686475f,0.00520614f,-0.027135f,-0.0302175f,0.00217899f,0.00682425f,0.004482f,0.02051487f,-0.01984275f,0.0189315f,0.0241893f,-0.010143f,0.02155725f,0.01572165f,0.003204f,0.02120175f,0.01545381f,0.0134325f,0.01681875f,0.02293659f,0.0255375f,-0.01918125f,0.02471661f,0.02502f,-0.0245025f,0.01706085f,0.00893475f,-0.01845225f,0.02380986f,-0.01096425f,-0.00492975f,0.02044791f,-0.019917f,0.02853f,-0.0557442f,0.0322425f,0.0267975f,-0.0615474f,0.0321525f,0.00935325f,-0.0620496f,0.0342675f,-0.0070695f,-0.0620217f,0.035685f,-0.022095f,-0.0613242f,0.0344475f,-0.0243675f,-0.0537912f,0.0343125f,-0.0271125f,-0.028179f,0.034335f,-0.020376f,0.00121365f,0.03492f,0.01754775f,-0.00047709f,0.0356175f,0.02808f,-0.0333405f,0.03195f});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
private class MFVec2f93 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f,0.0622f,0.2585f,0.0581f,0.2383f,0.0796f,0.2566f,0.0607f,0.243f,0.0749f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2533f,0.0835f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2271f,0.0958f,0.2197f,0.0903f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2197f,0.0903f,0.2271f,0.0958f,0.2363f,0.0929f,0.2533f,0.0835f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2469f,0.052f,0.2292f,0.0691f,0.2197f,0.0903f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f,0.2342f,0.0682f,0.2484f,0.051f,0.2512f,0.047f});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00883575f,-0.0375255f,0.0146295f,0.01240425f,-0.0293508f,0.0105075f,0.00946125f,-0.0044361f,0.01343925f,-0.00477f,-0.0388089f,0.0179865f,-0.00046575f,0.01448289f,0.0166545f,0.01395f,-0.0387531f,0.0306f,0.0175815f,-0.0296856f,0.0288f,0.0141525f,-0.00709776f,0.030735f,0.00119475f,-0.0401202f,0.0341325f,0.001926f,0.00583668f,0.0344925f,-0.00166725f,0.0360189f,0.00043875f,-0.0126675f,0.0401481f,0.00686925f,-0.01213875f,0.02446272f,0.01804725f,-0.01059075f,0.01477584f,0.037575f,-0.012834f,-0.0390042f,0.01814175f,-0.01224f,-0.0397017f,0.037395f,0.00766125f,-0.0394506f,-0.00279f,0.0103635f,-0.0295182f,-0.0032265f,0.00989325f,-0.00349029f,-0.0035055f,-0.01230075f,-0.0401481f,-0.00054675f,-0.02236725f,0.02746197f,0.01043325f,-0.02192175f,0.02001825f,0.015741f,-0.02060325f,0.01123812f,0.0334575f,-0.02206575f,-0.0338985f,0.0333225f,-0.0224415f,-0.0333405f,0.0184005f,-0.0219555f,-0.0341775f,0.0047385f,-0.0084645f,0.0328941f,-0.010008f,-0.0156375f,0.0356004f,-0.005157f,-0.0226125f,0.02650221f,-0.00261f,-0.02223f,-0.0299088f,-0.007821f,-0.01535175f,-0.0341775f,-0.01173375f,0.001071f,-0.0336474f,-0.0129285f,0.00266175f,-0.02777724f,-0.01321875f,0.002196f,-0.00348192f,-0.013572f,0.0124875f,-0.037665f,0.0403875f,0.00213525f,-0.0387531f,0.0432675f,-0.01031175f,-0.0383904f,0.0468f,-0.01701675f,-0.0306621f,0.0439875f,-0.015795f,0.00707823f,0.0441f,-0.010125f,0.0046314f,0.0471825f,0.0006705f,-0.00300204f,0.0441225f,0.01151325f,-0.01427364f,0.04077f,0.01435275f,-0.0328383f,0.0390375f});
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1});
  }
}
private class MFVec2f97 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f,0.0481f,0.2254f,0.0615f,0.2142f,0.0508f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.1989f,0.0701f,0.1984f,0.068f,0.2138f,0.0778f,0.1952f,0.0651f,0.195f,0.0629f,0.2061f,0.0729f,0.2292f,0.0691f,0.2342f,0.0682f,0.2226f,0.0828f,0.2129f,0.0844f,0.2197f,0.0903f,0.2254f,0.0615f,0.2061f,0.0729f,0.2138f,0.0778f,0.2061f,0.0729f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.2061f,0.0729f,0.2226f,0.0828f,0.2226f,0.0828f,0.2186f,0.0548f,0.2254f,0.0615f,0.2342f,0.0682f,0.2342f,0.0682f,0.2254f,0.0615f,0.2117f,0.0481f,0.2083f,0.0443f,0.2083f,0.0443f,0.2117f,0.0481f,0.2083f,0.0443f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2083f,0.0443f,0.2083f,0.0443f,0.2083f,0.0443f,0.2226f,0.0828f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2226f,0.0828f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.009675f,0.00566928f,0.03618f,0.00767475f,0.01331109f,0.00945675f,0.0092475f,0.00038781f,0.0467775f,0.00905175f,0.00939393f,0.02286f,-0.00518625f,0.00791802f,0.0389025f,-0.00612675f,0.02146905f,0.01275975f,-0.00399375f,0.0021762f,0.05022f,-0.00590625f,0.01469493f,0.02583f,0.0060615f,0.01914219f,-0.00186525f,-0.00645525f,0.0280953f,0.0012195f,0.007578f,-0.0280953f,0.031725f,0.006687f,-0.02746476f,0.007839f,0.00997425f,-0.02468871f,0.04581f,0.00533025f,-0.02682585f,-0.00222075f,-0.00659025f,-0.0280953f,0.0369f,-0.0039015f,-0.02582982f,0.049275f,-0.006993f,-0.02685375f,0.01122075f,-0.0081045f,-0.02640735f,0.0010485f,-0.011754f,0.01710549f,0.0115605f,-0.01150425f,0.0102951f,0.024705f,-0.01087875f,0.00350982f,0.0378f,-0.01016325f,-0.00091512f,0.046575f,-0.009936f,-0.02129607f,0.045855f,-0.011997f,-0.02289195f,0.03708f,-0.012321f,-0.02168388f,0.0117765f,-0.013149f,-0.02140209f,0.00548775f,-0.01179675f,0.0205065f,0.00561375f,0.01406475f,0.00424917f,0.01966725f,0.0126855f,0.00789291f,0.00639f,0.011556f,0.01153386f,-0.0011205f,0.0109755f,-0.0227385f,-0.00140625f,0.011997f,-0.02316537f,0.005733f,0.0128565f,-0.02372058f,0.028665f,0.01498275f,-0.02115936f,0.0399825f,0.01415925f,-0.00298809f,0.040725f,0.014688f,0.00089559f,0.0324225f,0.0102015f,-0.02089431f,0.0501075f,-0.0025965f,-0.02194335f,0.0537075f,-0.00650925f,-0.01924821f,0.053415f,-0.006687f,-0.00395343f,0.053955f,-0.00292725f,-0.00231291f,0.054315f,0.00937575f,-0.00392832f,0.0509175f,0.0124065f,-0.00582831f,0.0480375f,0.01301625f,-0.01899432f,0.0474975f,-0.00915075f,-0.02221677f,-0.0070155f,0.00297225f,-0.02259342f,-0.0099765f,0.00618975f,-0.02007963f,-0.00994275f,0.006696f,0.00982638f,-0.009693f,0.00252675f,0.01578303f,-0.00960075f,-0.008235f,0.02344437f,-0.007119f,-0.011178f,0.01878228f,-0.00404325f,-0.01239975f,-0.01899432f,-0.00416025f});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1});
  }
}
private class MFVec2f101 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f,0.0375f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1873f,0.048f,0.1915f,0.0602f,0.1915f,0.0578f,0.1897f,0.0535f,0.1888f,0.0569f,0.2031f,0.037f,0.2012f,0.0381f,0.2444f,0.0847f,0.2208f,0.06f,0.2111f,0.0557f,0.2254f,0.054f,0.2483f,0.0809f,0.2464f,0.0799f,0.2587f,0.0865f,0.225f,0.0604f,0.2239f,0.0673f,0.2238f,0.0671f,0.267f,0.0845f,0.2486f,0.0741f,0.2486f,0.074f,0.2049f,0.059f,0.1896f,0.055f,0.2102f,0.0461f,0.1952f,0.0651f,0.2083f,0.0443f,0.195f,0.0629f,0.2109f,0.0476f,0.2048f,0.0404f,0.2576f,0.0911f,0.2063f,0.0414f,0.2083f,0.0537f,0.2612f,0.0869f,0.2671f,0.0842f,0.2047f,0.0593f,0.1952f,0.0651f,0.2102f,0.0461f,0.2083f,0.0443f,0.195f,0.0629f,0.2102f,0.0461f,0.2063f,0.0414f,0.2612f,0.0869f,0.2671f,0.0842f,0.2083f,0.0537f,0.2109f,0.0476f,0.2083f,0.0443f,0.2444f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1915f,0.0578f,0.225f,0.0604f,0.2239f,0.0673f,0.2464f,0.0799f});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0073755f,-0.0015903f,0.00423675f,-0.00118125f,-0.01411461f,0.01613025f,-0.00246825f,-0.00284301f,0.01636425f,0.00812925f,-0.01482048f,0.01383975f,0.0091755f,-0.00284301f,0.013491f,0.00834975f,0.00885546f,0.01396575f,-0.00162f,0.01008027f,0.01627425f,-0.0037575f,0.01092843f,0.00707625f,0.005949f,-0.01189098f,0.00339975f,0.00609525f,0.00997146f,0.00342f,-0.00373725f,-0.01174869f,0.006732f,-0.00594225f,0.01010259f,0.0074025f,-0.00577575f,0.00059985f,0.008883f,-0.00447075f,-0.00180792f,0.00871425f,-0.00670275f,-0.01224252f,0.00256725f,-0.00694575f,0.01185192f,0.00202725f,-0.00604575f,-0.01122975f,0.007443f,0.00660375f,-0.01204443f,-0.00691875f,-0.007272f,-0.01318554f,-0.0034515f,0.00587475f,0.01303209f,-0.005958f,-0.00736425f,0.01482048f,-0.002511f,0.0069345f,0.01001331f,-0.00279225f,0.0069345f,-0.01061037f,-0.00276525f,0.0079065f,0.00897543f,0.002394f,0.00793575f,-0.0115506f,0.00251325f,0.0082395f,-0.00235476f,0.00348525f,-0.00608175f,-0.00938277f,-0.00947025f,0.0025245f,-0.00867411f,-0.01161f,0.00197325f,0.01029789f,-0.01089f,-0.00614925f,0.01139715f,-0.008766f,0.01150875f,-0.0080352f,-0.006993f,0.01139625f,-0.00753579f,-0.0054855f,0.01275075f,-0.00817191f,-0.00193725f,0.012933f,-0.00227385f,-0.001305f,0.01262025f,0.00645327f,-0.00218025f,0.01131075f,0.00726795f,-0.00627525f,0.010908f,0.00741303f,-0.006372f,-0.01148625f,-0.00916794f,0.001377f,-0.01177875f,-0.00963945f,-0.00164025f,-0.011835f,0.00971199f,-0.00099f,-0.01176525f,0.00888057f,0.000288f,-0.01100925f,0.007533f,0.0044235f,-0.01090575f,0.00051057f,0.0055215f,-0.01112175f,-0.0085374f,0.004419f});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
private class MFVec2f105 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1816f,0.0411f,0.1287f,0.0243f,0.0943f,0.0785f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1322f,0.09f,0.157f,0.0552f,0.1873f,0.048f,0.186f,0.0472f,0.1866f,0.0487f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.157f,0.0552f,0.1822f,0.0458f,0.1809f,0.0434f,0.1816f,0.0411f,0.0943f,0.0785f,0.1948f,0.024f,0.1953f,0.0282f});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00499275f,-0.0126945f,0.0087165f,-0.006084f,-0.00222363f,0.00924525f,0.00640575f,-0.0126945f,0.00618525f,0.007623f,-0.00222363f,0.00628425f,0.00678375f,0.00483507f,0.0058095f,-0.005058f,0.00556326f,0.00884025f,-0.0054675f,-0.01150038f,0.0009855001f,-0.00675675f,-0.00022878f,0.00121725f,0.00384075f,-0.01220625f,-0.00130725f,0.004887f,-0.00022878f,-0.00165375f,0.00406125f,0.01146969f,-0.00118125f,-0.0059085f,0.0126945f,0.00112725f,-0.00558675f,-0.00010602f,-0.0038295f,-0.00459225f,-0.00874107f,-0.003978f,0.00075825f,-0.00914841f,-0.00530775f,0.0015345f,-0.00017298f,-0.00560475f,0.00090675f,0.0088722f,-0.00519075f,-0.0049455f,0.00959202f,-0.0038835f,-0.0013995f,-0.00849276f,0.01133325f,-0.00201825f,-0.00226548f,0.0117765f,-0.0015705f,0.00124434f,0.01152675f,0.00468f,0.00085932f,0.0104625f,0.0050535f,-0.00216783f,0.01031625f,0.00428175f,-0.00849276f,0.0100935f});
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
private class MFVec2f109 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f,0.0355f,0.1904f,0.0263f,0.1901f,0.0243f,0.1819f,0.0351f,0.1913f,0.0249f,0.182f,0.0368f,0.088f,0.0133f,0.0677f,0.0461f,0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.0943f,0.0785f,0.1287f,0.0243f,0.1816f,0.0411f,0.1809f,0.0434f,0.1822f,0.0458f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1287f,0.0243f});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0034335f,-0.00674622f,0.00581175f,0.0035955f,-0.00674622f,0.0041355f,0.0043065f,0.0004464f,0.006039f,-0.00380475f,0.0004464f,0.00761175f,0.00362475f,0.00529542f,0.00456525f,-0.00325575f,0.00571671f,0.0061875f,-0.00651375f,-0.00912888f,0.00133425f,-0.007605f,0.00134199f,0.001863f,0.00488475f,-0.00912888f,-0.001197f,0.006102f,0.00134199f,-0.001098f,0.00526275f,0.0083979f,-0.00157275f,-0.006579f,0.00912888f,0.001458f,-0.006039f,0.0012555f,-0.00280575f,-0.00530325f,-0.00603198f,-0.00326925f,0.00180675f,-0.00603198f,-0.004833f,0.002691f,0.00132804f,-0.00464175f,0.00215325f,0.00536517f,-0.00516825f,-0.00544725f,0.00583389f,-0.00309375f});
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
private class MFVec2f113 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f,0.0317f,0.2316f,0.0247f,0.2265f,0.0269f,0.241f,0.0419f,0.244f,0.0359f,0.2401f,0.0413f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2333f,0.0341f,0.2378f,0.0303f,0.2142f,0.0508f,0.2117f,0.0481f,0.2254f,0.0615f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2142f,0.0508f,0.2202f,0.0585f,0.2292f,0.0691f,0.2342f,0.0682f,0.2254f,0.0615f,0.2186f,0.0548f,0.2117f,0.0481f,0.2083f,0.0443f,0.2102f,0.0461f,0.2292f,0.0691f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2342f,0.0682f,0.2342f,0.0682f,0.2292f,0.0691f,0.226f,0.0221f,0.2245f,0.0286f,0.2102f,0.0461f,0.2102f,0.0461f,0.2083f,0.0443f,0.2083f,0.0443f,0.2232f,0.0245f});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0074385f,-0.02361177f,0.02574f,0.013338f,-0.01213929f,0.0324675f,0.0101925f,0.00547956f,0.03501f,0.007128f,-0.02180664f,0.0084375f,0.01102725f,-0.01213929f,0.0089955f,0.00717525f,0.00885825f,0.009891f,0.00812925f,-0.02107287f,0.0451575f,0.0117855f,-0.01213929f,0.044235f,0.009684f,0.00176607f,0.0452025f,0.00895275f,0.00716751f,0.02358f,0.01218375f,-0.01213929f,0.020727f,-0.00674325f,-0.02361177f,0.0354375f,-0.004644f,0.01013886f,0.0398925f,-0.0066465f,0.01778067f,0.01315125f,-0.00434475f,-0.02021913f,0.0495f,-0.00507375f,0.00485739f,0.0504675f,-0.00763425f,-0.02299518f,0.01153125f,-0.0052695f,0.01386072f,0.02655f,0.00376425f,-0.02098638f,-0.0020655f,0.00739575f,-0.01190214f,-0.0038475f,0.00396675f,0.01068012f,-0.00193275f,-0.008991f,-0.02235627f,0.0014715f,-0.00825975f,0.02361177f,0.001827f,-0.012078f,-0.01813779f,0.03555f,-0.01292175f,-0.01753515f,0.0121545f,-0.01374975f,-0.01715292f,0.006156f,-0.01324125f,0.01611504f,0.006417f,-0.0123705f,0.01304604f,0.0123705f,-0.01100475f,0.00903402f,0.0261225f,-0.010359f,0.00539865f,0.039105f,-0.01092375f,0.00166284f,0.04662f,-0.01005075f,-0.01563237f,0.045945f,-0.01163475f,-0.01902222f,-0.005427f,-0.0008145f,-0.01787832f,-0.0080235f,0.00176175f,-0.01128834f,-0.00950175f,-0.001314f,0.00907866f,-0.00771975f,-0.01163475f,0.01980063f,-0.00523125f,-0.01453275f,0.01483443f,-0.00178875f,-0.01499175f,-0.01530315f,-0.002025f,0.0086265f,-0.01291212f,0.04842f,0.0061875f,-0.0182466f,0.049005f,-0.00416925f,-0.01761606f,0.0532125f,-0.0082935f,-0.0146754f,0.0507375f,-0.008964f,-0.00305226f,0.0512775f,-0.00528075f,-0.00120528f,0.0539325f,0.00704025f,-0.00353772f,0.0491175f});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1});
  }
}
private class MFVec2f117 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f,0.0256f,0.2205f,0.0195f,0.2048f,0.0404f,0.2199f,0.022f,0.2063f,0.0414f,0.2047f,0.0523f,0.1956f,0.0462f,0.1979f,0.0386f,0.2109f,0.0476f,0.277f,0.1031f,0.2673f,0.0987f,0.263f,0.1f,0.2744f,0.109f,0.1892f,0.0439f,0.1911f,0.0375f,0.2576f,0.0911f,0.2083f,0.0537f,0.263f,0.0893f,0.2612f,0.0869f,0.2047f,0.0593f,0.2048f,0.0593f,0.2671f,0.0842f,0.2673f,0.0839f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2102f,0.0461f,0.2083f,0.0443f,0.2039f,0.0358f,0.2152f,0.0224f,0.2154f,0.0203f,0.2126f,0.0258f,0.2034f,0.0366f,0.2033f,0.0375f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2083f,0.0443f,0.2102f,0.0461f,0.2576f,0.0911f,0.2102f,0.0461f,0.2083f,0.0443f,0.2048f,0.0404f,0.2083f,0.0537f,0.2047f,0.0593f,0.2612f,0.0869f});
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00616725f,0.00749673f,-0.00163125f,0.00497925f,-0.01349802f,0.003843f,0.00501975f,-0.01129671f,-0.0021825f,0.0076005f,-0.00311922f,-0.00180675f,-0.004104f,-0.01060479f,0.00641925f,-0.00724725f,0.01085868f,0.00180675f,-0.00724725f,-0.009765f,0.001836f,-0.00627525f,0.0098208f,0.00699525f,-0.006246f,-0.01070523f,0.0071145f,-0.0059445f,-0.00150939f,0.0080865f,0.004896f,-0.0120528f,-0.0066645f,0.00855225f,-0.00311922f,-0.0075915f,0.00645075f,0.01078614f,-0.00661725f,-0.007578f,-0.01119906f,-0.0023175f,-0.008307f,0.01387746f,-0.00135675f,-0.0041895f,0.01009422f,0.00643725f,0.00568125f,0.0080631f,0.0038295f,0.00702675f,-0.00246915f,0.00445725f,-0.004914f,-0.00127224f,0.00799875f,0.00575775f,-0.01387746f,0.00667575f,0.007623f,-0.00369675f,0.00685125f,0.006453f,0.00617427f,0.006651f,-0.003879f,0.00786222f,0.00895725f,-0.0045225f,-0.00279f,0.0100305f,-0.003312f,-0.01171521f,0.0088875f,0.0016605f,-0.00822771f,-0.01113525f,0.00405225f,-0.00239661f,-0.01172475f,0.002484f,0.0079236f,-0.01102275f,-0.00685125f,0.00992682f,-0.007794f,-0.006345f,-0.00766413f,-0.00848025f,-0.0112185f,-0.00692199f,0.00106425f,-0.01112625f,-0.00771435f,-0.001422f,-0.0116865f,0.00915678f,-0.0007695f,-0.01124325f,0.00791523f,0.0006525f,-0.0105525f,0.00713682f,0.0048105f,-0.01019475f,-0.00132525f,0.005634f,-0.010422f,-0.00757485f,0.00497925f});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
private class MFVec2f121 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f,0.0133f,0.2102f,0.0181f,0.2093f,0.0169f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2109f,0.0133f,0.2102f,0.0181f,0.1989f,0.0342f,0.1986f,0.0324f,0.1959f,0.0354f,0.2093f,0.0169f});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.005418f,-0.01135251f,0.00630675f,0.006984f,-0.00367443f,0.0060345f,0.006093f,0.00484065f,0.00627075f,-0.00521325f,0.00566649f,0.00849825f,-0.00602775f,-0.00377766f,0.00899325f,-0.00426375f,-0.01121859f,0.00821925f,0.00343125f,-0.01038717f,-0.00090675f,0.0052965f,-0.00020646f,-0.00073125f,0.00412425f,0.00966456f,-0.0009315f,-0.0062055f,0.01135251f,0.00137475f,-0.00685125f,0.0006975f,0.002448f,-0.0056385f,-0.00822492f,0.001305f,0.0008865f,-0.00705312f,-0.003744f,0.00220725f,-0.00009486f,-0.00343575f,0.001323f,0.00709776f,-0.00370575f,-0.0050175f,0.00813006f,-0.0023895f,-0.005391f,0.000837f,-0.0013815f,-0.004545f,-0.00576135f,-0.0024345f,0.0043425f,-0.00344844f,0.010044f,0.00357975f,-0.00716751f,0.01016325f,-0.00113175f,-0.00710055f,0.0110115f,-0.001971f,-0.0034038f,0.01156725f,-0.00160875f,0.00124992f,0.01114875f,0.0038925f,0.00084816f,0.0101655f});
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
private class MFVec2f125 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f,0.0135f,0.2053f,0.0142f,0.1964f,0.026f,0.1976f,0.0232f,0.1977f,0.0271f,0.2052f,0.017f,0.0639f,0.0523f,0.0903f,0.0107f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.1317f,0.0215f,0.0951f,0.0836f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.0951f,0.0836f,0.1986f,0.0324f,0.1989f,0.0342f});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00280125f,-0.00836442f,0.00452925f,0.004887f,-0.00112158f,0.0065115f,0.00378f,0.00522009f,0.00528075f,-0.0026955f,0.00567207f,0.00668475f,-0.00259425f,-0.00091791f,0.0079335f,-0.00281925f,-0.00836442f,0.00555525f,0.0045135f,-0.0085095f,-0.00142875f,0.0060795f,-0.00083142f,-0.001701f,0.00519075f,0.00768366f,-0.00146475f,-0.00611775f,0.0085095f,0.00076275f,-0.00693225f,-0.00093465f,0.00125775f,-0.00516825f,-0.00837558f,0.00048375f,0.00172575f,-0.00532332f,-0.00511875f,0.00268875f,-0.0006138f,-0.0052785f,0.0021285f,0.00473742f,-0.00512775f,-0.004824f,0.0052452f,-0.00383175f,-0.00529875f,-0.00060543f,-0.003393f,-0.00422775f,-0.00523962f,-0.004005f});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
private class MFVec2f129 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0666f,-0.00196974f,0f,-0.0369675f,-0.00196974f,0.0722025f,0.02961f,-0.00196974f,0.090045f,0.0757575f,-0.00196974f,0.0400725f,0.0757575f,-0.00196974f,-0.0400725f,0.02961f,-0.00196974f,-0.090045f,-0.0369675f,-0.00196974f,-0.0722025f,-0.0666f,-0.106578f,0f,-0.0369675f,-0.106578f,0.0722025f,0.02961f,-0.106578f,0.090045f,0.0757575f,-0.106578f,0.0400725f,0.0757575f,-0.106578f,-0.0400725f,0.02961f,-0.106578f,-0.090045f,-0.0369675f,-0.106578f,-0.0722025f,-0.0666f,-0.287928f,0f,-0.0369675f,-0.287928f,0.0722025f,0.02961f,-0.287928f,0.090045f,0.0757575f,-0.287928f,0.0400725f,0.0757575f,-0.287928f,-0.0400725f,0.02961f,-0.287928f,-0.090045f,-0.0369675f,-0.287928f,-0.0722025f,-0.0757575f,-0.472626f,0f,-0.0426825f,-0.472626f,0.080595f,0.0316575f,-0.472626f,0.1005075f,0.0754875f,-0.472626f,0.04473f,0.0754875f,-0.472626f,-0.04473f,0.0316575f,-0.472626f,-0.1005075f,-0.0426825f,-0.472626f,-0.080595f,-0.048285f,-0.2453526f,0f,-0.02556f,-0.2453526f,0.055395f,0.0255375f,-0.2453526f,0.069075f,0.0592425f,-0.2453526f,0.030735f,0.0592425f,-0.2453526f,-0.030735f,0.0255375f,-0.2453526f,-0.069075f,-0.02556f,-0.2453526f,-0.055395f,-0.04851f,-0.425475f,0f,-0.0275625f,-0.425475f,0.04401f,0.0194895f,-0.425475f,0.0548775f,0.0572175f,-0.425475f,0.0244125f,0.0572175f,-0.425475f,-0.0244125f,0.0194895f,-0.425475f,-0.0548775f,-0.0275625f,-0.425475f,-0.04401f,-0.0461475f,0.053568f,0f,-0.02421f,0.053568f,0.0534375f,0.025065f,0.053568f,0.0666225f,0.064575f,0.053568f,0.029655f,0.064575f,0.053568f,-0.029655f,0.025065f,0.053568f,-0.0666225f,-0.02421f,0.053568f,-0.0534375f,-0.041445f,-0.528147f,0f,-0.023175f,-0.528147f,0.0421425f,0.01792125f,-0.528147f,0.0516375f,0.0508725f,-0.528147f,0.0250425f,0.0508725f,-0.528147f,-0.0213255f,0.01792125f,-0.528147f,-0.047925f,-0.023175f,-0.528147f,-0.03843f,-0.01412325f,-0.555489f,0f,-0.00612675f,-0.555489f,0.02052f,0.0118395f,-0.555489f,0.02466f,0.0262575f,-0.555489f,0.013041f,0.0262575f,-0.555489f,-0.00932625f,0.0118395f,-0.555489f,-0.02095425f,-0.00612675f,-0.555489f,-0.01680525f});
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFVec2f133 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9632f,0.3942f,0.9402f,0.3943f,0.8884f,0.3943f,0.8469f,0.3942f,0.8469f,0.3941f,0.8884f,0.3941f,0.9402f,0.3941f,0.9325f,0.3742f,0.9208f,0.3742f,0.8947f,0.3742f,0.8737f,0.3742f,0.8737f,0.3741f,0.8947f,0.3741f,0.9208f,0.3741f});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0161685f,0.02702952f,0.0005265f,-0.008172f,0.02702952f,0.0210465f,0.00979425f,0.02702952f,0.0252f,0.02421f,0.02702952f,0.0135675f,0.02421f,0.02702952f,-0.00879975f,0.00979425f,0.02702952f,-0.02042775f,-0.008172f,0.02702952f,-0.01627875f,-0.0525825f,-0.1287027f,0.0005265f,-0.03285f,-0.1010538f,0.0454275f,-0.02781f,-0.0454212f,0.05445f,-0.047655f,-0.0533448f,0.0005265f,0.01824975f,-0.1010538f,0.0577575f,0.016803f,-0.0454212f,0.0653175f,0.050715f,-0.1287027f,0.0282375f,0.0525825f,-0.0533448f,0.02203425f,0.050715f,-0.1501857f,-0.03078f,0.0525825f,-0.0533448f,-0.02098125f,0.01824975f,-0.1501857f,-0.0653175f,0.016803f,-0.0533448f,-0.05328f,-0.03285f,-0.1501857f,-0.0529875f,-0.02781f,-0.0533448f,-0.0424125f,-0.0252225f,-0.00008928f,0.04266f,-0.0434925f,-0.00008928f,0.0005265f,0.015876f,-0.00008928f,0.052155f,0.048825f,-0.00008928f,0.02556f,0.048825f,-0.00008928f,-0.020799f,0.015876f,-0.00008928f,-0.0463725f,-0.0252225f,-0.00008928f,-0.0369f,-0.0361575f,-0.360468f,0.000072f,-0.020736f,-0.360189f,0.0352125f,0.0139275f,-0.360189f,0.0438975f,0.041715f,-0.360468f,0.01957725f,0.041715f,-0.361026f,-0.0219645f,0.0139275f,-0.361026f,-0.039195f,-0.020736f,-0.361026f,-0.03051f,-0.015912f,-0.405387f,0.00053775f,-0.008109f,-0.405387f,0.018315f,0.009423f,-0.405387f,0.0227025f,0.02349f,-0.405387f,0.010404f,0.02349f,-0.405666f,-0.0106065f,0.009423f,-0.405666f,-0.01932075f,-0.008109f,-0.405666f,-0.01492875f});
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1});
  }
}
private class MFVec2f137 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f,0.1089f,0.2217f,0.1285f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2685f,0.0797f,0.2165f,0.148f,0.2759f,0.0832f,0.2428f,0.156f,0.2563f,0.142f,0.2584f,0.1419f,0.2431f,0.1588f,0.2715f,0.1062f,0.2761f,0.1011f,0.2698f,0.09f,0.2775f,0.078f,0.2629f,0.0863f,0.248f,0.0935f,0.2498f,0.0895f,0.2702f,0.0748f,0.2296f,0.1148f,0.2397f,0.101f,0.2249f,0.1266f,0.2295f,0.1126f,0.2207f,0.1406f,0.2252f,0.1591f,0.2245f,0.1634f,0.2202f,0.1406f,0.2407f,0.0951f,0.2662f,0.1249f,0.2599f,0.1313f,0.2623f,0.1418f,0.2691f,0.1232f,0.2231f,0.166f,0.2217f,0.1285f,0.227f,0.1089f,0.2407f,0.0951f,0.2533f,0.0835f,0.2685f,0.0797f,0.2759f,0.0832f,0.2824f,0.0941f,0.273f,0.1232f,0.2623f,0.1418f,0.2433f,0.1632f,0.2231f,0.166f,0.2165f,0.148f});
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01888425f,-0.00048546f,-0.02673f,0.02574f,-0.00380556f,-0.00636525f,0.007992f,0.00138942f,-0.0362025f,-0.0195975f,-0.00000279f,-0.026685f,-0.0253125f,-0.00250542f,-0.0119025f,-0.01702125f,-0.00196137f,0.01264725f,0.0011925f,-0.00084258f,0.0186795f,0.01707525f,-0.00244683f,0.01269675f,0.001647f,-0.0304389f,0.02226825f,0.0230625f,-0.0364932f,0.01236825f,-0.02014875f,-0.0385857f,0.01298025f,-0.0058995f,-0.0413199f,-0.042525f,-0.023265f,-0.0376929f,-0.030825f,0.0229275f,-0.0376929f,-0.031815f,0.007767f,-0.01427085f,-0.037845f,0.02074275f,-0.01469214f,-0.02835f,-0.017901f,-0.01356498f,-0.02799f,-0.029475f,-0.0280953f,-0.00175275f,-0.016137f,-0.01812384f,0.01304325f,0.0005265f,-0.01453311f,0.01937925f,0.01824975f,-0.01602018f,0.01307475f,0.028485f,-0.018135f,-0.00858375f,-0.0250875f,-0.00302157f,-0.00114075f,-0.02646f,-0.0460908f,-0.01491075f,-0.026055f,-0.0462861f,-0.00322875f,-0.0299475f,-0.02681748f,-0.0132165f,0.011691f,-0.0334242f,0.01910475f,0.00853425f,-0.01525851f,0.01736325f,-0.00914625f,-0.0344565f,0.01941075f,-0.00866025f,-0.01631034f,0.0173475f,-0.00538425f,0.00155682f,-0.03618f,0.0008325f,0.0093744f,-0.007218f,0.0065925f,-0.0412362f,-0.0426375f,-0.00473175f,-0.01390536f,-0.0377775f,0.0299475f,-0.0442773f,-0.0086805f,0.009819f,-0.0564975f,0.015084f,0.00224325f,-0.0531216f,0.01739475f,-0.0059445f,-0.0573345f,0.015282f,-0.01442925f,-0.0615195f,0.0103635f,-0.01940175f,-0.0695826f,-0.00330975f,-0.0197685f,-0.0691362f,-0.013689f,-0.0172485f,-0.0594828f,-0.0268425f,-0.003114f,-0.0634167f,-0.03627f,0.00527625f,-0.0635841f,-0.0363375f,0.01844325f,-0.0601524f,-0.02763f,0.024525f,-0.0680202f,-0.007659f,0.01870425f,-0.0598455f,0.00988875f});
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
private class MFVec2f141 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f,0.0879f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2271f,0.0958f,0.2224f,0.1067f,0.2032f,0.149f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.227f,0.1089f,0.2165f,0.148f,0.2217f,0.1285f,0.2407f,0.0951f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.21f,0.1541f,0.2053f,0.1595f,0.2032f,0.149f,0.2132f,0.1285f,0.2224f,0.1067f,0.2314f,0.0879f,0.2271f,0.0958f,0.2197f,0.1123f,0.2163f,0.1174f,0.2104f,0.1443f,0.227f,0.1089f,0.2217f,0.1285f,0.2165f,0.148f,0.2129f,0.1643f,0.2171f,0.1588f,0.2178f,0.1526f,0.2213f,0.1179f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2271f,0.0958f,0.2271f,0.0958f,0.2314f,0.0879f});
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.020187f,0.02244555f,0.015273f,0.015471f,-0.0288486f,0.0096525f,0.01847925f,0.00010323f,0.0092205f,0.01220175f,-0.0389484f,0.01282275f,-0.01949175f,-0.041013f,0.0153675f,-0.00893475f,0.0330336f,0.01449675f,0.015237f,0.01856745f,0.01163925f,0.00267075f,0.0293508f,0.01615275f,-0.008703f,-0.0414315f,0.014472f,0.00310725f,-0.0412641f,0.0163035f,-0.008865f,0.0421569f,0.0069525f,0.012546f,0.0361026f,-0.0029475f,0.001179f,0.0391716f,0.003789f,-0.019656f,0.0381114f,0.004095f,0.014112f,-0.0411804f,-0.003051f,-0.020025f,-0.0421569f,-0.00332325f,-0.00342225f,-0.042129f,-0.001908f,0.017298f,-0.0296856f,-0.0036315f,0.020187f,-0.00037107f,-0.003717f,0.01367325f,-0.02748429f,0.0177795f,0.01657575f,-0.00632772f,0.01735875f,0.0136665f,0.0063333f,0.0197325f,0.002268f,0.01376586f,0.0240975f,-0.0077535f,0.01616247f,0.02223675f,-0.017028f,0.00956133f,0.02277f,-0.01638f,-0.0350424f,0.02286f,-0.00803925f,-0.0352935f,0.02228625f,0.00348975f,-0.0351819f,0.024165f,0.0110835f,-0.0337032f,0.02086425f,-0.00978525f,0.0370233f,-0.00663525f,-0.0011025f,0.0344565f,-0.00963225f,0.00749475f,0.0322245f,-0.016029f,0.01420425f,0.00032085f,-0.01639575f,0.011502f,-0.0272304f,-0.01621125f,0.00959625f,-0.0342891f,-0.01546425f,-0.00462375f,-0.0350424f,-0.0146475f,-0.0162855f,-0.0349587f,-0.01656f,-0.015939f,0.0349587f,-0.009837f,-0.0289125f,0.01792854f,0.010395f,-0.028485f,0.02492586f,0.0022635f,-0.0256275f,0.0308574f,-0.006651f,-0.0259425f,-0.0317223f,-0.0126675f,-0.0288f,-0.0370233f,-0.0029115f,-0.0283725f,-0.0359631f,0.0118845f,-0.026595f,-0.0377208f,0.01888425f,-0.027135f,0.00725679f,0.018792f});
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
private class MFVec2f145 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f,0.1355f,0.2132f,0.1171f,0.1958f,0.1447f,0.1899f,0.1499f,0.2047f,0.1286f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2032f,0.149f,0.2132f,0.1285f,0.2163f,0.1174f,0.2047f,0.1286f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1171f,0.2059f,0.1148f,0.1953f,0.1244f,0.1858f,0.1369f,0.1864f,0.1452f,0.1825f,0.1473f,0.1953f,0.1244f,0.1953f,0.1244f,0.2059f,0.1148f,0.2059f,0.1148f});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00001575f,-0.0309411f,0.00956925f,0.00594675f,-0.0214551f,0.010161f,0.006975f,0.00699732f,0.008919f,-0.0067905f,0.02550618f,0.0108f,-0.006723f,-0.0347913f,0.01055925f,0.0104715f,0.00498573f,0.0242325f,0.00677925f,-0.0308853f,0.02493f,0.01165725f,-0.02098359f,0.023355f,-0.00548775f,0.01546776f,0.0267075f,-0.00554625f,-0.0349587f,0.0270225f,0.004518f,-0.02288079f,-0.00387675f,0.00752625f,0.00606546f,-0.0043065f,0.0012465f,-0.0330057f,-0.0007065f,0.004284f,0.02452689f,-0.00189f,-0.00828225f,0.0353214f,0.0026235f,-0.00784575f,-0.0353214f,0.0027765f,-0.01261575f,0.022599f,0.0097695f,-0.01341675f,0.02709369f,0.00604125f,-0.013032f,-0.0316386f,0.00616275f,-0.0123615f,-0.0313038f,0.01110375f,-0.011385f,-0.0314433f,0.024795f,-0.01132425f,0.01329435f,0.0245025f,0.005454f,-0.0273978f,0.033075f,0.009432f,-0.02026377f,0.03168f,0.008379f,0.00027342f,0.0325125f,-0.005607f,0.00836721f,0.0348525f,-0.00893925f,0.00723726f,0.033255f,-0.0089955f,-0.028458f,0.0335025f,-0.005202f,-0.0305226f,0.035145f});
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
private class MFVec2f149 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f,0.1457f,0.1567f,0.1378f,0.1506f,0.1431f,0.1539f,0.1386f,0.1751f,0.1447f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1689f,0.1382f,0.1638f,0.1444f,0.1645f,0.1416f,0.1607f,0.138f,0.1731f,0.1071f,0.1859f,0.1202f,0.175f,0.1048f,0.1985f,0.1126f,0.1682f,0.1025f,0.1699f,0.1017f,0.1795f,0.1136f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.2059f,0.1148f,0.1985f,0.1126f,0.175f,0.1048f,0.1699f,0.1017f,0.1682f,0.1025f,0.1731f,0.1071f,0.1523f,0.1336f,0.1463f,0.1377f,0.1493f,0.1348f,0.1682f,0.1025f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1864f,0.1452f,0.1858f,0.1369f,0.2059f,0.1148f,0.2059f,0.1148f,0.1953f,0.1244f,0.1953f,0.1244f,0.1825f,0.1473f});
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.012645f,-0.02645478f,0.03114f,0.0139905f,0.0065286f,0.0378225f,0.01709325f,-0.0149823f,0.0366525f,0.0110025f,-0.00982359f,0.00403875f,0.0092475f,0.01510785f,0.0070065f,0.01176975f,-0.02420883f,0.0489375f,0.01200375f,0.00229896f,0.04968f,0.01401075f,-0.0149823f,0.0513f,0.00650025f,-0.01986201f,0.0056745f,0.01602225f,-0.01275588f,0.0237375f,0.01284075f,0.01002447f,0.0258975f,0.01196775f,-0.02599164f,0.022266f,-0.00855225f,0.01028115f,0.03663f,-0.0076365f,0.02196009f,0.010089f,-0.0086445f,-0.02645478f,0.0343575f,-0.0068535f,-0.02408607f,0.0076095f,-0.01029825f,0.00463977f,0.0493425f,-0.0103365f,-0.0242172f,0.04851f,-0.00777825f,0.01613457f,0.023985f,0.00774f,0.01597554f,-0.0015795f,0.00404775f,-0.01988991f,-0.0008775f,0.00892575f,-0.00999378f,-0.00244125f,-0.00821925f,0.02645478f,0.00090225f,-0.00827775f,-0.02397447f,0.001215f,-0.013806f,0.01096191f,0.022293f,-0.0137655f,0.01680138f,0.00836775f,-0.01367775f,0.01837773f,0.00511875f,-0.0138825f,-0.01858698f,0.0053685f,-0.0129915f,-0.01862046f,0.00759825f,-0.0147015f,-0.02096127f,0.0340425f,-0.015858f,-0.01937655f,0.044055f,-0.01585575f,0.0008091f,0.04464f,-0.0145485f,0.00512244f,0.03492f,0.007983f,-0.02108961f,0.054f,0.00984825f,-0.01411461f,0.055935f,0.00817875f,-0.00104904f,0.0546075f,-0.01035675f,0.00071982f,0.054315f,-0.014976f,-0.0021762f,0.0504225f,-0.01497825f,-0.01743471f,0.0499275f,-0.0103905f,-0.02109519f,0.0536175f,0.0004095f,-0.00832815f,-0.007542f,-0.00247725f,-0.01427643f,-0.0063495f,-0.01100025f,-0.01705806f,-0.00570375f,-0.01291275f,-0.01503252f,-0.00388575f,-0.0127395f,0.01549566f,-0.004086f,-0.0111015f,0.0186651f,-0.00641475f,-0.00048375f,0.01185471f,-0.0067185f});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1});
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1});
  }
}
private class MFVec2f153 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f,0.1294f,0.142f,0.1322f,0.1446f,0.131f,0.1613f,0.0957f,0.1341f,0.1263f,0.1554f,0.0919f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1392f,0.1292f,0.16f,0.0958f,0.1443f,0.128f,0.1415f,0.1284f,0.1616f,0.0962f,0.1346f,0.0953f,0.1273f,0.0961f,0.126f,0.0891f,0.1339f,0.0889f,0.1175f,0.0992f,0.228f,0.0809f,0.2186f,0.0857f,0.2172f,0.0848f,0.2097f,0.0859f,0.2098f,0.0901f,0.2285f,0.0738f,0.1152f,0.1058f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1682f,0.1025f,0.1699f,0.1017f,0.2293f,0.0837f,0.1648f,0.0986f,0.112f,0.093f,0.1632f,0.098f,0.113f,0.0993f,0.2302f,0.0796f,0.1153f,0.1053f,0.2293f,0.0736f,0.1463f,0.1377f,0.1523f,0.1336f,0.1699f,0.1017f,0.1682f,0.1025f,0.1493f,0.1348f,0.1699f,0.1017f,0.1648f,0.0986f,0.2302f,0.0796f,0.2293f,0.0736f,0.113f,0.0993f,0.112f,0.093f,0.1682f,0.1025f,0.1341f,0.1263f,0.1554f,0.0919f,0.1559f,0.0889f,0.1571f,0.0927f,0.1363f,0.1268f,0.1317f,0.1272f});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01130175f,0.00057474f,0.01175625f,-0.01140525f,0.00945531f,0.0218745f,0.01178775f,0.00989334f,0.02217825f,0.01310175f,-0.00340938f,0.0224055f,0.01130625f,-0.01556541f,0.0214965f,-0.0116685f,-0.01556541f,0.021555f,-0.013086f,-0.00373581f,0.02215575f,0.01133775f,-0.00268677f,0.01186875f,0.01011375f,0.01280052f,0.0095895f,0.00871875f,0.01214487f,0.00541125f,0.0105345f,-0.00405666f,0.00642375f,-0.00998325f,0.01230948f,0.0102915f,-0.0098955f,-0.01287864f,0.01062f,0.009747f,-0.01285353f,0.01026f,0.00821025f,-0.01231785f,0.0048645f,0.00927225f,-0.01328319f,-0.0004815f,0.00950625f,0.01322739f,0.00024975f,0.0115155f,-0.00405666f,0.00186525f,-0.01279575f,0.01556541f,-0.000081f,-0.012834f,-0.01328877f,-0.0009225f,-0.012663f,-0.01230948f,0.005751f,-0.01269225f,0.01254105f,0.00571725f,-0.01275975f,0.00970641f,0.010143f,-0.01310175f,-0.00761391f,0.0104535f,-0.01280475f,0.00140895f,0.0114705f,0.00895275f,-0.0035433f,-0.00364725f,0.0075285f,-0.00954738f,-0.00585225f,-0.00968175f,-0.00956133f,-0.005994f,-0.0096525f,0.01198026f,-0.00535725f,0.00738225f,0.01020303f,-0.0053325f,-0.017019f,-0.00739071f,-0.00074025f,-0.01692f,-0.00682155f,0.0031275f,-0.01717425f,-0.0041013f,0.00585225f,-0.017001f,0.00112995f,0.00644175f,-0.01697625f,0.00593712f,0.00567225f,-0.01693575f,0.00757764f,0.00310725f,-0.0169965f,0.00933255f,-0.000252f,0.0091215f,0.0059985f,0.0272925f,-0.0088965f,0.00565812f,0.0270225f,-0.01011825f,-0.00391158f,0.0273825f,-0.00914175f,-0.01203606f,0.0268425f,0.00878625f,-0.01203327f,0.0267525f,0.010053f,-0.00345681f,0.027585f});
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1});
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1});
  }
}
private class MFVec2f157 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f,0.113f,0.1423f,0.0921f,0.1396f,0.0889f,0.1257f,0.1107f,0.1415f,0.0903f,0.1274f,0.1123f,0.1297f,0.1214f,0.15f,0.0896f,0.1273f,0.1223f,0.1313f,0.1227f,0.1521f,0.0901f,0.1498f,0.0859f,0.0527f,0.151f,0.0282f,0.1325f,0.0446f,0.0894f,0.0746f,0.0899f,0.1016f,0.0977f,0.1554f,0.0919f,0.0779f,0.162f,0.1341f,0.1263f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1554f,0.0919f,0.0779f,0.162f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00774f,0.00759438f,0.01677375f,0.00797625f,0.00795708f,0.0172485f,0.00783f,-0.00243567f,0.02045925f,0.00768825f,-0.01095354f,0.01622475f,-0.007515f,-0.01095354f,0.01563525f,-0.0079335f,-0.00243567f,0.020061f,-0.01067175f,0.00978174f,0.00911475f,0.011529f,0.01022814f,0.0091035f,0.0127575f,-0.00127224f,0.0099675f,0.01131075f,-0.0123318f,0.008964f,-0.01059075f,-0.01228995f,0.00923175f,-0.012528f,-0.00472068f,0.009999f,-0.01141425f,0.01229274f,0.0001845f,0.011781f,0.01273077f,0.0004905f,0.013095f,-0.00057474f,0.00071775f,0.01129725f,-0.01273077f,-0.00019125f,-0.01167525f,-0.01273077f,-0.00013275f,-0.013095f,-0.00089838f,0.000468f,-0.0087795f,0.00871596f,-0.0053235f,0.00913725f,0.00905355f,-0.00506025f,0.01005975f,-0.00032364f,-0.004761f,0.00880425f,-0.00883035f,-0.0055935f,-0.0090225f,-0.00883314f,-0.0054945f,-0.00999f,-0.0007812f,-0.0049635f});
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
private class MFVec2f161 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f,0.1044f,0.2186f,0.1086f,0.2128f,0.1035f,0.2098f,0.0996f,0.2047f,0.1286f,0.2132f,0.1171f,0.1953f,0.1244f,0.2059f,0.1148f,0.2224f,0.1067f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.2132f,0.1285f,0.2047f,0.1286f,0.1953f,0.1244f,0.1953f,0.1244f,0.2132f,0.1171f,0.2163f,0.1174f,0.2098f,0.0996f,0.2179f,0.1044f,0.2224f,0.1067f,0.2224f,0.1067f,0.2186f,0.1086f,0.2128f,0.1035f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2224f,0.1067f,0.2132f,0.1285f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1285f,0.2224f,0.1067f,0.2224f,0.1067f,0.2224f,0.1067f});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0054405f,-0.0367443f,0.0068985f,-0.005895f,0.0298251f,0.00609075f,-0.00539775f,-0.0371628f,0.0172755f,-0.0065025f,0.02081619f,0.0175905f,0.007272f,0.02373732f,0.00776475f,0.0073395f,-0.036549f,0.007524f,0.00857475f,0.0136989f,0.02367f,0.00851625f,-0.0367164f,0.023985f,-0.00582525f,0.0372186f,-0.00206775f,0.00578025f,0.0335358f,-0.00041175f,-0.0055935f,-0.0372186f,-0.00209025f,0.00621675f,-0.0370791f,-0.00025875f,0.01110825f,0.01799271f,0.0017865f,0.01212525f,0.01422621f,0.005634f,0.0133065f,0.00667368f,0.02042325f,0.01323675f,-0.0296856f,0.02070225f,0.012348f,-0.029574f,0.00692325f,0.01152225f,-0.029853f,0.001908f,-0.01318275f,0.01580814f,0.015165f,-0.01258425f,0.02291706f,0.00468675f,-0.0125415f,0.02648547f,0.000144f,-0.01238625f,-0.0304947f,0.0001215f,-0.01219725f,-0.0301878f,0.00678375f,-0.01212075f,-0.0304668f,0.01487475f,0.00573075f,0.00830304f,0.03069f,-0.00843525f,0.01510785f,0.024345f,-0.0105795f,0.01184913f,0.0236025f,-0.00968625f,-0.02704068f,0.023355f,-0.00644175f,-0.0317223f,0.0245025f,0.0059895f,-0.0313317f,0.0315f,0.007965f,-0.02692908f,0.03015f,0.00802125f,0.00331173f,0.029925f,-0.00494325f,0.0333126f,-0.0083025f,0.0046755f,0.0302715f,-0.006804f,0.00879075f,0.01684602f,-0.0052065f,0.00918f,-0.0280395f,-0.005094f,0.00595125f,-0.0334521f,-0.0064035f,-0.0047655f,-0.0335637f,-0.008118f,-0.009198f,-0.0282069f,-0.00667125f,-0.00933975f,0.02478078f,-0.006651f});
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1});
  }
}
private class MFInt32164 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1});
  }
}
private class MFVec2f165 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f,0.1048f,0.1833f,0.0898f,0.1856f,0.0872f,0.1731f,0.1071f,0.1985f,0.1126f,0.2017f,0.0948f,0.1859f,0.1202f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1937f,0.091f,0.1795f,0.1136f,0.2068f,0.0986f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1731f,0.1071f,0.2017f,0.0948f,0.1859f,0.1202f,0.1795f,0.1136f,0.1731f,0.1071f,0.1682f,0.1025f,0.1682f,0.1025f,0.1731f,0.1071f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.1953f,0.1244f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.1856f,0.0872f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
private class MFVec3f166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00846f,0.00700569f,0.0384525f,-0.00755325f,0.02164761f,0.0121455f,0.00701775f,0.00672111f,0.0397575f,0.0079335f,0.01840005f,0.0132165f,0.0069255f,-0.0300204f,0.037485f,-0.0087165f,0.00145638f,0.0508275f,0.00527175f,0.00107973f,0.05247f,0.0052335f,-0.02777724f,0.0516375f,-0.00776475f,0.01434339f,0.0252f,0.00779175f,0.01257453f,0.0271125f,-0.0077265f,0.0300204f,-0.002052f,0.00735075f,0.02289474f,0.00402975f,-0.0074115f,-0.0300204f,0.0362025f,-0.00646875f,-0.0282348f,0.01052775f,0.0087165f,-0.02764611f,0.010737f,-0.00866475f,-0.02774376f,0.0500175f,0.0087165f,-0.02764611f,0.010737f,-0.00662175f,-0.0279558f,-0.002367f,0.00729225f,-0.02753172f,0.0043425f,0.01338075f,0.0137268f,0.012042f,0.01334025f,0.00789012f,0.025965f,0.01258425f,0.00204786f,0.03861f,0.01122975f,-0.00238266f,0.0486f,0.01122525f,-0.02335788f,0.04797f,0.012447f,-0.02500119f,0.037575f,0.0141885f,-0.02266875f,0.0112275f,0.01414125f,-0.02265759f,0.011007f,0.0132075f,-0.02261853f,0.0085095f,0.01339875f,0.01557099f,0.008253f,-0.013554f,0.00360468f,0.03726f,-0.012861f,0.01099539f,0.023895f,-0.01267875f,0.01831635f,0.0108045f,-0.01280025f,0.02433438f,0.0005895f,-0.01188f,-0.02467476f,0.00032175f,-0.011745f,-0.02489796f,0.01047375f,-0.01266525f,-0.02664729f,0.0359325f,-0.01374975f,-0.02481147f,0.047115f,-0.01371375f,-0.00112158f,0.04779f,-0.0084465f,-0.02414466f,0.05436f,0.004347f,-0.02418372f,0.05607f,0.00830925f,-0.02126538f,0.055665f,0.00831375f,-0.00530379f,0.056115f,0.0044415f,-0.00305784f,0.0566325f,-0.00852975f,-0.00270072f,0.054945f,-0.01130175f,-0.00413478f,0.0537975f,-0.011331f,-0.02248182f,0.05328f,-0.005031f,0.02565963f,-0.01033425f,0.00814725f,0.01929285f,-0.00422325f,0.01288575f,0.01362078f,-0.001035f,0.0127125f,-0.02021355f,-0.00080325f,0.00875475f,-0.02349738f,-0.0035775f,-0.003861f,-0.02389077f,-0.01012725f,-0.00684225f,-0.02202147f,-0.00858375f,-0.007677f,0.02242323f,-0.008343f});
  }
}
private class MFInt32167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1});
  }
}
private class MFInt32168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1});
  }
}
private class MFVec2f169 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f,0.0796f,0.2439f,0.0803f,0.2062f,0.05f,0.2147f,0.0491f,0.2302f,0.0796f,0.2205f,0.0532f,0.2301f,0.0734f,0.2486f,0.0743f,0.2013f,0.0552f,0.2187f,0.0481f,0.221f,0.0541f,0.2293f,0.0736f,0.1746f,0.075f,0.1709f,0.0678f,0.1706f,0.0686f,0.1745f,0.076f,0.1824f,0.0523f,0.1886f,0.0572f,0.183f,0.0511f,0.1834f,0.0508f,0.1882f,0.0556f,0.1885f,0.0566f,0.1716f,0.0676f,0.1748f,0.0736f,0.2444f,0.0847f,0.2027f,0.042f,0.2022f,0.0485f,0.2464f,0.0799f,0.2486f,0.0741f,0.2011f,0.0554f,0.2293f,0.0837f,0.2177f,0.0418f,0.1769f,0.0796f,0.1648f,0.0986f,0.1632f,0.098f,0.1766f,0.0777f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.2022f,0.0485f,0.2027f,0.042f,0.1811f,0.0824f,0.1801f,0.0847f,0.1769f,0.0796f,0.2464f,0.0799f,0.2486f,0.0741f,0.1632f,0.098f,0.2187f,0.0481f,0.221f,0.0541f,0.2302f,0.0796f,0.2293f,0.0837f,0.1699f,0.1017f,0.1682f,0.1025f});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00763425f,0.00902286f,0.00594f,0.00729225f,-0.00829746f,0.0062505f,0.00758925f,0.0007254f,0.0072675f,0.0062505f,-0.00109647f,0.00726075f,0.005454f,-0.0051057f,0.01727775f,0.004437f,-0.01525851f,0.016902f,0.00542025f,-0.01237644f,0.0061155f,-0.006102f,-0.01510506f,0.015516f,-0.00520425f,-0.01256337f,0.00484425f,-0.00741375f,-0.00361584f,0.0158805f,-0.00617625f,0.00984033f,0.01557225f,-0.00526275f,0.01166778f,0.00470925f,-0.00675675f,-0.0020925f,0.00569475f,0.00459f,0.01020303f,0.016884f,0.005067f,0.01150317f,0.00584775f,-0.007587f,0.00907587f,0.003942f,-0.0076185f,-0.00872712f,0.004077f,-0.007731f,0.00005022f,0.00530775f,-0.006624f,-0.01305162f,-0.0004725f,-0.00682875f,0.01168173f,-0.0009045f,0.007731f,-0.01299024f,0.00155025f,0.00770175f,0.0118575f,0.00151425f,-0.00633825f,-0.01393884f,-0.00673875f,-0.00638775f,0.01525851f,-0.0059355f,0.00759825f,0.01488186f,-0.004284f,0.00756f,-0.01397232f,-0.0051255f,0.00556425f,-0.01040391f,-0.01095525f,-0.00302625f,-0.01038159f,-0.01194525f,-0.0030645f,0.01211418f,-0.01132875f,0.0055935f,0.01187982f,-0.0103005f,-0.01179225f,0.00694989f,-0.00029925f,-0.01127925f,0.00900054f,-0.00412875f,-0.011097f,0.01023651f,-0.0058635f,-0.011097f,-0.01065501f,-0.00644175f,-0.01107675f,-0.01024488f,-0.00354375f,-0.01183275f,-0.00710334f,-0.00024525f,-0.0118935f,-0.00000279f,0.000756f,0.012465f,0.00898938f,-0.00096525f,0.01247175f,0.00690525f,0.0022905f,0.012456f,0.00061101f,0.0032985f,0.01216575f,-0.00665694f,0.00247725f,0.01253475f,-0.01000494f,-0.00087525f,0.01237725f,-0.01045134f,-0.00389925f,0.01241325f,0.01020861f,-0.00329625f});
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
private class MFInt32172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
private class MFVec2f173 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f,0.0949f,0.0775f,0.1651f,0.0639f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
private class MFVec3f174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00716175f,-0.01308789f,0.0101025f,0.00780075f,-0.00272583f,0.01039275f,-0.006813f,-0.01308789f,0.0085545f,-0.00780075f,-0.00272583f,0.008532f,-0.0066555f,0.00545445f,0.00858375f,0.006588f,0.00609336f,0.0101745f,0.0072315f,-0.00222084f,0.0011025f,0.00621675f,-0.01237365f,0.00072675f,-0.00432225f,-0.01221741f,-0.00065925f,-0.00563625f,-0.00073098f,-0.00029475f,-0.00439875f,0.01272798f,-0.000603f,0.00636975f,0.01308789f,0.00070875f,0.006138f,-0.00215946f,-0.0041085f,0.0053325f,-0.01026162f,-0.0044595f,-0.00227475f,-0.01014723f,-0.0055035f,-0.003366f,-0.0006975f,-0.005112f,-0.00231075f,0.01069407f,-0.00544275f,0.0054045f,0.01095354f,-0.00448875f,0.003681f,-0.00893637f,0.0130995f,0.00404325f,-0.00293787f,0.01334025f,0.003402f,0.00176049f,0.0131715f,-0.00421425f,0.00139221f,0.0122445f,-0.004815f,-0.00285975f,0.0122715f,-0.0042345f,-0.00893637f,0.01226475f});
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
private class MFInt32176 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
private class MFVec2f177 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1638f,0.0538f,0.174f,0.0396f,0.1747f,0.0423f,0.1756f,0.0403f,0.1632f,0.0573f,0.066f,0.0493f,0.0915f,0.0082f,0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
private class MFVec3f178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.004788f,-0.00739908f,0.00733725f,0.00468225f,-0.0007812f,0.009396f,-0.00655425f,-0.0007812f,0.00803475f,-0.005112f,-0.00739908f,0.0059985f,-0.00587025f,0.00609615f,0.00668925f,0.00446625f,0.00645327f,0.0082035f,0.00716175f,-0.00959202f,0.00066375f,0.00780075f,0.00077283f,0.00095625f,-0.006813f,-0.00959202f,-0.000882f,-0.00780075f,0.00077283f,-0.0009045f,-0.0066555f,0.00895311f,-0.00085275f,0.006588f,0.00959202f,0.00073575f,0.0057645f,0.00065565f,-0.00352125f,0.00533475f,-0.00643374f,-0.00377325f,-0.004095f,-0.00643374f,-0.00478575f,-0.00477675f,0.00071424f,-0.00478575f,-0.004041f,0.00594828f,-0.00479475f,0.0049815f,0.00638352f,-0.00370125f});
  }
}
private class MFInt32179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1});
  }
}
private class MFInt32180 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1});
  }
}
private class MFVec2f181 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f,0.0828f,0.2197f,0.0903f,0.2186f,0.1086f,0.2179f,0.1044f,0.2314f,0.0879f,0.2128f,0.1035f,0.2098f,0.0996f,0.2271f,0.0958f,0.2224f,0.1067f,0.2197f,0.1123f,0.2224f,0.1067f,0.2314f,0.0879f,0.2226f,0.0828f,0.2314f,0.0879f,0.2314f,0.0879f,0.2197f,0.0903f,0.2179f,0.1044f,0.2098f,0.0996f,0.2098f,0.0996f,0.2186f,0.1086f,0.2197f,0.1123f,0.2224f,0.1067f,0.2098f,0.0996f,0.2226f,0.0828f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00706725f,0.01710828f,0.01984275f,-0.005418f,-0.037386f,0.0196695f,0.00611775f,-0.0366048f,0.0085095f,0.00566325f,0.0299925f,0.00770175f,-0.00551925f,0.02679516f,0.0003195f,0.0061605f,-0.0369954f,0.01888425f,0.00505575f,0.02097243f,0.0192015f,-0.004824f,-0.0366606f,0.000414f,0.005733f,0.037386f,-0.00045675f,0.00596475f,-0.0370791f,-0.0004815f,-0.01248975f,0.0111042f,0.01667025f,-0.01122975f,0.01751841f,0.00281025f,-0.01070325f,-0.0335916f,0.00288675f,-0.010962f,-0.0340659f,0.01652175f,0.0107595f,0.02760705f,0.0064395f,0.01020825f,0.01942119f,0.0168885f,0.01125225f,-0.0338985f,0.0166005f,0.01114875f,-0.0335916f,0.0085725f,0.01101375f,-0.0339264f,0.00197775f,0.01082475f,0.0316386f,0.001998f,0.00515925f,0.01299861f,0.02718f,-0.006399f,0.00975663f,0.0278775f,-0.01032525f,0.00514197f,0.02574f,-0.0089235f,-0.031248f,0.025605f,-0.004995f,-0.0330615f,0.0278325f,0.0057015f,-0.0327546f,0.0269775f,0.009081f,-0.0309411f,0.02547f,0.00812025f,0.01220346f,0.02574f});
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1});
  }
}
private class MFInt32184 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1});
  }
}
private class MFVec2f185 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f,0.0629f,0.1801f,0.0847f,0.1811f,0.0824f,0.1937f,0.091f,0.2128f,0.1035f,0.2098f,0.0996f,0.2197f,0.0903f,0.2138f,0.0778f,0.1989f,0.0701f,0.1984f,0.068f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.1937f,0.091f,0.2068f,0.0986f,0.2138f,0.0778f,0.2061f,0.0729f,0.2061f,0.0729f,0.1989f,0.0701f,0.1984f,0.068f,0.1952f,0.0651f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.2017f,0.0948f,0.2017f,0.0948f,0.2226f,0.0828f,0.2138f,0.0778f,0.1937f,0.091f,0.1811f,0.0824f,0.1856f,0.0872f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.2017f,0.0948f,0.1937f,0.091f,0.1937f,0.091f,0.1856f,0.0872f,0.1856f,0.0872f,0.1811f,0.0824f,0.2061f,0.0729f,0.2061f,0.0729f,0.2138f,0.0778f,0.2138f,0.0778f,0.2226f,0.0828f,0.2226f,0.0828f,0.2138f,0.0778f,0.2138f,0.0778f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.1811f,0.0824f,0.1801f,0.0847f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0079065f,0.00024552f,0.0492525f,0.00573975f,-0.02774376f,0.0516825f,0.005688f,0.00145638f,0.0524925f,0.00663975f,0.01434339f,0.026865f,0.00778275f,-0.0279558f,-0.000702f,0.006678f,0.0300204f,-0.00038475f,-0.00531f,-0.0300204f,0.0359325f,-0.006714f,0.00598734f,0.037935f,-0.0049095f,-0.0287928f,0.01025775f,0.006993f,-0.0300204f,0.0378675f,0.0059445f,0.00700569f,0.0401175f,-0.003798f,-0.0283464f,0.00008325f,-0.00577575f,0.01953558f,0.0117945f,-0.005994f,0.01276146f,0.0248625f,-0.00799875f,-0.02776329f,0.0483075f,0.00685125f,0.02164761f,0.01381275f,-0.00544725f,0.02615067f,0.0002565f,0.00793575f,-0.0282348f,0.01219275f,0.01024875f,-0.02520486f,0.04968f,0.01136925f,-0.02713554f,0.0379125f,0.01229175f,-0.02538342f,0.01240425f,0.0121545f,-0.02514627f,0.00165375f,0.01119375f,0.02582424f,0.00193275f,0.0113265f,0.01929285f,0.01301625f,0.0111375f,0.01197468f,0.0261f,0.0104445f,0.00459513f,0.0394425f,0.0102645f,-0.00031248f,0.050355f,-0.01050975f,0.00936324f,0.0220005f,-0.010269f,0.01616526f,0.00888075f,-0.010143f,0.0205065f,0.00129375f,-0.008703f,-0.02508768f,0.00115425f,-0.00961425f,-0.0254169f,0.0085815f,-0.00996075f,-0.02663055f,0.0339975f,-0.01220625f,-0.02484216f,0.04383f,-0.01201725f,-0.00222921f,0.044595f,-0.0111645f,0.00258354f,0.0351f,-0.00909f,-0.02434833f,0.0523575f,0.0038565f,-0.02433438f,0.05562f,0.00636975f,-0.02320722f,0.0556425f,0.00638325f,-0.00313875f,0.0561825f,0.0040365f,-0.00254448f,0.056205f,-0.008883f,-0.00366327f,0.053145f,-0.0115875f,-0.00498294f,0.052155f,-0.0117405f,-0.02279988f,0.0515475f,-0.00415125f,0.02358666f,-0.0053055f,0.00651375f,0.02699325f,-0.00614475f,0.009333f,0.02430369f,-0.00452025f,0.01023075f,-0.02328534f,-0.004779f,0.0074565f,-0.02507373f,-0.00627525f,-0.003114f,-0.02541969f,-0.00539775f,-0.00633825f,-0.02327976f,-0.00469575f,-0.007686f,0.01935144f,-0.0045675f});
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1});
  }
}
private class MFInt32188 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1});
  }
}
private class MFVec2f189 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f,0.0686f,0.1709f,0.0678f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1716f,0.0676f,0.1882f,0.0556f,0.1745f,0.076f,0.1748f,0.0736f,0.1886f,0.0572f,0.2327f,0.0796f,0.2439f,0.0803f,0.2076f,0.0485f,0.2162f,0.0476f,0.2201f,0.0466f,0.2302f,0.0796f,0.2219f,0.0517f,0.2301f,0.0734f,0.2486f,0.0743f,0.2027f,0.0537f,0.2224f,0.0526f,0.2293f,0.0736f,0.1746f,0.075f,0.1885f,0.0566f,0.1801f,0.0847f,0.1811f,0.0824f,0.1952f,0.0651f,0.195f,0.0629f,0.2293f,0.0837f,0.1769f,0.0796f,0.2191f,0.0403f,0.1766f,0.0777f,0.2037f,0.047f,0.2486f,0.0741f,0.2026f,0.0539f,0.2444f,0.0847f,0.1915f,0.0602f,0.2041f,0.0405f,0.1915f,0.0578f,0.2464f,0.0799f,0.1801f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1811f,0.0824f,0.1952f,0.0651f,0.1915f,0.0602f,0.2464f,0.0799f,0.2486f,0.0741f,0.2037f,0.047f,0.2041f,0.0405f,0.195f,0.0629f,0.1766f,0.0777f,0.2201f,0.0466f,0.2224f,0.0526f,0.2302f,0.0796f,0.2293f,0.0837f,0.1801f,0.0847f,0.1811f,0.0824f});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035865f,-0.00371628f,0.01654425f,0.00243675f,-0.01515807f,0.0158625f,-0.006633f,-0.0149823f,0.0138645f,-0.00811575f,-0.00371628f,0.01366875f,-0.00715275f,0.00794313f,0.013716f,0.0025515f,0.00830304f,0.0159885f,-0.00519075f,0.01068849f,0.0037305f,0.00379575f,-0.01313253f,0.00619425f,0.00378675f,0.01106793f,0.005985f,-0.00481725f,-0.01331388f,0.003771f,0.006363f,0.00897543f,0.00635625f,0.0063315f,-0.00882756f,0.0064935f,0.006219f,-0.00005022f,0.007722f,0.0049365f,-0.00184419f,0.00778725f,-0.00671175f,-0.00277326f,0.005058f,0.00761175f,-0.01403928f,-0.0043245f,0.00756225f,0.01515807f,-0.003519f,-0.00612675f,-0.01405881f,-0.00769725f,-0.0060345f,0.01394721f,-0.00675675f,0.007326f,-0.01315206f,0.001944f,0.00712125f,0.01158129f,0.00150975f,-0.0074565f,0.00922932f,0.00315675f,-0.007623f,-0.00027342f,0.00463725f,-0.006696f,-0.01311579f,-0.0016785f,-0.006453f,0.01097865f,-0.0022185f,-0.007353f,-0.01210302f,0.00319725f,0.0061065f,-0.01029789f,-0.0100845f,-0.00211275f,-0.01030905f,-0.01212975f,-0.0020475f,0.01092006f,-0.01140075f,0.00607275f,0.01164546f,-0.009495f,-0.01062225f,-0.00740466f,-0.00639675f,-0.01090575f,-0.00693315f,-0.0033975f,-0.01123425f,-0.00642816f,-0.00096525f,-0.011367f,-0.00053289f,-0.0002475f,-0.01128375f,0.00420453f,-0.0009855001f,-0.01078425f,0.0050778f,-0.00366525f,-0.010575f,0.0065565f,-0.0059265f,0.01120725f,0.00911493f,-0.0000225f,0.01064925f,0.00704196f,0.00384075f,0.01054125f,-0.0000558f,0.00491625f,0.0106155f,-0.00713961f,0.0039195f,0.01139175f,-0.01043739f,0.0004545f,0.01148625f,-0.01098702f,-0.00341775f,0.01146825f,0.01109583f,-0.002808f});
  }
}
private class MFInt32191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
private class MFInt32192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
private class MFVec2f193 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1651f,0.0639f,0.1293f,0.0261f,0.0949f,0.0775f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00593775f,-0.00182466f,0.01074375f,0.0051615f,-0.01218951f,0.01020825f,-0.00803025f,-0.01218951f,0.0074565f,-0.00902475f,-0.00182466f,0.00741375f,-0.00801f,0.00635562f,0.00753525f,0.0049005f,0.00699174f,0.0100215f,0.005985f,0.00017019f,0.00147375f,0.00483525f,-0.0112716f,0.000792f,-0.0042345f,-0.01109583f,-0.001206f,-0.0057195f,0.00017019f,-0.001404f,-0.00475425f,0.0118296f,-0.0013545f,0.00495f,0.01218951f,0.00091575f,0.00504225f,0.00020367f,-0.0027f,0.004176f,-0.0086211f,-0.003312f,-0.00137025f,-0.00851508f,-0.004473f,-0.0025335f,0.00025668f,-0.00459675f,-0.00177525f,0.00929349f,-0.004599f,0.004257f,0.00951948f,-0.00320175f,0.001494f,-0.00801009f,0.01286325f,0.001917f,-0.00194184f,0.013329f,0.00141975f,0.00268398f,0.01272825f,-0.0058725f,0.00232407f,0.011439f,-0.0064035f,-0.00189441f,0.01141425f,-0.00580275f,-0.00801009f,0.011367f});
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1});
  }
}
private class MFInt32196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
private class MFVec2f197 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1747f,0.0423f,0.174f,0.0396f,0.1638f,0.0538f,0.1756f,0.0403f,0.1632f,0.0573f,0.0915f,0.0082f,0.066f,0.0493f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.003492f,-0.0007812f,0.0085905f,0.003735f,-0.00739908f,0.00668925f,-0.0047835f,-0.00739908f,0.00477675f,-0.00618525f,-0.0007812f,0.00656775f,-0.00549225f,0.00609615f,0.00536625f,0.00339075f,0.00645327f,0.00747f,0.00748125f,0.00077283f,0.00153675f,0.006705f,-0.00959202f,0.00100125f,-0.00648675f,-0.00959202f,-0.0017505f,-0.00748125f,0.00077283f,-0.00179325f,-0.0064665f,0.00895311f,-0.00167175f,0.006444f,0.00959202f,0.0008145f,0.005868f,0.00067239f,-0.0031095f,0.00535725f,-0.00646722f,-0.00359325f,-0.00341325f,-0.00646722f,-0.00540225f,-0.004113f,0.00070866f,-0.0053775f,-0.0034605f,0.00591759f,-0.00533025f,0.00523575f,0.00634725f,-0.00374175f});
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
private class MFInt32200 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
private class MFVec2f201 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f,0.0964f,0.2768f,0.1211f,0.2792f,0.1228f,0.2886f,0.0939f,0.2493f,0.1586f,0.2252f,0.161f,0.2241f,0.1634f,0.2489f,0.1638f,0.2727f,0.0786f,0.2746f,0.076f,0.2809f,0.1238f,0.2914f,0.0926f,0.2206f,0.1691f,0.249f,0.1672f,0.2762f,0.0729f,0.2769f,0.1234f,0.2869f,0.0933f,0.2461f,0.1652f,0.2661f,0.1399f,0.2685f,0.1417f,0.27f,0.1429f,0.2661f,0.1424f,0.24f,0.098f,0.2266f,0.1229f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2759f,0.0832f,0.2685f,0.0797f,0.2623f,0.1418f,0.2231f,0.166f,0.273f,0.1232f,0.2824f,0.0941f,0.2759f,0.0832f,0.2685f,0.0797f,0.2533f,0.0835f,0.2165f,0.148f,0.2231f,0.166f,0.2433f,0.1632f,0.2623f,0.1418f,0.2665f,0.0671f,0.2628f,0.0703f,0.2363f,0.0929f,0.2213f,0.1179f,0.2178f,0.1526f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.2664f,0.0668f});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.02246625f,-0.0695547f,-0.01966275f,-0.007749f,-0.0695547f,-0.0302625f,-0.00761625f,-0.0578646f,-0.0345825f,-0.0249075f,-0.0578646f,-0.0229275f,0.0191295f,-0.0695547f,-0.02045925f,0.0273375f,-0.0695268f,0.007839f,0.02889f,-0.0578646f,0.00734175f,0.02185875f,-0.0578646f,-0.0237825f,-0.028035f,-0.0695268f,0.00784125f,-0.0298575f,-0.0578646f,0.00734175f,-0.007614f,-0.0326151f,-0.037305f,-0.026415f,-0.0316107f,-0.0254925f,0.031905f,-0.02765448f,0.007596f,0.0235575f,-0.0329499f,-0.0263475f,-0.03186f,-0.03069f,0.007596f,-0.006633f,-0.01295676f,-0.03276f,-0.024705f,-0.01326645f,-0.02082375f,0.0233775f,-0.01366542f,-0.02184525f,0.004806f,-0.0695547f,-0.03042f,0.0050445f,-0.0578646f,-0.0347175f,0.00520875f,-0.0329499f,-0.03744f,0.00605925f,-0.01306836f,-0.032895f,-0.0067815f,-0.0695268f,0.00784125f,0.0095445f,-0.0695268f,0.00784125f,-0.029205f,-0.0676017f,0.0252675f,-0.031905f,-0.0576693f,0.0248175f,-0.0314325f,-0.0316386f,0.0245475f,0.024885f,-0.0673227f,0.027765f,-0.009243f,-0.0682992f,0.027495f,0.0073575f,-0.0682713f,0.0289125f,0.02808f,-0.0558279f,0.02718f,0.03096f,-0.02651337f,0.0271125f,0.0233325f,0.00995472f,0.0278775f,-0.0198765f,0.00786222f,0.028485f,-0.00562725f,0.00513918f,-0.0270225f,-0.022995f,0.00876339f,-0.01532925f,0.0231975f,0.00876339f,-0.01631025f,-0.02619f,0.00036828f,0.00059625f,-0.025785f,0.00015903f,0.01227825f,0.00686475f,0.00520614f,-0.027135f,0.0302175f,0.00217899f,0.00682425f,-0.004482f,0.02051487f,-0.01984275f,-0.0189315f,0.0241893f,-0.010143f,-0.02155725f,0.01572165f,0.003204f,-0.02120175f,0.01545381f,0.0134325f,-0.01681875f,0.02293659f,0.0255375f,0.01918125f,0.02471661f,0.02502f,0.0245025f,0.01706085f,0.00893475f,0.01845225f,0.02380986f,-0.01096425f,0.00492975f,0.02044791f,-0.019917f,-0.02853f,-0.0557442f,0.0322425f,-0.0267975f,-0.0615474f,0.0321525f,-0.00935325f,-0.0620496f,0.0342675f,0.0070695f,-0.0620217f,0.035685f,0.022095f,-0.0613242f,0.0344475f,0.0243675f,-0.0537912f,0.0343125f,0.0271125f,-0.028179f,0.034335f,0.020376f,0.00121365f,0.03492f,-0.01754775f,-0.00047709f,0.0356175f,-0.02808f,-0.0333405f,0.03195f});
  }
}
private class MFInt32203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
private class MFInt32204 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
private class MFVec2f205 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f,0.0622f,0.2585f,0.0581f,0.2383f,0.0796f,0.2566f,0.0607f,0.243f,0.0749f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2533f,0.0835f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2271f,0.0958f,0.2197f,0.0903f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2197f,0.0903f,0.2271f,0.0958f,0.2363f,0.0929f,0.2533f,0.0835f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2469f,0.052f,0.2292f,0.0691f,0.2197f,0.0903f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f,0.2342f,0.0682f,0.2484f,0.051f,0.2512f,0.047f});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00883575f,-0.0375255f,0.0146295f,-0.01240425f,-0.0293508f,0.0105075f,-0.00946125f,-0.0044361f,0.01343925f,0.00477f,-0.0388089f,0.0179865f,0.00046575f,0.01448289f,0.0166545f,-0.01395f,-0.0387531f,0.0306f,-0.0175815f,-0.0296856f,0.0288f,-0.0141525f,-0.00709776f,0.030735f,-0.00119475f,-0.0401202f,0.0341325f,-0.001926f,0.00583668f,0.0344925f,0.00166725f,0.0360189f,0.00043875f,0.0126675f,0.0401481f,0.00686925f,0.01213875f,0.02446272f,0.01804725f,0.01059075f,0.01477584f,0.037575f,0.012834f,-0.0390042f,0.01814175f,0.01224f,-0.0397017f,0.037395f,-0.00766125f,-0.0394506f,-0.00279f,-0.0103635f,-0.0295182f,-0.0032265f,-0.00989325f,-0.00349029f,-0.0035055f,0.01230075f,-0.0401481f,-0.00054675f,0.02236725f,0.02746197f,0.01043325f,0.02192175f,0.02001825f,0.015741f,0.02060325f,0.01123812f,0.0334575f,0.02206575f,-0.0338985f,0.0333225f,0.0224415f,-0.0333405f,0.0184005f,0.0219555f,-0.0341775f,0.0047385f,0.0084645f,0.0328941f,-0.010008f,0.0156375f,0.0356004f,-0.005157f,0.0226125f,0.02650221f,-0.00261f,0.02223f,-0.0299088f,-0.007821f,0.01535175f,-0.0341775f,-0.01173375f,-0.001071f,-0.0336474f,-0.0129285f,-0.00266175f,-0.02777724f,-0.01321875f,-0.002196f,-0.00348192f,-0.013572f,-0.0124875f,-0.037665f,0.0403875f,-0.00213525f,-0.0387531f,0.0432675f,0.01031175f,-0.0383904f,0.0468f,0.01701675f,-0.0306621f,0.0439875f,0.015795f,0.00707823f,0.0441f,0.010125f,0.0046314f,0.0471825f,-0.0006705f,-0.00300204f,0.0441225f,-0.01151325f,-0.01427364f,0.04077f,-0.01435275f,-0.0328383f,0.0390375f});
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1});
  }
}
private class MFInt32208 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1});
  }
}
private class MFVec2f209 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f,0.0481f,0.2254f,0.0615f,0.2142f,0.0508f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.1989f,0.0701f,0.1984f,0.068f,0.2138f,0.0778f,0.1952f,0.0651f,0.195f,0.0629f,0.2061f,0.0729f,0.2292f,0.0691f,0.2342f,0.0682f,0.2226f,0.0828f,0.2129f,0.0844f,0.2197f,0.0903f,0.2254f,0.0615f,0.2061f,0.0729f,0.2138f,0.0778f,0.2061f,0.0729f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.2061f,0.0729f,0.2226f,0.0828f,0.2226f,0.0828f,0.2186f,0.0548f,0.2254f,0.0615f,0.2342f,0.0682f,0.2342f,0.0682f,0.2254f,0.0615f,0.2117f,0.0481f,0.2083f,0.0443f,0.2083f,0.0443f,0.2117f,0.0481f,0.2083f,0.0443f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2083f,0.0443f,0.2083f,0.0443f,0.2083f,0.0443f,0.2226f,0.0828f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2226f,0.0828f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
private class MFVec3f210 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.009675f,0.00566928f,0.03618f,-0.00767475f,0.01331109f,0.00945675f,-0.0092475f,0.00038781f,0.0467775f,-0.00905175f,0.00939393f,0.02286f,0.00518625f,0.00791802f,0.0389025f,0.00612675f,0.02146905f,0.01275975f,0.00399375f,0.0021762f,0.05022f,0.00590625f,0.01469493f,0.02583f,-0.0060615f,0.01914219f,-0.00186525f,0.00645525f,0.0280953f,0.00122175f,-0.007578f,-0.0280953f,0.031725f,-0.006687f,-0.02746476f,0.007839f,-0.00997425f,-0.02468871f,0.04581f,-0.00533025f,-0.02682585f,-0.00222075f,0.00659025f,-0.0280953f,0.0369f,0.0039015f,-0.02582982f,0.049275f,0.006993f,-0.02685375f,0.01122075f,0.0081045f,-0.02640735f,0.0010485f,0.011754f,0.01710549f,0.0115605f,0.01150425f,0.0102951f,0.024705f,0.01087875f,0.00350982f,0.0378f,0.01016325f,-0.00091512f,0.046575f,0.009936f,-0.02129607f,0.045855f,0.011997f,-0.02289195f,0.03708f,0.012321f,-0.02168388f,0.0117765f,0.013149f,-0.02140209f,0.00548775f,0.01179675f,0.0205065f,0.00561375f,-0.01406475f,0.00424917f,0.01966725f,-0.0126855f,0.00789291f,0.00639f,-0.011556f,0.01153386f,-0.0011205f,-0.0109755f,-0.0227385f,-0.00140625f,-0.011997f,-0.02316537f,0.005733f,-0.0128565f,-0.02372058f,0.028665f,-0.01498275f,-0.02115936f,0.0399825f,-0.01415925f,-0.00298809f,0.040725f,-0.014688f,0.00089559f,0.0324225f,-0.0102015f,-0.02089431f,0.0501075f,0.0025965f,-0.02194335f,0.0537075f,0.00650925f,-0.01924821f,0.053415f,0.006687f,-0.00395343f,0.053955f,0.00292725f,-0.00231291f,0.054315f,-0.00937575f,-0.00392832f,0.0509175f,-0.0124065f,-0.00582831f,0.0480375f,-0.01301625f,-0.01899432f,0.0474975f,0.00915075f,-0.02221677f,-0.0070155f,-0.00297225f,-0.02259342f,-0.0099765f,-0.00618975f,-0.02007963f,-0.00994275f,-0.006696f,0.00982638f,-0.009693f,-0.00252675f,0.01578303f,-0.00960075f,0.008235f,0.02344437f,-0.007119f,0.011178f,0.01878228f,-0.00404325f,0.01239975f,-0.01899432f,-0.00416025f});
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1});
  }
}
private class MFInt32212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1});
  }
}
private class MFVec2f213 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f,0.0375f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1873f,0.048f,0.1915f,0.0602f,0.1915f,0.0578f,0.1897f,0.0535f,0.1888f,0.0569f,0.2031f,0.037f,0.2012f,0.0381f,0.2444f,0.0847f,0.2208f,0.06f,0.2111f,0.0557f,0.2254f,0.054f,0.2483f,0.0809f,0.2464f,0.0799f,0.2587f,0.0865f,0.225f,0.0604f,0.2239f,0.0673f,0.2238f,0.0671f,0.267f,0.0845f,0.2486f,0.0741f,0.2486f,0.074f,0.2049f,0.059f,0.1896f,0.055f,0.2102f,0.0461f,0.1952f,0.0651f,0.2083f,0.0443f,0.195f,0.0629f,0.2109f,0.0476f,0.2048f,0.0404f,0.2576f,0.0911f,0.2063f,0.0414f,0.2083f,0.0537f,0.2612f,0.0869f,0.2671f,0.0842f,0.2047f,0.0593f,0.1952f,0.0651f,0.2102f,0.0461f,0.2083f,0.0443f,0.195f,0.0629f,0.2102f,0.0461f,0.2063f,0.0414f,0.2612f,0.0869f,0.2671f,0.0842f,0.2083f,0.0537f,0.2109f,0.0476f,0.2083f,0.0443f,0.2444f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1915f,0.0578f,0.225f,0.0604f,0.2239f,0.0673f,0.2464f,0.0799f});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0073755f,-0.0015903f,0.00423675f,0.00118125f,-0.01411461f,0.01613025f,0.00246825f,-0.00284301f,0.01636425f,-0.00812925f,-0.01482048f,0.01383975f,-0.0091755f,-0.00284301f,0.013491f,-0.00834975f,0.00885546f,0.01396575f,0.00162f,0.01008027f,0.01627425f,0.0037575f,0.01092843f,0.00707625f,-0.005949f,-0.01189098f,0.00339975f,-0.00609525f,0.00997146f,0.00342f,0.00373725f,-0.01174869f,0.006732f,0.00594225f,0.01010259f,0.0074025f,0.00577575f,0.00059985f,0.008883f,0.00447075f,-0.00180792f,0.00871425f,0.00670275f,-0.01224252f,0.00256725f,0.00694575f,0.01185192f,0.00202725f,0.00604575f,-0.01122975f,0.007443f,-0.00660375f,-0.01204443f,-0.00691875f,0.007272f,-0.01318554f,-0.0034515f,-0.00587475f,0.01303209f,-0.005958f,0.00736425f,0.01482048f,-0.002511f,-0.0069345f,0.01001331f,-0.00279225f,-0.0069345f,-0.01061037f,-0.00276525f,-0.0079065f,0.00897543f,0.002394f,-0.00793575f,-0.0115506f,0.00251325f,-0.0082395f,-0.00235476f,0.00348525f,0.00608175f,-0.00938277f,-0.00947025f,-0.0025245f,-0.00867411f,-0.01161f,-0.00197325f,0.01029789f,-0.01089f,0.00614925f,0.01139715f,-0.008766f,-0.01150875f,-0.0080352f,-0.006993f,-0.01139625f,-0.00753579f,-0.0054855f,-0.01275075f,-0.00817191f,-0.00193725f,-0.012933f,-0.00227385f,-0.001305f,-0.01262025f,0.00645327f,-0.00218025f,-0.01131075f,0.00726795f,-0.00627525f,-0.010908f,0.00741303f,-0.006372f,0.01148625f,-0.00916794f,0.001377f,0.01177875f,-0.00963945f,-0.00164025f,0.011835f,0.00971199f,-0.00099f,0.01176525f,0.00888057f,0.000288f,0.01100925f,0.007533f,0.0044235f,0.01090575f,0.00051057f,0.0055215f,0.01112175f,-0.0085374f,0.004419f});
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
private class MFInt32216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
private class MFVec2f217 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1816f,0.0411f,0.1287f,0.0243f,0.0943f,0.0785f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1322f,0.09f,0.157f,0.0552f,0.1873f,0.048f,0.186f,0.0472f,0.1866f,0.0487f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.157f,0.0552f,0.1822f,0.0458f,0.1809f,0.0434f,0.1816f,0.0411f,0.0943f,0.0785f,0.1948f,0.024f,0.1953f,0.0282f});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00499275f,-0.0126945f,0.0087165f,0.006084f,-0.00222363f,0.00924525f,-0.00640575f,-0.0126945f,0.00618525f,-0.007623f,-0.00222363f,0.00628425f,-0.00678375f,0.00483507f,0.0058095f,0.005058f,0.00556326f,0.00884025f,0.0054675f,-0.01150038f,0.0009855001f,0.00675675f,-0.00022878f,0.00121725f,-0.00384075f,-0.01220625f,-0.00130725f,-0.004887f,-0.00022878f,-0.00165375f,-0.00406125f,0.01146969f,-0.00118125f,0.0059085f,0.0126945f,0.00112725f,0.00558675f,-0.00010602f,-0.0038295f,0.00459225f,-0.00874107f,-0.003978f,-0.00075825f,-0.00914841f,-0.00530775f,-0.0015345f,-0.00017298f,-0.00560475f,-0.00090675f,0.0088722f,-0.00519075f,0.0049455f,0.00959202f,-0.0038835f,0.0013995f,-0.00849276f,0.01133325f,0.00201825f,-0.00226548f,0.0117765f,0.0015705f,0.00124434f,0.01152675f,-0.00468f,0.00085932f,0.0104625f,-0.0050535f,-0.00216783f,0.01031625f,-0.00428175f,-0.00849276f,0.0100935f});
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
private class MFVec2f221 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f,0.0355f,0.1904f,0.0263f,0.1901f,0.0243f,0.1819f,0.0351f,0.1913f,0.0249f,0.182f,0.0368f,0.088f,0.0133f,0.0677f,0.0461f,0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.0943f,0.0785f,0.1287f,0.0243f,0.1816f,0.0411f,0.1809f,0.0434f,0.1822f,0.0458f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1287f,0.0243f});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0034335f,-0.00674622f,0.00581175f,-0.0035955f,-0.00674622f,0.0041355f,-0.0043065f,0.0004464f,0.006039f,0.00380475f,0.0004464f,0.00761175f,-0.00362475f,0.00529542f,0.00456525f,0.00325575f,0.00571671f,0.0061875f,0.00651375f,-0.00912888f,0.00133425f,0.007605f,0.00134199f,0.001863f,-0.00488475f,-0.00912888f,-0.001197f,-0.006102f,0.00134199f,-0.001098f,-0.00526275f,0.0083979f,-0.00157275f,0.006579f,0.00912888f,0.001458f,0.006039f,0.0012555f,-0.00280575f,0.00530325f,-0.00603198f,-0.00326925f,-0.00180675f,-0.00603198f,-0.004833f,-0.002691f,0.00132804f,-0.00464175f,-0.00215325f,0.00536517f,-0.00516825f,0.00544725f,0.00583389f,-0.00309375f});
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
private class MFInt32224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
private class MFVec2f225 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f,0.0317f,0.2316f,0.0247f,0.2265f,0.0269f,0.241f,0.0419f,0.244f,0.0359f,0.2401f,0.0413f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2333f,0.0341f,0.2378f,0.0303f,0.2142f,0.0508f,0.2117f,0.0481f,0.2254f,0.0615f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2142f,0.0508f,0.2202f,0.0585f,0.2292f,0.0691f,0.2342f,0.0682f,0.2254f,0.0615f,0.2186f,0.0548f,0.2117f,0.0481f,0.2083f,0.0443f,0.2102f,0.0461f,0.2292f,0.0691f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2342f,0.0682f,0.2342f,0.0682f,0.2292f,0.0691f,0.226f,0.0221f,0.2245f,0.0286f,0.2102f,0.0461f,0.2102f,0.0461f,0.2083f,0.0443f,0.2083f,0.0443f,0.2232f,0.0245f});
  }
}
private class MFVec3f226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0074385f,-0.02361177f,0.02574f,-0.013338f,-0.01213929f,0.0324675f,-0.0101925f,0.00547956f,0.03501f,-0.007128f,-0.02180664f,0.0084375f,-0.01102725f,-0.01213929f,0.0089955f,-0.00717525f,0.00885825f,0.009891f,-0.00812925f,-0.02107287f,0.0451575f,-0.0117855f,-0.01213929f,0.044235f,-0.009684f,0.00176607f,0.0452025f,-0.00895275f,0.00716751f,0.02358f,-0.01218375f,-0.01213929f,0.020727f,0.00674325f,-0.02361177f,0.0354375f,0.004644f,0.01013886f,0.0398925f,0.0066465f,0.01778067f,0.01315125f,0.00434475f,-0.02021913f,0.0495f,0.00507375f,0.00485739f,0.0504675f,0.00763425f,-0.02299518f,0.01153125f,0.0052695f,0.01386072f,0.02655f,-0.00376425f,-0.02098638f,-0.0020655f,-0.00739575f,-0.01190214f,-0.0038475f,-0.00396675f,0.01068012f,-0.00193275f,0.008991f,-0.02235627f,0.0014715f,0.00825975f,0.02361177f,0.001827f,0.012078f,-0.01813779f,0.03555f,0.01292175f,-0.01753515f,0.0121545f,0.01374975f,-0.01715292f,0.006156f,0.01324125f,0.01611504f,0.006417f,0.0123705f,0.01304604f,0.0123705f,0.01100475f,0.00903402f,0.0261225f,0.010359f,0.00539865f,0.039105f,0.01092375f,0.00166284f,0.04662f,0.01005075f,-0.01563237f,0.045945f,0.01163475f,-0.01902222f,-0.005427f,0.0008145f,-0.01787832f,-0.0080235f,-0.00176175f,-0.01128834f,-0.00950175f,0.001314f,0.00907866f,-0.00771975f,0.01163475f,0.01980063f,-0.00523125f,0.01453275f,0.01483443f,-0.00178875f,0.01499175f,-0.01530315f,-0.002025f,-0.0086265f,-0.01291212f,0.04842f,-0.0061875f,-0.0182466f,0.049005f,0.00416925f,-0.01761606f,0.0532125f,0.0082935f,-0.0146754f,0.0507375f,0.008964f,-0.00305226f,0.0512775f,0.00528075f,-0.00120528f,0.0539325f,-0.00704025f,-0.00353772f,0.0491175f});
  }
}
private class MFInt32227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1});
  }
}
private class MFInt32228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1});
  }
}
private class MFVec2f229 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f,0.0256f,0.2205f,0.0195f,0.2048f,0.0404f,0.2199f,0.022f,0.2063f,0.0414f,0.2047f,0.0523f,0.1956f,0.0462f,0.1979f,0.0386f,0.2109f,0.0476f,0.277f,0.1031f,0.2673f,0.0987f,0.263f,0.1f,0.2744f,0.109f,0.1892f,0.0439f,0.1911f,0.0375f,0.2576f,0.0911f,0.2083f,0.0537f,0.263f,0.0893f,0.2612f,0.0869f,0.2047f,0.0593f,0.2048f,0.0593f,0.2671f,0.0842f,0.2673f,0.0839f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2102f,0.0461f,0.2083f,0.0443f,0.2039f,0.0358f,0.2152f,0.0224f,0.2154f,0.0203f,0.2126f,0.0258f,0.2034f,0.0366f,0.2033f,0.0375f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2083f,0.0443f,0.2102f,0.0461f,0.2576f,0.0911f,0.2102f,0.0461f,0.2083f,0.0443f,0.2048f,0.0404f,0.2083f,0.0537f,0.2047f,0.0593f,0.2612f,0.0869f});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00616725f,0.00749673f,-0.00163125f,-0.00497925f,-0.01349802f,0.003843f,-0.00501975f,-0.01129671f,-0.0021825f,-0.0076005f,-0.00311922f,-0.00180675f,0.004104f,-0.01060479f,0.00641925f,0.00724725f,0.01085868f,0.00180675f,0.00724725f,-0.009765f,0.001836f,0.00627525f,0.0098208f,0.00699525f,0.006246f,-0.01070523f,0.0071145f,0.0059445f,-0.00150939f,0.0080865f,-0.004896f,-0.0120528f,-0.0066645f,-0.00855225f,-0.00311922f,-0.0075915f,-0.00645075f,0.01078614f,-0.00661725f,0.007578f,-0.01119906f,-0.0023175f,0.008307f,0.01387746f,-0.00135675f,0.0041895f,0.01009422f,0.00643725f,-0.00568125f,0.0080631f,0.0038295f,-0.00702675f,-0.00246915f,0.00445725f,0.004914f,-0.00127224f,0.00799875f,-0.00575775f,-0.01387746f,0.00667575f,-0.007623f,-0.00369675f,0.00685125f,-0.006453f,0.00617427f,0.006651f,0.003879f,0.00786222f,0.00895725f,0.0045225f,-0.00279f,0.0100305f,0.003312f,-0.01171521f,0.0088875f,-0.0016605f,-0.00822771f,-0.01113525f,-0.00405225f,-0.00239661f,-0.01172475f,-0.002484f,0.0079236f,-0.01102275f,0.00685125f,0.00992682f,-0.007794f,0.006345f,-0.00766413f,-0.00848025f,0.0112185f,-0.00692199f,0.00106425f,0.01112625f,-0.00771435f,-0.001422f,0.0116865f,0.00915678f,-0.0007695f,0.01124325f,0.00791523f,0.0006525f,0.0105525f,0.00713682f,0.0048105f,0.01019475f,-0.00132525f,0.005634f,0.010422f,-0.00757485f,0.00497925f});
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
private class MFInt32232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
private class MFVec2f233 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f,0.0133f,0.2102f,0.0181f,0.2093f,0.0169f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2109f,0.0133f,0.2102f,0.0181f,0.1989f,0.0342f,0.1986f,0.0324f,0.1959f,0.0354f,0.2093f,0.0169f});
  }
}
private class MFVec3f234 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.005418f,-0.01135251f,0.00630675f,-0.006984f,-0.00367443f,0.0060345f,-0.006093f,0.00484065f,0.00627075f,0.00521325f,0.00566649f,0.00849825f,0.00602775f,-0.00377766f,0.00899325f,0.00426375f,-0.01121859f,0.00821925f,-0.00343125f,-0.01038717f,-0.00090675f,-0.0052965f,-0.00020646f,-0.00073125f,-0.00412425f,0.00966456f,-0.0009315f,0.0062055f,0.01135251f,0.00137475f,0.00685125f,0.0006975f,0.002448f,0.0056385f,-0.00822492f,0.001305f,-0.0008865f,-0.00705312f,-0.003744f,-0.00220725f,-0.00009486f,-0.00343575f,-0.001323f,0.00709776f,-0.00370575f,0.0050175f,0.00813006f,-0.0023895f,0.005391f,0.000837f,-0.0013815f,0.004545f,-0.00576135f,-0.0024345f,-0.0043425f,-0.00344844f,0.010044f,-0.00357975f,-0.00716751f,0.01016325f,0.00113175f,-0.00710055f,0.0110115f,0.001971f,-0.0034038f,0.01156725f,0.00160875f,0.00124992f,0.01114875f,-0.0038925f,0.00084816f,0.0101655f});
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1});
  }
}
private class MFInt32236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
private class MFVec2f237 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f,0.0135f,0.2053f,0.0142f,0.1964f,0.026f,0.1976f,0.0232f,0.1977f,0.0271f,0.2052f,0.017f,0.0639f,0.0523f,0.0903f,0.0107f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.1317f,0.0215f,0.0951f,0.0836f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.0951f,0.0836f,0.1986f,0.0324f,0.1989f,0.0342f});
  }
}
private class MFVec3f238 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00280125f,-0.00836442f,0.00452925f,-0.004887f,-0.00112158f,0.0065115f,-0.00378f,0.00522009f,0.00528075f,0.0026955f,0.00567207f,0.00668475f,0.00259425f,-0.00091791f,0.0079335f,0.00281925f,-0.00836442f,0.00555525f,-0.0045135f,-0.0085095f,-0.00142875f,-0.0060795f,-0.00083142f,-0.001701f,-0.00519075f,0.00768366f,-0.00146475f,0.00611775f,0.0085095f,0.00076275f,0.00693225f,-0.00093465f,0.00125775f,0.00516825f,-0.00837558f,0.00048375f,-0.00172575f,-0.00532332f,-0.00511875f,-0.00268875f,-0.0006138f,-0.0052785f,-0.0021285f,0.00473742f,-0.00512775f,0.004824f,0.0052452f,-0.00383175f,0.00529875f,-0.00060543f,-0.003393f,0.00422775f,-0.00523962f,-0.004005f});
  }
}
private class MFInt32239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
  }
}
private class MFVec2f241 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.3553f,0.2398f,0.3555f,0.2151f,0.3557f,0.2401f,0.3545f,0.2151f,0.3536f,0.2151f,0.019f,0.2349f,0.0206f,0.2122f,0.0206f,0.2122f,0.1067f,0.2154f,0.1011f,0.241f,0.019f,0.2349f,0.1463f,0.2162f,0.1445f,0.2419f,0.227f,0.2131f,0.3536f,0.2151f,0.3561f,0.2404f,0.2369f,0.2375f,0.1879f,0.2143f,0.1927f,0.24f,0.3553f,0.2398f,0.3555f,0.2151f,0.3545f,0.2151f,0.3557f,0.2401f,0.0206f,0.2122f,0.019f,0.2349f,0.3536f,0.2151f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f});
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.094005f,0.0310806f,0.0834975f,0.1296f,0.032085f,0.039465f,0.0342f,0.02671425f,-0.088155f,0.088875f,0.02698488f,-0.06246f,0.1194525f,0.0299088f,-0.02204325f,0.0852525f,0.00110484f,0.0668025f,0.116235f,0.00198927f,0.0325125f,0.0358425f,-0.00222642f,-0.06561f,0.081f,-0.00159867f,-0.0469575f,0.1089225f,-0.00028737f,-0.01539225f,0.0367875f,0.0302157f,0.097245f,0.0358875f,0.00002511f,0.0766125f,0f,0.00002511f,0.0766125f,0f,0.0302157f,0.097245f,-0.0358875f,0.00002511f,0.0766125f,-0.0852525f,0.00110484f,0.0668025f,-0.094005f,0.0310806f,0.0834975f,-0.0367875f,0.0302157f,0.097245f,-0.116235f,0.00198927f,0.0325125f,-0.1296f,0.032085f,0.039465f,-0.081f,-0.00159867f,-0.0469575f,-0.0358425f,-0.00222642f,-0.06561f,-0.0342f,0.02671425f,-0.088155f,-0.088875f,0.02698488f,-0.06246f,-0.1089225f,-0.00028737f,-0.01539225f,-0.1194525f,0.0299088f,-0.02204325f,0f,-0.00222642f,-0.06561f,0f,0.02671425f,-0.088155f,0.0362025f,0.0410967f,0.0922275f,0.0911925f,0.0410967f,0.07902f,0.12429f,0.0410967f,0.03807f,0.114705f,0.0410967f,-0.02000925f,0.085635f,0.0410967f,-0.05688f,0.033075f,0.0410967f,-0.081585f,0f,0.0410967f,-0.081585f,-0.033075f,0.0410967f,-0.081585f,-0.085635f,0.0410967f,-0.05688f,-0.114705f,0.0410967f,-0.02000925f,-0.12429f,0.0410967f,0.03807f,-0.0911925f,0.0410967f,0.07902f,-0.0362025f,0.0410967f,0.0922275f,0f,0.0410967f,0.0922275f});
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1});
  }
}
private class MFInt32244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1});
  }
}
private class MFVec2f245 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1026f,0.2616f,0.1481f,0.2604f,0.3503f,0.2575f,0.3578f,0.2568f,0.0179f,0.2574f,0.2289f,0.2559f,0.1884f,0.2584f,0.0186f,0.2582f,0.3542f,0.2515f,0.1011f,0.241f,0.1445f,0.2419f,0.3553f,0.2398f,0.3561f,0.2404f,0.2369f,0.2375f,0.1927f,0.24f,0.019f,0.2349f,0.3557f,0.2401f,0.019f,0.2349f,0.019f,0.2349f,0.1011f,0.241f,0.1026f,0.2616f,0.0179f,0.2574f,0.1445f,0.2419f,0.1481f,0.2604f,0.2369f,0.2375f,0.3561f,0.2404f,0.3503f,0.2575f,0.2289f,0.2559f,0.1927f,0.24f,0.1884f,0.2584f,0.019f,0.2349f,0.0186f,0.2582f,0.3578f,0.2568f,0.3553f,0.2398f,0.3557f,0.2401f,0.3542f,0.2515f,0.0179f,0.2574f,0.1026f,0.2616f,0.1481f,0.2604f,0.1884f,0.2584f,0.2289f,0.2559f,0.3503f,0.2575f,0.3542f,0.2515f,0.3578f,0.2568f,0.2289f,0.2559f,0.1884f,0.2584f,0.1481f,0.2604f,0.1026f,0.2616f,0.0179f,0.2574f,0.0186f,0.2582f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f});
  }
}
private class MFVec3f246 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.090585f,0.02082735f,0.0757125f,0.12501f,0.02132676f,0.0363375f,0.0324675f,0.01864557f,-0.0781425f,0.0341775f,0.02040048f,0.0881775f,0.086175f,0.01877949f,-0.054315f,0.11583f,0.02024703f,-0.01895625f,0.094005f,0.00091512f,0.0834975f,0.1296f,0.00191673f,0.039465f,0.0342f,-0.00344844f,-0.088155f,0.088875f,-0.00317502f,-0.06246f,0.1194525f,-0.00024273f,-0.02204325f,0.0367875f,0.00006417f,0.097245f,0f,-0.00344844f,-0.088155f,-0.0367875f,0.00006417f,0.097245f,-0.094005f,0.00091512f,0.0834975f,-0.090585f,0.02082735f,0.0757125f,-0.0341775f,0.02040048f,0.0881775f,-0.1296f,0.00191673f,0.039465f,-0.12501f,0.02132676f,0.0363375f,-0.088875f,-0.00317502f,-0.06246f,-0.0342f,-0.00344844f,-0.088155f,-0.0324675f,0.01864557f,-0.0781425f,-0.086175f,0.01877949f,-0.054315f,-0.1194525f,-0.00024273f,-0.02204325f,-0.11583f,0.02024703f,-0.01895625f,0f,0.00006417f,0.097245f,0f,0.02040048f,0.0881775f,0f,0.01864557f,-0.0781425f,0.0335925f,0.0296019f,0.08271f,0.0876375f,0.0296019f,0.0707625f,0.1191825f,0.0296019f,0.0346725f,0.110655f,0.0296019f,-0.01658025f,0.0828f,0.0296019f,-0.049815f,0.03132f,0.0296019f,-0.072675f,0f,0.0296019f,-0.072675f,-0.03132f,0.0296019f,-0.072675f,-0.0828f,0.0296019f,-0.049815f,-0.110655f,0.0296019f,-0.01658025f,-0.1191825f,0.0296019f,0.0346725f,-0.0876375f,0.0296019f,0.0707625f,-0.0335925f,0.0296019f,0.08271f,0f,0.0296019f,0.08271f,0.0867825f,-0.0128619f,0.0753525f,0.0344925f,-0.0128619f,0.0879075f,0f,-0.0128619f,0.0879075f,-0.0344925f,-0.0128619f,0.0879075f,-0.0867825f,-0.0128619f,0.0753525f,-0.1181475f,-0.0128619f,0.03654f,-0.1090575f,-0.0128619f,-0.0185715f,-0.0814275f,-0.0128619f,-0.05508f,-0.031455f,-0.0128619f,-0.07857f,0f,-0.0128619f,-0.07857f,0.031455f,-0.0128619f,-0.07857f,0.0814275f,-0.0128619f,-0.05508f,0.1090575f,-0.0128619f,-0.0185715f,0.1181475f,-0.0128619f,0.03654f});
  }
}
private class MFInt32247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1});
  }
}
private class MFInt32248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1});
  }
}
private class MFVec2f249 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1041f,0.2822f,0.0168f,0.2798f,0.1518f,0.2789f,0.3444f,0.2746f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.3527f,0.263f,0.0181f,0.2816f,0.1026f,0.2616f,0.1481f,0.2604f,0.3578f,0.2568f,0.3503f,0.2575f,0.0179f,0.2574f,0.2289f,0.2559f,0.1884f,0.2584f,0.0186f,0.2582f,0.3542f,0.2515f,0.3604f,0.2737f,0.3578f,0.2568f,0.3542f,0.2515f,0.3527f,0.263f,0.1026f,0.2616f,0.1041f,0.2822f,0.0168f,0.2798f,0.0179f,0.2574f,0.1481f,0.2604f,0.1518f,0.2789f,0.3503f,0.2575f,0.3444f,0.2746f,0.221f,0.2742f,0.2289f,0.2559f,0.1842f,0.2768f,0.1884f,0.2584f,0.0181f,0.2816f,0.0186f,0.2582f,0.0168f,0.2798f,0.1041f,0.2822f,0.1518f,0.2789f,0.1842f,0.2768f,0.221f,0.2742f,0.3444f,0.2746f,0.3527f,0.263f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.1518f,0.2789f,0.1041f,0.2822f,0.0168f,0.2798f,0.0181f,0.2816f,0.1026f,0.2616f,0.0179f,0.2574f,0.0186f,0.2582f,0.0179f,0.2574f,0.1026f,0.2616f,0.1481f,0.2604f,0.1884f,0.2584f,0.2289f,0.2559f,0.3503f,0.2575f,0.3542f,0.2515f,0.3578f,0.2568f,0.2289f,0.2559f,0.1884f,0.2584f,0.1481f,0.2604f});
  }
}
private class MFVec3f250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.087165f,0.02045628f,0.06795f,0.0307575f,0.02045628f,-0.06813f,0.083475f,0.02045628f,-0.0461475f,0.1122075f,0.02045628f,-0.0158715f,0.03159f,0.02045628f,0.0791325f,0.1204425f,0.02045628f,0.0331875f,0.090585f,0.00054684f,0.0757125f,0.12501f,0.00104625f,0.0363375f,0.0324675f,-0.00163494f,-0.0781425f,0.0341775f,0.00011997f,0.0881775f,0.086175f,-0.00150102f,-0.054315f,0.11583f,-0.00003348f,-0.01895625f,0f,0.00011997f,0.0881775f,-0.0307575f,0.02045628f,-0.06813f,-0.0324675f,-0.00163494f,-0.0781425f,0f,-0.00163494f,-0.0781425f,0f,0.02045628f,-0.06813f,-0.090585f,0.00054684f,0.0757125f,-0.087165f,0.02045628f,0.06795f,-0.03159f,0.02045628f,0.0791325f,-0.0341775f,0.00011997f,0.0881775f,-0.12501f,0.00104625f,0.0363375f,-0.1204425f,0.02045628f,0.0331875f,-0.083475f,0.02045628f,-0.0461475f,-0.086175f,-0.00150102f,-0.054315f,-0.1122075f,0.02045628f,-0.0158715f,-0.11583f,-0.00003348f,-0.01895625f,0f,0.02045628f,0.0791325f,0.030735f,0.0310248f,0.073935f,0.083835f,0.0310248f,0.0632475f,0.114255f,0.0310248f,0.031455f,0.106695f,0.0310248f,-0.01356525f,0.079875f,0.0310248f,-0.04185f,0.0294975f,0.0310248f,-0.062865f,0f,0.0310248f,-0.062865f,-0.0294975f,0.0310248f,-0.062865f,-0.079875f,0.0310248f,-0.04185f,-0.106695f,0.0310248f,-0.01356525f,-0.114255f,0.0310248f,0.031455f,-0.083835f,0.0310248f,0.0632475f,-0.030735f,0.0310248f,0.073935f,0f,0.0310248f,0.073935f,0.087075f,-0.00951669f,0.0709425f,0.033255f,-0.00951669f,0.082845f,0f,-0.00951669f,0.082845f,-0.033255f,-0.00951669f,0.082845f,-0.087075f,-0.00951669f,0.0709425f,-0.1188f,-0.00951669f,0.03465f,-0.11025f,-0.00951669f,-0.0167535f,-0.0823725f,-0.00951669f,-0.0499725f,-0.03114f,-0.00951669f,-0.0727425f,0f,-0.00951669f,-0.0727425f,0.03114f,-0.00951669f,-0.0727425f,0.0823725f,-0.00951669f,-0.0499725f,0.11025f,-0.00951669f,-0.0167535f,0.1188f,-0.00951669f,0.03465f});
  }
}
private class MFInt32251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1});
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1});
  }
}
private class MFVec2f253 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.3633f,0.2922f,0.3627f,0.2922f,0.0177f,0.3051f,0.1055f,0.2814f,0.3697f,0.2711f,0.3605f,0.2757f,0.2204f,0.275f,0.1853f,0.2768f,0.024f,0.2813f,0.1448f,0.2785f,0.3603f,0.2745f,0.0155f,0.2778f,0.3633f,0.2922f,0.3697f,0.2711f,0.3603f,0.2745f,0.3627f,0.2922f,0.1055f,0.2814f,0.0982f,0.302f,0.0177f,0.3051f,0.024f,0.2813f,0.1448f,0.2785f,0.1487f,0.2975f,0.3605f,0.2757f,0.3621f,0.2922f,0.2175f,0.2944f,0.2204f,0.275f,0.1849f,0.2961f,0.1853f,0.2768f,0.0177f,0.3051f,0.0155f,0.2778f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.1849f,0.2961f,0.2175f,0.2944f,0.3621f,0.2922f,0.3627f,0.2922f,0.3633f,0.2922f,0.2175f,0.2944f,0.1849f,0.2961f,0.1487f,0.2975f,0.0982f,0.302f,0.0177f,0.3051f,0.0177f,0.3051f,0.1055f,0.2814f,0.024f,0.2813f,0.0155f,0.2778f,0.024f,0.2813f,0.1055f,0.2814f,0.1448f,0.2785f,0.1853f,0.2768f,0.2204f,0.275f,0.3605f,0.2757f,0.3603f,0.2745f,0.3697f,0.2711f,0.2204f,0.275f,0.1853f,0.2768f,0.1448f,0.2785f});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083475f,0.0216783f,0.05958f,0.108405f,0.0216783f,-0.01263375f,0.11538f,0.0216783f,0.0297225f,0.0290925f,0.0216783f,-0.0583875f,0.0808425f,0.0216783f,-0.03816f,0.0288225f,0.0216783f,0.06957f,0.087165f,0.00017577f,0.06795f,0.0307575f,0.00017577f,-0.06813f,0.083475f,0.00017577f,-0.0461475f,0.1122075f,0.00017577f,-0.0158715f,0.03159f,0.00017577f,0.0791325f,0.1204425f,0.00017577f,0.0331875f,-0.0290925f,0.0216783f,-0.0583875f,-0.0307575f,0.00017577f,-0.06813f,0f,0.00017577f,-0.06813f,0f,0.0216783f,-0.0583875f,-0.087165f,0.00017577f,0.06795f,-0.083475f,0.0216783f,0.05958f,-0.0288225f,0.0216783f,0.06957f,-0.03159f,0.00017577f,0.0791325f,-0.1204425f,0.00017577f,0.0331875f,-0.11538f,0.0216783f,0.0297225f,-0.0808425f,0.0216783f,-0.03816f,-0.083475f,0.00017577f,-0.0461475f,-0.108405f,0.0216783f,-0.01263375f,-0.1122075f,0.00017577f,-0.0158715f,0f,0.0216783f,0.06957f,0f,0.00017577f,0.0791325f,0.0283725f,0.0343449f,0.06462f,0.081135f,0.0343449f,0.054945f,0.1100475f,0.0343449f,0.0279225f,0.10377f,0.0343449f,-0.0101475f,0.0781425f,0.0343449f,-0.033885f,0.0281475f,0.0343449f,-0.0534375f,0f,0.0343449f,-0.0534375f,-0.0281475f,0.0343449f,-0.0534375f,-0.0781425f,0.0343449f,-0.033885f,-0.10377f,0.0343449f,-0.0101475f,-0.1100475f,0.0343449f,0.0279225f,-0.081135f,0.0343449f,0.054945f,-0.0283725f,0.0343449f,0.06462f,0f,0.0343449f,0.06462f,0.0866925f,-0.01042065f,0.0647325f,0.0318375f,-0.01042065f,0.0757575f,0f,-0.01042065f,0.0757575f,-0.0318375f,-0.01042065f,0.0757575f,-0.0866925f,-0.01042065f,0.0647325f,-0.1179f,-0.01042065f,0.03213f,-0.1101375f,-0.01042065f,-0.0140715f,-0.08253f,-0.01042065f,-0.0431775f,-0.030465f,-0.01042065f,-0.06489f,0f,-0.01042065f,-0.06489f,0.030465f,-0.01042065f,-0.06489f,0.08253f,-0.01042065f,-0.0431775f,0.1101375f,-0.01042065f,-0.0140715f,0.1179f,-0.01042065f,0.03213f});
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1});
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1});
  }
}
private class MFVec2f257 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3615f,0.3195f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.0982f,0.302f,0.1849f,0.2961f,0.0177f,0.3051f,0.3627f,0.2922f,0.1487f,0.2975f,0.3633f,0.2922f,0.3621f,0.2922f,0.2175f,0.2944f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.0943f,0.3233f,0.0192f,0.3251f,0.1487f,0.2975f,0.1489f,0.3212f,0.2175f,0.2944f,0.3621f,0.2922f,0.3615f,0.3195f,0.2175f,0.3185f,0.1849f,0.2961f,0.1844f,0.32f,0.0177f,0.3051f,0.0192f,0.3251f,0.3631f,0.318f,0.3633f,0.2922f,0.3627f,0.2922f,0.3623f,0.3188f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0982f,0.302f,0.0177f,0.3051f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.1849f,0.2961f,0.2175f,0.2944f,0.3621f,0.2922f,0.3627f,0.2922f,0.3633f,0.2922f,0.2175f,0.2944f,0.1849f,0.2961f,0.1487f,0.2975f});
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083295f,0.0294624f,0.05823f,0.028935f,0.0294624f,0.0684f,0.11484f,0.0294624f,0.029115f,0.0306675f,0.0294624f,-0.0569025f,0.08073f,0.0294624f,-0.037935f,0.1081125f,0.0294624f,-0.011826f,0f,0.0294624f,0.0684f,0.083475f,0.00035712f,0.05958f,0.108405f,0.00035712f,-0.01263375f,0f,0.00035712f,0.06957f,0f,0.00035712f,-0.0583875f,0.11538f,0.00035712f,0.0297225f,0.0290925f,0.00035712f,-0.0583875f,0.0808425f,0.00035712f,-0.03816f,0.0288225f,0.00035712f,0.06957f,-0.0288225f,0.00035712f,0.06957f,-0.083475f,0.00035712f,0.05958f,-0.083295f,0.0294624f,0.05823f,-0.028935f,0.0294624f,0.0684f,-0.11538f,0.00035712f,0.0297225f,-0.11484f,0.0294624f,0.029115f,-0.0808425f,0.00035712f,-0.03816f,-0.0290925f,0.00035712f,-0.0583875f,-0.0306675f,0.0294624f,-0.0569025f,-0.08073f,0.0294624f,-0.037935f,-0.108405f,0.00035712f,-0.01263375f,-0.1081125f,0.0294624f,-0.011826f,0f,0.0294624f,-0.0569025f,0.028485f,0.04185f,0.06345f,0.0809775f,0.04185f,0.0536175f,0.1095075f,0.04185f,0.02727f,0.1035f,0.04185f,-0.00938025f,0.0780525f,0.04185f,-0.03366f,0.0297675f,0.04185f,-0.05193f,0f,0.04185f,-0.0519525f,-0.0297675f,0.04185f,-0.05193f,-0.0780525f,0.04185f,-0.03366f,-0.1035f,0.04185f,-0.00938025f,-0.1095075f,0.04185f,0.02727f,-0.0809775f,0.04185f,0.0536175f,-0.028485f,0.04185f,0.06345f,0f,0.04185f,0.06345f,0.081135f,-0.01021698f,0.054945f,0.0283725f,-0.01021698f,0.06462f,0f,-0.01021698f,0.06462f,-0.0283725f,-0.01021698f,0.06462f,-0.081135f,-0.01021698f,0.054945f,-0.1100475f,-0.01021698f,0.0279225f,-0.10377f,-0.01021698f,-0.0101475f,-0.0781425f,-0.01021698f,-0.033885f,-0.0281475f,-0.01021698f,-0.0534375f,0f,-0.01021698f,-0.0534375f,0.0281475f,-0.01021698f,-0.0534375f,0.0781425f,-0.01021698f,-0.033885f,0.10377f,-0.01021698f,-0.0101475f,0.1100475f,-0.01021698f,0.0279225f});
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1});
  }
}
private class MFInt32260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1});
  }
}
private class MFVec2f261 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0903f,0.3446f,0.1491f,0.3449f,0.0206f,0.3452f,0.3608f,0.3469f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.3619f,0.3454f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3631f,0.318f,0.3615f,0.3195f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.2175f,0.3427f,0.1838f,0.3438f,0.1844f,0.32f,0.2175f,0.3185f,0.3619f,0.3454f,0.3629f,0.3439f,0.3631f,0.318f,0.3623f,0.3188f,0.0943f,0.3233f,0.0903f,0.3446f,0.0206f,0.3452f,0.0192f,0.3251f,0.1489f,0.3212f,0.1491f,0.3449f,0.3615f,0.3195f,0.3608f,0.3469f,0.0206f,0.3452f,0.0192f,0.3251f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1838f,0.3438f,0.2175f,0.3427f,0.3608f,0.3469f,0.3619f,0.3454f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.1491f,0.3449f,0.0903f,0.3446f,0.0206f,0.3452f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f});
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0831375f,0.0294066f,0.0569025f,0.1143225f,0.0294066f,0.028485f,0.02907f,0.0294066f,0.06723f,0.032265f,0.0294066f,-0.0554175f,0.08064f,0.0294066f,-0.0377325f,0.1078425f,0.0294066f,-0.01101825f,0.083295f,0.00029016f,0.05823f,0.028935f,0.00029016f,0.0684f,0.11484f,0.00029016f,0.029115f,0.0306675f,0.00029016f,-0.0569025f,0.08073f,0.00029016f,-0.037935f,0.1081125f,0.00029016f,-0.011826f,0f,0.00029016f,0.0684f,-0.08064f,0.0294066f,-0.0377325f,-0.1078425f,0.0294066f,-0.01101825f,-0.1081125f,0.00029016f,-0.011826f,-0.08073f,0.00029016f,-0.037935f,0f,0.0294066f,-0.05544f,-0.032265f,0.0294066f,-0.0554175f,-0.0306675f,0.00029016f,-0.0569025f,0f,0.00029016f,-0.0569025f,-0.083295f,0.00029016f,0.05823f,-0.0831375f,0.0294066f,0.0569025f,-0.02907f,0.0294066f,0.06723f,-0.028935f,0.00029016f,0.0684f,-0.11484f,0.00029016f,0.029115f,-0.1143225f,0.0294066f,0.028485f,0f,0.0294066f,0.06723f,0.02871f,0.0405108f,0.0635175f,0.081405f,0.0405108f,0.0534375f,0.11034f,0.0405108f,0.02709f,0.1043775f,0.0405108f,-0.009216f,0.078615f,0.0405108f,-0.034515f,0.0316125f,0.0405108f,-0.051705f,0f,0.0405108f,-0.051705f,-0.0316125f,0.0405108f,-0.051705f,-0.078615f,0.0405108f,-0.034515f,-0.1043775f,0.0405108f,-0.009216f,-0.11034f,0.0405108f,0.02709f,-0.081405f,0.0405108f,0.0534375f,-0.02871f,0.0405108f,0.0635175f,0f,0.0405108f,0.0635175f,0.0815625f,-0.01307394f,0.0547875f,0.0285975f,-0.01307394f,0.0646875f,0f,-0.01307394f,0.0646875f,-0.0285975f,-0.01307394f,0.0646875f,-0.0815625f,-0.01307394f,0.0547875f,-0.1108575f,-0.01307394f,0.0277425f,-0.1046475f,-0.01307394f,-0.0099945f,-0.0787275f,-0.01307394f,-0.03474f,-0.0299925f,-0.01307394f,-0.05319f,0f,-0.01307394f,-0.05319f,0.0299925f,-0.01307394f,-0.05319f,0.0787275f,-0.01307394f,-0.03474f,0.1046475f,-0.01307394f,-0.0099945f,0.1108575f,-0.01307394f,0.0277425f});
  }
}
private class MFInt32263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1});
  }
}
private class MFInt32264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1});
  }
}
private class MFVec2f265 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0206f,0.3452f,0.0903f,0.3446f,0.0903f,0.3446f,0.1491f,0.3449f,0.3629f,0.3439f,0.3608f,0.3469f,0.2175f,0.3427f,0.1838f,0.3438f,0.0206f,0.3452f,0.3619f,0.3454f,0.0206f,0.3452f,0.089f,0.3604f,0.1508f,0.3559f,0.3623f,0.3532f,0.3588f,0.3561f,0.0232f,0.3561f,0.2188f,0.3538f,0.1874f,0.3541f,0.0232f,0.3546f,0.3608f,0.3537f,0.2175f,0.3427f,0.3608f,0.3469f,0.3588f,0.3561f,0.2188f,0.3538f,0.1838f,0.3438f,0.1874f,0.3541f,0.1491f,0.3449f,0.1508f,0.3559f,0.0206f,0.3452f,0.0206f,0.3452f,0.0232f,0.3561f,0.0232f,0.3546f,0.0903f,0.3446f,0.0206f,0.3452f,0.0903f,0.3446f,0.089f,0.3604f,0.3623f,0.3532f,0.3629f,0.3439f,0.3619f,0.3454f,0.3608f,0.3537f,0.0903f,0.3446f,0.0206f,0.3452f,0.0206f,0.3452f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1838f,0.3438f,0.2175f,0.3427f,0.3608f,0.3469f,0.3619f,0.3454f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.1491f,0.3449f,0.2188f,0.3538f,0.3588f,0.3561f,0.3608f,0.3537f,0.3623f,0.3532f,0.2188f,0.3538f,0.1874f,0.3541f,0.1508f,0.3559f,0.089f,0.3604f,0.0232f,0.3561f,0.0232f,0.3546f,0.0232f,0.3561f,0.089f,0.3604f,0.1508f,0.3559f,0.1874f,0.3541f});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0831375f,0.00027342f,0.0569025f,0.1143225f,0.00027342f,0.028485f,0.02907f,0.00027342f,0.06723f,0.032265f,0.00027342f,-0.0554175f,0.08064f,0.00027342f,-0.0377325f,0.1078425f,0.00027342f,-0.01101825f,0.02907f,0.00027342f,0.06723f,0f,0.00027342f,0.06723f,0.08685f,0.0216504f,0.06606f,0.1206225f,0.0216504f,0.02871f,0.03573f,0.0216504f,-0.056205f,0.0306f,0.0216504f,0.07182f,0.08442f,0.0216504f,-0.03996f,0.111825f,0.0216504f,-0.01358325f,0f,0.0216504f,0.07182f,-0.08064f,0.00027342f,-0.0377325f,-0.032265f,0.00027342f,-0.0554175f,-0.03573f,0.0216504f,-0.056205f,-0.08442f,0.0216504f,-0.03996f,-0.1078425f,0.00027342f,-0.01101825f,-0.111825f,0.0216504f,-0.01358325f,-0.1143225f,0.00027342f,0.028485f,-0.1206225f,0.0216504f,0.02871f,-0.02907f,0.00027342f,0.06723f,-0.0306f,0.0216504f,0.07182f,-0.0831375f,0.00027342f,0.0569025f,-0.02907f,0.00027342f,0.06723f,-0.08685f,0.0216504f,0.06606f,0f,0.00027342f,-0.05544f,0f,0.0216504f,-0.056385f,0.0809775f,-0.01331109f,0.052605f,0.02862f,-0.01331109f,0.0626175f,0f,-0.01331109f,0.0626175f,-0.02862f,-0.01331109f,0.0626175f,-0.0809775f,-0.01331109f,0.052605f,-0.1093725f,-0.01331109f,0.0267525f,-0.103545f,-0.01331109f,-0.008784f,-0.07812f,-0.01331109f,-0.0337275f,-0.031455f,-0.01331109f,-0.050805f,0f,-0.01331109f,-0.0508275f,0.031455f,-0.01331109f,-0.050805f,0.07812f,-0.01331109f,-0.0337275f,0.103545f,-0.01331109f,-0.008784f,0.1093725f,-0.01331109f,0.0267525f,0.0819675f,0.0306621f,-0.03591f,0.0349875f,0.0306621f,-0.051615f,0f,0.0306621f,-0.051795f,-0.0349875f,0.0306621f,-0.051615f,-0.0819675f,0.0306621f,-0.03591f,-0.107595f,0.0306621f,-0.01124775f,-0.11565f,0.0306621f,0.02736f,-0.0846f,0.0306621f,0.06165f,-0.030375f,0.0306621f,0.0672075f,0f,0.0306621f,0.0672075f,0.030375f,0.0306621f,0.0672075f,0.0846f,0.0306621f,0.06165f,0.11565f,0.0306621f,0.02736f,0.107595f,0.0306621f,-0.01124775f});
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1});
  }
}
private class MFInt32268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1});
  }
}
private class MFVec2f269 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.089f,0.3604f,0.1508f,0.3559f,0.3588f,0.3561f,0.3623f,0.3532f,0.0232f,0.3561f,0.2188f,0.3538f,0.1874f,0.3541f,0.0232f,0.3546f,0.3608f,0.3537f,0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.3588f,0.3561f,0.3589f,0.3648f,0.2207f,0.3633f,0.2188f,0.3538f,0.1922f,0.3628f,0.1874f,0.3541f,0.1489f,0.3665f,0.1508f,0.3559f,0.0232f,0.3561f,0.0245f,0.3617f,0.0254f,0.3626f,0.0232f,0.3546f,0.089f,0.3604f,0.0859f,0.3657f,0.3617f,0.3609f,0.3623f,0.3532f,0.3608f,0.3537f,0.3616f,0.3609f,0.3623f,0.3532f,0.2188f,0.3538f,0.1874f,0.3541f,0.1508f,0.3559f,0.089f,0.3604f,0.0232f,0.3561f,0.0232f,0.3546f,0.0232f,0.3561f,0.089f,0.3604f,0.1508f,0.3559f,0.1874f,0.3541f,0.2188f,0.3538f,0.3588f,0.3561f,0.3608f,0.3537f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f});
  }
}
private class MFVec3f270 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.08685f,0.00032922f,0.06606f,0.1206225f,0.00032922f,0.02871f,0.03573f,0.00032922f,-0.056205f,0.0306f,0.00032922f,0.07182f,0.08442f,0.00032922f,-0.03996f,0.111825f,0.00032922f,-0.01358325f,0.031905f,0.01836657f,0.075645f,0.08757f,0.01836657f,-0.04185f,0.1152225f,0.01836657f,-0.015732f,0.0897075f,0.01836657f,0.0733275f,0.1260225f,0.01836657f,0.0289125f,0.0386325f,0.01836657f,-0.05688f,0f,0.01836657f,0.0756675f,-0.03573f,0.00032922f,-0.056205f,-0.0386325f,0.01836657f,-0.05688f,-0.08757f,0.01836657f,-0.04185f,-0.08442f,0.00032922f,-0.03996f,-0.1152225f,0.01836657f,-0.015732f,-0.111825f,0.00032922f,-0.01358325f,-0.1260225f,0.01836657f,0.0289125f,-0.1206225f,0.00032922f,0.02871f,-0.0306f,0.00032922f,0.07182f,-0.031905f,0.01836657f,0.075645f,0f,0.00032922f,0.07182f,-0.08685f,0.00032922f,0.06606f,-0.0897075f,0.01836657f,0.0733275f,0f,0.00032922f,-0.056385f,0f,0.01836657f,-0.0572175f,0.035055f,-0.00835884f,-0.05211f,0.0822375f,-0.00835884f,-0.03636f,0.1080675f,-0.00835884f,-0.0115065f,0.11619f,-0.00835884f,0.0275175f,0.0848475f,-0.00835884f,0.062145f,0.0303975f,-0.00835884f,0.067725f,0f,-0.00835884f,0.067725f,-0.0303975f,-0.00835884f,0.067725f,-0.0848475f,-0.00835884f,0.062145f,-0.11619f,-0.00835884f,0.0275175f,-0.1080675f,-0.00835884f,-0.0115065f,-0.0822375f,-0.00835884f,-0.03636f,-0.035055f,-0.00835884f,-0.05211f,0f,-0.00835884f,-0.05229f,0.0318375f,0.02613672f,0.07155f,0.087705f,0.02613672f,0.0693f,0.121545f,0.02613672f,0.0279f,0.11151f,0.02613672f,-0.0135855f,0.085455f,0.02613672f,-0.038205f,0.0380025f,0.02613672f,-0.052785f,0f,0.02613672f,-0.0531225f,-0.0380025f,0.02613672f,-0.052785f,-0.085455f,0.02613672f,-0.038205f,-0.11151f,0.02613672f,-0.0135855f,-0.121545f,0.02613672f,0.0279f,-0.087705f,0.02613672f,0.0693f,-0.0318375f,0.02613672f,0.07155f,0f,0.02613672f,0.07155f});
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1});
  }
}
private class MFInt32272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1});
  }
}
private class MFVec2f273 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.0258f,0.3672f,0.2227f,0.3728f,0.1969f,0.3716f,0.0826f,0.3711f,0.1469f,0.377f,0.3589f,0.3735f,0.3612f,0.3687f,0.0276f,0.3706f,0.3625f,0.3682f,0.0258f,0.3672f,0.0245f,0.3617f,0.0859f,0.3657f,0.0826f,0.3711f,0.3612f,0.3687f,0.3617f,0.3609f,0.3616f,0.3609f,0.3625f,0.3682f,0.1489f,0.3665f,0.1469f,0.377f,0.3589f,0.3648f,0.3589f,0.3735f,0.2227f,0.3728f,0.2207f,0.3633f,0.1969f,0.3716f,0.1922f,0.3628f,0.0276f,0.3706f,0.0254f,0.3626f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.2227f,0.3728f,0.3589f,0.3735f,0.3625f,0.3682f,0.3612f,0.3687f,0.2227f,0.3728f,0.1969f,0.3716f,0.1469f,0.377f,0.0826f,0.3711f,0.0258f,0.3672f,0.0276f,0.3706f,0.0258f,0.3672f,0.0826f,0.3711f,0.1469f,0.377f,0.1969f,0.3716f});
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.031905f,0.00016461f,0.075645f,0.08757f,0.00016461f,-0.04185f,0.1152225f,0.00016461f,-0.015732f,0.0897075f,0.00016461f,0.0733275f,0.1260225f,0.00016461f,0.0289125f,0.0386325f,0.00016461f,-0.05688f,0f,0.00016461f,0.0756675f,0.03321f,0.01820196f,0.0794925f,0.0907425f,0.01820196f,-0.0437175f,0.1185975f,0.01820196f,-0.01788075f,0.0925875f,0.01820196f,0.080595f,0.1314f,0.01820196f,0.0291375f,0.0415125f,0.01820196f,-0.057555f,0f,0.01820196f,0.0794925f,-0.03321f,0.01820196f,0.0794925f,-0.031905f,0.00016461f,0.075645f,-0.0897075f,0.00016461f,0.0733275f,-0.0925875f,0.01820196f,0.080595f,-0.0415125f,0.01820196f,-0.057555f,-0.0386325f,0.00016461f,-0.05688f,0f,0.00016461f,-0.0572175f,0f,0.01820196f,-0.05805f,-0.1260225f,0.00016461f,0.0289125f,-0.1314f,0.01820196f,0.0291375f,-0.0907425f,0.01820196f,-0.0437175f,-0.08757f,0.00016461f,-0.04185f,-0.1185975f,0.01820196f,-0.01788075f,-0.1152225f,0.00016461f,-0.015732f,0.0876375f,-0.00791802f,0.069165f,0.0318375f,-0.00791802f,0.0713925f,0f,-0.00791802f,0.0713925f,-0.0318375f,-0.00791802f,0.0713925f,-0.0876375f,-0.00791802f,0.069165f,-0.1213875f,-0.00791802f,0.0278775f,-0.111375f,-0.00791802f,-0.0135045f,-0.085365f,-0.00791802f,-0.03807f,-0.03798f,-0.00791802f,-0.0526275f,0f,-0.00791802f,-0.052965f,0.03798f,-0.00791802f,-0.0526275f,0.085365f,-0.00791802f,-0.03807f,0.111375f,-0.00791802f,-0.0135045f,0.1213875f,-0.00791802f,0.0278775f,0.0885825f,0.02718576f,-0.039915f,0.040905f,0.02718576f,-0.0533025f,0f,0.02718576f,-0.0537975f,-0.040905f,0.02718576f,-0.0533025f,-0.0885825f,0.02718576f,-0.039915f,-0.1148175f,0.02718576f,-0.015588f,-0.1267425f,0.02718576f,0.0282375f,-0.090495f,0.02718576f,0.0762975f,-0.033255f,0.02718576f,0.07524f,0f,0.02718576f,0.07524f,0.033255f,0.02718576f,0.07524f,0.090495f,0.02718576f,0.0762975f,0.1267425f,0.02718576f,0.0282375f,0.1148175f,0.02718576f,-0.015588f});
  }
}
private class MFInt32275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1});
  }
}
private class MFInt32276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1});
  }
}
private class MFVec2f277 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0908f,0.3999f,0.0325f,0.3879f,0.0306f,0.3835f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0802f,0.3883f,0.1575f,0.3746f,0.3637f,0.3704f,0.356f,0.3713f,0.3581f,0.3683f,0.0256f,0.3731f,0.0261f,0.363f,0.2218f,0.3729f,0.1941f,0.3712f,0.0325f,0.3879f,0.0256f,0.3731f,0.0802f,0.3883f,0.0908f,0.3999f,0.3589f,0.3783f,0.3637f,0.3704f,0.3581f,0.3683f,0.3561f,0.3769f,0.1575f,0.3746f,0.1568f,0.3845f,0.356f,0.3713f,0.3535f,0.3812f,0.2214f,0.3832f,0.2218f,0.3729f,0.1952f,0.3809f,0.1941f,0.3712f,0.0306f,0.3835f,0.0261f,0.363f,0.3637f,0.3704f,0.2218f,0.3729f,0.1941f,0.3712f,0.1575f,0.3746f,0.0802f,0.3883f,0.0256f,0.3731f,0.0261f,0.363f,0.0256f,0.3731f,0.0802f,0.3883f,0.1575f,0.3746f,0.1941f,0.3712f,0.2218f,0.3729f,0.356f,0.3713f,0.3581f,0.3683f,0.0306f,0.3835f,0.0325f,0.3879f,0.0908f,0.3999f,0.1568f,0.3845f,0.1952f,0.3809f,0.2214f,0.3832f,0.3535f,0.3812f,0.3561f,0.3769f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.1568f,0.3845f,0.0908f,0.3999f,0.0325f,0.3879f});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.03321f,0.00000279f,0.0794925f,0.0907425f,0.00000279f,-0.0437175f,0.1185975f,0.00000279f,-0.01788075f,0.095265f,0.01935144f,0.087705f,0.034605f,0.01935144f,0.0835425f,0.137565f,0.02021355f,0.029385f,0.0447075f,0.02021355f,-0.05832f,0.09423f,0.02021355f,-0.0458325f,0.122445f,0.02021355f,-0.0202635f,0.0925875f,0.00000279f,0.080595f,0.1314f,0.00000279f,0.0291375f,0.0415125f,0.00000279f,-0.057555f,0f,0.01935144f,0.0835425f,-0.034605f,0.01935144f,0.0835425f,-0.03321f,0.00000279f,0.0794925f,-0.0925875f,0.00000279f,0.080595f,-0.095265f,0.01935144f,0.087705f,-0.0447075f,0.02021355f,-0.05832f,-0.0415125f,0.00000279f,-0.057555f,0f,0.00000279f,-0.05805f,0f,0.02021355f,-0.058995f,-0.1314f,0.00000279f,0.0291375f,-0.137565f,0.02021355f,0.029385f,-0.09423f,0.02021355f,-0.0458325f,-0.0907425f,0.00000279f,-0.0437175f,-0.122445f,0.02021355f,-0.0202635f,-0.1185975f,0.00000279f,-0.01788075f,0f,0.00000279f,0.0794925f,0.04095f,-0.00835047f,-0.05355f,0.0887175f,-0.00835047f,-0.04014f,0.1150425f,-0.00835047f,-0.01572075f,0.127035f,-0.00835047f,0.0282825f,0.0906075f,-0.00835047f,0.0765675f,0.033255f,-0.00835047f,0.0754875f,0f,-0.00835047f,0.0754875f,-0.033255f,-0.00835047f,0.0754875f,-0.0906075f,-0.00835047f,0.0765675f,-0.127035f,-0.00835047f,0.0282825f,-0.1150425f,-0.00835047f,-0.01572075f,-0.0887175f,-0.00835047f,-0.04014f,-0.04095f,-0.00835047f,-0.05355f,0f,-0.00835047f,-0.054045f,0f,0.0289044f,0.0795375f,0.03474f,0.0289044f,0.079515f,0.09333f,0.0289044f,0.0835425f,0.1331325f,0.0289044f,0.0286425f,0.118935f,0.0289044f,-0.01803825f,0.092295f,0.0289044f,-0.0421875f,0.0441675f,0.0289044f,-0.054315f,0f,0.0289044f,-0.05499f,-0.0441675f,0.0289044f,-0.054315f,-0.092295f,0.0289044f,-0.0421875f,-0.118935f,0.0289044f,-0.01803825f,-0.1331325f,0.0289044f,0.0286425f,-0.09333f,0.0289044f,0.0835425f,-0.03474f,0.0289044f,0.079515f});
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1});
  }
}
private class MFInt32280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1});
  }
}
private class MFVec2f281 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0437f,0.4075f,0.2185f,0.3912f,0.3484f,0.3944f,0.1518f,0.3905f,0.1902f,0.3894f,0.3503f,0.3879f,0.3505f,0.3886f,0.0427f,0.408f,0.0961f,0.4138f,0.0908f,0.3999f,0.0325f,0.3879f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0306f,0.3835f,0.1568f,0.3845f,0.1518f,0.3905f,0.0961f,0.4138f,0.0908f,0.3999f,0.3503f,0.3879f,0.3589f,0.3783f,0.3561f,0.3769f,0.3505f,0.3886f,0.0325f,0.3879f,0.0437f,0.4075f,0.0427f,0.408f,0.0306f,0.3835f,0.3535f,0.3812f,0.3484f,0.3944f,0.2185f,0.3912f,0.2214f,0.3832f,0.1902f,0.3894f,0.1952f,0.3809f,0.3484f,0.3944f,0.3505f,0.3886f,0.3503f,0.3879f,0.2185f,0.3912f,0.1902f,0.3894f,0.1518f,0.3905f,0.0961f,0.4138f,0.0437f,0.4075f,0.0427f,0.408f,0.0437f,0.4075f,0.0961f,0.4138f,0.1518f,0.3905f,0.1902f,0.3894f,0.2185f,0.3912f,0.0325f,0.3879f,0.0306f,0.3835f,0.0325f,0.3879f,0.0908f,0.3999f,0.1568f,0.3845f,0.1952f,0.3809f,0.2214f,0.3832f,0.3535f,0.3812f,0.3561f,0.3769f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.1568f,0.3845f,0.0908f,0.3999f});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1414125f,0.01623501f,0.0296775f,0.046395f,0.01623501f,-0.058905f,0.0922725f,0.01623501f,0.0839025f,0.096525f,0.01623501f,-0.0473625f,0.12537f,0.01623501f,-0.021411f,0.0356625f,0.01623501f,0.085995f,0.095265f,0.00001674f,0.087705f,0.034605f,0.00001674f,0.0835425f,0.137565f,0.00087885f,0.029385f,0.0447075f,0.00087885f,-0.05832f,0.09423f,0.00087885f,-0.0458325f,0.122445f,0.00087885f,-0.0202635f,-0.137565f,0.00087885f,0.029385f,-0.1414125f,0.01623501f,0.0296775f,-0.0922725f,0.01623501f,0.0839025f,-0.095265f,0.00001674f,0.087705f,-0.046395f,0.01623501f,-0.058905f,-0.0447075f,0.00087885f,-0.05832f,0f,0.00087885f,-0.058995f,0f,0.01623501f,-0.0599625f,-0.034605f,0.00001674f,0.0835425f,-0.0356625f,0.01623501f,0.085995f,0f,0.01623501f,0.086085f,0f,0.00001674f,0.0835425f,-0.096525f,0.01623501f,-0.0473625f,-0.09423f,0.00087885f,-0.0458325f,-0.12537f,0.01623501f,-0.021411f,-0.122445f,0.00087885f,-0.0202635f,0.0457875f,0.02583261f,-0.054135f,0f,0.02583261f,-0.0551925f,-0.0457875f,0.02583261f,-0.054135f,-0.0942525f,0.02583261f,-0.0429975f,-0.1212075f,0.02583261f,-0.0187335f,-0.136035f,0.02583261f,0.0285075f,-0.09009f,0.02583261f,0.0792f,-0.0355725f,0.02583261f,0.0812025f,0f,0.02583261f,0.081315f,0.0355725f,0.02583261f,0.0812025f,0.09009f,0.02583261f,0.0792f,0.136035f,0.02583261f,0.0285075f,0.1212075f,0.02583261f,-0.0187335f,0.0942525f,0.02583261f,-0.0429975f,0.03429f,-0.0102951f,0.076995f,0f,-0.0102951f,0.076995f,-0.03429f,-0.0102951f,0.076995f,-0.091665f,-0.0102951f,0.080865f,-0.130455f,-0.0102951f,0.02808f,-0.1166175f,-0.0102951f,-0.016794f,-0.0906525f,-0.0102951f,-0.0400275f,-0.0434475f,-0.0102951f,-0.0517725f,0f,-0.0102951f,-0.052425f,0.0434475f,-0.0102951f,-0.0517725f,0.0906525f,-0.0102951f,-0.0400275f,0.1166175f,-0.0102951f,-0.016794f,0.130455f,-0.0102951f,0.02808f,0.091665f,-0.0102951f,0.080865f});
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1});
  }
}
private class MFInt32284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1});
  }
}
private class MFVec2f285 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.1518f,0.3905f,0.3506f,0.3865f,0.3484f,0.3944f,0.0427f,0.408f,0.0961f,0.4138f,0.3437f,0.3934f,0.2185f,0.3912f,0.1902f,0.3894f,0.0437f,0.4075f,0.0437f,0.4075f,0.0961f,0.4138f,0.1008f,0.4259f,0.055f,0.4216f,0.1902f,0.3894f,0.1843f,0.4071f,0.1528f,0.4078f,0.1518f,0.3905f,0.3364f,0.4029f,0.3506f,0.3865f,0.3437f,0.3934f,0.3325f,0.4068f,0.0482f,0.4185f,0.0427f,0.408f,0.2185f,0.3912f,0.221f,0.4256f,0.3484f,0.3944f,0.3061f,0.4256f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.3437f,0.3934f,0.3506f,0.3865f,0.2185f,0.3912f,0.1902f,0.3894f,0.1518f,0.3905f,0.0961f,0.4138f,0.0437f,0.4075f,0.0427f,0.408f,0.0437f,0.4075f,0.0961f,0.4138f,0.1518f,0.3905f,0.1902f,0.3894f,0.2185f,0.3912f,0.3484f,0.3944f});
  }
}
private class MFVec3f286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0435825f,0.01923984f,-0.05949f,0.13932f,0.01924263f,0.030915f,0.129105f,0.01924263f,-0.0171315f,0.0363375f,0.01924263f,0.0839025f,0.0961425f,0.01924263f,-0.0488025f,0.0887625f,0.01924263f,0.079425f,0.1414125f,0.00011439f,0.0296775f,0.046395f,0.00011439f,-0.058905f,0f,0.00011439f,0.086085f,0.0922725f,0.00011439f,0.0839025f,0.096525f,0.00011439f,-0.0473625f,0.12537f,0.00011439f,-0.021411f,0.0356625f,0.00011439f,0.085995f,-0.0356625f,0.00011439f,0.085995f,-0.0922725f,0.00011439f,0.0839025f,-0.0887625f,0.01924263f,0.079425f,-0.0363375f,0.01924263f,0.0839025f,-0.12537f,0.00011439f,-0.021411f,-0.129105f,0.01924263f,-0.0171315f,-0.13932f,0.01924263f,0.030915f,-0.1414125f,0.00011439f,0.0296775f,-0.0435825f,0.01923984f,-0.05949f,-0.046395f,0.00011439f,-0.058905f,0f,0.00011439f,-0.0599625f,0f,0.01923984f,-0.0615375f,0f,0.01924263f,0.08451f,-0.096525f,0.00011439f,-0.0473625f,-0.0961425f,0.01924263f,-0.0488025f,0.0360675f,0.0288207f,0.0785025f,0.0864f,0.0288207f,0.074205f,0.1334025f,0.0288207f,0.0290925f,0.124155f,0.0288207f,-0.01438425f,0.0935325f,0.0288207f,-0.0438075f,0.0429075f,0.0288207f,-0.0541125f,0f,0.0288207f,-0.056115f,-0.0429075f,0.0288207f,-0.0541125f,-0.0935325f,0.0288207f,-0.0438075f,-0.124155f,0.0288207f,-0.01438425f,-0.1334025f,0.0288207f,0.0290925f,-0.0864f,0.0288207f,0.074205f,-0.0360675f,0.0288207f,0.0785025f,0f,0.0288207f,0.07911f,0f,-0.00645327f,-0.0545625f,0.04572f,-0.00645327f,-0.053505f,0.09396f,-0.00645327f,-0.0424125f,0.120645f,-0.00645327f,-0.018378f,0.1353375f,-0.00645327f,0.02835f,0.0897975f,-0.00645327f,0.07857f,0.0355725f,-0.00645327f,0.0805725f,0f,-0.00645327f,0.080685f,-0.0355725f,-0.00645327f,0.0805725f,-0.0897975f,-0.00645327f,0.07857f,-0.1353375f,-0.00645327f,0.02835f,-0.120645f,-0.00645327f,-0.018378f,-0.09396f,-0.00645327f,-0.0424125f,-0.04572f,-0.00645327f,-0.053505f});
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1});
  }
}
private class MFInt32288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1});
  }
}
private class MFVec2f289 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.1538f,0.4251f,0.1784f,0.4249f,0.3223f,0.4192f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.3214f,0.4203f,0.3223f,0.4192f,0.3364f,0.4029f,0.3325f,0.4068f,0.0537f,0.4289f,0.0482f,0.4185f,0.055f,0.4216f,0.0663f,0.4356f,0.1055f,0.438f,0.1008f,0.4259f,0.1528f,0.4078f,0.1538f,0.4251f,0.1784f,0.4249f,0.1843f,0.4071f,0.221f,0.4256f,0.2236f,0.46f,0.3061f,0.4256f,0.2638f,0.4568f,0.0663f,0.4356f,0.1055f,0.438f,0.1538f,0.4251f,0.1784f,0.4249f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.3223f,0.4192f,0.2236f,0.46f,0.1784f,0.4249f,0.1538f,0.4251f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0407475f,0.01912545f,-0.060075f,0.1328175f,0.01912824f,-0.01285425f,0.08523f,0.01912824f,0.0749475f,0.037035f,0.01912824f,0.0818325f,0.09576f,0.01912824f,-0.0502425f,0.137205f,0.01912824f,0.0321525f,0.0435825f,0f,-0.05949f,0.13932f,0.00000279f,0.030915f,0.129105f,0.00000279f,-0.0171315f,0.0363375f,0.00000279f,0.0839025f,0f,0.00000279f,0.08451f,0.0961425f,0.00000279f,-0.0488025f,0.0887625f,0.00000279f,0.079425f,0f,0.01912545f,-0.06309f,-0.0407475f,0.01912545f,-0.060075f,-0.0435825f,0f,-0.05949f,0f,0f,-0.0615375f,0f,0.01912824f,0.0829575f,-0.0363375f,0.00000279f,0.0839025f,-0.037035f,0.01912824f,0.0818325f,-0.08523f,0.01912824f,0.0749475f,-0.0887625f,0.00000279f,0.079425f,-0.13932f,0.00000279f,0.030915f,-0.137205f,0.01912824f,0.0321525f,-0.1328175f,0.01912824f,-0.01285425f,-0.129105f,0.00000279f,-0.0171315f,-0.0961425f,0.00000279f,-0.0488025f,-0.09576f,0.01912824f,-0.0502425f,0.0364725f,0.0293508f,0.0754875f,0.082575f,0.0293508f,0.068895f,0.130545f,0.0293508f,0.029385f,0.1266975f,0.0293508f,-0.00998325f,0.092655f,0.0293508f,-0.044325f,0.03996f,0.0293508f,-0.0537525f,0f,0.0293508f,-0.0567f,-0.03996f,0.0293508f,-0.0537525f,-0.092655f,0.0293508f,-0.044325f,-0.1266975f,0.0293508f,-0.00998325f,-0.130545f,0.0293508f,0.029385f,-0.082575f,0.0293508f,0.068895f,-0.0364725f,0.0293508f,0.0754875f,0f,0.0293508f,0.07659f,0.0859725f,-0.00933534f,0.07326f,0.0360225f,-0.00933534f,0.0775575f,0f,-0.00933534f,0.078165f,-0.0360225f,-0.00933534f,0.0775575f,-0.0859725f,-0.00933534f,0.07326f,-0.132345f,-0.00933534f,0.0287775f,-0.1232775f,-0.00933534f,-0.01389825f,-0.09306f,-0.00933534f,-0.04293f,-0.042795f,-0.00933813f,-0.0531675f,0f,-0.00933813f,-0.0551475f,0.042795f,-0.00933813f,-0.0531675f,0.09306f,-0.00933534f,-0.04293f,0.1232775f,-0.00933534f,-0.01389825f,0.132345f,-0.00933534f,0.0287775f});
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1});
  }
}
private class MFInt32292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1});
  }
}
private class MFVec2f293 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0639f,0.4488f,0.0777f,0.4495f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.2633f,0.457f,0.3222f,0.4193f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.3223f,0.4192f,0.2638f,0.4568f,0.1784f,0.4249f,0.1784f,0.4249f,0.1055f,0.438f,0.0663f,0.4356f,0.2236f,0.46f,0.3214f,0.4203f,0.1538f,0.4251f,0.0537f,0.4289f,0.1538f,0.4251f,0.1504f,0.4433f,0.1107f,0.4532f,0.1055f,0.438f,0.0777f,0.4495f,0.0663f,0.4356f,0.3223f,0.4192f,0.3214f,0.4203f,0.3214f,0.4203f,0.3222f,0.4193f,0.2236f,0.46f,0.2638f,0.4568f,0.2633f,0.457f,0.2198f,0.4731f,0.0639f,0.4488f,0.0537f,0.4289f,0.2144f,0.4674f,0.1846f,0.4438f,0.1784f,0.4249f,0.1784f,0.4249f,0.1107f,0.4532f,0.1504f,0.4433f,0.1846f,0.4438f,0.2144f,0.4674f,0.2198f,0.4731f,0.2633f,0.457f,0.3214f,0.4203f,0.3222f,0.4193f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.0777f,0.4495f,0.0639f,0.4488f,0.0777f,0.4495f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.0663f,0.4356f,0.1055f,0.438f,0.1538f,0.4251f,0.1784f,0.4249f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.3223f,0.4192f,0.2236f,0.46f,0.1784f,0.4249f,0.1538f,0.4251f});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0378225f,0.0229338f,0.07938f,0.1299375f,0.0236871f,-0.02034675f,0.1310625f,0.02202426f,0.0342225f,0.0806625f,0.02517138f,0.0691425f,0.0407475f,0.0236871f,-0.0563625f,0.09639f,0.0236871f,-0.04743f,0.1038825f,0.0236871f,-0.04662f,0.0407475f,0.00035712f,-0.060075f,0.1328175f,0.00035991f,-0.01285425f,0.08523f,0.00035991f,0.0749475f,0.037035f,0.00035991f,0.0818325f,0.09576f,0.00035991f,-0.0502425f,0.137205f,0.00035991f,0.0321525f,-0.137205f,0.00035991f,0.0321525f,-0.1310625f,0.02202426f,0.0342225f,-0.0806625f,0.02517138f,0.0691425f,-0.08523f,0.00035991f,0.0749475f,-0.0378225f,0.0229338f,0.07938f,-0.037035f,0.00035991f,0.0818325f,-0.0407475f,0.00035712f,-0.060075f,0f,0.00035712f,-0.06309f,0f,0.0236871f,-0.0593775f,-0.0407475f,0.0236871f,-0.0563625f,-0.09576f,0.00035991f,-0.0502425f,-0.09639f,0.0236871f,-0.04743f,0f,0.0229338f,0.08136f,0f,0.00035991f,0.0829575f,-0.1038825f,0.0236871f,-0.04662f,-0.1299375f,0.0236871f,-0.02034675f,-0.1328175f,0.00035991f,-0.01285425f,0.0778725f,0.0383625f,0.0628875f,0.1242675f,0.0383625f,0.0307575f,0.1232775f,0.0383625f,-0.017523f,0.1008f,0.0383625f,-0.0402075f,0.09549f,0.0383625f,-0.04077f,0.03996f,0.0383625f,-0.0497025f,0f,0.0383625f,-0.05265f,-0.03996f,0.0383625f,-0.0497025f,-0.09549f,0.0383625f,-0.04077f,-0.1008f,0.0383625f,-0.0402075f,-0.1232775f,0.0383625f,-0.017523f,-0.1242675f,0.0383625f,0.0307575f,-0.0778725f,0.0383625f,0.0628875f,-0.036855f,0.0383625f,0.0726975f,0f,0.0383625f,0.0746325f,0.036855f,0.0383625f,0.0726975f,0.0824175f,-0.00898938f,0.0685575f,0.03645f,-0.00898938f,0.0751275f,0f,-0.00898938f,0.07623f,-0.03645f,-0.00898938f,0.0751275f,-0.0824175f,-0.00898938f,0.0685575f,-0.130185f,-0.00898938f,0.0292275f,-0.12636f,-0.00898938f,-0.0098235f,-0.0924975f,-0.00898938f,-0.0439875f,-0.039915f,-0.00898938f,-0.0533925f,0f,-0.00898938f,-0.0563625f,0.039915f,-0.00898938f,-0.0533925f,0.0924975f,-0.00898938f,-0.0439875f,0.12636f,-0.00898938f,-0.0098235f,0.130185f,-0.00898938f,0.0292275f});
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1});
  }
}
private class MFInt32296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1});
  }
}
private class MFVec2f297 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0763f,0.4945f,0.0877f,0.4617f,0.0525f,0.4715f,0.0399f,0.5407f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0639f,0.4488f,0.0777f,0.4495f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.3222f,0.4193f,0.2633f,0.457f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.2035f,0.4795f,0.2169f,0.492f,0.2635f,0.4569f,0.3214f,0.4203f,0.0763f,0.4945f,0.1178f,0.4708f,0.1491f,0.4682f,0.1915f,0.4696f,0.1504f,0.4433f,0.1107f,0.4532f,0.0777f,0.4495f,0.0639f,0.4488f,0.3214f,0.4203f,0.3222f,0.4193f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f,0.0639f,0.4488f,0.0877f,0.4617f,0.0763f,0.4945f,0.0525f,0.4715f,0.0777f,0.4495f,0.1504f,0.4433f,0.1491f,0.4682f,0.1178f,0.4708f,0.1107f,0.4532f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4193f,0.3222f,0.4193f,0.2035f,0.4795f,0.2144f,0.4674f,0.2198f,0.4731f,0.2169f,0.492f,0.1915f,0.4696f,0.1846f,0.4438f,0.2633f,0.457f,0.2635f,0.4569f,0.0399f,0.5407f,0.2169f,0.492f,0.2035f,0.4795f,0.2635f,0.4569f,0.3214f,0.4203f,0.1178f,0.4708f,0.0763f,0.4945f,0.1491f,0.4682f,0.1915f,0.4696f,0.1107f,0.4532f,0.1504f,0.4433f,0.0777f,0.4495f,0.0639f,0.4488f,0.3222f,0.4193f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0385425f,0.02074365f,0.07713f,0.121005f,0.0346518f,0.03762f,0.09729f,0.0346518f,-0.0433575f,0.1156725f,0.0346518f,-0.0413775f,0.1257525f,0.0346518f,-0.0312075f,0.0747f,0.0346518f,0.06156f,0.0407475f,0.0346518f,-0.050985f,0.0358425f,0.0296856f,0.092205f,0.0378225f,0.0000558f,0.07938f,0.1299375f,0.0008091f,-0.02034675f,0.1310625f,-0.00085374f,0.0342225f,0.0806625f,0.00229338f,0.0691425f,0.0407475f,0.0008091f,-0.0563625f,0.09639f,0.0008091f,-0.04743f,0.1038825f,0.0008091f,-0.04662f,0f,0.0000558f,0.08136f,0f,0.01080846f,0.0927225f,0f,0.0008091f,-0.0593775f,0f,0.0346518f,-0.054f,0.112905f,0.0465372f,-0.0356175f,0.09657f,0.0465372f,-0.0373725f,0.0401175f,0.0465372f,-0.045f,0.0342225f,0.0465372f,0.085815f,0.0714375f,0.0465372f,0.056475f,0.1152225f,0.0465372f,0.03384f,0.119565f,0.0465372f,-0.0289125f,0.1275525f,-0.012276f,0.03168f,0.0797625f,-0.012276f,0.0647775f,0.03771f,-0.012276f,0.074835f,0f,-0.012276f,0.0767925f,0.0408825f,-0.012276f,-0.0515025f,0.0975375f,-0.012276f,-0.04239f,0.103185f,-0.012276f,-0.0417825f,0.1265175f,-0.012276f,-0.0182565f,-0.0385425f,0.02074365f,0.07713f,-0.0358425f,0.0296856f,0.092205f,-0.0378225f,0.0000558f,0.07938f,-0.1310625f,-0.00085374f,0.0342225f,-0.121005f,0.0346518f,0.03762f,-0.0747f,0.0346518f,0.06156f,-0.0806625f,0.00229338f,0.0691425f,-0.0407475f,0.0346518f,-0.050985f,-0.0407475f,0.0008091f,-0.0563625f,-0.1156725f,0.0346518f,-0.0413775f,-0.1038825f,0.0008091f,-0.04662f,-0.09639f,0.0008091f,-0.04743f,-0.09729f,0.0346518f,-0.0433575f,-0.1257525f,0.0346518f,-0.0312075f,-0.1299375f,0.0008091f,-0.02034675f,0f,0.032085f,0.08595f,-0.09657f,0.0465372f,-0.0373725f,-0.112905f,0.0465372f,-0.0356175f,-0.0401175f,0.0465372f,-0.045f,0f,0.0465372f,-0.04797f,-0.0714375f,0.0465372f,0.056475f,-0.0342225f,0.0465372f,0.085815f,-0.1152225f,0.0465372f,0.03384f,-0.119565f,0.0465372f,-0.0289125f,-0.0797625f,-0.012276f,0.0647775f,-0.1275525f,-0.012276f,0.03168f,-0.03771f,-0.012276f,0.074835f,-0.0408825f,-0.012276f,-0.0515025f,0f,-0.012276f,-0.0545175f,-0.0975375f,-0.012276f,-0.04239f,-0.103185f,-0.012276f,-0.0417825f,-0.1265175f,-0.012276f,-0.0182565f});
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1});
  }
}
private class MFInt32300 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1});
  }
}
private class MFVec2f301 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4473f,0.6921f,0.4449f,0.6914f,0.4513f,0.6918f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.0786f,0.5849f,0.0516f,0.5759f,0.1474f,0.4856f,0.1963f,0.4863f,0.0346f,0.5664f,0.3214f,0.4203f,0.3223f,0.4192f,0.2638f,0.4568f,0.2146f,0.5039f,0.1227f,0.5144f,0.4468f,0.6898f,0.4495f,0.6881f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0763f,0.4945f,0.0399f,0.5407f,0.1474f,0.4856f,0.1963f,0.4863f,0.2146f,0.5039f,0.2638f,0.4568f,0.3214f,0.4203f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1491f,0.4682f,0.1178f,0.4708f,0.0763f,0.4945f,0.0399f,0.5407f,0.3214f,0.4203f,0.3223f,0.4193f,0.4473f,0.6921f,0.4449f,0.6914f,0.4468f,0.6898f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.1227f,0.5144f,0.0786f,0.5849f,0.0516f,0.5759f,0.1178f,0.4708f,0.1474f,0.4856f,0.0346f,0.5664f,0.0399f,0.5407f,0.2146f,0.5039f,0.1963f,0.4863f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.2635f,0.4569f,0.2638f,0.4568f,0.1491f,0.4682f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4192f,0.3223f,0.4193f,0.4495f,0.6881f,0.4513f,0.6918f,0.1963f,0.4863f,0.1474f,0.4856f,0.2146f,0.5039f,0.2638f,0.4568f,0.3214f,0.4203f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.1491f,0.4682f,0.1178f,0.4708f,0.0763f,0.4945f,0.0399f,0.5407f,0.3223f,0.4193f,0.3214f,0.4203f});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0704475f,0.01345617f,0.08235f,0.0308925f,0.01488186f,0.07713f,0.03105f,0.01488186f,0.0876825f,0f,0.02519928f,-0.050625f,0f,-0.00019809f,0.0823725f,0.0459675f,0.0297693f,0.0695025f,0.114435f,0.02711322f,0.0398475f,0.0505125f,0.0341217f,0.0805725f,0.0407475f,0.02519928f,-0.04761f,0.12312f,0.02530809f,-0.03807f,0.0978525f,0.0252774f,-0.0407925f,0.0856125f,0.0323919f,0.0612675f,0.026595f,0.0297693f,0.0622125f,0.121005f,0.00397575f,0.03762f,0.09729f,0.00397575f,-0.0433575f,0.1156725f,0.00397575f,-0.0413775f,0.1257525f,0.00397575f,-0.0312075f,0.0747f,0.00397575f,0.06156f,0.0407475f,0.00397575f,-0.050985f,0.0358425f,-0.0010044f,0.092205f,0f,0.00141732f,0.08595f,0f,0.00397575f,-0.054f,0.10989f,0.0369117f,0.028485f,0.1118475f,0.0354609f,-0.0315f,0.0973125f,0.0354609f,-0.0369225f,0.0402975f,0.0353772f,-0.04302f,0.096705f,-0.01261359f,-0.0385875f,0.1134675f,-0.01261359f,-0.0367875f,0.1208025f,-0.01261359f,-0.029385f,0.1163925f,-0.01261359f,0.034605f,0.07209f,-0.01261359f,0.0574875f,0.0345375f,-0.01261359f,0.06651f,0.0402525f,-0.01261359f,-0.046215f,-0.0308925f,0.01488186f,0.07713f,-0.0459675f,0.0297693f,0.0695025f,-0.026595f,0.0297693f,0.0622125f,-0.0358425f,-0.0010044f,0.092205f,-0.0704475f,0.01345617f,0.08235f,-0.0505125f,0.0341217f,0.0805725f,-0.03105f,0.01488186f,0.0876825f,-0.0856125f,0.0323919f,0.0612675f,-0.0747f,0.00397575f,0.06156f,-0.114435f,0.02711322f,0.0398475f,-0.0978525f,0.0252774f,-0.0407925f,-0.12312f,0.02530809f,-0.03807f,-0.1156725f,0.00397575f,-0.0413775f,-0.09729f,0.00397575f,-0.0433575f,-0.1257525f,0.00397575f,-0.0312075f,-0.0407475f,0.00397575f,-0.050985f,-0.0407475f,0.02519928f,-0.04761f,-0.121005f,0.00397575f,0.03762f,0f,0.0297693f,0.05841f,-0.1118475f,0.0354609f,-0.0315f,-0.10989f,0.0369117f,0.028485f,-0.0973125f,0.0354609f,-0.0369225f,-0.0402975f,0.0353772f,-0.04302f,0f,0.0353772f,-0.045675f,-0.1134675f,-0.01261359f,-0.0367875f,-0.096705f,-0.01261359f,-0.0385875f,-0.1208025f,-0.01261359f,-0.029385f,-0.1163925f,-0.01261359f,0.034605f,-0.07209f,-0.01261359f,0.0574875f,-0.0345375f,-0.01261359f,0.06651f,0f,-0.01261359f,0.0810675f,-0.0402525f,-0.01261359f,-0.046215f,0f,-0.01261359f,-0.049185f});
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1});
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1});
  }
}
private class MFVec2f305 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4416f,0.6747f,0.4535f,0.6485f,0.4483f,0.6438f,0.4499f,0.6371f,0.4594f,0.6763f,0.4399f,0.6472f,0.4645f,0.6783f,0.4385f,0.6236f,0.4279f,0.6258f,0.1412f,0.5207f,0.1108f,0.5655f,0.1073f,0.5839f,0.1708f,0.4854f,0.4376f,0.6345f,0.4528f,0.6648f,0.4548f,0.6714f,0.4459f,0.6652f,0.4669f,0.6678f,0.0786f,0.5849f,0.4476f,0.6884f,0.1474f,0.4856f,0.0865f,0.5614f,0.1963f,0.4863f,0.1227f,0.5144f,0.4539f,0.6879f,0.4621f,0.6889f,0.2661f,0.5914f,0.3505f,0.5919f,0.241f,0.592f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.2067f,0.5908f,0.2708f,0.4736f,0.347f,0.4317f,0.3616f,0.5328f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.3477f,0.431f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3477f,0.431f,0.3511f,0.5932f,0.3206f,0.4193f,0.2505f,0.5754f,0.3554f,0.5911f,0.2112f,0.5805f,0.1632f,0.5887f,0.1073f,0.5839f,0.1474f,0.4856f,0.1108f,0.5655f,0.1412f,0.5207f,0.1708f,0.4854f,0.1963f,0.4863f,0.3223f,0.4192f,0.2638f,0.4568f,0.3206f,0.4193f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.2252f,0.4828f,0.4337f,0.6239f,0.4689f,0.6806f,0.4689f,0.6702f,0.4627f,0.667f,0.4583f,0.6722f,0.4578f,0.6906f,0.1073f,0.5839f,0.0786f,0.5849f,0.0865f,0.5614f,0.1108f,0.5655f,0.4514f,0.6379f,0.4463f,0.6454f,0.4498f,0.6514f,0.4521f,0.6748f,0.4466f,0.6744f,0.4444f,0.685f,0.4523f,0.6875f,0.4395f,0.6457f,0.4393f,0.633f,0.4295f,0.6275f,0.4284f,0.6322f,0.4488f,0.6639f,0.1708f,0.4854f,0.1412f,0.5207f,0.1227f,0.5144f,0.1963f,0.4863f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.1412f,0.5207f,0.1108f,0.5655f,0.2067f,0.5908f,0.1632f,0.5887f,0.1073f,0.5839f,0.1708f,0.4854f,0.1963f,0.4863f,0.1474f,0.4856f,0.3477f,0.431f,0.347f,0.4317f,0.3616f,0.5328f,0.3623f,0.5333f,0.238f,0.493f,0.2708f,0.4736f,0.2733f,0.5359f,0.249f,0.5451f,0.3505f,0.5919f,0.3511f,0.5932f,0.3623f,0.5333f,0.3223f,0.4192f,0.3206f,0.4193f,0.3477f,0.431f,0.2252f,0.4828f,0.2638f,0.4568f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.1963f,0.4863f,0.3206f,0.4193f,0.1474f,0.4856f,0.4323f,0.622f,0.0865f,0.5614f,0.0786f,0.5849f,0.4539f,0.6879f,0.4621f,0.6889f,0.4523f,0.6875f,0.4578f,0.6906f,0.0865f,0.5614f,0.1227f,0.5144f,0.1474f,0.4856f,0.1474f,0.4856f,0.1227f,0.5144f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.1999f,0.4849f,0.1421f,0.507f,0.1227f,0.5144f});
  }
}
private class MFVec3f306 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.033075f,0.047709f,-0.025875f,0.04536f,0.0470952f,0.0009315f,0.065565f,0.0346518f,0.00209475f,0.0717075f,0.01047366f,0.0293175f,0.0175635f,0.0314712f,0.03078f,0.0353925f,0.0387531f,0.0195795f,0.0459675f,0.00012555f,0.0695025f,0.0505125f,0.00447516f,0.0805725f,0.12312f,-0.00433287f,-0.03807f,0.0856125f,0.00274536f,0.0612675f,0.026595f,0.00012555f,0.0622125f,0f,0.00012555f,0.05841f,0f,0.0371907f,-0.00118575f,0.0584775f,0.0597618f,-0.037035f,0.02166525f,0.0604314f,-0.07632f,0.0457875f,0.0611847f,-0.0687375f,0.0773775f,0.0579483f,0.002862f,0.0889425f,0.0338985f,-0.0555075f,0.1141425f,0.043245f,0.002862f,0.1047375f,0.00764181f,-0.04545f,0.02322f,-0.01909197f,-0.1050075f,0f,-0.01884366f,-0.108045f,0.053775f,-0.00831699f,-0.093465f,0.0377325f,-0.1123812f,-0.0762075f,0.0927f,-0.0700848f,-0.07362f,0f,-0.0985428f,-0.06309f,0f,0.0423801f,-0.036225f,0.067095f,0.028458f,0.0436725f,0.09945f,0.02004336f,0.0419625f,0.126045f,0.01422621f,-0.00120825f,0.0407475f,-0.0943857f,-0.060075f,0.0407475f,-0.00444168f,-0.04761f,0.0412425f,-0.0676296f,-0.0513675f,0.0954225f,-0.0676296f,-0.0513675f,0.0950625f,-0.00433287f,-0.03807f,0.015588f,0.0417663f,-0.0338175f,-0.065565f,0.0346518f,0.00209475f,-0.04536f,0.0470952f,0.0009315f,-0.0353925f,0.0387531f,0.0195795f,-0.0459675f,0.00012555f,0.0695025f,-0.0505125f,0.00447516f,0.0805725f,-0.067095f,0.028458f,0.0436725f,-0.0175635f,0.0314712f,0.03078f,0f,0.0312201f,0.033525f,-0.026595f,0.00012555f,0.0622125f,-0.015588f,0.0417663f,-0.0338175f,-0.126045f,0.01422621f,-0.00120825f,-0.0856125f,0.00274536f,0.0612675f,-0.02166525f,0.0604314f,-0.07632f,0f,0.0597897f,-0.0800325f,-0.0457875f,0.0611847f,-0.0687375f,-0.033075f,0.047709f,-0.025875f,-0.1141425f,0.043245f,0.002862f,-0.1047375f,0.00764181f,-0.04545f,-0.0889425f,0.0338985f,-0.0555075f,-0.0773775f,0.0579483f,0.002862f,-0.09945f,0.02004336f,0.0419625f,-0.0584775f,0.0597618f,-0.037035f,-0.0717075f,0.01047366f,0.0293175f,-0.12312f,-0.00433287f,-0.03807f,-0.0377325f,-0.1123812f,-0.0762075f,0f,-0.121365f,-0.078885f,-0.02322f,-0.01909197f,-0.1050075f,-0.0927f,-0.0700848f,-0.07362f,-0.053775f,-0.00831699f,-0.093465f,-0.0407475f,-0.0943857f,-0.060075f,-0.0954225f,-0.0676296f,-0.0513675f,-0.0407475f,-0.00444168f,-0.04761f,0f,-0.00444168f,-0.050625f,0f,-0.0676296f,-0.0513675f,-0.0412425f,-0.0676296f,-0.0513675f,-0.0950625f,-0.00433287f,-0.03807f,0.114435f,-0.00252774f,0.0398475f,-0.114435f,-0.00252774f,0.0398475f,0.0525825f,-0.01233738f,0.07758f,0.049095f,-0.01233738f,0.071595f,0.02763f,-0.01233738f,0.06156f,0f,-0.01233738f,0.0576f,-0.02763f,-0.01233738f,0.06156f,-0.049095f,-0.01233738f,0.071595f,-0.0525825f,-0.01233738f,0.07758f,-0.083385f,-0.01233738f,0.0596925f,-0.1105425f,-0.01233738f,0.039015f,-0.11853f,-0.01233738f,-0.033975f,-0.0947025f,-0.01233738f,-0.033975f,-0.0402525f,-0.01233738f,-0.0435375f,0f,-0.01233738f,-0.04653f,0.0402525f,-0.01233738f,-0.0435375f,0.0947025f,-0.01233738f,-0.033975f,0.11853f,-0.01233738f,-0.033975f,0.1105425f,-0.01233738f,0.039015f,0.083385f,-0.01233738f,0.0596925f});
  }
}
private class MFInt32307 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
private class MFInt32308 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
private class MFVec2f309 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6285f,0.3906f,0.6293f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.3906f,0.6224f,0.4006f,0.6225f,0.3818f,0.6285f,0.3719f,0.632f,0.3649f,0.6316f,0.3706f,0.6267f,0.3807f,0.6225f,0.3906f,0.6293f,0.3995f,0.6285f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.4006f,0.6225f,0.3906f,0.6224f,0.3807f,0.6225f,0.3706f,0.6267f,0.3649f,0.6316f,0.3719f,0.632f,0.3818f,0.6285f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.3906f,0.6475f,0.3807f,0.6518f,0.3719f,0.6549f,0.3649f,0.6547f,0.3906f,0.6538f,0.4006f,0.6518f,0.3818f,0.6534f,0.3706f,0.6527f,0.3995f,0.6534f,0.3906f,0.6538f,0.3818f,0.6534f,0.3719f,0.6549f,0.3649f,0.6547f,0.3706f,0.6527f,0.3807f,0.6518f,0.3906f,0.6475f,0.4006f,0.6518f,0.4107f,0.6527f,0.4164f,0.6547f,0.4094f,0.6549f});
  }
}
private class MFVec3f310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.00298809f,-0.02529f,0f,0.00472626f,-0.0268875f,0.0256275f,0.00489924f,-0.019134f,0.035145f,0.00411246f,0.00164025f,0.0274275f,-0.00069471f,0.016092f,0f,-0.00992682f,0.0268875f,0.0136125f,-0.0096255f,0.0247725f,-0.01208025f,0.00298809f,-0.02529f,-0.0256275f,0.00489645f,-0.019134f,-0.035145f,0.00411246f,0.00164025f,-0.0274275f,-0.00069471f,0.01609425f,-0.0136125f,-0.0096255f,0.0247725f,0f,-0.0198369f,-0.02313f,0.01112175f,-0.02009637f,-0.02171025f,0.0224775f,-0.02105334f,-0.0164925f,0.030195f,-0.02412792f,0.00030375f,0.02421f,-0.02614788f,0.0113355f,0.011988f,-0.02749824f,0.01872f,0f,-0.02783583f,0.02056275f,-0.011988f,-0.02749824f,0.01872f,-0.02421f,-0.02614788f,0.0113355f,-0.030195f,-0.02412792f,0.000306f,-0.0224775f,-0.02105334f,-0.0164925f,-0.01112175f,-0.02009637f,-0.02171025f,0.01208025f,0.01494603f,-0.02529f,0.0256275f,0.01494603f,-0.019134f,0.035145f,0.01494603f,0.00164025f,0.0274275f,0.01494603f,0.01609425f,0f,0.01494603f,0.0268875f,-0.0136125f,0.01494603f,0.0247725f,-0.0256275f,0.01494603f,-0.019134f,-0.035145f,0.01494603f,0.00164025f,0f,0.01494603f,-0.0268875f,0.0136125f,0.01494603f,0.0247725f,-0.01208025f,0.01494603f,-0.02529f,-0.0274275f,0.01494603f,0.01609425f,0.01113075f,0.02046465f,-0.021033f,0f,0.02046465f,-0.0225f,-0.01113075f,0.02046465f,-0.021033f,-0.02268f,0.02046465f,-0.015786f,-0.0306225f,0.02046465f,0.0015525f,-0.0245475f,0.02046465f,0.01290375f,-0.0122895f,0.02046465f,0.0206145f,0f,0.02046465f,0.0225225f,0.0122895f,0.02046465f,0.0206145f,0.0245475f,0.02046465f,0.01290375f,0.0306225f,0.02046465f,0.00155025f,0.02268f,0.02046465f,-0.015786f});
  }
}
private class MFInt32311 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32312 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f313 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.3906f,0.6507f,0.3807f,0.6555f,0.3719f,0.6578f,0.3649f,0.6576f,0.3906f,0.6568f,0.4006f,0.6555f,0.3818f,0.6565f,0.3706f,0.6559f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.3906f,0.6475f,0.3807f,0.6518f,0.3719f,0.6549f,0.3649f,0.6547f,0.3906f,0.6538f,0.4006f,0.6518f,0.3818f,0.6534f,0.3706f,0.6527f,0.3995f,0.6565f,0.3906f,0.6568f,0.3818f,0.6565f,0.3719f,0.6578f,0.3649f,0.6576f,0.3706f,0.6559f,0.3807f,0.6555f,0.3906f,0.6507f,0.4006f,0.6555f,0.4107f,0.6559f,0.4164f,0.6576f,0.4094f,0.6578f,0.3906f,0.6538f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.4006f,0.6518f,0.3906f,0.6475f,0.3807f,0.6518f,0.3706f,0.6527f,0.3649f,0.6547f,0.3719f,0.6549f,0.3818f,0.6534f});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.01557099f,-0.02529f,0.0256275f,0.01557099f,-0.019134f,0.035145f,0.01557099f,0.00164025f,0.0274275f,0.01557099f,0.01609425f,0f,0.01557099f,0.0268875f,-0.0136125f,0.01557099f,0.0247725f,-0.0256275f,0.01557099f,-0.019134f,-0.035145f,0.01557099f,0.00164025f,0f,0.01557099f,-0.0268875f,0.0136125f,0.01557099f,0.0247725f,-0.01208025f,0.01557099f,-0.02529f,-0.0274275f,0.01557099f,0.01609425f,0.01208025f,0.00010602f,-0.02529f,0.0256275f,0.00010602f,-0.019134f,0.035145f,0.00010602f,0.00164025f,0.0274275f,0.00010602f,0.01609425f,0f,0.00010602f,0.0268875f,-0.0136125f,0.00010602f,0.0247725f,-0.0256275f,0.00010602f,-0.019134f,-0.035145f,0.00010602f,0.00164025f,0f,0.00010602f,-0.0268875f,0.0136125f,0.00010602f,0.0247725f,-0.01208025f,0.00010602f,-0.02529f,-0.0274275f,0.00010602f,0.01609425f,0.01113075f,0.0210924f,-0.021033f,0f,0.0210924f,-0.0225f,-0.01113075f,0.0210924f,-0.021033f,-0.02268f,0.0210924f,-0.015786f,-0.0306225f,0.0210924f,0.0015525f,-0.0245475f,0.0210924f,0.01290375f,-0.0122895f,0.0210924f,0.0206145f,0f,0.0210924f,0.0225225f,0.0122895f,0.0210924f,0.0206145f,0.0245475f,0.0210924f,0.01290375f,0.0306225f,0.0210924f,0.0015525f,0.02268f,0.0210924f,-0.015786f,0f,-0.00657045f,-0.0225f,0.01113075f,-0.00657045f,-0.021033f,0.02268f,-0.00657045f,-0.015786f,0.0306225f,-0.00657045f,0.00155025f,0.0245475f,-0.00657045f,0.01290375f,0.0122895f,-0.00657045f,0.0206145f,0f,-0.00657045f,0.0225225f,-0.0122895f,-0.00657045f,0.0206145f,-0.0245475f,-0.00657045f,0.01290375f,-0.0306225f,-0.00657045f,0.0015525f,-0.02268f,-0.00657045f,-0.015786f,-0.01113075f,-0.00657045f,-0.021033f});
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32316 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f317 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.3906f,0.6538f,0.3807f,0.6592f,0.3719f,0.6606f,0.3649f,0.6605f,0.3906f,0.6599f,0.4006f,0.6592f,0.3818f,0.6596f,0.3706f,0.6591f,0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.3906f,0.6507f,0.3807f,0.6555f,0.3719f,0.6578f,0.3649f,0.6576f,0.3906f,0.6568f,0.4006f,0.6555f,0.3818f,0.6565f,0.3706f,0.6559f,0.3995f,0.6596f,0.3906f,0.6599f,0.3818f,0.6596f,0.3719f,0.6606f,0.3649f,0.6605f,0.3706f,0.6591f,0.3807f,0.6592f,0.3906f,0.6538f,0.4006f,0.6592f,0.4107f,0.6591f,0.4164f,0.6605f,0.4094f,0.6606f,0.3906f,0.6568f,0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.4006f,0.6555f,0.3906f,0.6507f,0.3807f,0.6555f,0.3706f,0.6559f,0.3649f,0.6576f,0.3719f,0.6578f,0.3818f,0.6565f});
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.01522224f,-0.02529f,0.0256275f,0.01522224f,-0.019134f,0.035145f,0.01522224f,0.00164025f,0.0274275f,0.01522224f,0.01609425f,0f,0.01522224f,0.0268875f,-0.0136125f,0.01522224f,0.0247725f,-0.0256275f,0.01522224f,-0.019134f,-0.035145f,0.01522224f,0.00164025f,0f,0.01522224f,-0.0268875f,0.0136125f,0.01522224f,0.0247725f,-0.01208025f,0.01522224f,-0.02529f,-0.0274275f,0.01522224f,0.01609425f,0.01208025f,0.00003348f,-0.02529f,0.0256275f,0.00003348f,-0.019134f,0.035145f,0.00003348f,0.00164025f,0.0274275f,0.00003348f,0.01609425f,0f,0.00003348f,0.0268875f,-0.0136125f,0.00003348f,0.0247725f,-0.0256275f,0.00003348f,-0.019134f,-0.035145f,0.00003348f,0.00164025f,0f,0.00003348f,-0.0268875f,0.0136125f,0.00003348f,0.0247725f,-0.01208025f,0.00003348f,-0.02529f,-0.0274275f,0.00003348f,0.01609425f,0.01113075f,0.02074086f,-0.021033f,0f,0.02074086f,-0.0225f,-0.01113075f,0.02074086f,-0.021033f,-0.02268f,0.02074086f,-0.015786f,-0.0306225f,0.02074086f,0.0015525f,-0.0245475f,0.02074086f,0.01290375f,-0.0122895f,0.02074086f,0.0206145f,0f,0.02074086f,0.0225225f,0.0122895f,0.02074086f,0.0206145f,0.0245475f,0.02074086f,0.01290375f,0.0306225f,0.02074086f,0.0015525f,0.02268f,0.02074086f,-0.015786f,0f,-0.00636678f,-0.0225f,0.01113075f,-0.00636678f,-0.021033f,0.02268f,-0.00636678f,-0.015786f,0.0306225f,-0.00636678f,0.0015525f,0.0245475f,-0.00636678f,0.01290375f,0.0122895f,-0.00636678f,0.0206145f,0f,-0.00636678f,0.0225225f,-0.0122895f,-0.00636678f,0.0206145f,-0.0245475f,-0.00636678f,0.01290375f,-0.0306225f,-0.00636678f,0.0015525f,-0.02268f,-0.00636678f,-0.015786f,-0.01113075f,-0.00636678f,-0.021033f});
  }
}
private class MFInt32319 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f321 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.3906f,0.657f,0.3807f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3906f,0.6629f,0.4006f,0.6628f,0.3818f,0.6628f,0.3706f,0.6624f,0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.3906f,0.6538f,0.3807f,0.6592f,0.3719f,0.6606f,0.3649f,0.6605f,0.3906f,0.6599f,0.4006f,0.6592f,0.3818f,0.6596f,0.3706f,0.6591f,0.3995f,0.6628f,0.3906f,0.6629f,0.3818f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3706f,0.6624f,0.3807f,0.6628f,0.3906f,0.657f,0.4006f,0.6628f,0.4107f,0.6624f,0.4164f,0.6634f,0.4094f,0.6635f,0.3906f,0.6599f,0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.4006f,0.6592f,0.3906f,0.6538f,0.3807f,0.6592f,0.3706f,0.6591f,0.3649f,0.6605f,0.3719f,0.6606f,0.3818f,0.6596f});
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.01611504f,-0.02529f,0.0256275f,0.01611504f,-0.019134f,0.035145f,0.01611504f,0.00164025f,0.0274275f,0.01611504f,0.01609425f,0f,0.01611504f,0.0268875f,-0.0136125f,0.01611504f,0.0247725f,-0.0256275f,0.01611504f,-0.019134f,-0.035145f,0.01611504f,0.00164025f,0f,0.01611504f,-0.0268875f,0.0136125f,0.01611504f,0.0247725f,-0.01208025f,0.01611504f,-0.02529f,-0.0274275f,0.01611504f,0.01609425f,0.01208025f,0.00004743f,-0.02529f,0.0256275f,0.00004743f,-0.019134f,0.035145f,0.00004743f,0.00164025f,0.0274275f,0.00004743f,0.01609425f,0f,0.00004743f,0.0268875f,-0.0136125f,0.00004743f,0.0247725f,-0.0256275f,0.00004743f,-0.019134f,-0.035145f,0.00004743f,0.00164025f,0f,0.00004743f,-0.0268875f,0.0136125f,0.00004743f,0.0247725f,-0.01208025f,0.00004743f,-0.02529f,-0.0274275f,0.00004743f,0.01609425f,0.01113075f,0.02163366f,-0.021033f,0f,0.02163366f,-0.0225f,-0.01113075f,0.02163366f,-0.021033f,-0.02268f,0.02163366f,-0.015786f,-0.0306225f,0.02163366f,0.0015525f,-0.0245475f,0.02163366f,0.01290375f,-0.0122895f,0.02163366f,0.0206145f,0f,0.02163366f,0.0225225f,0.0122895f,0.02163366f,0.0206145f,0.0245475f,0.02163366f,0.01290375f,0.0306225f,0.02163366f,0.0015525f,0.02268f,0.02163366f,-0.015786f,0f,-0.00666252f,-0.0225f,0.01113075f,-0.00666252f,-0.021033f,0.02268f,-0.00666252f,-0.015786f,0.0306225f,-0.00666252f,0.0015525f,0.0245475f,-0.00666252f,0.01290375f,0.0122895f,-0.00666252f,0.0206145f,0f,-0.00666252f,0.0225225f,-0.0122895f,-0.00666252f,0.0206145f,-0.0245475f,-0.00666252f,0.01290375f,-0.0306225f,-0.00666252f,0.0015525f,-0.02268f,-0.00666252f,-0.015786f,-0.01113075f,-0.00666252f,-0.021033f});
  }
}
private class MFInt32323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f325 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.3906f,0.6601f,0.3807f,0.6665f,0.3719f,0.6664f,0.3649f,0.6663f,0.3906f,0.666f,0.4006f,0.6665f,0.3818f,0.6659f,0.3706f,0.6656f,0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.3906f,0.657f,0.3807f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3906f,0.6629f,0.4006f,0.6628f,0.3818f,0.6628f,0.3706f,0.6624f,0.3995f,0.6659f,0.3906f,0.666f,0.3818f,0.6659f,0.3719f,0.6664f,0.3649f,0.6663f,0.3706f,0.6656f,0.3807f,0.6665f,0.3906f,0.6601f,0.4006f,0.6665f,0.4107f,0.6656f,0.4164f,0.6663f,0.4094f,0.6664f,0.3906f,0.6629f,0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.4006f,0.6628f,0.3906f,0.657f,0.3807f,0.6628f,0.3706f,0.6624f,0.3649f,0.6634f,0.3719f,0.6635f,0.3818f,0.6628f});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.01437408f,-0.02529f,0.0256275f,0.01437408f,-0.019134f,0.035145f,0.01437408f,0.00164025f,0.0274275f,0.01437408f,0.01609425f,0f,0.01437408f,0.0268875f,-0.0136125f,0.01437408f,0.0247725f,-0.0256275f,0.01437408f,-0.019134f,-0.035145f,0.01437408f,0.00164025f,0f,0.01437408f,-0.0268875f,0.0136125f,0.01437408f,0.0247725f,-0.01208025f,0.01437408f,-0.02529f,-0.0274275f,0.01437408f,0.01609425f,0.01208025f,0.00004185f,-0.02529f,0.0256275f,0.00004185f,-0.019134f,0.035145f,0.00004185f,0.00164025f,0.0274275f,0.00004185f,0.01609425f,0f,0.00004185f,0.0268875f,-0.0136125f,0.00004185f,0.0247725f,-0.0256275f,0.00004185f,-0.019134f,-0.035145f,0.00004185f,0.00164025f,0f,0.00004185f,-0.0268875f,0.0136125f,0.00004185f,0.0247725f,-0.01208025f,0.00004185f,-0.02529f,-0.0274275f,0.00004185f,0.01609425f,0.01113075f,0.01991502f,-0.021033f,0f,0.01991502f,-0.0225f,-0.01113075f,0.01991502f,-0.021033f,-0.02268f,0.01991502f,-0.015786f,-0.0306225f,0.01991502f,0.0015525f,-0.0245475f,0.01991502f,0.01290375f,-0.0122895f,0.01991502f,0.0206145f,0f,0.01991502f,0.0225225f,0.0122895f,0.01991502f,0.0206145f,0.0245475f,0.01991502f,0.01290375f,0.0306225f,0.01991502f,0.0015525f,0.02268f,0.01991502f,-0.015786f,0f,-0.00669042f,-0.0225f,0.01113075f,-0.00669042f,-0.021033f,0.02268f,-0.00669042f,-0.015786f,0.0306225f,-0.00669042f,0.0015525f,0.0245475f,-0.00669042f,0.01290375f,0.0122895f,-0.00669042f,0.0206145f,0f,-0.00669042f,0.0225225f,-0.0122895f,-0.00669042f,0.0206145f,-0.0245475f,-0.00669042f,0.01290375f,-0.0306225f,-0.00669042f,0.0015525f,-0.02268f,-0.00669042f,-0.015786f,-0.01113075f,-0.00669042f,-0.021033f});
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
private class MFInt32328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
private class MFVec2f329 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6721f,0.3906f,0.6721f,0.4094f,0.6721f,0.4164f,0.6721f,0.4107f,0.6721f,0.4006f,0.6738f,0.3906f,0.6664f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3995f,0.6721f,0.3906f,0.6721f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3906f,0.6664f,0.4006f,0.6738f,0.4107f,0.6721f,0.4164f,0.6721f,0.4094f,0.6721f,0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.3906f,0.6632f,0.3807f,0.6702f,0.3719f,0.6692f,0.3649f,0.6692f,0.3906f,0.669f,0.4006f,0.6702f,0.3818f,0.669f,0.3706f,0.6689f,0.3906f,0.669f,0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.4006f,0.6702f,0.3906f,0.6632f,0.3807f,0.6702f,0.3706f,0.6689f,0.3649f,0.6692f,0.3719f,0.6692f,0.3818f,0.669f});
  }
}
private class MFVec3f330 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.01455264f,-0.02529f,0f,0.01455264f,-0.0268875f,0.0256275f,0.01455264f,-0.019134f,0.035145f,0.01455264f,0.0016425f,0.0274275f,0.01455264f,0.01609425f,0.0136125f,0.01455264f,0.0247725f,0f,0.01455264f,0.0268875f,-0.01208025f,0.01455264f,-0.02529f,-0.0256275f,0.01455264f,-0.019134f,-0.035145f,0.01455264f,0.00164025f,-0.0274275f,0.01455264f,0.01609425f,-0.0136125f,0.01455264f,0.0247725f,0.0107955f,0.02117889f,-0.02080575f,0f,0.02117889f,-0.02223675f,-0.0107955f,0.02117889f,-0.02080575f,-0.022149f,0.02117889f,-0.01564425f,-0.0299925f,0.02117889f,0.001485f,-0.02394f,0.02117889f,0.0128385f,-0.01196325f,0.02117889f,0.020367f,0f,0.02117889f,0.02222325f,0.01196325f,0.02117889f,0.020367f,0.02394f,0.02117889f,0.0128385f,0.0299925f,0.02117889f,0.001485f,0.022149f,0.02117889f,-0.01564425f,0.01208025f,0.00005022f,-0.02529f,0.0256275f,0.00005022f,-0.019134f,0.035145f,0.00005022f,0.0016425f,0.0274275f,0.00005022f,0.01609425f,0f,0.00005022f,0.0268875f,-0.0136125f,0.00005022f,0.0247725f,-0.0256275f,0.00005022f,-0.019134f,-0.035145f,0.00005022f,0.00164025f,0f,0.00005022f,-0.0268875f,0.0136125f,0.00005022f,0.0247725f,-0.01208025f,0.00005022f,-0.02529f,-0.0274275f,0.00005022f,0.01609425f,0f,-0.00598734f,-0.0225f,0.01113075f,-0.00598734f,-0.021033f,0.02268f,-0.00598734f,-0.015786f,0.0306225f,-0.00598734f,0.0015525f,0.0245475f,-0.00598734f,0.01290375f,0.0122895f,-0.00598734f,0.0206145f,0f,-0.00598734f,0.0225225f,-0.0122895f,-0.00598734f,0.0206145f,-0.0245475f,-0.00598734f,0.01290375f,-0.0306225f,-0.00598734f,0.0015525f,-0.02268f,-0.00598734f,-0.015786f,-0.01113075f,-0.00598734f,-0.021033f});
  }
}
private class MFInt32331 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32332 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f333 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.3906f,0.6632f,0.3807f,0.6702f,0.3719f,0.6692f,0.3649f,0.6692f,0.3906f,0.669f,0.4006f,0.6702f,0.3818f,0.669f,0.3706f,0.6689f,0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.3906f,0.6601f,0.3807f,0.6665f,0.3719f,0.6664f,0.3649f,0.6663f,0.3906f,0.666f,0.4006f,0.6665f,0.3818f,0.6659f,0.3706f,0.6656f,0.3995f,0.669f,0.3906f,0.669f,0.3818f,0.669f,0.3719f,0.6692f,0.3649f,0.6692f,0.3706f,0.6689f,0.3807f,0.6702f,0.3906f,0.6632f,0.4006f,0.6702f,0.4107f,0.6689f,0.4164f,0.6692f,0.4094f,0.6692f,0.3906f,0.666f,0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.4006f,0.6665f,0.3906f,0.6601f,0.3807f,0.6665f,0.3706f,0.6656f,0.3649f,0.6663f,0.3719f,0.6664f,0.3818f,0.6659f});
  }
}
private class MFVec3f334 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f,0.01596996f,-0.02529f,0.0256275f,0.01596996f,-0.019134f,0.035145f,0.01596996f,0.0016425f,0.0274275f,0.01596996f,0.01609425f,0f,0.01596996f,0.0268875f,-0.0136125f,0.01596996f,0.0247725f,-0.0256275f,0.01596996f,-0.019134f,-0.035145f,0.01596996f,0.00164025f,0f,0.01596996f,-0.0268875f,0.0136125f,0.01596996f,0.0247725f,-0.01208025f,0.01596996f,-0.02529f,-0.0274275f,0.01596996f,0.01609425f,0.01208025f,0.00006138f,-0.02529f,0.0256275f,0.00006138f,-0.019134f,0.035145f,0.00006138f,0.00164025f,0.0274275f,0.00006138f,0.01609425f,0f,0.00006138f,0.0268875f,-0.0136125f,0.00006138f,0.0247725f,-0.0256275f,0.00006138f,-0.019134f,-0.035145f,0.00006138f,0.00164025f,0f,0.00006138f,-0.0268875f,0.0136125f,0.00006138f,0.0247725f,-0.01208025f,0.00006138f,-0.02529f,-0.0274275f,0.00006138f,0.01609425f,0.01113075f,0.02149137f,-0.021033f,0f,0.02149137f,-0.0225f,-0.01113075f,0.02149137f,-0.021033f,-0.02268f,0.02149137f,-0.015786f,-0.0306225f,0.02149137f,0.0015525f,-0.0245475f,0.02149137f,0.01290375f,-0.0122895f,0.02149137f,0.0206145f,0f,0.02149137f,0.0225225f,0.0122895f,0.02149137f,0.0206145f,0.0245475f,0.02149137f,0.01290375f,0.0306225f,0.02149137f,0.0015525f,0.02268f,0.02149137f,-0.015786f,0f,-0.00579762f,-0.0225f,0.01113075f,-0.00579762f,-0.021033f,0.02268f,-0.00579762f,-0.015786f,0.0306225f,-0.00579762f,0.0015525f,0.0245475f,-0.00579762f,0.01290375f,0.0122895f,-0.00579762f,0.0206145f,0f,-0.00579762f,0.0225225f,-0.0122895f,-0.00579762f,0.0206145f,-0.0245475f,-0.00579762f,0.01290375f,-0.0306225f,-0.00579762f,0.0015525f,-0.02268f,-0.00579762f,-0.015786f,-0.01113075f,-0.00579762f,-0.021033f});
  }
}
private class MFInt32335 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1});
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1});
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1});
  }
}
private class MFInt32338 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1});
  }
}
private class MFInt32339 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1});
  }
}
private class MFInt32340 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1});
  }
}
private class MFVec2f341 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f,0.8974f,0.9509f,0.8981f,0.9421f,0.8701f,0.924f,0.8702f,0.9824f,0.8971f,0.9824f,0.8682f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7343f,0.9169f,0.7616f,0.9147f,0.7553f,0.8982f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8187f,0.8433f,0.8348f,0.9045f,0.8324f,0.8647f,0.74f,0.8745f,0.761f,0.8768f,0.7497f,0.8755f,0.777f,0.8787f,0.7647f,0.8593f,0.7596f,0.8565f,0.7438f,0.8546f,0.7343f,0.8756f,0.7372f,0.8736f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7875f,0.8787f,0.7821f,0.8667f,0.7952f,0.9076f,0.8011f,0.8823f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.786f,0.7876f,0.8107f,0.8538f,0.8058f,0.8252f,0.8096f,0.8166f,0.8589f,0.7975f,0.8767f,0.8622f,0.8568f,0.8668f,0.8669f,0.8674f,0.9208f,0.8549f,0.8792f,0.7991f,0.8835f,0.8633f,0.9139f,0.8636f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7338f,0.8385f,0.7279f,0.8339f,0.7208f,0.8401f,0.7397f,0.7767f,0.7338f,0.7681f,0.7338f,0.7727f,0.7192f,0.8201f,0.7171f,0.8352f,0.7139f,0.8364f,0.7127f,0.8419f,0.7175f,0.832f,0.7247f,0.8312f,0.7224f,0.8292f,0.7239f,0.8169f,0.7146f,0.8334f,0.7152f,0.8309f,0.753f,0.7762f,0.7452f,0.772f,0.7409f,0.7703f,0.756f,0.7661f,0.7502f,0.7748f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7267f,0.8275f,0.7291f,0.8283f,0.7338f,0.8254f,0.7338f,0.7682f,0.7385f,0.7711f,0.7338f,0.7628f,0.7338f,0.82f,0.7437f,0.7597f,0.7429f,0.774f,0.7484f,0.7629f,0.7505f,0.778f,0.7116f,0.8233f,0.7622f,0.7806f,0.7576f,0.779f,0.763f,0.7872f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.4263f,0.6263f,0.4421f,0.6351f,0.4514f,0.6319f,0.4298f,0.637f,0.4385f,0.639f,0.4385f,0.6403f,0.4369f,0.6596f,0.4321f,0.6555f,0.4385f,0.6553f,0.4451f,0.6548f,0.4452f,0.6463f,0.4227f,0.6454f,0.4263f,0.652f,0.4193f,0.6633f,0.4176f,0.6328f,0.4376f,0.6237f,0.4196f,0.6187f,0.3384f,0.9887f,0.2934f,0.905f,0.2441f,0.9417f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3367f,0.9059f,0.4034f,0.9073f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2959f,0.626f,0.3051f,0.6166f,0.2511f,0.6816f,0.2548f,0.6653f,0.2441f,0.6653f,0.2441f,0.6816f,0.2661f,0.696f,0.2636f,0.664f,0.3484f,0.6888f,0.3007f,0.651f,0.2881f,0.7397f,0.3623f,0.7239f,0.4151f,0.6155f,0.4295f,0.6197f,0.4116f,0.6201f,0.4088f,0.6855f,0.4123f,0.7323f,0.4518f,0.7703f,0.364f,0.6372f,0.2441f,0.7326f,0.2441f,0.7109f,0.2441f,0.7705f,0.2441f,0.816f,0.2466f,0.8272f,0.2826f,0.8198f,0.263f,0.8101f,0.3011f,0.7644f,0.4294f,0.848f,0.295f,0.8569f,0.4229f,0.7906f,0.445f,0.8342f,0.3273f,0.8725f,0.3401f,0.8443f,0.4194f,0.891f,0.3844f,0.8819f,0.3962f,0.7639f,0.3654f,0.758f,0.3664f,0.7923f,0.3312f,0.7931f,0.3858f,0.7947f,0.2864f,0.8094f,0.3065f,0.7969f,0.4051f,0.8004f,0.4267f,0.8291f,0.3243f,0.8795f,0.293f,0.8645f,0.4715f,0.8911f,0.431f,0.9594f,0.4658f,0.6252f,0.465f,0.6281f,0.3862f,0.8876f,0.4544f,0.6426f,0.2548f,0.6553f,0.2441f,0.6553f,0.4156f,0.6279f,0.3783f,0.625f,0.3984f,0.649f,0.4325f,0.6718f,0.4443f,0.6446f,0.428f,0.6022f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.4215f,0.6174f,0.6418f,0.6585f,0.6441f,0.671f,0.6214f,0.6731f,0.616f,0.6731f,0.6418f,0.6585f,0.623f,0.6494f,0.6418f,0.6585f,0.6441f,0.671f,0.3003f,0.6509f,0.2548f,0.6558f,0.2549f,0.6531f,0.2441f,0.6558f,0.616f,0.6731f,0.6214f,0.6731f,0.2441f,0.6529f,0.314f,0.8296f,0.3898f,0.85f,0.2746f,0.7881f,0.2889f,0.7981f,0.4442f,0.8857f,0.2745f,0.8415f,0.3079f,0.8417f,0.3393f,0.8544f,0.3891f,0.8542f,0.2699f,0.8521f,0.246f,0.853f,0.4715f,0.8911f,0.9421f,0.8701f,0.9509f,0.8981f,0.9175f,0.8974f,0.924f,0.8702f,0.9824f,0.8682f,0.9824f,0.8971f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7553f,0.8982f,0.7616f,0.9147f,0.7343f,0.9169f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8324f,0.8647f,0.8348f,0.9045f,0.8187f,0.8433f,0.74f,0.8745f,0.7497f,0.8755f,0.761f,0.8768f,0.7647f,0.8593f,0.777f,0.8787f,0.7438f,0.8546f,0.7596f,0.8565f,0.7372f,0.8736f,0.7343f,0.8756f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7821f,0.8667f,0.7875f,0.8787f,0.8011f,0.8823f,0.7952f,0.9076f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.8107f,0.8538f,0.8058f,0.8252f,0.786f,0.7876f,0.8096f,0.8166f,0.8767f,0.8622f,0.8589f,0.7975f,0.8669f,0.8674f,0.8568f,0.8668f,0.9208f,0.8549f,0.8792f,0.7991f,0.9139f,0.8636f,0.8835f,0.8633f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7208f,0.8401f,0.7279f,0.8339f,0.7338f,0.8385f,0.7338f,0.7727f,0.7338f,0.7681f,0.7397f,0.7767f,0.7192f,0.8201f,0.7139f,0.8364f,0.7171f,0.8352f,0.7127f,0.8419f,0.7175f,0.832f,0.7224f,0.8292f,0.7247f,0.8312f,0.7239f,0.8169f,0.7146f,0.8334f,0.7452f,0.772f,0.753f,0.7762f,0.7152f,0.8309f,0.7409f,0.7703f,0.7502f,0.7748f,0.756f,0.7661f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7338f,0.8254f,0.7291f,0.8283f,0.7267f,0.8275f,0.7338f,0.7628f,0.7385f,0.7711f,0.7338f,0.7682f,0.7338f,0.82f,0.7437f,0.7597f,0.7484f,0.7629f,0.7429f,0.774f,0.7505f,0.778f,0.7116f,0.8233f,0.763f,0.7872f,0.7576f,0.779f,0.7622f,0.7806f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.4514f,0.6319f,0.4421f,0.6351f,0.4263f,0.6263f,0.4385f,0.639f,0.4298f,0.637f,0.4385f,0.6403f,0.4385f,0.6553f,0.4321f,0.6555f,0.4369f,0.6596f,0.4451f,0.6548f,0.4452f,0.6463f,0.4263f,0.652f,0.4227f,0.6454f,0.4193f,0.6633f,0.4176f,0.6328f,0.4196f,0.6187f,0.4376f,0.6237f,0.2441f,0.9417f,0.2934f,0.905f,0.3384f,0.9887f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3367f,0.9059f,0.4034f,0.9073f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2441f,0.6653f,0.2548f,0.6653f,0.2511f,0.6816f,0.2441f,0.6816f,0.2636f,0.664f,0.2661f,0.696f,0.3484f,0.6888f,0.3007f,0.651f,0.3623f,0.7239f,0.2881f,0.7397f,0.4215f,0.6174f,0.4295f,0.6197f,0.4151f,0.6155f,0.4116f,0.6201f,0.4518f,0.7703f,0.4123f,0.7323f,0.4088f,0.6855f,0.364f,0.6372f,0.2959f,0.626f,0.3051f,0.6166f,0.2441f,0.7326f,0.2441f,0.7705f,0.2441f,0.7109f,0.2745f,0.8415f,0.2466f,0.8272f,0.2441f,0.816f});
  }
}
private class MFVec2f342 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.263f,0.8101f,0.3011f,0.7644f,0.2746f,0.7881f,0.246f,0.853f,0.2699f,0.8521f,0.4229f,0.7906f,0.445f,0.8342f,0.3401f,0.8443f,0.3393f,0.8544f,0.3079f,0.8417f,0.314f,0.8296f,0.3962f,0.7639f,0.3654f,0.758f,0.3664f,0.7923f,0.3312f,0.7931f,0.3858f,0.7947f,0.3065f,0.7969f,0.2889f,0.7981f,0.2826f,0.8198f,0.2864f,0.8094f,0.4051f,0.8004f,0.3243f,0.8795f,0.4267f,0.8291f,0.293f,0.8645f,0.4715f,0.8911f,0.431f,0.9594f,0.4715f,0.8911f,0.4658f,0.6252f,0.465f,0.6281f,0.4194f,0.891f,0.3862f,0.8876f,0.4544f,0.6426f,0.2548f,0.6553f,0.2441f,0.6553f,0.3984f,0.649f,0.3783f,0.625f,0.4156f,0.6279f,0.4325f,0.6718f,0.428f,0.6022f,0.4443f,0.6446f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.3898f,0.85f,0.6418f,0.6585f,0.6441f,0.671f,0.6441f,0.671f,0.6418f,0.6585f,0.6214f,0.6731f,0.6214f,0.6731f,0.616f,0.6731f,0.616f,0.6731f,0.623f,0.6494f,0.6418f,0.6585f,0.3003f,0.6509f,0.2548f,0.6558f,0.2549f,0.6531f,0.2441f,0.6558f,0.2441f,0.6529f,0.3891f,0.8542f,0.4294f,0.848f,0.4442f,0.8857f,0.295f,0.8569f,0.3273f,0.8725f,0.3844f,0.8819f});
  }
}
private class MFVec3f343 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05841f,0.0852345f,-0.1600425f,0.13095f,0.1092285f,-0.0503775f,0.08352f,0.0341775f,-0.051525f,0.0733725f,0.0405387f,-0.09567f,0.127305f,0.0725121f,-0.0446175f,0.04095f,0.0359631f,-0.11619f,0.0538875f,0.138105f,0.142785f,0.01746225f,0.1370448f,0.1548675f,0.09918f,0.2567637f,0.0826425f,0f,0.313875f,0.127125f,0.0500625f,0.303831f,0.11934f,0.134145f,0.1231506f,0.0262125f,0.0909225f,0.02338857f,0.0792675f,0.04437f,0.2678679f,0.1430325f,0.0570825f,0.1953279f,0.143145f,0.083115f,0.1855071f,0.1189575f,0.01006875f,0.2048139f,0.165645f,0.1089675f,0.1726452f,0.0771975f,0.087435f,0.1839447f,0.1113975f,0.0828225f,0.1449126f,0.1125225f,0.086085f,0.1395279f,0.10494f,0.07389f,0.0689688f,0.101025f,0.1022175f,0.1150596f,0.0787275f,0.0868275f,0.1077219f,0.09819f,0.1029375f,0.1057968f,0.090135f,0.1139625f,0.0330057f,0.0280575f,0.1094175f,0.048267f,0.053325f,0.11826f,0.0751905f,0.04554f,0.1248525f,0.1543428f,0.061065f,0.1161225f,0.0567765f,0.061245f,0.122445f,0.1081962f,0.0649575f,0.1374975f,0.1224531f,0.0059265f,0.091395f,0.1637172f,0.0949725f,0.1351575f,0.2191824f,-0.01268325f,0.1579725f,0.0463419f,-0.02060325f,0.14778f,0.1354545f,-0.016443f,0.142335f,0.1308789f,-0.034875f,0.140175f,0.02316537f,-0.0774225f,0.1119825f,0.1496556f,-0.1276425f,0.142335f,0.1299024f,-0.066375f,0.09486f,0.0956133f,-0.1154475f,0.079245f,0.1623222f,-0.161235f,0.07704f,0.051894f,-0.163755f,0.0557775f,0.2211075f,-0.1520325f,0.0433575f,0.0552699f,-0.200025f,0.12564f,0.2145789f,-0.06255f,0.1316925f,0.2143557f,-0.03987f,0.1165725f,0.2364804f,0.04734f,0.068355f,0.301041f,0.09999f,0.1152675f,0.0845928f,-0.11934f,0.12744f,0.2249019f,0.0196965f,0.1062225f,0.2211075f,-0.118305f,0.0557775f,0.162378f,-0.1683675f,0.1258875f,0.212877f,-0.0481725f,0.0263925f,0.0511128f,-0.137565f,0.089505f,0.0648396f,-0.1044f,0.0656325f,-0.02590515f,-0.164475f,0.0747675f,0.058032f,-0.1208475f,0.04428f,-0.0435519f,-0.1127925f,0.1060425f,0.0681876f,-0.0782325f,0.09945f,-0.00815796f,-0.1007325f,0.0317475f,0.01545939f,-0.07839f,0.0511875f,0.02457153f,-0.0846675f,0.02116575f,0.01981737f,-0.1020825f,0.085905f,0.0482391f,-0.0706275f,0.10494f,0.0520614f,-0.03231f,0.0822825f,0.2563452f,0.1116f,0.0350775f,0.2027214f,0.15768f,0.0627975f,0.1406439f,0.1353825f,0.0557775f,0.35154f,0.0492975f,0f,0.356283f,-0.0691425f,0.0557775f,0.362979f,-0.01328625f,0.0557775f,0.347913f,-0.0691425f,0.0557775f,0.32922f,0.0824625f,0.106605f,0.310527f,-0.01328625f,0.1030725f,0.295461f,0.0425925f,0.10746f,0.2606418f,-0.095715f,0.1046475f,0.305226f,-0.06066f,0.0557775f,0.295182f,-0.1321425f,0.113355f,0.0582273f,0.0059265f,0.1203975f,0.0633051f,0.005778f,0.1254375f,0.1393047f,0.01097325f,0.1295775f,0.1203327f,-0.01505025f,0.12762f,0.0870201f,-0.015489f,0.1038825f,0.1093401f,0.0445725f,0.0564075f,0.00592038f,0.0780075f,0.02817f,-0.01963323f,0.0844425f,0.0490725f,0.035991f,0.1058175f,0.0243675f,-0.00576135f,0.1019475f,0.090135f,0.1179054f,0.077625f,0.0864675f,0.0972594f,0.078165f,0.00588375f,0.1101771f,0.1310175f,0.0459675f,0.1421226f,0.1305675f,0.0359775f,0.1178775f,0.1221525f,0.0489375f,0.1233738f,0.11907f,0.0238725f,0.0792639f,0.1179f,0.0752625f,0.0782874f,0.0897075f,0.0595575f,0.076725f,0.1008225f,0.069345f,0.0999099f,0.094635f,0.02349f,0.1083915f,0.122715f,0.03051f,0.1016118f,0.1179225f,0.0726075f,0.1034253f,0.0924975f,0.06813f,0.1274193f,0.1053675f,0.05562f,0.0564417f,0.106245f,0.0206865f,0.0656766f,0.121095f,0.0790875f,0.0613521f,0.0816975f,0.0829125f,0.1178775f,0.0875475f,0.0032805f,0.0318339f,0.1342575f,0.010332f,0.0402318f,0.1248525f,0.0774675f,0.034038f,0.0720225f,0.04437f,0.1865394f,0.1298025f,0.0798975f,0.1804572f,0.10485f,0.0253125f,0.1852839f,0.14004f,0.0629775f,0.00826119f,0.0445725f,0.032355f,-0.02175921f,0.0657f,0.047205f,-0.00173538f,0.0087615f,0.097695f,0.0835326f,0.05589f,0.04437f,0.284022f,0.119205f,0.0861525f,0.2254599f,0.091755f,0.106965f,0.1539801f,0.066825f,0.0628875f,0.0995472f,0.1011825f,0.0412875f,0.1000773f,0.1127475f,0.091665f,0.0505827f,0.0335025f,0.0916425f,0.0428823f,-0.0056475f,0.107955f,0.1231506f,0.0262125f,0.00917775f,0.02151369f,0.1289925f,0.005049f,0.02228931f,0.1314675f,0.02664f,0.01398069f,0.1101375f,0.005049f,0.01648053f,0.1247625f,0.0470475f,-0.00263097f,-0.0366525f,0.01006875f,0.2048139f,0.165645f,0.01746225f,0.1370448f,0.1548675f,0.01006875f,0.2048139f,0.165645f,0.106515f,0.0640305f,-0.010755f,0.08352f,0.0341775f,-0.051525f,0.127305f,0.0725121f,-0.0446175f,0.0115425f,0.1868742f,0.1601775f,0.113715f,0.1224531f,0.0059265f,0.0801225f,0.0301599f,-0.034965f,0.047025f,0.1236528f,0.0832275f,0.0364725f,0.1215324f,0.0927675f,0.02997f,0.1172358f,0.0948825f,0.024075f,0.109647f,0.09549f,0.028215f,0.1042623f,0.0929025f,0.034065f,0.102951f,0.08973f,0.0457875f,0.1020582f,0.082305f,0.049545f,0.1017513f,0.0777375f,0.05121f,0.1042623f,0.076005f,0.0562275f,0.1148922f,0.0715725f,0f,0.0763902f,-0.1698975f,0f,0.1169568f,0.1386f,0f,0.2211075f,-0.1653075f,0f,0.00383625f,-0.08082f,0f,-0.02632365f,-0.14715f,0f,-0.01771371f,0.03447f,0.0130635f,0.01162872f,0.0857925f,0.002898f,0.01184913f,0.09027f,0.0125235f,-0.00616311f,0.079875f,0f,0.1834983f,0.1469025f,0f,-0.0362421f,0.0963675f,0f,0.02228931f,0.1314675f,0.004797f,0.01593927f,0.1207125f,0.0133335f,0.097371f,0.125595f,0.02079225f,0.1049877f,0.1230975f,0.0864675f,0.1426248f,0.0920925f,0.02502f,0.1335294f,0.137025f,0.0733725f,0.1468098f,0.10836f,0.0298575f,0.1261638f,0.1318275f,0.0470025f,0.1327482f,0.1259775f,0.0713475f,0.138105f,0.10764f,0.014535f,0.1189098f,0.13752f,0f,0.1539801f,-0.1792125f,0f,0.271746f,0.1543275f,0f,0.2105892f,0.1666125f,0f,0.0836442f,0.13212f,0f,0.0489087f,0.1532475f,0f,0.01648053f,0.1247625f,0.0167085f,0.1323297f,0.1380375f,-0.079245f,0.1623222f,-0.161235f,-0.0557775f,0.2211075f,-0.1520325f,-0.1062225f,0.2211075f,-0.118305f,-0.1119825f,0.1496556f,-0.1276425f,-0.0557775f,0.162378f,-0.1683675f,-0.1152675f,0.0845928f,-0.11934f,-0.07704f,0.051894f,-0.163755f,-0.0433575f,0.0552699f,-0.200025f,0f,0.1047087f,-0.190215f,-0.0557775f,0.295182f,-0.1321425f,-0.10746f,0.2606418f,-0.095715f,0f,0.304389f,-0.13644f,-0.04437f,0.2678679f,0.1430325f,-0.0500625f,0.303831f,0.11934f,-0.0557775f,0.32922f,0.0824625f,0f,0.340101f,0.0915525f,-0.134145f,0.1231506f,0.0262125f,-0.12744f,0.2249019f,0.0196965f,-0.11826f,0.0751905f,0.04554f,-0.01006875f,0.2048139f,0.165645f,-0.0350775f,0.2027214f,0.15768f,-0.0570825f,0.1953279f,0.143145f,-0.0627975f,0.1406439f,0.1353825f,-0.083115f,0.1855071f,0.1189575f,-0.01746225f,0.1370448f,0.1548675f,-0.0538875f,0.138105f,0.142785f,-0.0115425f,0.1868742f,0.1601775f,-0.01006875f,0.2048139f,0.165645f,-0.01746225f,0.1370448f,0.1548675f,-0.01006875f,0.2048139f,0.165645f,-0.087435f,0.1839447f,0.1113975f,-0.0828225f,0.1449126f,0.1125225f,-0.086085f,0.1395279f,0.10494f,-0.091395f,0.1637172f,0.0949725f,-0.1089675f,0.1726452f,0.0771975f,-0.09918f,0.2567637f,0.0826425f,-0.0822825f,0.2563452f,0.1116f,-0.1029375f,0.1057968f,0.090135f,-0.0868275f,0.1077219f,0.09819f,-0.07389f,0.0689688f,0.101025f,-0.1022175f,0.1150596f,0.0787275f,-0.1139625f,0.0330057f,0.0280575f,-0.1374975f,0.1224531f,0.0059265f,-0.1248525f,0.1543428f,0.061065f,-0.122445f,0.1081962f,0.0649575f,-0.1161225f,0.0567765f,0.061245f,-0.0909225f,0.02338857f,0.0792675f,-0.1094175f,0.048267f,0.053325f,-0.13095f,0.1092285f,-0.0503775f,-0.1579725f,0.0463419f,-0.02060325f,-0.142335f,0.1308789f,-0.034875f,-0.14778f,0.1354545f,-0.016443f,-0.09486f,0.0956133f,-0.1154475f,-0.140175f,0.02316537f,-0.0774225f,-0.142335f,0.1299024f,-0.066375f,-0.05841f,0.0852345f,-0.1600425f,-0.12564f,0.2145789f,-0.06255f,-0.1046475f,0.305226f,-0.06066f,-0.1258875f,0.212877f,-0.0481725f,-0.1316925f,0.2143557f,-0.03987f,-0.1351575f,0.2191824f,-0.01268325f,-0.106605f,0.310527f,-0.01328625f,-0.1165725f,0.2364804f,0.04734f,-0.1030725f,0.295461f,0.0425925f,-0.068355f,0.301041f,0.09999f,-0.0263925f,0.0511128f,-0.137565f,0f,0.0288765f,-0.1356975f,0f,0.00342333f,-0.1863225f,-0.0656325f,-0.02590515f,-0.164475f,-0.089505f,0.0648396f,-0.1044f,-0.0747675f,0.058032f,-0.1208475f,-0.0733725f,0.0405387f,-0.09567f,-0.0511875f,0.02457153f,-0.0846675f,-0.04095f,0.0359631f,-0.11619f,-0.04428f,-0.0435519f,-0.1127925f,-0.085905f,0.0482391f,-0.0706275f,-0.08352f,0.0341775f,-0.051525f,-0.0317475f,0.01545939f,-0.07839f,-0.09945f,-0.00815796f,-0.1007325f,-0.1060425f,0.0681876f,-0.0782325f,-0.127305f,0.0725121f,-0.0446175f,-0.02116575f,0.01981737f,-0.1020825f,-0.106515f,0.0640305f,-0.010755f,-0.10494f,0.0520614f,-0.03231f,-0.0557775f,0.35154f,0.0492975f,0f,0.359631f,0.0492975f,-0.0557775f,0.362979f,-0.01328625f,-0.0557775f,0.347913f,-0.0691425f,0f,0.37107f,-0.01328625f,-0.0801225f,0.0301599f,-0.034965f,-0.0916425f,0.0428823f,-0.0056475f,-0.0629775f,0.00826119f,0.0445725f,-0.113355f,0.0582273f,0.0059265f,-0.091665f,0.0505827f,0.0335025f,-0.1203975f,0.0633051f,0.005778f,-0.113715f,0.1224531f,0.0059265f,-0.107955f,0.1231506f,0.0262125f,-0.1254375f,0.1393047f,0.01097325f,-0.1295775f,0.1203327f,-0.01505025f,-0.12762f,0.0870201f,-0.015489f,-0.1038825f,0.1093401f,0.0445725f,-0.097695f,0.0835326f,0.05589f});
  }
}
private class MFVec3f344 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.106965f,0.1539801f,0.066825f,-0.0774675f,0.034038f,0.0720225f,-0.032355f,-0.02175921f,0.0657f,-0.047205f,-0.00173538f,0.0087615f,-0.0253125f,0.1852839f,0.14004f,-0.04437f,0.284022f,0.119205f,0f,0.2744523f,0.1305f,-0.0470475f,-0.00263097f,-0.0366525f,-0.04437f,0.1865394f,0.1298025f,-0.0798975f,0.1804572f,0.10485f,-0.0564075f,0.00592038f,0.0780075f,-0.02817f,-0.01963323f,0.0844425f,-0.005049f,0.02228931f,0.1314675f,-0.0032805f,0.0318339f,0.1342575f,0f,0.0318339f,0.13428f,-0.00917775f,0.02151369f,0.1289925f,-0.010332f,0.0402318f,0.1248525f,-0.0490725f,0.035991f,0.1058175f,-0.02664f,0.01398069f,0.1101375f,-0.05562f,0.0564417f,0.106245f,-0.0206865f,0.0656766f,0.121095f,0f,-0.0297135f,0.0677025f,0f,-0.034317f,0.0804375f,-0.0790875f,0.0613521f,0.0816975f,-0.0243675f,-0.00576135f,0.1019475f,0f,0.0615474f,0.145035f,-0.014535f,0.1189098f,0.13752f,0f,0.1101771f,0.1310175f,-0.00588375f,0.1101771f,0.1310175f,-0.0238725f,0.0792639f,0.1179f,-0.0133335f,0.097371f,0.125595f,0f,0.131967f,0.1404675f,-0.0167085f,0.1323297f,0.1380375f,-0.0864675f,0.0972594f,0.078165f,-0.090135f,0.1179054f,0.077625f,-0.0489375f,0.1233738f,0.11907f,-0.0470025f,0.1327482f,0.1259775f,-0.0298575f,0.1261638f,0.1318275f,-0.0359775f,0.1178775f,0.1221525f,-0.0752625f,0.0782874f,0.0897075f,-0.0595575f,0.076725f,0.1008225f,-0.0628875f,0.0995472f,0.1011825f,-0.0412875f,0.1000773f,0.1127475f,-0.069345f,0.0999099f,0.094635f,-0.03051f,0.1016118f,0.1179225f,-0.02079225f,0.1049877f,0.1230975f,-0.02349f,0.1083915f,0.122715f,-0.0726075f,0.1034253f,0.0924975f,-0.0459675f,0.1421226f,0.1305675f,-0.0829125f,0.1178775f,0.0875475f,-0.02502f,0.1335294f,0.137025f,-0.0861525f,0.2254599f,0.091755f,-0.0864675f,0.1426248f,0.0920925f,-0.0733725f,0.1468098f,0.10836f,-0.127305f,0.0725121f,-0.0446175f,-0.08352f,0.0341775f,-0.051525f,-0.005049f,0.01648053f,0.1247625f,-0.06813f,0.1274193f,0.1053675f,-0.0364725f,0.1215324f,0.0927675f,-0.047025f,0.1236528f,0.0832275f,-0.02997f,0.1172358f,0.0948825f,-0.024075f,0.109647f,0.09549f,-0.028215f,0.1042623f,0.0929025f,-0.034065f,0.102951f,0.08973f,-0.0457875f,0.1020582f,0.082305f,-0.049545f,0.1017513f,0.0777375f,-0.05121f,0.1042623f,0.076005f,-0.0562275f,0.1148922f,0.0715725f,-0.0130635f,0.01162872f,0.0857925f,-0.0125235f,-0.00616311f,0.079875f,-0.004797f,0.01593927f,0.1207125f,-0.002898f,0.01184913f,0.09027f,0f,0.01596717f,0.12078f,0f,0.01201374f,0.090135f,0f,-0.00728748f,0.073935f,-0.0713475f,0.138105f,0.10764f});
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1});
  }
}
private class MFInt32346 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1});
  }
}
private class MFVec2f347 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f,0.7836f,0.3424f,0.7815f,0.3432f,0.7614f,0.3553f,0.7628f,0.3328f,0.7723f,0.3344f,0.7557f,0.3248f,0.7567f,0.3294f,0.7475f,0.3666f,0.7703f,0.3614f,0.7771f,0.3598f,0.7618f,0.364f,0.76f,0.3542f,0.784f,0.3411f,0.7782f,0.3327f,0.7703f,0.3246f,0.7567f,0.3657f,0.7703f,0.3598f,0.7771f,0.3534f,0.7431f,0.3436f,0.742f,0.3428f,0.7423f,0.3522f,0.7429f,0.335f,0.743f,0.3345f,0.743f,0.3291f,0.7475f,0.3576f,0.7438f,0.3566f,0.7438f,0.3632f,0.7603f});
  }
}
private class MFVec3f348 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.017577f,0.02639061f,0.0545175f,-0.002061f,0.0340659f,0.0682875f,-0.01561275f,0.0304389f,0.07362f,-0.0270225f,0.01996524f,0.076545f,0.0324f,0.00639189f,0.0422775f,0.01271475f,-0.0046035f,0.0627975f,-0.000711f,0.00042408f,0.0707625f,-0.012501f,0.00658719f,0.0747225f,-0.02052675f,0.01210581f,0.07587f,0.027855f,0.00135873f,0.0468f,0.0253125f,0.0167958f,0.0483975f,0.019116f,-0.00496341f,0.0558675f,0.01478925f,0.02350575f,0.050805f,-0.003843f,0.02733921f,0.062685f,-0.01584675f,0.02459106f,0.0677025f,-0.027315f,0.01812942f,0.07398f,0.031095f,0.00581157f,0.0414675f,0.01193625f,-0.00595665f,0.06138f,-0.0013725f,-0.00149823f,0.0679725f,-0.01329075f,0.00498294f,0.07254f,-0.021006f,0.01050714f,0.0736425f,0.027585f,0.00029853f,0.0450225f,0.0227475f,0.01470609f,0.0461925f,0.0181035f,-0.00570276f,0.0550125f,0.01584225f,0.00917631f,0.0584775f,-0.00131175f,0.01745145f,0.07074f,-0.01337175f,0.01664235f,0.0744975f,0.02229525f,0.00523125f,0.0525375f});
  }
}
private class MFInt32349 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1});
  }
}
private class MFInt32350 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1});
  }
}
private class MFVec2f351 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f,0.7836f,0.3424f,0.7815f,0.3432f,0.7614f,0.3553f,0.7628f,0.3328f,0.7723f,0.3344f,0.7557f,0.3248f,0.7567f,0.3294f,0.7475f,0.3666f,0.7703f,0.3614f,0.7771f,0.3598f,0.7618f,0.364f,0.76f,0.3542f,0.784f,0.3411f,0.7782f,0.3327f,0.7703f,0.3246f,0.7567f,0.3657f,0.7703f,0.3598f,0.7771f,0.3534f,0.7431f,0.3436f,0.742f,0.3428f,0.7423f,0.3522f,0.7429f,0.335f,0.743f,0.3345f,0.743f,0.3291f,0.7475f,0.3576f,0.7438f,0.3566f,0.7438f,0.3632f,0.7603f});
  }
}
private class MFVec3f352 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.017577f,0.02639061f,0.0545175f,0.002061f,0.0340659f,0.0682875f,0.01561275f,0.0304389f,0.07362f,0.0270225f,0.01996524f,0.076545f,-0.0324f,0.00639189f,0.0422775f,-0.01271475f,-0.0046035f,0.0627975f,0.000711f,0.00042408f,0.0707625f,0.012501f,0.00658719f,0.0747225f,0.02052675f,0.01210581f,0.07587f,-0.027855f,0.00135873f,0.0468f,-0.0253125f,0.0167958f,0.0483975f,-0.019116f,-0.00496341f,0.0558675f,-0.01478925f,0.02350575f,0.050805f,0.003843f,0.02733921f,0.062685f,0.01584675f,0.02459106f,0.0677025f,0.027315f,0.01812942f,0.07398f,-0.031095f,0.00581157f,0.0414675f,-0.01193625f,-0.00595665f,0.06138f,0.0013725f,-0.00149823f,0.0679725f,0.01329075f,0.00498294f,0.07254f,0.021006f,0.01050714f,0.0736425f,-0.027585f,0.00029853f,0.0450225f,-0.0227475f,0.01470609f,0.0461925f,-0.0181035f,-0.00570276f,0.0550125f,-0.01584225f,0.00917631f,0.0584775f,0.00131175f,0.01745145f,0.07074f,0.01337175f,0.01664235f,0.0744975f,-0.02229525f,0.00523125f,0.0525375f});
  }
}
private class MFInt32353 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1});
  }
}
private class MFInt32354 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1});
  }
}
private class MFVec2f355 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f,0.8278f,0.3482f,0.8386f,0.3916f,0.7984f,0.3206f,0.8292f,0.3482f,0.8386f,0.3916f,0.7984f,0.2977f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7987f,0.3868f,0.8428f,0.3482f,0.8386f,0.3206f,0.8292f,0.3319f,0.7987f,0.3778f,0.7978f,0.3916f,0.7984f,0.309f,0.8013f,0.3985f,0.8029f,0.2977f,0.8092f,0.4182f,0.8263f,0.3482f,0.8386f,0.3868f,0.8428f,0.4182f,0.8265f,0.3985f,0.8044f,0.3916f,0.7984f,0.3778f,0.7978f,0.3319f,0.7987f,0.309f,0.8013f,0.2977f,0.8092f,0.3206f,0.8292f,0.2978f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7986f,0.3567f,0.819f});
  }
}
private class MFVec3f356 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0128565f,0.00364932f,0.022995f,0.00014625f,0.00913725f,0.02003175f,0.0208215f,-0.0143406f,-0.0041805f,-0.0253575f,-0.00583947f,0.0234f,-0.01827675f,-0.01263033f,0.01869975f,0.0240975f,-0.01081125f,-0.0062685f,0.019476f,0.01318275f,0.00655425f,0.0344475f,0.0036549f,-0.01110375f,0.01428075f,-0.01468935f,0.00230625f,-0.00743625f,-0.01417041f,0.01363275f,-0.020412f,0.00847602f,0.01486575f,-0.00634725f,0.01684044f,0.01022175f,0.01812375f,-0.02048139f,-0.0135405f,-0.034605f,-0.0054684f,0.015813f,-0.0265275f,-0.01870137f,0.0105975f,0.022014f,-0.01452195f,-0.0159345f,0.0172935f,0.02122074f,-0.00281925f,0.0323775f,0.00610452f,-0.0203985f,0.010746f,-0.02122074f,-0.00685125f,-0.014094f,-0.02091105f,0.0051705f,-0.009414f,0.01284237f,0.00114525f,0.01215225f,0.01631871f,-0.009963f,0.0240975f,0.00563301f,-0.023445f,0.0177615f,-0.00765297f,-0.01988325f,0.01378575f,-0.01159524f,-0.017658f,0.00774225f,-0.01216719f,-0.01202625f,-0.0171675f,-0.01134414f,-0.000882f,-0.0279f,-0.00917073f,0.003096f,-0.031815f,-0.00436914f,0.00402525f,-0.02190825f,0.00584226f,0.004698f,0.006552f,-0.00248868f,0.012771f});
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1});
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1});
  }
}
private class MFVec2f359 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f,0.8278f,0.3482f,0.8386f,0.3916f,0.7984f,0.3206f,0.8292f,0.3482f,0.8386f,0.3916f,0.7984f,0.2977f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7987f,0.3868f,0.8428f,0.3482f,0.8386f,0.3206f,0.8292f,0.3319f,0.7987f,0.3778f,0.7978f,0.3916f,0.7984f,0.309f,0.8013f,0.3985f,0.8029f,0.2977f,0.8092f,0.4182f,0.8263f,0.3482f,0.8386f,0.3868f,0.8428f,0.4182f,0.8265f,0.3985f,0.8044f,0.3916f,0.7984f,0.3778f,0.7978f,0.3319f,0.7987f,0.309f,0.8013f,0.2977f,0.8092f,0.3206f,0.8292f,0.2978f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7986f,0.3567f,0.819f});
  }
}
private class MFVec3f360 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0128565f,0.00364932f,0.022995f,-0.00014625f,0.00913725f,0.02003175f,-0.0208215f,-0.0143406f,-0.0041805f,0.0253575f,-0.00583947f,0.0234f,0.01827675f,-0.01263033f,0.01869975f,-0.0240975f,-0.01081125f,-0.0062685f,-0.019476f,0.01318275f,0.00655425f,-0.0344475f,0.0036549f,-0.01110375f,-0.01428075f,-0.01468935f,0.00230625f,0.00743625f,-0.01417041f,0.01363275f,0.020412f,0.00847602f,0.01486575f,0.00634725f,0.01684044f,0.01022175f,-0.01812375f,-0.02048139f,-0.0135405f,0.034605f,-0.0054684f,0.015813f,0.0265275f,-0.01870137f,0.0105975f,-0.022014f,-0.01452195f,-0.0159345f,-0.0172935f,0.02122074f,-0.0028215f,-0.0323775f,0.00610452f,-0.0203985f,-0.010746f,-0.02122074f,-0.00685125f,0.014094f,-0.02091105f,0.0051705f,0.009414f,0.01284237f,0.00114525f,-0.01215225f,0.01631871f,-0.009963f,-0.0240975f,0.00563301f,-0.023445f,-0.0177615f,-0.00765297f,-0.01988325f,-0.01378575f,-0.01159524f,-0.017658f,-0.00774225f,-0.01216719f,-0.01202625f,0.0171675f,-0.01134414f,-0.000882f,0.0279f,-0.00917073f,0.003096f,0.031815f,-0.00436914f,0.00402525f,0.02190825f,0.00584226f,0.004698f,-0.006552f,-0.00248868f,0.012771f});
  }
}
private class MFInt32361 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
private class MFInt32362 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
private class MFVec2f363 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f,0.8611f,0.3991f,0.8726f,0.2757f,0.8301f,0.4299f,0.8749f,0.3424f,0.8703f,0.297f,0.8558f,0.4f,0.8788f,0.3445f,0.8554f,0.397f,0.8649f,0.2794f,0.8281f,0.4294f,0.8703f,0.3456f,0.8724f,0.3008f,0.857f,0.3469f,0.8565f,0.2795f,0.829f,0.4293f,0.8745f,0.3996f,0.8793f,0.3963f,0.8659f,0.2847f,0.831f,0.4284f,0.8697f,0.3046f,0.8466f,0.3082f,0.8407f,0.3105f,0.8417f});
  }
}
private class MFVec3f364 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0072405f,-0.00641142f,0.01584675f,0.0243675f,0.01666746f,0.008541f,0.02466f,0.01178775f,0.0072855f,0.051255f,0.01759932f,-0.01331775f,0.0650025f,0.01841958f,-0.029745f,0.00335025f,0.00806868f,0.01500075f,0.0517725f,0.02138814f,-0.01364625f,0.0251325f,0.00712566f,0.004554f,0.04968f,0.01256337f,-0.01444275f,-0.00572175f,-0.00825003f,0.0131985f,0.06462f,0.01588068f,-0.0302175f,-0.0062415f,-0.0060264f,0.010071f,0.0242775f,0.01608435f,0.003879f,0.0631575f,0.01832472f,-0.031185f,0.00396225f,0.00752463f,0.009747f,0.0510525f,0.02063205f,-0.01644525f,0.0249975f,0.00676296f,0.0002205f,0.048825f,0.0121086f,-0.01718325f,-0.0045765f,-0.0079515f,0.00764775f,0.06255f,0.01518318f,-0.031635f,0.00623025f,0.00341496f,0.01257975f,0.008523f,-0.00001953f,0.0094365f,0.00762525f,-0.00115506f,0.00461925f});
  }
}
private class MFInt32365 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1});
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1});
  }
}
private class MFVec2f367 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f,0.8611f,0.3991f,0.8726f,0.2757f,0.8301f,0.4299f,0.8749f,0.3424f,0.8703f,0.297f,0.8558f,0.4f,0.8788f,0.3445f,0.8554f,0.397f,0.8649f,0.2794f,0.8281f,0.4294f,0.8703f,0.3456f,0.8724f,0.3008f,0.857f,0.3469f,0.8565f,0.2795f,0.829f,0.4293f,0.8745f,0.3996f,0.8793f,0.3963f,0.8659f,0.2847f,0.831f,0.4284f,0.8697f,0.3046f,0.8466f,0.3082f,0.8407f,0.3105f,0.8417f});
  }
}
private class MFVec3f368 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0072405f,-0.00641142f,0.01584675f,-0.0243675f,0.01666746f,0.008541f,-0.02466f,0.01178775f,0.0072855f,-0.051255f,0.01759932f,-0.01331775f,-0.0650025f,0.01841958f,-0.029745f,-0.00335025f,0.00806868f,0.01500075f,-0.0517725f,0.02138814f,-0.01364625f,-0.0251325f,0.00712566f,0.004554f,-0.04968f,0.01256337f,-0.01444275f,0.00572175f,-0.00825003f,0.0131985f,-0.06462f,0.01588068f,-0.0302175f,0.0062415f,-0.0060264f,0.010071f,-0.0242775f,0.01608435f,0.003879f,-0.0631575f,0.01832472f,-0.031185f,-0.00396225f,0.00752463f,0.009747f,-0.0510525f,0.02063205f,-0.01644525f,-0.0249975f,0.00676296f,0.0002205f,-0.048825f,0.0121086f,-0.01718325f,0.0045765f,-0.0079515f,0.00764775f,-0.06255f,0.01518318f,-0.031635f,-0.00623025f,0.00341496f,0.01257975f,-0.008523f,-0.00001953f,0.0094365f,-0.00762525f,-0.00115506f,0.00461925f});
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1});
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1});
  }
}
private class MFVec2f371 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2448f,0.6067f,0.3051f,0.6166f,0.2959f,0.6259f,0.2442f,0.6234f,0.2438f,0.6465f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3051f,0.6166f,0.3007f,0.651f,0.6104f,0.6278f,0.6104f,0.661f,0.6021f,0.661f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3007f,0.651f,0.6021f,0.6278f,0.6425f,0.6334f,0.6294f,0.6619f,0.3051f,0.6166f,0.3051f,0.6166f,0.2442f,0.6234f,0.2438f,0.6465f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3051f,0.6166f,0.3051f,0.6166f,0.3007f,0.651f,0.3007f,0.651f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.6104f,0.6278f,0.6104f,0.661f,0.6021f,0.661f,0.6021f,0.6278f,0.6425f,0.6334f,0.6294f,0.6619f,0.3051f,0.6166f,0.3051f,0.6166f});
  }
}
private class MFVec3f372 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.0367443f,0.065565f,0.02817f,-0.02014659f,0.0536175f,0.0243675f,-0.00627471f,0.07119f,0.005049f,0.01593648f,0.0901575f,0.02664f,0.01343385f,0.07947f,0.005049f,0.0289602f,0.0312075f,0.0241425f,0.031806f,0.030105f,0.005049f,0.01767744f,0.0783675f,0.024525f,0.01801782f,0.07074f,0.043425f,0.00383625f,0.01590525f,0.0447975f,0.02004336f,0.02202525f,-0.0243675f,-0.00627471f,0.07119f,0f,-0.00640305f,0.0806625f,0f,0.00407061f,0.09027f,-0.005049f,0.01593648f,0.0901575f,0f,0.01593648f,0.0901575f,-0.02664f,0.01343385f,0.07947f,-0.02817f,-0.02014659f,0.0536175f,0f,-0.00815238f,0.02048175f,-0.043425f,0.00383625f,0.01590525f,-0.0447975f,0.02004336f,0.02202525f,-0.0241425f,0.031806f,0.030105f,-0.024525f,0.01801782f,0.07074f,-0.005049f,0.01767744f,0.0783675f,0f,0.01767744f,0.0783675f,-0.005049f,0.0289602f,0.0312075f,0f,0.02611161f,0.03204f});
  }
}
private class MFInt32373 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
private class MFInt32374 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
private class MFVec2f375 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
private class MFVec3f376 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.112275f,0.0029016f,-0.019449f,0.1141425f,0.01393047f,0.0010575f,0.105885f,0.00472905f,0.026955f,0.1041975f,-0.0507501f,0.02484f,0.103185f,-0.0459792f,-0.002808f,0.07596f,0.01083636f,0.0398475f,0.0875475f,0.0275931f,-0.00120825f,0.0943425f,-0.069471f,-0.01285425f,0.09873f,-0.069471f,0.0321525f,0.0846225f,0.00903402f,-0.03807f,-0.00278325f,0.01761048f,-0.00423675f,-0.00278325f,0.00838953f,-0.0212085f,-0.00278325f,-0.0395622f,-0.00579825f,-0.00278325f,-0.0388368f,0.014094f,-0.00278325f,0.00721494f,0.01840275f});
  }
}
private class MFInt32377 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
  }
}
private class MFInt32378 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
  }
}
private class MFVec2f379 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
private class MFVec3f380 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0435375f,0.0409014f,-0.002097f,0.0340875f,0.01811268f,-0.03897f,0.034515f,0.01982295f,0.0364275f,-0.0085095f,0.0317781f,0.03897f,0.0030915f,0.048546f,-0.002097f,0.000171f,0.0299646f,-0.0389475f,0.01876725f,-0.0438588f,0.031275f,0.00987975f,-0.048546f,-0.01374525f,0.01861875f,-0.044082f,-0.0137205f,0.0142695f,-0.048546f,0.0312525f,-0.0278325f,0.0392553f,-0.001602f,-0.0348075f,0.02375685f,-0.025695f,-0.01693125f,-0.0447237f,-0.010674f,-0.01689975f,-0.0445005f,0.0261f,-0.033975f,0.0288486f,0.02916f,-0.035775f,-0.00051615f,0.00303975f});
  }
}
private class MFInt32381 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1});
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
private class MFVec2f383 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.9467f,0.4943f,0.9572f,0.4943f,0.9099f,0.4943f,0.9193f,0.4943f,0.9332f,0.4943f,0.9567f,0.4691f,0.9455f,0.4691f,0.9105f,0.4691f,0.9205f,0.4691f,0.9332f,0.4691f,0.9567f,0.4913f,0.9458f,0.4913f,0.9102f,0.4913f,0.9203f,0.4913f,0.9334f,0.4913f,0.8898f,0.4943f,0.9003f,0.4943f,0.8997f,0.4691f,0.8997f,0.4691f,0.8998f,0.4913f,0.8998f,0.4913f,0.9003f,0.4943f,0.3481f,0.2114f,0.9448f,0.4374f,0.9561f,0.4374f,0.8991f,0.4374f,0.9117f,0.4374f,0.9198f,0.4374f,0.9341f,0.4374f});
  }
}
private class MFVec3f384 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.02619f,0.0492993f,-0.0378f,0.0522f,0.0489924f,0.00075825f,0.0235575f,0.0493272f,0.0374175f,-0.0201375f,0.0498015f,0.021501f,-0.01851525f,0.0497736f,-0.024975f,0.031095f,0.01394163f,-0.051975f,0.067005f,0.01354545f,0.0012825f,0.0274725f,0.01398069f,0.0519075f,-0.032895f,0.0146475f,0.029925f,-0.030645f,0.01462239f,-0.0342675f,0.0306f,-0.0561906f,-0.051975f,0.06651f,-0.0565812f,0.0012825f,0.026955f,-0.0561348f,0.0519075f,-0.03339f,-0.0554652f,0.029925f,-0.03114f,-0.0554931f,-0.0342675f,0.031455f,-0.0861831f,-0.054945f,0.0694575f,-0.0866016f,0.00139275f,0.02763f,-0.0861273f,0.054945f,-0.036225f,-0.0854298f,0.0317025f,-0.0338625f,-0.0854577f,-0.036225f,0.01990125f,-0.0345402f,-0.0436275f,0.0473625f,-0.0348192f,-0.01022175f,0.0331425f,-0.0346797f,0.0366525f,-0.00309375f,-0.0342891f,0.03222f,-0.01127475f,-0.0341775f,-0.0174015f,0.02031075f,-0.1965555f,-0.0353025f,0.048825f,-0.1968624f,-0.008505f,0.034065f,-0.1967229f,0.0290925f,-0.003573f,-0.1963044f,0.0255375f,-0.01207125f,-0.1961928f,-0.014265f,0.0203985f,-0.30969f,-0.0339975f,0.0478575f,-0.309969f,-0.00821475f,0.0336375f,-0.30969f,0.0279675f,-0.0025965f,-0.309411f,0.0245475f,-0.01077975f,-0.309132f,-0.01375875f,0.01917f,-0.325035f,-0.02021625f,0.0352575f,-0.325035f,-0.00510075f,0.0269325f,-0.325035f,0.01611f,0.00569475f,-0.324756f,0.014103f,0.00089775f,-0.324756f,-0.00834975f,0.01990125f,-0.0345402f,-0.0436275f,0.0473625f,-0.0348192f,-0.01022175f,0.0331425f,-0.0346797f,0.0366525f,-0.00309375f,-0.0342891f,0.03222f,-0.01127475f,-0.0341775f,-0.0174015f});
  }
}
private class MFInt32385 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1});
  }
}
private class MFInt32386 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
private class MFVec2f387 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f,0.572f,0.9344f,0.572f,0.9377f,0.5719f,0.8909f,0.5718f,0.8588f,0.5719f,0.8849f,0.5578f,0.8418f,0.558f,0.9588f,0.5579f,0.9536f,0.5581f,0.8765f,0.5581f,0.885f,0.5257f,0.8424f,0.5258f,0.9582f,0.5328f,0.9531f,0.533f,0.8768f,0.526f,0.8957f,0.4625f,0.8485f,0.4627f,0.9546f,0.4626f,0.9498f,0.4628f,0.8879f,0.4628f,0.8953f,0.4552f,0.8684f,0.4551f,0.9006f,0.455f,0.9378f,0.4551f,0.9345f,0.4552f});
  }
}
private class MFVec3f388 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048375f,0.00850113f,-0.02592f,0.0259875f,0.00827514f,-0.005823f,0.01394775f,0.00840627f,0.0234f,-0.01463625f,0.00871038f,0.02135475f,-0.020268f,0.00876897f,-0.0091215f,0.0032445f,-0.02356992f,-0.0365625f,0.03312f,-0.02388519f,-0.00960975f,0.016119f,-0.02370384f,0.0365625f,-0.0242775f,-0.02327418f,0.033345f,-0.0322425f,-0.02319048f,-0.014823f,0.002988f,-0.09765f,-0.0361575f,0.0348975f,-0.0980127f,-0.00950625f,0.0175725f,-0.0816075f,0.036225f,-0.02556f,-0.0811611f,0.03303f,-0.0348975f,-0.0972594f,-0.01466775f,0.001332f,-0.2430927f,-0.0323325f,0.0245925f,-0.2433438f,-0.00287775f,0.01135575f,-0.2431764f,0.033975f,-0.020097f,-0.2428416f,0.0309825f,-0.0263025f,-0.2427858f,-0.007713f,0.000207f,-0.2604744f,-0.01992375f,0.0160965f,-0.2606418f,0.000189f,0.00705375f,-0.2605581f,0.0234675f,-0.014427f,-0.2603349f,0.02141775f,-0.018657f,-0.2602791f,-0.00311175f});
  }
}
private class MFInt32389 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1});
  }
}
private class MFInt32390 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1});
  }
}
private class MFVec2f391 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f,0.0334f,0.7695f,0.0151f,0.7598f,0.0161f,0.7624f,0.0345f,0.791f,0.0281f,0.7896f,0.0131f,0.8111f,0.0113f,0.813f,0.0266f,0.8476f,0.0256f,0.8461f,0.0079f,0.8312f,0.0091f,0.8327f,0.0273f,0.9162f,0.2899f,0.8453f,0.0081f,0.8466f,0.0257f,0.9122f,0.2724f,0.9531f,0.2644f,0.9573f,0.2786f,0.936f,0.2844f,0.9315f,0.2698f,0.9706f,0.2558f,0.9766f,0.2733f,0.8032f,0.0047f,0.8134f,0.033f,0.8325f,0.0338f,0.792f,0.0345f,0.7756f,0.0396f,0.7675f,0.0404f,0.9666f,0.2503f,0.9509f,0.2584f,0.9297f,0.2636f,0.9113f,0.266f,0.8439f,0.0324f,0.8447f,0.0323f,0.8081f,0.0397f,0.986f,0.2708f,0.9803f,0.2531f,0.9032f,0.2936f,0.8989f,0.2764f,0.9452f,0.2896f,0.9743f,0.2482f,0.9004f,0.2693f,0.9343f,0.2559f});
  }
}
private class MFVec3f392 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0016155f,0.00308295f,-0.022725f,0.011493f,0.00269235f,-0.017775f,0.015318f,0.00292671f,-0.00477f,0.01231875f,0.00337311f,0.0161505f,0.0067005f,0.00329778f,0.024795f,-0.01340775f,0.00296019f,0.016515f,-0.0151065f,0.00256122f,-0.00487575f,-0.00989775f,0.00244404f,-0.017559f,0.00843525f,-0.02203821f,0.0299925f,-0.01052325f,-0.02369268f,-0.0223065f,0.01468575f,-0.01951605f,0.0073305f,0.001071f,-0.0232128f,-0.028935f,0.013023f,-0.02368431f,-0.02229525f,0.01537875f,-0.01898316f,-0.0073845f,-0.01412775f,-0.01898595f,-0.007353f,-0.01428975f,-0.01951326f,0.00753525f,0.01211625f,-0.02258784f,0.01932075f,0.01512225f,0.00286254f,0.0051885f,-0.015111f,0.00275931f,0.005364f,-0.01283625f,-0.02259063f,0.01934775f,-0.00675f,0.00316665f,0.0243225f,-0.00722475f,-0.02205495f,0.0292275f,0.0013365f,0.00902007f,-0.0001935f,0.00911475f,-0.03069f,0.01872675f,0.011592f,-0.02759868f,0.007245f,0.012267f,-0.02705742f,-0.00858375f,0.01013175f,-0.0317223f,-0.0231075f,0.00089775f,-0.0318339f,-0.02673f,-0.00777375f,-0.0317223f,-0.0232425f,-0.0110385f,-0.02706021f,-0.00841725f,-0.01119825f,-0.0275931f,0.0076725f,-0.011043f,-0.03069f,0.01880775f,-0.00537075f,-0.0301878f,0.0269325f,0.00410175f,-0.0301878f,0.0275175f,-0.00087975f,-0.0354051f,-0.00165375f});
  }
}
private class MFInt32393 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1});
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1});
  }
}
private class MFVec2f395 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f,0.0273f,0.8381f,0.0441f,0.8625f,0.0344f,0.8476f,0.0256f,0.8625f,0.0359f,0.8466f,0.0257f,0.9122f,0.2724f,0.904f,0.2568f,0.8948f,0.2599f,0.8401f,0.0478f,0.8395f,0.0482f,0.8319f,0.0206f,0.9141f,0.2788f,0.844f,0.0192f,0.8432f,0.0193f,0.8491f,0.0466f,0.8611f,0.0409f,0.8611f,0.0397f,0.8814f,0.2691f,0.8989f,0.2764f,0.9014f,0.2535f,0.9142f,0.2789f,0.9026f,0.2823f,0.9033f,0.2821f,0.8928f,0.2563f,0.8819f,0.264f,0.8327f,0.0273f,0.8381f,0.0441f,0.8395f,0.0482f,0.8401f,0.0478f,0.904f,0.2568f,0.9122f,0.2724f,0.9141f,0.2788f,0.9142f,0.2789f});
  }
}
private class MFVec3f396 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01586925f,-0.02176758f,-0.00224325f,-0.01437525f,-0.02176758f,-0.00224325f,-0.00897525f,-0.01387746f,0.01370925f,0.01008675f,-0.01390257f,0.01526625f,-0.0114525f,-0.01688229f,0.00834975f,0.00909675f,0.00038781f,0.00564525f,0.01278f,-0.00016182f,-0.00502875f,-0.01217475f,-0.00016461f,-0.005004f,-0.00656325f,0.00037107f,0.0048735f,-0.01093275f,-0.02663892f,-0.001044f,-0.01162125f,-0.02607534f,0.00540675f,-0.00783675f,-0.02060136f,0.0134685f,0.0081225f,-0.01845027f,0.01497825f,0.0127575f,-0.02699604f,-0.00153f,0.0095985f,0.00834489f,-0.0062325f,0.0046575f,0.0087327f,0.0024255f,-0.00458325f,0.00872433f,0.001854f,-0.01017675f,0.00828909f,-0.00615375f,0.01148175f,-0.00098208f,-0.00670275f,0.01444275f,-0.02169504f,-0.004041f,0.0120735f,-0.02567637f,-0.00350325f,-0.01030725f,-0.0253332f,-0.0030195f,-0.01297125f,-0.02158902f,-0.0040635f,-0.01085625f,-0.00082584f,-0.006705f,-0.00916875f,0.00631935f,-0.0076725f,0.00873225f,0.00636957f,-0.00774675f});
  }
}
private class MFInt32397 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1});
  }
}
private class MFInt32398 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1});
  }
}
private class MFVec2f399 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f,0.0483f,0.8625f,0.0359f,0.8625f,0.0344f,0.8786f,0.0507f,0.8948f,0.2599f,0.867f,0.0598f,0.857f,0.0621f,0.8381f,0.0441f,0.8533f,0.0697f,0.8381f,0.0441f,0.8503f,0.0646f,0.8419f,0.0407f,0.8588f,0.0334f,0.8588f,0.0347f,0.8467f,0.0405f,0.8415f,0.0402f,0.8445f,0.0658f,0.8331f,0.0451f,0.8331f,0.0451f,0.8468f,0.0705f,0.8593f,0.0711f,0.8712f,0.0644f,0.8626f,0.068f,0.8607f,0.0696f,0.877f,0.0609f,0.8798f,0.0581f,0.8632f,0.2548f,0.8814f,0.2691f,0.8729f,0.2464f,0.8847f,0.2342f,0.904f,0.2568f,0.8853f,0.2697f,0.8962f,0.2618f,0.9014f,0.2613f,0.9088f,0.2549f,0.8909f,0.2323f});
  }
}
private class MFVec3f400 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01293975f,-0.02265201f,0.00839025f,-0.006795f,-0.01713339f,0.01449675f,0.0085815f,-0.01398069f,0.0167355f,0.01611f,-0.02522439f,0.00355725f,-0.008235f,-0.0347355f,-0.00188775f,0.0184185f,-0.02781072f,-0.000648f,0.0166455f,-0.00499968f,-0.00890775f,-0.01359675f,-0.00499968f,-0.00890775f,-0.008199f,0.00289044f,0.007047f,0.01086525f,0.00286533f,0.00860175f,-0.010674f,-0.00011439f,0.00168525f,0.008397f,-0.0328941f,0.0067545f,0.00794475f,-0.0347076f,0.00502425f,-0.00550125f,-0.0366606f,0.00279f,-0.01017f,-0.0328941f,0.0083385f,-0.004734f,-0.0266445f,0.0148005f,0.0046485f,-0.02322675f,0.01786725f,-0.009504f,-0.00701127f,-0.01224675f,-0.00543825f,-0.0354609f,-0.00625725f,0.013743f,-0.0293508f,-0.0057465f,0.013131f,-0.00701685f,-0.0122535f,-0.0088245f,0.00230733f,-0.00043875f,-0.0113625f,-0.00046314f,-0.006246f,0.01161225f,-0.00109089f,-0.0060435f,0.00845325f,0.00479043f,0.0058095f,-0.0040545f,0.00479601f,0.0048375f});
  }
}
private class MFInt32401 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1});
  }
}
private class MFInt32402 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1});
  }
}
private class MFVec2f403 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f,0.0507f,0.857f,0.0621f,0.8601f,0.0649f,0.867f,0.0598f,0.8887f,0.0786f,0.8747f,0.0865f,0.8533f,0.0697f,0.876f,0.0783f,0.893f,0.0688f,0.8992f,0.0702f,0.8819f,0.0483f,0.8561f,0.0728f,0.8736f,0.0851f,0.8532f,0.0697f,0.8503f,0.0646f,0.8986f,0.0785f,0.897f,0.0809f,0.8914f,0.0813f,0.8802f,0.0861f,0.8841f,0.0856f,0.8821f,0.0883f,0.8487f,0.0595f,0.8509f,0.0581f,0.8683f,0.0489f,0.868f,0.0507f,0.8608f,0.0544f,0.8505f,0.0603f,0.8455f,0.0706f,0.8468f,0.073f,0.8455f,0.0707f,0.8437f,0.0676f,0.8416f,0.0639f,0.8422f,0.0648f,0.8729f,0.2464f,0.8482f,0.2317f,0.8612f,0.2211f,0.8847f,0.2342f,0.8433f,0.2381f,0.8632f,0.2548f,0.8814f,0.2316f,0.8625f,0.2222f,0.8799f,0.2506f,0.8891f,0.243f,0.8922f,0.232f,0.8964f,0.2371f});
  }
}
private class MFVec3f404 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01458f,-0.00438588f,-0.004086f,0.00498375f,-0.01310184f,-0.00838575f,0.01640925f,-0.00980406f,-0.00848025f,-0.01347525f,0.00188046f,-0.001395f,-0.0073305f,0.00739908f,0.0047115f,0.00804375f,0.01055178f,0.00695025f,0.01557225f,-0.00069192f,-0.006228f,-0.0087705f,-0.01020582f,-0.011673f,0.017883f,-0.00327825f,-0.01043325f,-0.0048015f,-0.01718919f,0.0181305f,0.00697725f,-0.01123812f,0.016614f,0.0043965f,-0.02342763f,0.02119275f,-0.002484f,-0.02675889f,0.0200835f,-0.00560925f,-0.0321129f,0.00493425f,-0.01149975f,-0.0232128f,0.01413225f,-0.0082935f,-0.0273699f,0.01604475f,-0.0042705f,-0.0342333f,0.0086175f,0.01214775f,-0.0222642f,0.0062685f,0.00909675f,-0.0314433f,0.01244925f,0.0030285f,-0.0311364f,0.0042795f,0.00232875f,-0.0349866f,0.01112175f,0.0098325f,0.00294066f,-0.01287f,0.00996525f,0.00460908f,-0.01130175f,0.00364275f,0.01335573f,-0.0003465f,-0.004869f,0.0111042f,-0.00157275f,-0.0082485f,0.00676296f,-0.0071325f,-0.005409f,0.00182466f,-0.0133515f,-0.00656775f,-0.01096749f,-0.0170505f,0.003807f,-0.01408671f,-0.014868f,0.01329525f,-0.01105398f,-0.0147735f,0.01437525f,-0.00700569f,-0.015957f,0.00924975f,-0.00235476f,-0.01803825f,-0.00389925f,-0.00357678f,-0.019134f});
  }
}
private class MFInt32405 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1});
  }
}
private class MFInt32406 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1});
  }
}
private class MFVec2f407 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f,0.0865f,0.8887f,0.0786f,0.8299f,0.2203f,0.8424f,0.2111f,0.8736f,0.0851f,0.8939f,0.0989f,0.8978f,0.0975f,0.8834f,0.0852f,0.8992f,0.0766f,0.9092f,0.0888f,0.8992f,0.0702f,0.9115f,0.0859f,0.876f,0.0783f,0.893f,0.0688f,0.9109f,0.102f,0.9135f,0.0996f,0.9144f,0.0973f,0.9172f,0.0962f,0.8241f,0.2146f,0.8338f,0.2074f,0.8247f,0.2116f,0.8291f,0.2083f,0.9028f,0.1054f,0.9046f,0.1032f,0.9153f,0.1012f,0.9125f,0.1038f,0.9081f,0.1033f,0.9082f,0.1057f,0.8266f,0.2097f,0.8885f,0.0681f,0.8723f,0.0776f,0.8843f,0.0701f,0.8696f,0.0781f,0.8612f,0.2211f,0.8482f,0.2317f,0.8625f,0.2222f,0.8417f,0.2109f,0.8433f,0.2381f,0.8245f,0.2237f,0.8192f,0.2167f,0.8322f,0.2071f,0.8195f,0.2131f,0.8224f,0.2103f,0.8256f,0.2083f});
  }
}
private class MFVec3f408 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00750825f,-0.02202984f,-0.0004905f,0.00900225f,-0.00768924f,-0.00210375f,0.0001575f,-0.02224746f,-0.00018225f,0.0040455f,0.00229059f,0.007659f,0.00209025f,-0.01141389f,0.0130365f,-0.00673425f,-0.01106235f,0.01280925f,0.00259425f,-0.02535831f,0.01358775f,0.001512f,-0.02337741f,0.01525275f,-0.000225f,-0.01981737f,0.01631025f,-0.006579f,-0.02045907f,0.016695f,-0.011079f,-0.0219015f,0.012411f,-0.01197225f,-0.01467819f,0.00819675f,-0.0074655f,-0.0288765f,0.00436725f,-0.00953325f,-0.02610882f,0.01227825f,-0.007515f,-0.0294066f,0.00821475f,-0.00087075f,-0.0296019f,0.00527175f,0.00367425f,-0.02646594f,0.0087165f,0.006507f,-0.0187767f,0.00446175f,-0.004671f,-0.02645199f,0.015561f,-0.003159f,-0.0292392f,0.0132435f,0.00340875f,-0.02630691f,0.011538f,-0.00204975f,-0.0307179f,0.01028025f,-0.008397f,-0.0281511f,0.01041525f,0.01053f,0.00105462f,-0.0076095f,0.0053595f,0.0120807f,0.002736f,-0.000477f,0.01265544f,-0.0005805f,0.0050715f,0.00181908f,-0.01039275f,-0.0098235f,0.00995751f,-0.0035595f,-0.0131175f,0.00010602f,0.00025425f,-0.007227f,-0.00880524f,-0.00894375f,-0.004275f,-0.00087885f,-0.0133695f,-0.006417f,0.00612963f,0.0042525f,0.00141075f,-0.00782874f,-0.0095985f});
  }
}
private class MFInt32409 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1});
  }
}
private class MFInt32410 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1});
  }
}
private class MFVec2f411 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f,0.0266f,0.8136f,0.0488f,0.8136f,0.0488f,0.8133f,0.0266f,0.8111f,0.0474f,0.8105f,0.0283f,0.8108f,0.0283f,0.8111f,0.0474f,0.8141f,0.0525f,0.8141f,0.0525f,0.8123f,0.0198f,0.8125f,0.0198f,0.9273f,0.2479f,0.9315f,0.2698f,0.9337f,0.2676f,0.9301f,0.2489f,0.9262f,0.2444f,0.9337f,0.2762f,0.9335f,0.2763f,0.8381f,0.0441f,0.904f,0.2568f,0.8327f,0.0273f,0.9122f,0.2724f,0.8401f,0.0478f,0.9014f,0.2535f,0.8395f,0.0482f,0.9142f,0.2789f,0.8319f,0.0206f,0.9141f,0.2788f,0.8381f,0.0441f,0.8327f,0.0273f,0.8319f,0.0206f,0.9141f,0.2788f,0.9122f,0.2724f,0.904f,0.2568f,0.9014f,0.2535f,0.8395f,0.0482f});
  }
}
private class MFVec3f412 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0143055f,-0.02616741f,-0.00519075f,0.01759725f,-0.02616741f,-0.00519075f,0.0153495f,0.00175491f,-0.006111f,-0.01362825f,0.00175491f,-0.005904f,-0.011709f,-0.0308016f,-0.00507825f,0.014184f,-0.0308016f,-0.00507825f,0.01153575f,0.01035927f,-0.00658575f,-0.0103005f,0.01036764f,-0.00644625f,-0.01185525f,-0.00013392f,-0.0076995f,-0.0132615f,-0.02403864f,-0.006849f,0.01551825f,-0.02403864f,-0.0068355f,0.01359225f,-0.00013392f,-0.00789525f,0.01586925f,-0.02292264f,0.008667f,-0.01437525f,-0.02292264f,0.008667f,0.01278f,-0.00131688f,0.0058815f,-0.01217475f,-0.00131967f,0.00590625f,-0.01093275f,-0.02779398f,0.00986625f,0.0127575f,-0.0281511f,0.00938025f,0.0095985f,0.00718983f,0.00467775f,-0.01017675f,0.00713403f,0.00475875f,0.0138015f,-0.02104776f,0.009927f,0.01112625f,-0.00234081f,0.007515f,0.00837225f,0.00502758f,0.00647325f,-0.00875475f,0.00498015f,0.00654075f,-0.01048275f,-0.00234081f,0.0075375f,-0.0123885f,-0.02104776f,0.009927f,-0.0094095f,-0.02526624f,0.01096425f,0.01110825f,-0.02557593f,0.01054575f});
  }
}
private class MFInt32413 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1});
  }
}
private class MFInt32414 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1});
  }
}
private class MFVec2f415 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f,0.0953f,0.8526f,0.0788f,0.846f,0.0768f,0.8466f,0.0958f,0.8195f,0.0808f,0.8225f,0.0994f,0.8225f,0.0994f,0.8195f,0.0808f,0.8903f,0.2261f,0.8467f,0.0958f,0.8381f,0.0441f,0.8136f,0.0488f,0.8561f,0.0728f,0.8532f,0.0697f,0.8381f,0.0441f,0.8136f,0.0488f,0.8436f,0.0662f,0.8533f,0.0697f,0.8503f,0.0646f,0.8461f,0.0998f,0.8248f,0.1027f,0.8248f,0.1027f,0.8462f,0.0997f,0.8498f,0.0994f,0.8184f,0.0977f,0.8157f,0.0811f,0.8157f,0.0809f,0.8184f,0.0977f,0.8165f,0.0457f,0.8341f,0.0424f,0.8341f,0.0424f,0.8165f,0.0457f,0.844f,0.0417f,0.8554f,0.0622f,0.8575f,0.0659f,0.8594f,0.0677f,0.8574f,0.0658f,0.844f,0.0417f,0.8099f,0.0493f,0.8099f,0.0493f,0.82f,0.101f,0.82f,0.101f,0.8821f,0.2087f,0.8838f,0.2252f,0.9098f,0.1997f,0.916f,0.2175f,0.8866f,0.2074f,0.904f,0.2568f,0.9273f,0.2479f,0.8814f,0.2316f,0.8847f,0.2342f,0.9197f,0.2166f,0.9083f,0.2577f,0.925f,0.2515f,0.8813f,0.2388f,0.8986f,0.2602f,0.931f,0.2468f});
  }
}
private class MFVec3f416 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01211625f,-0.0603198f,0.01127475f,0.00148275f,-0.0601524f,0.01440225f,-0.00807075f,-0.0603198f,0.01131075f,0.013797f,-0.0370233f,0.0119925f,-0.0106695f,-0.0369954f,0.012222f,0.01355175f,-0.0615753f,-0.00423225f,-0.012024f,-0.0361305f,-0.004977f,0.016128f,-0.0361305f,-0.004977f,0.00200475f,-0.0398691f,0.01608075f,0.01945125f,-0.02319327f,0.01122075f,-0.0088065f,-0.0615753f,-0.00423225f,-0.0143055f,-0.00214551f,-0.0065025f,0.01759725f,-0.00214551f,-0.0065025f,0.01586925f,0.00109647f,0.00735525f,-0.01437525f,0.00109647f,0.00735525f,-0.00901125f,-0.0286533f,0.01437525f,0.004743f,-0.031527f,0.0176625f,0.0161685f,-0.0282348f,0.017568f,0.01764225f,-0.02171457f,0.015615f,-0.00946575f,-0.0361863f,-0.0076725f,-0.0065655f,-0.0609894f,-0.0059265f,0.011403f,-0.0609894f,-0.0059265f,0.0135495f,-0.0363816f,-0.00766125f,0.014913f,-0.00231291f,-0.00906075f,-0.01230075f,-0.00231291f,-0.00906075f,0.00151425f,-0.0651465f,0.013032f,0.00890325f,-0.0652302f,0.010611f,0.01031625f,-0.0659556f,-0.003636f,0.0103905f,-0.0633609f,-0.005292f,-0.00553725f,-0.0633609f,-0.005292f,-0.007074f,-0.0659556f,-0.00362475f,-0.00647775f,-0.0652302f,0.010692f,0.003546f,-0.0262539f,0.0202725f,-0.006489f,-0.02389635f,0.01766475f,-0.0105525f,0.00165447f,0.01146375f,0.01323675f,0.00166005f,0.01145475f,0.01243575f,-0.0192231f,0.01833525f,0.0121725f,-0.02400237f,0.01983375f,-0.011385f,0.003627f,0.0045855f,-0.01200375f,0.00142569f,-0.004365f,0.014256f,0.00142569f,-0.004365f,0.0130815f,0.003627f,0.0045855f});
  }
}
private class MFInt32417 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1});
  }
}
private class MFInt32418 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1});
  }
}
private class MFVec2f419 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f,0.1006f,0.8514f,0.0953f,0.8466f,0.0958f,0.8466f,0.1011f,0.8225f,0.0994f,0.8283f,0.1035f,0.9023f,0.1969f,0.8225f,0.0994f,0.8467f,0.0958f,0.8857f,0.2021f,0.8231f,0.1042f,0.8931f,0.1724f,0.8782f,0.1769f,0.8338f,0.1268f,0.8493f,0.125f,0.8543f,0.1273f,0.8302f,0.1302f,0.8258f,0.1072f,0.8236f,0.1075f,0.8231f,0.1042f,0.8504f,0.1328f,0.8508f,0.1334f,0.8781f,0.1731f,0.8909f,0.1692f,0.8352f,0.1346f,0.8353f,0.1353f,0.8228f,0.0929f,0.844f,0.0896f,0.8482f,0.0889f,0.8441f,0.0896f,0.8228f,0.0929f,0.8203f,0.0995f,0.8207f,0.1038f,0.8212f,0.1068f,0.8207f,0.1037f,0.8203f,0.0995f,0.8206f,0.0933f,0.8205f,0.0933f,0.8815f,0.2034f,0.8821f,0.2087f,0.9098f,0.1997f,0.8866f,0.2074f,0.8737f,0.1777f,0.8969f,0.1707f,0.9052f,0.1925f,0.9074f,0.1918f,0.9084f,0.195f,0.876f,0.171f,0.891f,0.1665f});
  }
}
private class MFVec3f420 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00260775f,-0.0382788f,0.00704475f,-0.01161225f,-0.0374139f,-0.007137f,0.00742275f,-0.0344844f,-0.0071145f,-0.00260775f,-0.0380556f,-0.00954f,-0.001323f,-0.004185f,0.00851625f,0.008658f,-0.00437193f,0.005598f,0.0097605f,-0.00525915f,-0.007245f,-0.0105165f,-0.00525915f,-0.00723375f,-0.0105165f,-0.00437193f,0.005598f,-0.001323f,-0.00921258f,-0.009135f,-0.01161225f,-0.0375534f,0.004347f,0.00742275f,-0.0346518f,0.00437175f,-0.00993375f,-0.0421011f,-0.0064125f,0.00382275f,-0.0444168f,-0.007092f,-0.00993375f,-0.0422406f,0.0035595f,0.00382275f,-0.0445563f,0.00423f,-0.0026325f,-0.0452817f,-0.007119f,-0.0026325f,-0.0454212f,0.004428f,0.00965475f,0.00232128f,0.00592875f,-0.0009765f,0.00247752f,0.00905625f,-0.01053225f,0.00232128f,0.00596475f,0.0110925f,0.00105462f,-0.00957825f,0.009198f,-0.00535122f,-0.00954675f,-0.0105165f,-0.00535122f,-0.00954675f,-0.001323f,-0.00925164f,-0.009414f,-0.01126575f,0.00105462f,-0.00957825f,0.00633375f,0.00963666f,0.00387f,-0.00129825f,0.01003842f,0.00717975f,-0.008613f,0.00964782f,0.003924f,-0.008919f,0.0091233f,-0.00904725f,0.00766125f,0.00912609f,-0.00902025f,-0.0013005f,-0.00804357f,-0.01006875f,0.00845325f,-0.00421011f,-0.010233f,0.01024425f,0.00151776f,-0.010233f,0.0070605f,0.00891126f,-0.01063125f,-0.0082125f,0.00890847f,-0.010656f,-0.0103005f,0.00148428f,-0.01023075f,-0.00964575f,-0.00428823f,-0.01023075f});
  }
}
private class MFInt32421 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFInt32422 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFVec2f423 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f,0.1769f,0.8543f,0.1273f,0.8574f,0.1518f,0.8703f,0.1535f,0.8493f,0.125f,0.8504f,0.1318f,0.8846f,0.1491f,0.8931f,0.1724f,0.8349f,0.1336f,0.8379f,0.1515f,0.8533f,0.1496f,0.8338f,0.1268f,0.8302f,0.1302f,0.8351f,0.1545f,0.849f,0.1233f,0.8336f,0.1251f,0.849f,0.123f,0.8335f,0.1249f,0.8539f,0.1573f,0.8543f,0.1579f,0.8703f,0.1496f,0.8822f,0.146f,0.8398f,0.159f,0.8399f,0.1597f,0.8737f,0.1777f,0.8664f,0.1541f,0.8969f,0.1707f,0.8878f,0.1476f,0.8796f,0.181f,0.8945f,0.1764f,0.8684f,0.1475f,0.8822f,0.1433f});
  }
}
private class MFVec3f424 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0018945f,-0.0314433f,-0.0081225f,-0.00955575f,-0.0311364f,0.0045225f,0.006606f,-0.0280116f,0.004734f,0.00864675f,-0.00556326f,0.00519075f,0.00864675f,-0.00541539f,-0.0062955f,-0.009576f,0.00031248f,-0.00624825f,0.00945675f,0.00322524f,-0.0062235f,-0.009576f,0.00016461f,0.005238f,0.00945675f,0.00308016f,0.0052605f,-0.0054315f,0.00570555f,-0.00620325f,-0.0054315f,0.00555768f,0.00528075f,0.00396225f,0.00526473f,0.0052785f,0.00396225f,0.0054126f,-0.0062055f,-0.00057375f,-0.00034038f,-0.00865125f,-0.00057375f,-0.00056916f,0.00793575f,-0.00188775f,-0.0316665f,0.007218f,0.00379575f,-0.0377487f,0.004221f,-0.0016875f,-0.038781f,0.0044055f,-0.00956025f,-0.0309969f,-0.0057195f,-0.00801675f,-0.0357678f,0.0036f,-0.008019f,-0.0356562f,-0.00486225f,0.0066015f,-0.02786652f,-0.0059085f,0.00379125f,-0.0376092f,-0.00549225f,-0.001692f,-0.0386694f,-0.005517f});
  }
}
private class MFInt32425 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFInt32426 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFVec2f427 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f,0.1553f,0.8574f,0.1518f,0.8533f,0.1496f,0.8379f,0.1515f,0.8351f,0.1545f,0.8388f,0.1572f,0.8414f,0.1663f,0.8547f,0.1647f,0.8578f,0.1639f,0.8665f,0.142f,0.8703f,0.1535f,0.8804f,0.1378f,0.8846f,0.1491f,0.8382f,0.1663f,0.8495f,0.1759f,0.8523f,0.1752f,0.8544f,0.1737f,0.8566f,0.1736f,0.8658f,0.1324f,0.8753f,0.1296f,0.8677f,0.1303f,0.8725f,0.1289f,0.842f,0.1753f,0.8441f,0.175f,0.8533f,0.1759f,0.8496f,0.1769f,0.8467f,0.1759f,0.846f,0.1768f,0.87f,0.1292f,0.8525f,0.1477f,0.8382f,0.1495f,0.8525f,0.1475f,0.8381f,0.1492f,0.8664f,0.1541f,0.8878f,0.1476f,0.8639f,0.1422f,0.8827f,0.1365f,0.8634f,0.1325f,0.8774f,0.1283f,0.8662f,0.1297f,0.8697f,0.1281f,0.8732f,0.1275f,0.872f,0.1575f,0.8858f,0.1533f});
  }
}
private class MFVec3f428 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.007092f,-0.0040455f,0.00547425f,0.0070875f,-0.00390042f,-0.0051705f,0.0054495f,-0.01410345f,0.004914f,0.005445f,-0.01396953f,-0.0048645f,-0.00798075f,-0.01322739f,0.005355f,-0.00183825f,-0.01379376f,0.0072045f,-0.00798525f,-0.01307952f,-0.00526725f,-0.001845f,-0.01359567f,-0.007182f,0.002997f,-0.02173131f,0.00437625f,0.00299475f,-0.02161134f,-0.00448425f,-0.00804375f,-0.02121795f,0.004275f,-0.002691f,-0.02207448f,0.00620775f,-0.00804825f,-0.02110077f,-0.0042075f,-0.00269775f,-0.0219015f,-0.00627075f,0.00372825f,-0.02408049f,-0.00009675f,-0.007227f,-0.02406933f,-0.00009225f,-0.00271125f,-0.02579634f,-0.000108f,0.00363375f,-0.0236034f,0.00235575f,-0.00731925f,-0.02343879f,-0.002142f,-0.002421f,-0.02497887f,0.00314775f,0.00363375f,-0.0235755f,-0.002403f,-0.00731925f,-0.02347227f,0.0020835f,-0.00241875f,-0.02503746f,-0.00312975f,-0.00852975f,0.0000837f,0.00532125f,0.0076275f,0.00335079f,-0.00510975f,0.007632f,0.00320292f,0.00553275f,0.002952f,0.0055242f,0.00516825f,0.0029475f,0.00566091f,-0.00469125f,-0.00511425f,0.00558837f,0.00517275f,-0.00853425f,0.0002232f,-0.004923f,-0.0051165f,0.00572229f,-0.004689f,-0.00081675f,-0.00043803f,0.00801225f,-0.0008235f,-0.00022599f,-0.007326f});
  }
}
private class MFInt32429 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1});
  }
}
private class MFInt32430 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1});
  }
}
private class MFVec2f431 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f,0.2698f,0.8136f,0.0488f,0.7924f,0.0507f,0.7911f,0.0281f,0.8136f,0.0488f,0.813f,0.0266f,0.791f,0.0281f,0.7924f,0.0508f,0.7924f,0.0543f,0.8143f,0.0526f,0.8143f,0.0526f,0.7924f,0.0543f,0.9335f,0.2763f,0.7903f,0.0215f,0.7903f,0.0215f,0.8123f,0.0198f,0.7875f,0.03f,0.7875f,0.03f,0.7887f,0.0494f,0.7887f,0.0495f,0.9277f,0.2691f,0.8167f,0.0279f,0.8173f,0.0471f,0.8173f,0.0471f,0.9273f,0.2479f,0.9479f,0.2423f,0.9531f,0.2644f,0.9318f,0.2697f,0.9473f,0.2389f,0.926f,0.2443f,0.955f,0.2707f,0.9551f,0.2707f,0.9337f,0.2763f,0.9563f,0.262f,0.9518f,0.243f,0.928f,0.269f,0.924f,0.2502f,0.9241f,0.2502f});
  }
}
private class MFVec3f432 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01787175f,-0.0280674f,-0.0074385f,-0.01458f,-0.0280116f,-0.00744075f,0.01553625f,-0.00001395f,0.00710325f,0.01622925f,0.00051894f,-0.0076095f,-0.0132795f,0.00051615f,-0.00758025f,-0.0141165f,-0.0279279f,0.00802125f,-0.01343925f,-0.00001116f,0.00731025f,0.01778625f,-0.0279279f,0.00802125f,-0.01222875f,-0.0324198f,-0.00762525f,-0.01193175f,-0.0326988f,0.008244f,0.01446975f,-0.0326988f,0.008244f,0.014526f,-0.0324756f,-0.007623f,-0.01012275f,0.00860715f,0.00678375f,-0.01001475f,0.00883593f,-0.00617175f,0.01281825f,0.00883872f,-0.006192f,0.01236375f,0.00860436f,0.006642f,-0.013167f,-0.02618973f,0.01055925f,-0.01174725f,-0.00205902f,0.0097155f,0.013896f,-0.00206181f,0.00951975f,0.01584f,-0.02618973f,0.0105705f,0.01584675f,-0.02597769f,-0.00955125f,0.014436f,-0.00141453f,-0.010098f,-0.01153575f,-0.00141732f,-0.01006875f,-0.01348425f,-0.0259191f,-0.00955575f});
  }
}
private class MFInt32433 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1});
  }
}
private class MFInt32434 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1});
  }
}
private class MFVec2f435 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f,0.0994f,0.8195f,0.0808f,0.7938f,0.0824f,0.7939f,0.1016f,0.8195f,0.0808f,0.7938f,0.0824f,0.7924f,0.0507f,0.8136f,0.0488f,0.7939f,0.1016f,0.8225f,0.0994f,0.8136f,0.0488f,0.7924f,0.0508f,0.7964f,0.1053f,0.8205f,0.103f,0.8205f,0.103f,0.7964f,0.1053f,0.796f,0.0481f,0.809f,0.0468f,0.809f,0.0469f,0.796f,0.048f,0.7888f,0.0827f,0.7888f,0.0826f,0.7886f,0.1011f,0.7887f,0.1011f,0.8243f,0.0799f,0.8186f,0.0479f,0.8186f,0.0479f,0.8243f,0.0801f,0.7878f,0.051f,0.7878f,0.0509f,0.8275f,0.0984f,0.8275f,0.0983f,0.7902f,0.1036f,0.7902f,0.1036f,0.8264f,0.1006f,0.8264f,0.1006f,0.916f,0.2175f,0.941f,0.2114f,0.9479f,0.2423f,0.9273f,0.2479f,0.9376f,0.1925f,0.9098f,0.1997f,0.9479f,0.2423f,0.9448f,0.2456f,0.9323f,0.249f,0.9323f,0.249f,0.9448f,0.2456f,0.9459f,0.2103f,0.9115f,0.2191f,0.9226f,0.2496f,0.9226f,0.2496f,0.9114f,0.219f,0.9524f,0.2413f,0.9524f,0.2414f});
  }
}
private class MFVec3f436 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01652625f,-0.0327267f,-0.00582975f,-0.0117f,-0.0327267f,-0.00582975f,-0.00871425f,-0.0590085f,-0.00637875f,0.013734f,-0.0590085f,-0.00637875f,0.01787175f,-0.00008928f,-0.00598275f,-0.01458f,-0.00002232f,-0.005985f,0.0137385f,-0.0593991f,0.01174725f,-0.01183725f,-0.0339543f,0.0110025f,0.016317f,-0.0339543f,0.0110025f,-0.00861975f,-0.0593991f,0.01174725f,-0.0141165f,0.00004743f,0.00947925f,0.01778625f,0.00004743f,0.00947925f,0.01196325f,-0.0637236f,0.011061f,0.011961f,-0.0638631f,-0.00524025f,-0.00675675f,-0.0638631f,-0.00524025f,-0.00667575f,-0.0637236f,0.011061f,-0.0063495f,-0.0586179f,0.013275f,-0.00953325f,-0.0336753f,0.0144585f,-0.012411f,0.00061659f,0.01289025f,0.0153675f,0.00061659f,0.01289025f,0.01399275f,-0.0338427f,0.01446525f,0.01163025f,-0.0586458f,0.013275f,0.0104265f,-0.06138f,0.01287f,-0.0051345f,-0.06138f,0.01287f,0.011493f,-0.058032f,-0.008442f,0.013995f,-0.0328662f,-0.00871875f,0.01522125f,0.00021762f,-0.00870075f,-0.01248975f,0.00027342f,-0.008703f,-0.00920475f,-0.0326988f,-0.00872325f,-0.00632925f,-0.0580041f,-0.00844425f,-0.00510075f,-0.0612963f,-0.00774225f,0.01027575f,-0.0612963f,-0.00774225f,-0.01209375f,0.00303831f,0.00645075f,-0.012375f,0.00301041f,-0.00374625f,0.0148725f,0.00294903f,-0.003744f,0.0148185f,0.00304668f,0.00645075f});
  }
}
private class MFInt32437 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
private class MFInt32438 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1});
  }
}
private class MFVec2f439 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f,0.105f,0.8225f,0.0994f,0.7939f,0.1016f,0.7996f,0.1065f,0.9311f,0.1887f,0.7939f,0.1016f,0.8225f,0.0994f,0.9145f,0.1932f,0.794f,0.107f,0.9232f,0.1611f,0.908f,0.1649f,0.8025f,0.1324f,0.818f,0.1313f,0.7986f,0.1359f,0.7957f,0.11f,0.7939f,0.1101f,0.794f,0.107f,0.8228f,0.1342f,0.8186f,0.1401f,0.819f,0.1409f,0.9081f,0.1606f,0.921f,0.1574f,0.8033f,0.1412f,0.8033f,0.142f,0.8231f,0.1042f,0.8212f,0.1078f,0.8231f,0.1042f,0.8236f,0.1075f,0.7948f,0.0956f,0.8206f,0.0932f,0.8206f,0.0932f,0.7948f,0.0956f,0.8249f,0.0987f,0.8253f,0.1032f,0.8258f,0.1063f,0.8253f,0.1032f,0.8249f,0.0987f,0.823f,0.0929f,0.823f,0.0929f,0.7917f,0.1017f,0.7916f,0.1064f,0.7918f,0.1091f,0.7916f,0.1063f,0.7917f,0.1017f,0.7927f,0.0957f,0.7927f,0.0957f,0.9376f,0.1925f,0.9098f,0.1997f,0.927f,0.1595f,0.9344f,0.1846f,0.9361f,0.1842f,0.9366f,0.1872f,0.9035f,0.1654f,0.9061f,0.1582f,0.9213f,0.1544f,0.9096f,0.1911f,0.9084f,0.195f,0.9074f,0.1918f});
  }
}
private class MFVec3f440 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01156275f,-0.0393669f,-0.00499725f,0.00747f,-0.0361026f,-0.00506475f,-0.0025605f,-0.040176f,-0.0078075f,0.00924525f,-0.00268956f,0.007047f,0.00924525f,-0.00252495f,-0.00596025f,-0.01046925f,-0.00252495f,-0.00596025f,-0.01046925f,-0.00268956f,0.007047f,-0.00127575f,-0.0066402f,-0.00823275f,-0.0098865f,-0.0446121f,-0.004122f,0.00387f,-0.0472068f,-0.0047295f,-0.0098865f,-0.0444447f,0.00501525f,0.00387f,-0.0470394f,0.00576225f,-0.002583f,-0.0481833f,-0.00472725f,-0.002583f,-0.0480159f,0.00598725f,-0.01156275f,-0.0391716f,0.00565425f,-0.0025605f,-0.039897f,0.00878625f,-0.00127575f,-0.00665973f,0.0092835f,0.00747f,-0.0359073f,0.00558675f,0.00924525f,-0.00271746f,0.0094455f,-0.01046925f,-0.00271746f,0.0094455f,-0.00127575f,-0.00661788f,0.009576f,0.01113975f,0.00368838f,0.00941175f,-0.00127575f,-0.00657603f,-0.00852525f,0.00924525f,-0.00274257f,-0.0084555f,-0.01046925f,-0.00274257f,-0.0084555f,-0.01131525f,0.00407898f,-0.0087165f,0.01113525f,0.00407898f,-0.0087165f,-0.0112185f,0.00368838f,0.00941175f,0.00749475f,0.01159245f,-0.008127f,0.00749925f,0.0116343f,0.00836325f,-0.0089955f,0.0116343f,0.00836325f,-0.00907875f,0.01159245f,-0.008127f,0.00875025f,-0.00141174f,0.0101475f,-0.0012555f,-0.00534564f,0.0102465f,-0.00990225f,-0.0014508f,0.0101475f,-0.01059525f,0.00423801f,0.01012725f,-0.008532f,0.01173753f,0.01010925f,0.0071055f,0.01173753f,0.01010925f,0.01064475f,0.00424359f,0.01012725f,-0.001251f,-0.00515871f,-0.0091755f,0.00834975f,-0.00168795f,-0.00940725f,0.010098f,0.00410688f,-0.009558f,0.006822f,0.0114948f,-0.0095715f,-0.0082575f,0.0114948f,-0.0095715f,-0.01017225f,0.00411804f,-0.009558f,-0.00944325f,-0.00176607f,-0.00940725f});
  }
}
private class MFInt32441 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFInt32442 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFVec2f443 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f,0.1649f,0.8228f,0.1342f,0.8238f,0.1612f,0.9018f,0.1387f,0.818f,0.1313f,0.8186f,0.139f,0.9163f,0.135f,0.9232f,0.1611f,0.8031f,0.1401f,0.8044f,0.1596f,0.8199f,0.1584f,0.8025f,0.1324f,0.7986f,0.1359f,0.8014f,0.1628f,0.8179f,0.1294f,0.8023f,0.1305f,0.8179f,0.1291f,0.8023f,0.1302f,0.8199f,0.1671f,0.8202f,0.1672f,0.902f,0.1343f,0.914f,0.1313f,0.8058f,0.1681f,0.8058f,0.1689f,0.9035f,0.1654f,0.8978f,0.139f,0.927f,0.1595f,0.9196f,0.1336f,0.9092f,0.1696f,0.9243f,0.1658f,0.9003f,0.1324f,0.9142f,0.1283f});
  }
}
private class MFVec3f444 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0016695f,-0.0347076f,-0.00737325f,-0.00934425f,-0.0339264f,0.005256f,0.0068085f,-0.0304668f,0.005382f,0.00864675f,-0.00622449f,0.00541125f,0.00864675f,-0.00640026f,-0.00524025f,-0.009576f,0.00002232f,-0.00537525f,0.00945675f,0.00328941f,-0.005445f,-0.009576f,0.00019809f,0.00527625f,0.00945675f,0.00346797f,0.0052065f,-0.0054315f,0.00606825f,-0.0055035f,-0.0054315f,0.00624681f,0.005148f,0.00396225f,0.00591759f,0.00515475f,0.00396225f,0.00573903f,-0.00549675f,-0.00057375f,-0.00080073f,-0.00818775f,-0.00057375f,-0.00052452f,0.00840825f,-0.00167625f,-0.0344565f,0.007974f,0.00403425f,-0.0414036f,0.00517725f,-0.00146925f,-0.0417663f,0.005337f,-0.00933975f,-0.0340938f,-0.00499275f,-0.00778725f,-0.0391437f,0.004482f,-0.00778275f,-0.0392832f,-0.0039825f,0.006813f,-0.0306342f,-0.005265f,0.00403875f,-0.041571f,-0.0045405f,-0.00144225f,-0.0427149f,-0.00453825f});
  }
}
private class MFInt32445 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFInt32446 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFVec2f447 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f,0.1649f,0.8238f,0.1612f,0.8199f,0.1584f,0.8044f,0.1596f,0.8014f,0.1628f,0.8049f,0.166f,0.807f,0.1802f,0.8204f,0.1792f,0.8232f,0.1783f,0.8982f,0.1238f,0.9018f,0.1387f,0.9123f,0.1202f,0.9163f,0.135f,0.8038f,0.18f,0.8141f,0.1881f,0.8169f,0.1876f,0.8192f,0.1861f,0.8213f,0.1861f,0.8983f,0.1142f,0.9079f,0.1117f,0.9004f,0.112f,0.9052f,0.1108f,0.8067f,0.1872f,0.8088f,0.1869f,0.8179f,0.1883f,0.8142f,0.1891f,0.8114f,0.188f,0.8106f,0.1889f,0.9027f,0.111f,0.8192f,0.1563f,0.8048f,0.1573f,0.8192f,0.156f,0.8048f,0.1571f,0.8978f,0.139f,0.9196f,0.1336f,0.8956f,0.1239f,0.9147f,0.119f,0.8959f,0.1141f,0.9101f,0.1105f,0.8989f,0.1113f,0.9025f,0.1098f,0.906f,0.1094f,0.9033f,0.1433f,0.9173f,0.1398f});
  }
}
private class MFVec3f448 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006948f,-0.00389484f,0.005778f,0.0069525f,-0.0040734f,-0.0048735f,0.00567225f,-0.01380771f,0.00567675f,0.00568125f,-0.01409787f,-0.00434025f,-0.007749f,-0.01315206f,0.006102f,-0.0016155f,-0.01351476f,0.007812f,-0.00774f,-0.01346454f,-0.004779f,-0.001602f,-0.01392768f,-0.00670275f,0.00285075f,-0.02322675f,0.005166f,0.00285975f,-0.02350017f,-0.003825f,-0.00776025f,-0.02293938f,0.005049f,-0.0024345f,-0.02290311f,0.0067635f,-0.0077535f,-0.02320164f,-0.0035595f,-0.00242325f,-0.02326581f,-0.0054f,0.0035685f,-0.02511f,0.00067275f,-0.00695925f,-0.02518254f,0.00066825f,-0.00245925f,-0.02640177f,0.00068625f,0.003474f,-0.0246636f,0.00315f,-0.007047f,-0.02480868f,-0.00141975f,-0.00216675f,-0.02567358f,0.0039735f,0.0034785f,-0.02483658f,-0.0016785f,-0.0070515f,-0.02466081f,0.0028665f,-0.00215775f,-0.02597211f,-0.00239175f,-0.00831825f,0.0007812f,0.00547875f,0.007839f,0.00405387f,-0.00504225f,0.0078345f,0.00422964f,0.005607f,0.0031455f,0.0068355f,0.00516375f,0.00315f,0.00667368f,-0.00470025f,-0.00492075f,0.00693594f,0.005157f,-0.00831375f,0.0006138f,-0.00477f,-0.00491625f,0.00677133f,-0.00470925f,-0.00060525f,0.00025947f,0.0081945f,-0.0005985f,0.00000279f,-0.00715275f});
  }
}
private class MFInt32449 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1});
  }
}
private class MFInt32450 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1});
  }
}
private class MFVec2f451 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f,0.0345f,0.7525f,0.0502f,0.7571f,0.0508f,0.7729f,0.0334f,0.7734f,0.0512f,0.7924f,0.0508f,0.791f,0.0281f,0.9531f,0.2644f,0.9665f,0.2386f,0.9827f,0.2362f,0.9706f,0.2558f,0.9479f,0.2423f,0.7736f,0.0553f,0.7595f,0.0549f,0.7559f,0.0544f,0.7596f,0.0549f,0.7736f,0.0553f,0.7721f,0.0268f,0.7644f,0.0276f,0.7723f,0.0268f,0.7938f,0.0298f,0.795f,0.0487f,0.9457f,0.2448f,0.9501f,0.2632f,0.7926f,0.0543f,0.7926f,0.0544f,0.7903f,0.0215f,0.7903f,0.0215f,0.9803f,0.2531f,0.9874f,0.236f,0.9479f,0.2423f,0.9532f,0.2644f,0.9832f,0.2324f,0.9795f,0.2325f,0.9656f,0.2346f,0.9721f,0.2624f,0.9795f,0.2602f,0.9719f,0.2625f,0.9502f,0.2632f,0.9457f,0.2447f,0.9471f,0.2389f,0.9471f,0.2388f,0.9551f,0.2707f,0.955f,0.2707f});
  }
}
private class MFVec3f452 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01703925f,-0.02329092f,-0.00188325f,-0.010269f,-0.02085804f,-0.0120735f,-0.01363275f,-0.02327418f,-0.00188775f,0.0018045f,-0.01964718f,-0.0151245f,0.0130365f,-0.0209529f,-0.01204875f,-0.00967275f,-0.00093744f,-0.0015885f,0.0019215f,-0.00045756f,-0.00821025f,0.01387125f,-0.00092907f,-0.00157725f,0.01622925f,0.00377208f,0.0133335f,0.01787175f,-0.02481705f,0.0135045f,-0.01458f,-0.02475009f,0.01350225f,-0.0132795f,0.00376929f,0.01336275f,0.01436625f,-0.029295f,0.01342125f,0.01372725f,-0.0283743f,-0.001989f,0.010278f,-0.02640177f,-0.01068075f,0.001629f,-0.02527461f,-0.013032f,-0.00755325f,-0.02634318f,-0.0106065f,-0.01043325f,-0.0283743f,-0.00197325f,-0.0119115f,-0.0292392f,0.013419f,-0.009216f,0.01206117f,0.014769f,-0.0067185f,0.00752742f,-0.00027f,0.00175275f,0.00794313f,-0.00505575f,0.0108045f,0.0075051f,-0.0001485f,0.01245375f,0.01207791f,0.0147465f,0.01414125f,0.00136989f,0.0151065f,0.01551375f,-0.02252367f,0.015102f,-0.0131355f,-0.02246508f,0.01509975f,-0.01124325f,0.0013671f,0.0151335f});
  }
}
private class MFInt32453 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1});
  }
}
private class MFInt32454 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1});
  }
}
private class MFVec2f455 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f,0.1016f,0.7938f,0.0824f,0.7694f,0.0827f,0.766f,0.1014f,0.7924f,0.0508f,0.7734f,0.0512f,0.7938f,0.0824f,0.7939f,0.1016f,0.766f,0.1015f,0.965f,0.2069f,0.7734f,0.0512f,0.7924f,0.0507f,0.7909f,0.1057f,0.7677f,0.1056f,0.7677f,0.1057f,0.7909f,0.1057f,0.9517f,0.2441f,0.7765f,0.0488f,0.7765f,0.0488f,0.789f,0.0484f,0.7643f,0.0825f,0.7643f,0.0824f,0.7614f,0.1009f,0.7614f,0.1009f,0.7991f,0.0823f,0.7971f,0.0505f,0.7971f,0.0505f,0.7991f,0.0824f,0.7688f,0.0511f,0.7688f,0.0511f,0.7994f,0.1003f,0.7994f,0.1003f,0.7625f,0.1038f,0.7625f,0.1038f,0.7972f,0.1034f,0.7972f,0.1034f,0.9479f,0.2423f,0.9665f,0.2385f,0.941f,0.2114f,0.9376f,0.1925f,0.9651f,0.1878f,0.9665f,0.2386f,0.9479f,0.2423f,0.9639f,0.2415f,0.9639f,0.2415f,0.9517f,0.244f,0.9701f,0.2063f,0.9698f,0.1875f,0.9358f,0.2124f,0.9433f,0.2434f,0.9433f,0.2434f,0.9358f,0.2123f,0.9711f,0.2379f,0.9711f,0.2379f});
  }
}
private class MFVec3f456 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01507725f,-0.0309411f,-0.0085725f,-0.0112545f,-0.0309411f,-0.0085725f,0.0131715f,-0.0572787f,-0.008595f,-0.008667f,-0.0573345f,-0.00859275f,0.01703925f,0.00104625f,-0.007704f,-0.01363275f,0.0010602f,-0.00771075f,0.01652625f,-0.0331173f,0.00783675f,-0.0117f,-0.0331173f,0.00783675f,-0.00871425f,-0.0593991f,0.00728775f,0.013734f,-0.0593991f,0.00728775f,0.01787175f,-0.00048267f,0.00768375f,-0.01458f,-0.00041571f,0.0076815f,0.01179675f,-0.0643932f,0.0063f,0.0111825f,-0.0630819f,-0.00747225f,-0.00661275f,-0.0631377f,-0.0074655f,-0.00665325f,-0.0643932f,0.0063f,0.0110115f,-0.0566649f,-0.01058175f,0.01289025f,-0.0304947f,-0.011331f,0.01473075f,0.00171306f,-0.0100215f,-0.011151f,0.00172701f,-0.010026f,-0.009081f,-0.0303831f,-0.0113265f,-0.0065205f,-0.0566649f,-0.0105795f,-0.00511875f,-0.0608499f,-0.010287f,0.00966825f,-0.060822f,-0.01029375f,0.01418625f,-0.0334242f,0.01089675f,0.01173825f,-0.0582273f,0.00936f,0.01019925f,-0.0618822f,0.00866025f,-0.0050985f,-0.0618822f,0.00866025f,-0.00659925f,-0.0582273f,0.00936f,-0.00940725f,-0.0333126f,0.0108945f,-0.012636f,-0.00057195f,0.01044f,0.015399f,-0.00062775f,0.01044225f,0.014211f,0.00374976f,-0.0060705f,0.0146745f,0.00288765f,0.0057825f,-0.01195875f,0.00294903f,0.0057825f,-0.01088775f,0.00375813f,-0.006075f});
  }
}
private class MFInt32457 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
private class MFInt32458 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1});
  }
}
private class MFVec2f459 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f,0.1071f,0.7939f,0.1016f,0.766f,0.1014f,0.7709f,0.1068f,0.9594f,0.1833f,0.766f,0.1015f,0.7939f,0.1016f,0.9426f,0.186f,0.7648f,0.1066f,0.9545f,0.1568f,0.9398f,0.1599f,0.771f,0.1315f,0.7861f,0.131f,0.767f,0.1345f,0.7667f,0.1094f,0.7644f,0.1092f,0.7648f,0.1066f,0.7904f,0.1338f,0.786f,0.139f,0.7863f,0.1397f,0.9402f,0.1559f,0.9531f,0.1532f,0.7709f,0.1396f,0.7709f,0.1403f,0.794f,0.107f,0.7917f,0.1102f,0.794f,0.107f,0.7939f,0.1101f,0.7675f,0.0958f,0.7934f,0.0956f,0.7934f,0.0956f,0.7675f,0.0958f,0.7967f,0.1011f,0.7964f,0.1056f,0.7964f,0.1088f,0.7964f,0.1057f,0.7967f,0.1011f,0.7958f,0.0955f,0.7958f,0.0955f,0.7633f,0.1008f,0.7625f,0.1056f,0.7622f,0.1084f,0.7625f,0.1055f,0.7633f,0.1008f,0.765f,0.0957f,0.765f,0.0957f,0.9651f,0.1878f,0.9376f,0.1925f,0.9583f,0.1554f,0.963f,0.1801f,0.9654f,0.1799f,0.9654f,0.1826f,0.9354f,0.1602f,0.9385f,0.1536f,0.9536f,0.1504f,0.9383f,0.1837f,0.9366f,0.1872f,0.9361f,0.1842f});
  }
}
private class MFVec3f460 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0115605f,-0.03348f,-0.00443925f,0.00747225f,-0.0305226f,-0.004518f,-0.00255825f,-0.0342612f,-0.0071505f,0.0092475f,-0.00110205f,0.00667575f,0.00924975f,0.00012834f,-0.00456525f,-0.010467f,0.00012834f,-0.00456525f,-0.010467f,-0.00110205f,0.00667575f,-0.0012735f,-0.00279f,-0.007389f,-0.00988425f,-0.0382509f,-0.00371925f,0.0038745f,-0.0406503f,-0.00431325f,-0.00988425f,-0.0379719f,0.00528075f,0.0038745f,-0.0402876f,0.006021f,-0.00258075f,-0.0415431f,-0.00430875f,-0.00258075f,-0.0411804f,0.00624375f,-0.0115605f,-0.0331731f,0.00585f,-0.00255825f,-0.0337869f,0.00887625f,-0.0012735f,-0.00523962f,0.008631f,0.00747225f,-0.0302157f,0.00577125f,0.007497f,0.01456938f,-0.0066735f,0.0075015f,0.01287864f,0.008406f,-0.00899325f,0.01287864f,0.008406f,-0.0090765f,0.01456938f,-0.0066735f,0.010575f,0.00749952f,-0.00707625f,0.0111375f,0.00539307f,0.00880875f,0.010647f,0.0057474f,0.00985725f,0.0087525f,0.00011439f,0.009945f,-0.00125325f,-0.00385299f,0.00965475f,-0.0099f,0.00007254f,0.00994725f,-0.010593f,0.00574182f,0.0098595f,-0.00852975f,0.01290096f,0.01015425f,0.00710775f,0.01290096f,0.01015425f,-0.011313f,0.00539307f,0.00880875f,-0.01126575f,0.00745488f,-0.00707175f,-0.01017f,0.00833373f,-0.0082395f,-0.009441f,0.00174654f,-0.008415f,-0.0012465f,-0.00149823f,-0.007839f,0.008352f,0.00182745f,-0.00842175f,0.01010025f,0.00832257f,-0.0082395f,0.0068265f,0.01474515f,-0.0077085f,-0.008253f,0.01474515f,-0.0077085f,0.0092475f,-0.00143127f,0.0090675f,-0.0012735f,-0.00526194f,0.00899775f,-0.010467f,-0.00143127f,0.0090675f,-0.001341f,-0.00274536f,-0.007641f,0.00898425f,0.00035712f,-0.007416f,-0.010467f,0.00035712f,-0.007416f});
  }
}
private class MFInt32461 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFInt32462 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFVec2f463 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f,0.1599f,0.7904f,0.1338f,0.7888f,0.1598f,0.9363f,0.1341f,0.7861f,0.131f,0.7859f,0.138f,0.9502f,0.1313f,0.9545f,0.1568f,0.7712f,0.1385f,0.7707f,0.1575f,0.7854f,0.1571f,0.771f,0.1315f,0.767f,0.1345f,0.7676f,0.1604f,0.786f,0.1292f,0.7713f,0.1297f,0.786f,0.129f,0.7713f,0.1294f,0.7847f,0.165f,0.7849f,0.1652f,0.9369f,0.1301f,0.9483f,0.1278f,0.7712f,0.1654f,0.7712f,0.1661f,0.9354f,0.1602f,0.9325f,0.1343f,0.9583f,0.1554f,0.9533f,0.1301f,0.9406f,0.1642f,0.9551f,0.1612f,0.9355f,0.1283f,0.9488f,0.1251f});
  }
}
private class MFVec3f464 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00185175f,-0.0327267f,-0.006714f,-0.0095265f,-0.0319455f,0.0052425f,0.00663525f,-0.0287649f,0.0053505f,0.00864675f,-0.00507222f,0.005166f,0.00864675f,-0.00534285f,-0.0049185f,-0.009576f,0.00046872f,-0.0052335f,0.00945675f,0.00344007f,-0.00531f,-0.009576f,0.00077841f,0.00505575f,0.00945675f,0.00374976f,0.004977f,-0.0054315f,0.00599292f,-0.005238f,-0.0054315f,0.00626355f,0.0048465f,0.00396225f,0.00596502f,0.0048555f,0.00396225f,0.00569439f,-0.005229f,-0.00057375f,-0.00031806f,-0.00794475f,-0.00057375f,0.00016461f,0.00808425f,-0.00186075f,-0.0323919f,0.00781875f,0.0038295f,-0.0387252f,0.00519975f,-0.001674f,-0.03906f,0.0053505f,-0.00951975f,-0.0321687f,-0.00446175f,-0.007983f,-0.0367164f,0.00452925f,-0.0079785f,-0.0368838f,-0.00348525f,0.006642f,-0.029016f,-0.00473175f,0.00383625f,-0.0389205f,-0.00400275f,-0.001647f,-0.0399807f,-0.003996f});
  }
}
private class MFInt32465 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFInt32466 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFVec2f467 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f,0.163f,0.7888f,0.1598f,0.7854f,0.1571f,0.7707f,0.1575f,0.7676f,0.1604f,0.7706f,0.1634f,0.7714f,0.1739f,0.7841f,0.1736f,0.787f,0.1731f,0.9344f,0.121f,0.9363f,0.1341f,0.9479f,0.1182f,0.9502f,0.1313f,0.7684f,0.1736f,0.7774f,0.1846f,0.7801f,0.1842f,0.7824f,0.1828f,0.7844f,0.1829f,0.9351f,0.111f,0.9443f,0.1091f,0.9372f,0.109f,0.9418f,0.1081f,0.7705f,0.1833f,0.7725f,0.1831f,0.781f,0.1849f,0.7774f,0.1856f,0.7748f,0.1843f,0.774f,0.1852f,0.9395f,0.1081f,0.7849f,0.1552f,0.7712f,0.1555f,0.7849f,0.1549f,0.7712f,0.1553f,0.9325f,0.1343f,0.9533f,0.1301f,0.9319f,0.1209f,0.9502f,0.1172f,0.9329f,0.1108f,0.9464f,0.108f,0.9358f,0.1082f,0.9393f,0.1069f,0.9427f,0.1067f,0.9372f,0.1384f,0.9506f,0.1357f});
  }
}
private class MFVec3f468 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0071235f,-0.00399807f,0.00467775f,0.00713025f,-0.00423801f,-0.00540675f,0.0054945f,-0.01448847f,0.004374f,0.005499f,-0.01470051f,-0.00488475f,-0.00793575f,-0.01356219f,0.0047475f,-0.00179775f,-0.01408392f,0.006525f,-0.007929f,-0.01379376f,-0.00531f,-0.00178875f,-0.0143964f,-0.00709875f,0.00306225f,-0.02276082f,0.0038295f,0.00306675f,-0.02294217f,-0.004104f,-0.0079785f,-0.02227536f,0.0037125f,-0.00263025f,-0.02303424f,0.0054765f,-0.007974f,-0.02244834f,-0.00388575f,-0.00262125f,-0.02329092f,-0.00569925f,0.00379575f,-0.0251937f,-0.0000945f,-0.0071595f,-0.02519091f,-0.00010125f,-0.002646f,-0.02686212f,-0.000054f,0.003699f,-0.02464686f,0.00208575f,-0.0072495f,-0.02464686f,-0.00195525f,-0.002358f,-0.02596095f,0.00283275f,0.0037035f,-0.02478078f,-0.00217575f,-0.007254f,-0.02453526f,0.001827f,-0.002349f,-0.02622879f,-0.00278325f,-0.0085005f,0.00021204f,0.004374f,0.007668f,0.0031527f,-0.005598f,0.00766125f,0.00338985f,0.00448425f,0.002979f,0.00574461f,0.0040545f,0.00298575f,0.0055242f,-0.00528525f,-0.00508725f,0.00581436f,0.00404775f,-0.00849375f,-0.00001674f,-0.005328f,-0.0050805f,0.00559395f,-0.00529425f,-0.00078975f,-0.00022599f,0.006948f,-0.00078075f,-0.00056916f,-0.00758025f});
  }
}
private class MFInt32469 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1});
  }
}
private class MFInt32470 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1});
  }
}
private class MFVec2f471 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f,0.1014f,0.7694f,0.0827f,0.748f,0.0813f,0.7455f,0.0995f,0.7415f,0.0989f,0.7435f,0.0798f,0.9864f,0.2045f,0.7455f,0.0995f,0.7734f,0.0512f,0.7571f,0.0508f,0.7525f,0.0502f,0.9827f,0.2362f,0.9665f,0.2386f,0.7694f,0.0827f,0.766f,0.1015f,0.774f,0.0829f,0.9619f,0.2395f,0.7782f,0.0512f,0.774f,0.083f,0.7619f,0.1052f,0.7474f,0.1039f,0.7446f,0.1034f,0.7473f,0.1038f,0.7619f,0.1052f,0.9712f,0.2404f,0.9799f,0.239f,0.7566f,0.0479f,0.7602f,0.0485f,0.7691f,0.0486f,0.771f,0.1015f,0.771f,0.1014f,0.768f,0.1042f,0.768f,0.1042f,0.9897f,0.1861f,0.991f,0.2053f,0.9856f,0.1862f,0.9665f,0.2385f,0.9874f,0.236f,0.965f,0.2069f,0.9651f,0.1878f,0.9604f,0.2075f,0.9619f,0.2395f,0.9604f,0.2074f,0.9836f,0.239f,0.98f,0.239f,0.9712f,0.2404f});
  }
}
private class MFVec3f472 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01223325f,-0.0311085f,-0.008721f,-0.0102915f,-0.0311085f,-0.00871875f,0.00087975f,-0.0294345f,-0.01209375f,0.01125675f,-0.0567765f,-0.00950625f,-0.008946f,-0.0567765f,-0.00950625f,0.0004365f,-0.056079f,-0.0124245f,-0.0108135f,0.00080631f,-0.0050265f,0.00125775f,0.00201996f,-0.0080775f,0.01248975f,0.00071424f,-0.005004f,0.0145305f,-0.0335916f,0.00429525f,-0.01180125f,-0.0335916f,0.00429525f,0.01262475f,-0.0599571f,0.00427275f,-0.00921375f,-0.059985f,0.004275f,0.0164925f,-0.00162378f,0.00516375f,-0.0141795f,-0.00160704f,0.005157f,0.009108f,-0.0652581f,0.00268875f,0.007461f,-0.0620775f,-0.0071415f,0.000468f,-0.0615195f,-0.009207f,-0.00587475f,-0.0620496f,-0.0072405f,-0.006066f,-0.065286f,0.0026955f,0.0123435f,-0.034038f,0.00738225f,0.0104805f,-0.0599292f,0.006381f,0.00789525f,-0.0638631f,0.00577575f,-0.00478575f,-0.063891f,0.0057825f,-0.0070785f,-0.059985f,0.0063675f,-0.00962775f,-0.0339264f,0.00738675f,-0.01169775f,-0.00201717f,0.0075105f,0.014184f,-0.00203112f,0.007515f,-0.00985725f,0.00215109f,0.0031275f,-0.008055f,0.00334521f,-0.002682f,0.00126675f,0.00445563f,-0.00513225f,0.0099315f,0.00328941f,-0.002781f,0.012114f,0.00215388f,0.003132f});
  }
}
private class MFInt32473 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1});
  }
}
private class MFInt32474 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1});
  }
}
private class MFVec2f475 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f,0.1276f,0.7543f,0.1247f,0.753f,0.131f,0.7531f,0.1316f,0.9854f,0.1598f,0.9725f,0.1615f,0.9734f,0.1584f,0.9844f,0.1569f,0.7413f,0.123f,0.7403f,0.1293f,0.7378f,0.1249f,0.7401f,0.1299f,0.7405f,0.104f,0.7443f,0.1047f,0.9859f,0.1809f,0.7455f,0.0995f,0.766f,0.1015f,0.9713f,0.1822f,0.7589f,0.1059f,0.7648f,0.1066f,0.766f,0.1014f,0.7622f,0.1091f,0.7648f,0.1066f,0.7644f,0.1092f,0.7455f,0.0995f,0.7415f,0.0989f,0.7664f,0.0954f,0.7667f,0.0954f,0.7485f,0.0932f,0.7449f,0.0928f,0.7484f,0.0932f,0.7683f,0.1016f,0.7686f,0.0957f,0.7683f,0.0956f,0.7679f,0.1015f,0.7671f,0.1055f,0.7666f,0.1084f,0.7674f,0.1056f,0.9687f,0.1615f,0.9723f,0.1564f,0.9888f,0.1589f,0.9852f,0.1547f,0.9898f,0.1809f,0.9856f,0.1862f,0.9651f,0.1878f,0.9675f,0.1796f,0.9654f,0.1826f,0.9654f,0.1799f,0.9897f,0.1861f});
  }
}
private class MFVec3f476 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0104445f,-0.02091105f,-0.004455f,0.007317f,-0.01845306f,-0.00481275f,-0.00275625f,-0.02134908f,-0.007074f,-0.00859275f,-0.02466918f,-0.0038565f,0.00388125f,-0.02652174f,-0.004518f,-0.00858375f,-0.02485332f,0.003825f,0.003897f,-0.02675889f,0.00441f,-0.002727f,-0.02718576f,-0.004554f,-0.002727f,-0.02733921f,0.003879f,-0.0104355f,-0.02115657f,0.0046215f,-0.00221625f,-0.02182896f,0.0074745f,0.00732825f,-0.01860093f,0.004689f,0.0087435f,-0.00426033f,0.005778f,0.008559f,-0.00094023f,-0.005013f,-0.00999225f,-0.00094023f,-0.005013f,-0.01005075f,-0.00426033f,0.005778f,-0.001062f,-0.0079515f,0.0077445f,-0.001269f,-0.00012555f,-0.00780975f,0.007308f,0.00969804f,0.00842625f,0.0057915f,0.01270845f,-0.003339f,-0.00170775f,0.01322739f,-0.00582075f,-0.00880875f,0.01269729f,-0.00321075f,-0.0088875f,0.00966456f,0.0085545f,0.00955125f,0.0054126f,-0.00523575f,-0.001269f,0.00610452f,-0.008154f,-0.0106515f,0.0054126f,-0.00523575f,-0.01091925f,0.00219015f,0.0085455f,-0.0102015f,0.00280953f,0.009675f,-0.00956025f,-0.00388089f,0.00918675f,-0.0008145f,-0.00684945f,0.00838125f,0.00812025f,-0.00380277f,0.00921825f,0.00986625f,0.00287649f,0.0095355f,0.0067455f,0.00951111f,0.00929925f,-0.00817425f,0.00948042f,0.0094185f,0.01091925f,0.002232f,0.008541f,-0.0009945f,-0.00801009f,0.00797625f,0.0093285f,-0.00490761f,0.008199f,-0.0101205f,-0.00490761f,0.008199f});
  }
}
private class MFInt32477 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFInt32478 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFVec2f479 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f,0.1615f,0.7578f,0.1276f,0.7541f,0.1444f,0.9727f,0.1441f,0.7543f,0.1247f,0.7533f,0.1302f,0.9851f,0.1424f,0.9854f,0.1598f,0.7404f,0.1285f,0.7384f,0.1404f,0.7513f,0.1418f,0.7413f,0.123f,0.7378f,0.1249f,0.7355f,0.1424f,0.7545f,0.1231f,0.7416f,0.1216f,0.7546f,0.1229f,0.7417f,0.1214f,0.7496f,0.1479f,0.7498f,0.1481f,0.9738f,0.1409f,0.9839f,0.1396f,0.738f,0.1467f,0.7381f,0.1469f,0.9687f,0.1616f,0.9694f,0.1441f,0.9888f,0.1589f,0.988f,0.1416f,0.9725f,0.165f,0.9854f,0.1633f,0.9728f,0.1395f,0.9846f,0.1375f});
  }
}
private class MFVec3f480 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.00166725f,-0.02316258f,-0.00654525f,-0.00914625f,-0.02214702f,0.0047385f,0.006417f,-0.01999314f,0.00484875f,0.008352f,-0.00421569f,0.00459225f,0.008334f,-0.00397296f,-0.00448425f,-0.008775f,0.00038781f,-0.004356f,0.00898875f,0.0028458f,-0.00471825f,-0.008766f,0.00014229f,0.0047205f,0.00899775f,0.00269793f,0.00478575f,-0.00498375f,0.00458397f,-0.00465975f,-0.00497475f,0.0044361f,0.004842f,0.00340425f,0.0040176f,0.00483525f,0.00339525f,0.00416268f,-0.0046665f,-0.0010845f,-0.00005022f,-0.006975f,-0.00054675f,-0.00053289f,0.00757575f,-0.00166725f,-0.02261853f,0.00724275f,0.00432675f,-0.02781072f,0.0046845f,0.0011115f,-0.0283464f,0.004833f,-0.00914625f,-0.02250972f,-0.00435375f,-0.00794925f,-0.02591352f,0.00403875f,-0.00748125f,-0.02615904f,-0.00331425f,0.00644625f,-0.02036979f,-0.00461025f,0.0043515f,-0.0281232f,-0.00382275f,0.00117675f,-0.0285417f,-0.003816f});
  }
}
private class MFInt32481 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFInt32482 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFVec2f483 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f,0.1465f,0.7541f,0.1444f,0.7513f,0.1418f,0.7384f,0.1404f,0.7355f,0.1424f,0.7377f,0.1451f,0.7372f,0.1554f,0.7483f,0.1563f,0.7507f,0.1564f,0.9726f,0.1318f,0.9727f,0.1441f,0.9847f,0.1302f,0.9851f,0.1424f,0.7347f,0.1548f,0.7409f,0.1641f,0.7434f,0.1641f,0.7455f,0.1632f,0.7469f,0.164f,0.9746f,0.124f,0.9828f,0.1229f,0.9766f,0.1225f,0.9807f,0.1219f,0.7351f,0.1625f,0.7369f,0.1626f,0.7443f,0.165f,0.7408f,0.1649f,0.7387f,0.1637f,0.7379f,0.1643f,0.9788f,0.1219f,0.7512f,0.1402f,0.7392f,0.1389f,0.7512f,0.14f,0.7393f,0.1388f,0.9694f,0.1441f,0.988f,0.1416f,0.9705f,0.1317f,0.9868f,0.1295f,0.9727f,0.1237f,0.9848f,0.1221f,0.9756f,0.1218f,0.9787f,0.1209f,0.9817f,0.1209f,0.973f,0.1475f,0.9849f,0.146f});
  }
}
private class MFVec3f484 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0071145f,-0.0026784f,0.00483525f,0.00713925f,-0.00302436f,-0.0045315f,0.00645525f,-0.01332783f,0.004635f,0.00650925f,-0.01365705f,-0.0041445f,-0.00801f,-0.01377423f,0.0049905f,-0.0009765f,-0.01360683f,0.0066735f,-0.0079515f,-0.01413135f,-0.00454725f,-0.00089775f,-0.01409508f,-0.00624375f,0.00529425f,-0.02153043f,0.00422775f,0.00535275f,-0.02182059f,-0.00346275f,-0.0081945f,-0.02243718f,0.0041175f,-0.001575f,-0.0223479f,0.00582525f,-0.008136f,-0.02271339f,-0.00324675f,-0.0014895f,-0.02275245f,-0.0050085f,0.0058095f,-0.02339694f,0.00042075f,-0.00675675f,-0.02466639f,0.000414f,-0.001116f,-0.02541411f,0.00045675f,0.00560925f,-0.02294496f,0.0025335f,-0.0069345f,-0.02429253f,-0.0013815f,-0.00085725f,-0.02462733f,0.003258f,0.0056475f,-0.0231291f,-0.00159525f,-0.006966f,-0.02413629f,0.00228375f,-0.00079425f,-0.02493981f,-0.002187f,-0.008235f,0.00095697f,0.00454725f,0.00735525f,0.00273978f,-0.00480375f,0.007326f,0.00311364f,0.0046575f,0.00265275f,0.00501642f,0.0042435f,0.00265275f,0.00466767f,-0.0044955f,-0.00517725f,0.00525078f,0.00423675f,-0.008235f,0.00059427f,-0.004545f,-0.00517725f,0.00490203f,-0.00450225f,-0.00072f,0.00049104f,0.00704925f,-0.00072f,-0.00005301f,-0.0067365f});
  }
}
private class MFInt32485 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
private class MFInt32486 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
private class MFVec2f487 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
private class MFVec3f488 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.112275f,0.0029016f,-0.019449f,-0.1141425f,0.01393047f,0.0010575f,-0.105885f,0.00472905f,0.026955f,-0.1041975f,-0.0507501f,0.02484f,-0.103185f,-0.0459792f,-0.002808f,-0.07596f,0.01083636f,0.0398475f,-0.0875475f,0.0275931f,-0.00120825f,-0.0943425f,-0.069471f,-0.01285425f,-0.09873f,-0.069471f,0.0321525f,-0.0846225f,0.00903402f,-0.03807f,0.00278325f,0.01761048f,-0.00423675f,0.00278325f,0.00838953f,-0.0212085f,0.00278325f,-0.0395622f,-0.00579825f,0.00278325f,-0.0388368f,0.014094f,0.00278325f,0.00721494f,0.01840275f});
  }
}
private class MFInt32489 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
  }
}
private class MFInt32490 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
  }
}
private class MFVec2f491 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
private class MFVec3f492 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0435375f,0.0409014f,-0.002097f,-0.0340875f,0.01811268f,-0.03897f,-0.034515f,0.01982295f,0.0364275f,0.0085095f,0.0317781f,0.03897f,-0.0030915f,0.048546f,-0.002097f,-0.000171f,0.0299646f,-0.0389475f,-0.01876725f,-0.0438588f,0.031275f,-0.00987975f,-0.048546f,-0.01374525f,-0.01861875f,-0.044082f,-0.0137205f,-0.0142695f,-0.048546f,0.0312525f,0.0278325f,0.0392553f,-0.001602f,0.0348075f,0.02375685f,-0.025695f,0.01693125f,-0.0447237f,-0.010674f,0.01689975f,-0.0445005f,0.0261f,0.033975f,0.0288486f,0.02916f,0.035775f,-0.00051615f,0.00303975f});
  }
}
private class MFInt32493 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1});
  }
}
private class MFInt32494 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
private class MFVec2f495 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.9467f,0.4943f,0.9572f,0.4943f,0.9099f,0.4943f,0.9193f,0.4943f,0.9332f,0.4943f,0.9567f,0.4691f,0.9455f,0.4691f,0.9105f,0.4691f,0.9205f,0.4691f,0.9332f,0.4691f,0.9567f,0.4913f,0.9458f,0.4913f,0.9102f,0.4913f,0.9203f,0.4913f,0.9334f,0.4913f,0.8898f,0.4943f,0.9003f,0.4943f,0.8997f,0.4691f,0.8997f,0.4691f,0.8998f,0.4913f,0.8998f,0.4913f,0.9003f,0.4943f,0.3481f,0.2114f,0.9448f,0.4374f,0.9561f,0.4374f,0.8991f,0.4374f,0.9117f,0.4374f,0.9198f,0.4374f,0.9341f,0.4374f});
  }
}
private class MFVec3f496 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.02619f,0.0492993f,-0.0378f,-0.0522f,0.0489924f,0.00075825f,-0.0235575f,0.0493272f,0.0374175f,0.0201375f,0.0498015f,0.021501f,0.01851525f,0.0497736f,-0.024975f,-0.031095f,0.01394163f,-0.051975f,-0.067005f,0.01354545f,0.0012825f,-0.0274725f,0.01398069f,0.0519075f,0.032895f,0.0146475f,0.029925f,0.030645f,0.01462239f,-0.0342675f,-0.0306f,-0.0561906f,-0.051975f,-0.06651f,-0.0565812f,0.0012825f,-0.026955f,-0.0561348f,0.0519075f,0.03339f,-0.0554652f,0.029925f,0.03114f,-0.0554931f,-0.0342675f,-0.031455f,-0.0861831f,-0.054945f,-0.0694575f,-0.0866016f,0.00139275f,-0.02763f,-0.0861273f,0.054945f,0.036225f,-0.0854298f,0.0317025f,0.0338625f,-0.0854577f,-0.036225f,-0.01990125f,-0.0345402f,-0.0436275f,-0.0473625f,-0.0348192f,-0.01022175f,-0.0331425f,-0.0346797f,0.0366525f,0.00309375f,-0.0342891f,0.03222f,0.01127475f,-0.0341775f,-0.0174015f,-0.02031075f,-0.1965555f,-0.0353025f,-0.048825f,-0.1968624f,-0.008505f,-0.034065f,-0.1967229f,0.0290925f,0.003573f,-0.1963044f,0.0255375f,0.01207125f,-0.1961928f,-0.014265f,-0.0203985f,-0.30969f,-0.0339975f,-0.0478575f,-0.309969f,-0.00821475f,-0.0336375f,-0.30969f,0.0279675f,0.0025965f,-0.309411f,0.0245475f,0.01077975f,-0.309132f,-0.01375875f,-0.01917f,-0.325035f,-0.02021625f,-0.0352575f,-0.325035f,-0.00510075f,-0.0269325f,-0.325035f,0.01611f,-0.00569475f,-0.324756f,0.014103f,-0.00089775f,-0.324756f,-0.00834975f,-0.01990125f,-0.0345402f,-0.0436275f,-0.0473625f,-0.0348192f,-0.01022175f,-0.0331425f,-0.0346797f,0.0366525f,0.00309375f,-0.0342891f,0.03222f,0.01127475f,-0.0341775f,-0.0174015f});
  }
}
private class MFInt32497 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1});
  }
}
private class MFInt32498 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
private class MFVec2f499 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f,0.572f,0.9344f,0.572f,0.9377f,0.5719f,0.8909f,0.5718f,0.8588f,0.5719f,0.8849f,0.5578f,0.8418f,0.558f,0.9588f,0.5579f,0.9536f,0.5581f,0.8765f,0.5581f,0.885f,0.5257f,0.8424f,0.5258f,0.9582f,0.5328f,0.9531f,0.533f,0.8768f,0.526f,0.8957f,0.4625f,0.8485f,0.4627f,0.9546f,0.4626f,0.9498f,0.4628f,0.8879f,0.4628f,0.8953f,0.4552f,0.8684f,0.4551f,0.9006f,0.455f,0.9378f,0.4551f,0.9345f,0.4552f});
  }
}
private class MFVec3f500 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0048375f,0.00850113f,-0.02592f,-0.0259875f,0.00827514f,-0.005823f,-0.01394775f,0.00840627f,0.0234f,0.01463625f,0.00871038f,0.02135475f,0.020268f,0.00876897f,-0.0091215f,-0.0032445f,-0.02356992f,-0.0365625f,-0.03312f,-0.02388519f,-0.00960975f,-0.016119f,-0.02370384f,0.0365625f,0.0242775f,-0.02327418f,0.033345f,0.0322425f,-0.02319048f,-0.014823f,-0.002988f,-0.09765f,-0.0361575f,-0.0348975f,-0.0980127f,-0.00950625f,-0.0175725f,-0.0816075f,0.036225f,0.02556f,-0.0811611f,0.03303f,0.0348975f,-0.0972594f,-0.01466775f,-0.001332f,-0.2430927f,-0.0323325f,-0.0245925f,-0.2433438f,-0.00287775f,-0.01135575f,-0.2431764f,0.033975f,0.020097f,-0.2428416f,0.0309825f,0.0263025f,-0.2427858f,-0.007713f,-0.000207f,-0.2604744f,-0.01992375f,-0.0160965f,-0.2606418f,0.000189f,-0.00705375f,-0.2605581f,0.0234675f,0.014427f,-0.2603349f,0.02141775f,0.018657f,-0.2602791f,-0.00311175f});
  }
}
private class MFInt32501 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1});
  }
}
private class MFInt32502 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1});
  }
}
private class MFVec2f503 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f,0.0334f,0.7695f,0.0151f,0.7598f,0.0161f,0.7624f,0.0345f,0.791f,0.0281f,0.7896f,0.0131f,0.8111f,0.0113f,0.813f,0.0266f,0.8476f,0.0256f,0.8461f,0.0079f,0.8312f,0.0091f,0.8327f,0.0273f,0.9162f,0.2899f,0.8453f,0.0081f,0.8466f,0.0257f,0.9122f,0.2724f,0.9531f,0.2644f,0.9573f,0.2786f,0.936f,0.2844f,0.9315f,0.2698f,0.9706f,0.2558f,0.9766f,0.2733f,0.8032f,0.0047f,0.8134f,0.033f,0.8325f,0.0338f,0.792f,0.0345f,0.7756f,0.0396f,0.7675f,0.0404f,0.9666f,0.2503f,0.9509f,0.2584f,0.9297f,0.2636f,0.9113f,0.266f,0.8439f,0.0324f,0.8447f,0.0323f,0.8081f,0.0397f,0.986f,0.2708f,0.9803f,0.2531f,0.9032f,0.2936f,0.8989f,0.2764f,0.9452f,0.2896f,0.9743f,0.2482f,0.9004f,0.2693f,0.9343f,0.2559f});
  }
}
private class MFVec3f504 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0016155f,0.00308295f,-0.022725f,-0.011493f,0.00269235f,-0.017775f,-0.015318f,0.00292671f,-0.00477f,-0.01231875f,0.00337311f,0.0161505f,-0.0067005f,0.00329778f,0.024795f,0.01340775f,0.00296019f,0.016515f,0.0151065f,0.00256122f,-0.00487575f,0.00989775f,0.00244404f,-0.017559f,-0.00843525f,-0.02203821f,0.0299925f,0.01052325f,-0.02369268f,-0.0223065f,-0.01468575f,-0.01951605f,0.0073305f,-0.001071f,-0.0232128f,-0.028935f,-0.013023f,-0.02368431f,-0.02229525f,-0.01537875f,-0.01898316f,-0.0073845f,0.01412775f,-0.01898595f,-0.007353f,0.01428975f,-0.01951326f,0.00753525f,-0.01211625f,-0.02258784f,0.01932075f,-0.01512225f,0.00286254f,0.0051885f,0.015111f,0.00275931f,0.005364f,0.01283625f,-0.02259063f,0.01934775f,0.00675f,0.00316665f,0.0243225f,0.00722475f,-0.02205495f,0.0292275f,-0.0013365f,0.00902007f,-0.0001935f,-0.00911475f,-0.03069f,0.01872675f,-0.011592f,-0.02759868f,0.007245f,-0.012267f,-0.02705742f,-0.00858375f,-0.01013175f,-0.0317223f,-0.0231075f,-0.00089775f,-0.0318339f,-0.02673f,0.00777375f,-0.0317223f,-0.0232425f,0.0110385f,-0.02706021f,-0.00841725f,0.01119825f,-0.0275931f,0.0076725f,0.011043f,-0.03069f,0.01880775f,0.00537075f,-0.0301878f,0.0269325f,-0.00410175f,-0.0301878f,0.0275175f,0.00087975f,-0.0354051f,-0.00165375f});
  }
}
private class MFInt32505 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1});
  }
}
private class MFInt32506 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1});
  }
}
private class MFVec2f507 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f,0.0273f,0.8381f,0.0441f,0.8625f,0.0344f,0.8476f,0.0256f,0.8625f,0.0359f,0.8466f,0.0257f,0.9122f,0.2724f,0.904f,0.2568f,0.8948f,0.2599f,0.8401f,0.0478f,0.8395f,0.0482f,0.8319f,0.0206f,0.9141f,0.2788f,0.844f,0.0192f,0.8432f,0.0193f,0.8491f,0.0466f,0.8611f,0.0409f,0.8611f,0.0397f,0.8814f,0.2691f,0.8989f,0.2764f,0.9014f,0.2535f,0.9142f,0.2789f,0.9026f,0.2823f,0.9033f,0.2821f,0.8928f,0.2563f,0.8819f,0.264f,0.8327f,0.0273f,0.8381f,0.0441f,0.8395f,0.0482f,0.8401f,0.0478f,0.904f,0.2568f,0.9122f,0.2724f,0.9141f,0.2788f,0.9142f,0.2789f});
  }
}
private class MFVec3f508 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01586925f,-0.02176758f,-0.00224325f,0.01437525f,-0.02176758f,-0.00224325f,0.00897525f,-0.01387746f,0.01370925f,-0.01008675f,-0.01390257f,0.01526625f,0.0114525f,-0.01688229f,0.00834975f,-0.00909675f,0.00038781f,0.00564525f,-0.01278f,-0.00016182f,-0.00502875f,0.01217475f,-0.00016461f,-0.005004f,0.00656325f,0.00037107f,0.0048735f,0.01093275f,-0.02663892f,-0.001044f,0.01162125f,-0.02607534f,0.00540675f,0.00783675f,-0.02060136f,0.0134685f,-0.0081225f,-0.01845027f,0.01497825f,-0.0127575f,-0.02699604f,-0.00153f,-0.0095985f,0.00834489f,-0.0062325f,-0.0046575f,0.0087327f,0.0024255f,0.00458325f,0.00872433f,0.001854f,0.01017675f,0.00828909f,-0.00615375f,-0.01148175f,-0.00098208f,-0.00670275f,-0.01444275f,-0.02169504f,-0.004041f,-0.0120735f,-0.02567637f,-0.00350325f,0.01030725f,-0.0253332f,-0.0030195f,0.01297125f,-0.02158902f,-0.0040635f,0.01085625f,-0.00082584f,-0.006705f,0.00916875f,0.00631935f,-0.0076725f,-0.00873225f,0.00636957f,-0.00774675f});
  }
}
private class MFInt32509 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1});
  }
}
private class MFInt32510 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1});
  }
}
private class MFVec2f511 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f,0.0483f,0.8625f,0.0359f,0.8625f,0.0344f,0.8786f,0.0507f,0.8948f,0.2599f,0.867f,0.0598f,0.857f,0.0621f,0.8381f,0.0441f,0.8533f,0.0697f,0.8381f,0.0441f,0.8503f,0.0646f,0.8419f,0.0407f,0.8588f,0.0334f,0.8588f,0.0347f,0.8467f,0.0405f,0.8415f,0.0402f,0.8445f,0.0658f,0.8331f,0.0451f,0.8331f,0.0451f,0.8468f,0.0705f,0.8593f,0.0711f,0.8712f,0.0644f,0.8626f,0.068f,0.8607f,0.0696f,0.877f,0.0609f,0.8798f,0.0581f,0.8632f,0.2548f,0.8814f,0.2691f,0.8729f,0.2464f,0.8847f,0.2342f,0.904f,0.2568f,0.8853f,0.2697f,0.8962f,0.2618f,0.9014f,0.2613f,0.9088f,0.2549f,0.8909f,0.2323f});
  }
}
private class MFVec3f512 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01293975f,-0.02265201f,0.00839025f,0.006795f,-0.01713339f,0.01449675f,-0.0085815f,-0.01398069f,0.0167355f,-0.01611f,-0.02522439f,0.00355725f,0.008235f,-0.0347355f,-0.00188775f,-0.0184185f,-0.02781072f,-0.000648f,-0.0166455f,-0.00499968f,-0.00890775f,0.01359675f,-0.00499968f,-0.00890775f,0.008199f,0.00289044f,0.007047f,-0.01086525f,0.00286533f,0.00860175f,0.010674f,-0.00011439f,0.00168525f,-0.008397f,-0.0328941f,0.0067545f,-0.00794475f,-0.0347076f,0.00502425f,0.00550125f,-0.0366606f,0.00279f,0.01017f,-0.0328941f,0.0083385f,0.004734f,-0.0266445f,0.0148005f,-0.0046485f,-0.02322675f,0.01786725f,0.009504f,-0.00701127f,-0.01224675f,0.00543825f,-0.0354609f,-0.00625725f,-0.013743f,-0.0293508f,-0.0057465f,-0.013131f,-0.00701685f,-0.0122535f,0.0088245f,0.00230733f,-0.00043875f,0.0113625f,-0.00046314f,-0.006246f,-0.01161225f,-0.00109089f,-0.0060435f,-0.00845325f,0.00479043f,0.0058095f,0.0040545f,0.00479601f,0.0048375f});
  }
}
private class MFInt32513 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1});
  }
}
private class MFInt32514 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1});
  }
}
private class MFVec2f515 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f,0.0507f,0.857f,0.0621f,0.8601f,0.0649f,0.867f,0.0598f,0.8887f,0.0786f,0.8747f,0.0865f,0.8533f,0.0697f,0.876f,0.0783f,0.893f,0.0688f,0.8992f,0.0702f,0.8819f,0.0483f,0.8561f,0.0728f,0.8736f,0.0851f,0.8532f,0.0697f,0.8503f,0.0646f,0.8986f,0.0785f,0.897f,0.0809f,0.8914f,0.0813f,0.8802f,0.0861f,0.8841f,0.0856f,0.8821f,0.0883f,0.8487f,0.0595f,0.8509f,0.0581f,0.8683f,0.0489f,0.868f,0.0507f,0.8608f,0.0544f,0.8505f,0.0603f,0.8455f,0.0706f,0.8468f,0.073f,0.8455f,0.0707f,0.8437f,0.0676f,0.8416f,0.0639f,0.8422f,0.0648f,0.8729f,0.2464f,0.8482f,0.2317f,0.8612f,0.2211f,0.8847f,0.2342f,0.8433f,0.2381f,0.8632f,0.2548f,0.8814f,0.2316f,0.8625f,0.2222f,0.8799f,0.2506f,0.8891f,0.243f,0.8922f,0.232f});
  }
}
private class MFVec3f516 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01458f,-0.00438588f,-0.004086f,-0.00498375f,-0.01310184f,-0.00838575f,-0.01640925f,-0.00980406f,-0.00848025f,0.01347525f,0.00188046f,-0.001395f,0.0073305f,0.00739908f,0.0047115f,-0.00804375f,0.01055178f,0.00695025f,-0.01557225f,-0.00069192f,-0.006228f,0.0087705f,-0.01020582f,-0.011673f,-0.017883f,-0.00327825f,-0.01043325f,0.0048015f,-0.01718919f,0.0181305f,-0.00697725f,-0.01123812f,0.016614f,-0.0043965f,-0.02342763f,0.02119275f,0.002484f,-0.02675889f,0.0200835f,0.00560925f,-0.0321129f,0.00493425f,0.01149975f,-0.0232128f,0.01413225f,0.0082935f,-0.0273699f,0.01604475f,0.0042705f,-0.0342333f,0.0086175f,-0.01214775f,-0.0222642f,0.0062685f,-0.00909675f,-0.0314433f,0.01244925f,-0.0030285f,-0.0311364f,0.0042795f,-0.00232875f,-0.0349866f,0.01112175f,-0.0098325f,0.00294066f,-0.01287f,-0.00996525f,0.00460908f,-0.01130175f,-0.00364275f,0.01335573f,-0.0003465f,0.004869f,0.0111042f,-0.00157275f,0.0082485f,0.00676296f,-0.0071325f,0.005409f,0.00182466f,-0.0133515f,0.00656775f,-0.01096749f,-0.0170505f,-0.003807f,-0.01408671f,-0.014868f,-0.01329525f,-0.01105398f,-0.0147735f,-0.01437525f,-0.00700569f,-0.015957f,-0.00924975f,-0.00235476f,-0.01803825f,0.00389925f,-0.00357678f,-0.019134f});
  }
}
private class MFInt32517 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1});
  }
}
private class MFInt32518 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1});
  }
}
private class MFVec2f519 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f,0.0865f,0.8887f,0.0786f,0.8299f,0.2203f,0.8424f,0.2111f,0.8736f,0.0851f,0.8939f,0.0989f,0.8978f,0.0975f,0.8834f,0.0852f,0.8992f,0.0766f,0.9092f,0.0888f,0.8992f,0.0702f,0.9115f,0.0859f,0.876f,0.0783f,0.893f,0.0688f,0.9109f,0.102f,0.9135f,0.0996f,0.9144f,0.0973f,0.9172f,0.0962f,0.8241f,0.2146f,0.8338f,0.2074f,0.8247f,0.2116f,0.8291f,0.2083f,0.9028f,0.1054f,0.9046f,0.1032f,0.9153f,0.1012f,0.9125f,0.1038f,0.9081f,0.1033f,0.9082f,0.1057f,0.8266f,0.2097f,0.8885f,0.0681f,0.8723f,0.0776f,0.8843f,0.0701f,0.8696f,0.0781f,0.8612f,0.2211f,0.8482f,0.2317f,0.8625f,0.2222f,0.8417f,0.2109f,0.8433f,0.2381f,0.8245f,0.2237f,0.8192f,0.2167f,0.8322f,0.2071f,0.8195f,0.2131f,0.8224f,0.2103f,0.8256f,0.2083f});
  }
}
private class MFVec3f520 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00750825f,-0.02202984f,-0.0004905f,-0.00900225f,-0.00768924f,-0.00210375f,-0.0001575f,-0.02224746f,-0.00018225f,-0.0040455f,0.00229059f,0.007659f,-0.00209025f,-0.01141389f,0.0130365f,0.00673425f,-0.01106235f,0.01280925f,-0.00259425f,-0.02535831f,0.01358775f,-0.001512f,-0.02337741f,0.01525275f,0.000225f,-0.01981737f,0.01631025f,0.006579f,-0.02045907f,0.016695f,0.011079f,-0.0219015f,0.012411f,0.01197225f,-0.01467819f,0.00819675f,0.0074655f,-0.0288765f,0.00436725f,0.00953325f,-0.02610882f,0.01227825f,0.007515f,-0.0294066f,0.00821475f,0.00087075f,-0.0296019f,0.00527175f,-0.00367425f,-0.02646594f,0.0087165f,-0.006507f,-0.0187767f,0.00446175f,0.004671f,-0.02645199f,0.015561f,0.003159f,-0.0292392f,0.0132435f,-0.00340875f,-0.02630691f,0.011538f,0.00204975f,-0.0307179f,0.01028025f,0.008397f,-0.0281511f,0.01041525f,-0.01053f,0.00105462f,-0.0076095f,-0.0053595f,0.0120807f,0.002736f,0.000477f,0.01265544f,-0.0005805f,-0.0050715f,0.00181908f,-0.01039275f,0.0098235f,0.00995751f,-0.0035595f,0.0131175f,0.00010602f,0.00025425f,0.007227f,-0.00880524f,-0.00894375f,0.004275f,-0.00087885f,-0.0133695f,0.006417f,0.00612963f,0.0042525f,-0.00141075f,-0.00782874f,-0.0095985f});
  }
}
private class MFInt32521 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1});
  }
}
private class MFInt32522 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1});
  }
}
private class MFVec2f523 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f,0.0266f,0.8136f,0.0488f,0.8136f,0.0488f,0.8133f,0.0266f,0.8111f,0.0474f,0.8105f,0.0283f,0.8108f,0.0283f,0.8111f,0.0474f,0.8141f,0.0525f,0.8141f,0.0525f,0.8123f,0.0198f,0.8125f,0.0198f,0.9273f,0.2479f,0.9315f,0.2698f,0.9337f,0.2676f,0.9301f,0.2489f,0.9262f,0.2444f,0.9337f,0.2762f,0.9335f,0.2763f,0.8381f,0.0441f,0.904f,0.2568f,0.8327f,0.0273f,0.9122f,0.2724f,0.8401f,0.0478f,0.9014f,0.2535f,0.8395f,0.0482f,0.9142f,0.2789f,0.8319f,0.0206f,0.9141f,0.2788f,0.8381f,0.0441f,0.8327f,0.0273f,0.8319f,0.0206f,0.9141f,0.2788f,0.9122f,0.2724f,0.904f,0.2568f,0.9014f,0.2535f,0.8395f,0.0482f});
  }
}
private class MFVec3f524 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0143055f,-0.02616741f,-0.00519075f,-0.01759725f,-0.02616741f,-0.00519075f,-0.0153495f,0.00175491f,-0.006111f,0.01362825f,0.00175491f,-0.005904f,0.011709f,-0.0308016f,-0.00507825f,-0.014184f,-0.0308016f,-0.00507825f,-0.01153575f,0.01035927f,-0.00658575f,0.0103005f,0.01036764f,-0.00644625f,0.01185525f,-0.00013392f,-0.0076995f,0.0132615f,-0.02403864f,-0.006849f,-0.01551825f,-0.02403864f,-0.0068355f,-0.01359225f,-0.00013392f,-0.00789525f,-0.01586925f,-0.02292264f,0.008667f,0.01437525f,-0.02292264f,0.008667f,-0.01278f,-0.00131688f,0.0058815f,0.01217475f,-0.00131967f,0.00590625f,0.01093275f,-0.02779398f,0.00986625f,-0.0127575f,-0.0281511f,0.00938025f,-0.0095985f,0.00718983f,0.00467775f,0.01017675f,0.00713403f,0.00475875f,-0.0138015f,-0.02104776f,0.009927f,-0.01112625f,-0.00234081f,0.007515f,-0.00837225f,0.00502758f,0.00647325f,0.00875475f,0.00498015f,0.00654075f,0.01048275f,-0.00234081f,0.0075375f,0.0123885f,-0.02104776f,0.009927f,0.0094095f,-0.02526624f,0.01096425f,-0.01110825f,-0.02557593f,0.01054575f});
  }
}
private class MFInt32525 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1});
  }
}
private class MFInt32526 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1});
  }
}
private class MFVec2f527 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f,0.0953f,0.8526f,0.0788f,0.846f,0.0768f,0.8466f,0.0958f,0.8195f,0.0808f,0.8225f,0.0994f,0.8225f,0.0994f,0.8195f,0.0808f,0.8903f,0.2261f,0.8467f,0.0958f,0.8381f,0.0441f,0.8136f,0.0488f,0.8561f,0.0728f,0.8532f,0.0697f,0.8381f,0.0441f,0.8136f,0.0488f,0.8436f,0.0662f,0.8533f,0.0697f,0.8503f,0.0646f,0.8461f,0.0998f,0.8248f,0.1027f,0.8248f,0.1027f,0.8462f,0.0997f,0.8498f,0.0994f,0.8184f,0.0977f,0.8157f,0.0811f,0.8157f,0.0809f,0.8184f,0.0977f,0.8165f,0.0457f,0.8341f,0.0424f,0.8341f,0.0424f,0.8165f,0.0457f,0.844f,0.0417f,0.8554f,0.0622f,0.8575f,0.0659f,0.8594f,0.0677f,0.8574f,0.0658f,0.844f,0.0417f,0.8099f,0.0493f,0.8099f,0.0493f,0.82f,0.101f,0.82f,0.101f,0.8821f,0.2087f,0.8838f,0.2252f,0.9098f,0.1997f,0.916f,0.2175f,0.8866f,0.2074f,0.904f,0.2568f,0.9273f,0.2479f,0.8814f,0.2316f,0.8847f,0.2342f,0.9197f,0.2166f,0.9083f,0.2577f,0.925f,0.2515f,0.8813f,0.2388f,0.8986f,0.2602f,0.931f,0.2468f});
  }
}
private class MFVec3f528 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01211625f,-0.0603198f,0.01127475f,-0.00148275f,-0.0601524f,0.01440225f,0.00807075f,-0.0603198f,0.01131075f,-0.013797f,-0.0370233f,0.0119925f,0.0106695f,-0.0369954f,0.012222f,-0.01355175f,-0.0615753f,-0.00423225f,0.012024f,-0.0361305f,-0.004977f,-0.016128f,-0.0361305f,-0.004977f,-0.00200475f,-0.0398691f,0.01608075f,-0.01945125f,-0.02319327f,0.01122075f,0.0088065f,-0.0615753f,-0.00423225f,0.0143055f,-0.00214551f,-0.0065025f,-0.01759725f,-0.00214551f,-0.0065025f,-0.01586925f,0.00109647f,0.00735525f,0.01437525f,0.00109647f,0.00735525f,0.00901125f,-0.0286533f,0.01437525f,-0.004743f,-0.031527f,0.0176625f,-0.0161685f,-0.0282348f,0.017568f,-0.01764225f,-0.02171457f,0.015615f,0.00946575f,-0.0361863f,-0.0076725f,0.0065655f,-0.0609894f,-0.0059265f,-0.011403f,-0.0609894f,-0.0059265f,-0.0135495f,-0.0363816f,-0.00766125f,-0.014913f,-0.00231291f,-0.00906075f,0.01230075f,-0.00231291f,-0.00906075f,-0.00151425f,-0.0651465f,0.013032f,-0.00890325f,-0.0652302f,0.010611f,-0.01031625f,-0.0659556f,-0.003636f,-0.0103905f,-0.0633609f,-0.005292f,0.00553725f,-0.0633609f,-0.005292f,0.007074f,-0.0659556f,-0.00362475f,0.00647775f,-0.0652302f,0.010692f,-0.003546f,-0.0262539f,0.0202725f,0.006489f,-0.02389635f,0.01766475f,0.0105525f,0.00165447f,0.01146375f,-0.01323675f,0.00166005f,0.01145475f,-0.01243575f,-0.0192231f,0.01833525f,-0.0121725f,-0.02400237f,0.01983375f,0.011385f,0.003627f,0.0045855f,0.01200375f,0.00142569f,-0.004365f,-0.014256f,0.00142569f,-0.004365f,-0.0130815f,0.003627f,0.0045855f});
  }
}
private class MFInt32529 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1});
  }
}
private class MFInt32530 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1});
  }
}
private class MFVec2f531 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f,0.1006f,0.8514f,0.0953f,0.8466f,0.0958f,0.8466f,0.1011f,0.8225f,0.0994f,0.8283f,0.1035f,0.9023f,0.1969f,0.8225f,0.0994f,0.8467f,0.0958f,0.8857f,0.2021f,0.8231f,0.1042f,0.8931f,0.1724f,0.8782f,0.1769f,0.8338f,0.1268f,0.8493f,0.125f,0.8543f,0.1273f,0.8302f,0.1302f,0.8258f,0.1072f,0.8236f,0.1075f,0.8231f,0.1042f,0.8504f,0.1328f,0.8508f,0.1334f,0.8781f,0.1731f,0.8909f,0.1692f,0.8352f,0.1346f,0.8353f,0.1353f,0.8228f,0.0929f,0.844f,0.0896f,0.8482f,0.0889f,0.8441f,0.0896f,0.8228f,0.0929f,0.8203f,0.0995f,0.8207f,0.1038f,0.8212f,0.1068f,0.8207f,0.1037f,0.8203f,0.0995f,0.8206f,0.0933f,0.8205f,0.0933f,0.8815f,0.2034f,0.8821f,0.2087f,0.9098f,0.1997f,0.8866f,0.2074f,0.8737f,0.1777f,0.8969f,0.1707f,0.9052f,0.1925f,0.9074f,0.1918f,0.9084f,0.195f,0.876f,0.171f,0.891f,0.1665f});
  }
}
private class MFVec3f532 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00260775f,-0.0382788f,0.00704475f,0.01161225f,-0.0374139f,-0.007137f,-0.00742275f,-0.0344844f,-0.0071145f,0.00260775f,-0.0380556f,-0.00954f,0.001323f,-0.004185f,0.00851625f,-0.008658f,-0.00437193f,0.005598f,-0.0097605f,-0.00525915f,-0.007245f,0.0105165f,-0.00525915f,-0.00723375f,0.0105165f,-0.00437193f,0.005598f,0.001323f,-0.00921258f,-0.009135f,0.01161225f,-0.0375534f,0.004347f,-0.00742275f,-0.0346518f,0.00437175f,0.00993375f,-0.0421011f,-0.0064125f,-0.00382275f,-0.0444168f,-0.007092f,0.00993375f,-0.0422406f,0.0035595f,-0.00382275f,-0.0445563f,0.00423f,0.0026325f,-0.0452817f,-0.007119f,0.0026325f,-0.0454212f,0.004428f,-0.00965475f,0.00232128f,0.00592875f,0.0009765f,0.00247752f,0.00905625f,0.01053225f,0.00232128f,0.00596475f,-0.0110925f,0.00105462f,-0.00957825f,-0.009198f,-0.00535122f,-0.00954675f,0.0105165f,-0.00535122f,-0.00954675f,0.001323f,-0.00925164f,-0.009414f,0.01126575f,0.00105462f,-0.00957825f,-0.00633375f,0.00963666f,0.00387f,0.00129825f,0.01003842f,0.00717975f,0.008613f,0.00964782f,0.003924f,0.008919f,0.0091233f,-0.00904725f,-0.00766125f,0.00912609f,-0.00902025f,0.0013005f,-0.00804357f,-0.01006875f,-0.00845325f,-0.00421011f,-0.010233f,-0.01024425f,0.00151776f,-0.010233f,-0.0070605f,0.00891126f,-0.01063125f,0.0082125f,0.00890847f,-0.010656f,0.0103005f,0.00148428f,-0.01023075f,0.00964575f,-0.00428823f,-0.01023075f});
  }
}
private class MFInt32533 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFInt32534 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFVec2f535 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f,0.1769f,0.8543f,0.1273f,0.8574f,0.1518f,0.8703f,0.1535f,0.8493f,0.125f,0.8504f,0.1318f,0.8846f,0.1491f,0.8931f,0.1724f,0.8349f,0.1336f,0.8379f,0.1515f,0.8533f,0.1496f,0.8338f,0.1268f,0.8302f,0.1302f,0.8351f,0.1545f,0.849f,0.1233f,0.8336f,0.1251f,0.849f,0.123f,0.8335f,0.1249f,0.8539f,0.1573f,0.8543f,0.1579f,0.8703f,0.1496f,0.8822f,0.146f,0.8398f,0.159f,0.8399f,0.1597f,0.8737f,0.1777f,0.8664f,0.1541f,0.8969f,0.1707f,0.8878f,0.1476f,0.8796f,0.181f,0.8945f,0.1764f,0.8684f,0.1475f,0.8822f,0.1433f});
  }
}
private class MFVec3f536 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0018945f,-0.0314433f,-0.00812475f,0.00955575f,-0.0311364f,0.0045225f,-0.006606f,-0.0280116f,0.004734f,-0.00864675f,-0.00556326f,0.00519075f,-0.00864675f,-0.00541539f,-0.0062955f,0.009576f,0.00031248f,-0.00624825f,-0.00945675f,0.00322524f,-0.0062235f,0.009576f,0.00016461f,0.005238f,-0.00945675f,0.00308016f,0.0052605f,0.0054315f,0.00570555f,-0.00620325f,0.0054315f,0.00555768f,0.00528075f,-0.00396225f,0.00526473f,0.0052785f,-0.00396225f,0.0054126f,-0.0062055f,0.00057375f,-0.00034038f,-0.00865125f,0.00057375f,-0.00056916f,0.00793575f,0.00188775f,-0.0316665f,0.007218f,-0.00379575f,-0.0377487f,0.004221f,0.0016875f,-0.038781f,0.0044055f,0.00956025f,-0.0309969f,-0.0057195f,0.00801675f,-0.0357678f,0.0036f,0.008019f,-0.0356562f,-0.00486225f,-0.0066015f,-0.02786652f,-0.0059085f,-0.00379125f,-0.0376092f,-0.00549225f,0.001692f,-0.0386694f,-0.005517f});
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFInt32538 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFVec2f539 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f,0.1553f,0.8574f,0.1518f,0.8533f,0.1496f,0.8379f,0.1515f,0.8351f,0.1545f,0.8388f,0.1572f,0.8414f,0.1663f,0.8547f,0.1647f,0.8578f,0.1639f,0.8665f,0.142f,0.8703f,0.1535f,0.8804f,0.1378f,0.8846f,0.1491f,0.8382f,0.1663f,0.8495f,0.1759f,0.8523f,0.1752f,0.8544f,0.1737f,0.8566f,0.1736f,0.8658f,0.1324f,0.8753f,0.1296f,0.8677f,0.1303f,0.8725f,0.1289f,0.842f,0.1753f,0.8441f,0.175f,0.8533f,0.1759f,0.8496f,0.1769f,0.8467f,0.1759f,0.846f,0.1768f,0.87f,0.1292f,0.8525f,0.1477f,0.8382f,0.1495f,0.8525f,0.1475f,0.8381f,0.1492f,0.8664f,0.1541f,0.8878f,0.1476f,0.8639f,0.1422f,0.8827f,0.1365f,0.8634f,0.1325f,0.8774f,0.1283f,0.8662f,0.1297f,0.8697f,0.1281f,0.8732f,0.1275f,0.872f,0.1575f,0.8858f,0.1533f});
  }
}
private class MFVec3f540 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.007092f,-0.0040455f,0.00547425f,-0.0070875f,-0.00390042f,-0.0051705f,-0.0054495f,-0.01410345f,0.004914f,-0.005445f,-0.01396953f,-0.0048645f,0.00798075f,-0.01322739f,0.005355f,0.00183825f,-0.01379376f,0.0072045f,0.00798525f,-0.01307952f,-0.00526725f,0.001845f,-0.01359567f,-0.007182f,-0.002997f,-0.02173131f,0.00437625f,-0.00299475f,-0.02161134f,-0.00448425f,0.00804375f,-0.02121795f,0.004275f,0.002691f,-0.02207448f,0.00620775f,0.00804825f,-0.02110077f,-0.0042075f,0.00269775f,-0.0219015f,-0.00627075f,-0.00372825f,-0.02408049f,-0.00009675f,0.007227f,-0.02406933f,-0.00009225f,0.00271125f,-0.02579634f,-0.000108f,-0.00363375f,-0.0236034f,0.00235575f,0.00731925f,-0.02343879f,-0.002142f,0.002421f,-0.02497887f,0.00314775f,-0.00363375f,-0.0235755f,-0.002403f,0.00731925f,-0.02347227f,0.0020835f,0.00241875f,-0.02503746f,-0.00312975f,0.00852975f,0.0000837f,0.00532125f,-0.0076275f,0.00335079f,-0.00510975f,-0.007632f,0.00320292f,0.00553275f,-0.002952f,0.0055242f,0.00516825f,-0.0029475f,0.00566091f,-0.00469125f,0.00511425f,0.00558837f,0.00517275f,0.00853425f,0.0002232f,-0.004923f,0.0051165f,0.00572229f,-0.004689f,0.00081675f,-0.00043803f,0.00801225f,0.0008235f,-0.00022599f,-0.007326f});
  }
}
private class MFInt32541 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1});
  }
}
private class MFInt32542 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1});
  }
}
private class MFVec2f543 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f,0.2698f,0.8136f,0.0488f,0.7924f,0.0507f,0.7911f,0.0281f,0.8136f,0.0488f,0.813f,0.0266f,0.791f,0.0281f,0.7924f,0.0508f,0.7924f,0.0543f,0.8143f,0.0526f,0.8143f,0.0526f,0.7924f,0.0543f,0.9335f,0.2763f,0.7903f,0.0215f,0.7903f,0.0215f,0.8123f,0.0198f,0.7875f,0.03f,0.7875f,0.03f,0.7887f,0.0494f,0.7887f,0.0495f,0.9277f,0.2691f,0.8167f,0.0279f,0.8173f,0.0471f,0.8173f,0.0471f,0.9273f,0.2479f,0.9479f,0.2423f,0.9531f,0.2644f,0.9318f,0.2697f,0.9473f,0.2389f,0.926f,0.2443f,0.955f,0.2707f,0.9551f,0.2707f,0.9337f,0.2763f,0.9563f,0.262f,0.9518f,0.243f,0.928f,0.269f,0.924f,0.2502f,0.9241f,0.2502f});
  }
}
private class MFVec3f544 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01787175f,-0.0280674f,-0.0074385f,0.01458f,-0.0280116f,-0.00744075f,-0.01553625f,-0.00001395f,0.00710325f,-0.01622925f,0.00051894f,-0.0076095f,0.0132795f,0.00051615f,-0.00758025f,0.0141165f,-0.0279279f,0.00802125f,0.01343925f,-0.00001116f,0.00731025f,-0.01778625f,-0.0279279f,0.00802125f,0.01222875f,-0.0324198f,-0.00762525f,0.01193175f,-0.0326988f,0.008244f,-0.01446975f,-0.0326988f,0.008244f,-0.014526f,-0.0324756f,-0.007623f,0.01012275f,0.00860715f,0.00678375f,0.01001475f,0.00883593f,-0.00617175f,-0.01281825f,0.00883872f,-0.006192f,-0.01236375f,0.00860436f,0.006642f,0.013167f,-0.02618973f,0.01055925f,0.01174725f,-0.00206181f,0.0097155f,-0.013896f,-0.00206181f,0.00951975f,-0.01584f,-0.02618973f,0.0105705f,-0.01584675f,-0.02597769f,-0.00955125f,-0.014436f,-0.00141453f,-0.010098f,0.01153575f,-0.00141732f,-0.01006875f,0.01348425f,-0.0259191f,-0.00955575f});
  }
}
private class MFInt32545 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1});
  }
}
private class MFInt32546 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1});
  }
}
private class MFVec2f547 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f,0.0994f,0.8195f,0.0808f,0.7938f,0.0824f,0.7939f,0.1016f,0.8195f,0.0808f,0.7938f,0.0824f,0.7924f,0.0507f,0.8136f,0.0488f,0.7939f,0.1016f,0.8225f,0.0994f,0.8136f,0.0488f,0.7924f,0.0508f,0.7964f,0.1053f,0.8205f,0.103f,0.8205f,0.103f,0.7964f,0.1053f,0.796f,0.0481f,0.809f,0.0468f,0.809f,0.0469f,0.796f,0.048f,0.7888f,0.0827f,0.7888f,0.0826f,0.7886f,0.1011f,0.7887f,0.1011f,0.8243f,0.0799f,0.8186f,0.0479f,0.8186f,0.0479f,0.8243f,0.0801f,0.7878f,0.051f,0.7878f,0.0509f,0.8275f,0.0984f,0.8275f,0.0983f,0.7902f,0.1036f,0.7902f,0.1036f,0.8264f,0.1006f,0.8264f,0.1006f,0.916f,0.2175f,0.941f,0.2114f,0.9479f,0.2423f,0.9273f,0.2479f,0.9376f,0.1925f,0.9098f,0.1997f,0.9479f,0.2423f,0.9448f,0.2456f,0.9323f,0.249f,0.9323f,0.249f,0.9448f,0.2456f,0.9459f,0.2103f,0.9115f,0.2191f,0.9226f,0.2496f,0.9226f,0.2496f,0.9114f,0.219f,0.9524f,0.2413f,0.9524f,0.2414f});
  }
}
private class MFVec3f548 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01652625f,-0.0327267f,-0.00582975f,0.0117f,-0.0327267f,-0.00582975f,0.00871425f,-0.0590085f,-0.00637875f,-0.013734f,-0.0590085f,-0.00637875f,-0.01787175f,-0.00008928f,-0.00598275f,0.01458f,-0.00002232f,-0.005985f,-0.0137385f,-0.0593991f,0.01174725f,0.01183725f,-0.0339543f,0.0110025f,-0.016317f,-0.0339543f,0.0110025f,0.00861975f,-0.0593991f,0.01174725f,0.0141165f,0.00004743f,0.00947925f,-0.01778625f,0.00004743f,0.00947925f,-0.01196325f,-0.0637236f,0.011061f,-0.011961f,-0.0638631f,-0.00524025f,0.00675675f,-0.0638631f,-0.00524025f,0.00667575f,-0.0637236f,0.011061f,0.0063495f,-0.0586179f,0.013275f,0.00953325f,-0.0336753f,0.0144585f,0.012411f,0.00061659f,0.01289025f,-0.0153675f,0.00061659f,0.01289025f,-0.01399275f,-0.0338427f,0.01446525f,-0.01163025f,-0.0586458f,0.013275f,-0.0104265f,-0.06138f,0.01287f,0.0051345f,-0.06138f,0.01287f,-0.011493f,-0.058032f,-0.008442f,-0.013995f,-0.0328662f,-0.00871875f,-0.01522125f,0.00021762f,-0.00870075f,0.01248975f,0.00027342f,-0.008703f,0.00920475f,-0.0326988f,-0.00872325f,0.00632925f,-0.0580041f,-0.00844425f,0.00510075f,-0.0612963f,-0.00774225f,-0.01027575f,-0.0612963f,-0.00774225f,0.01209375f,0.00303831f,0.00645075f,0.012375f,0.00301041f,-0.00374625f,-0.0148725f,0.00294903f,-0.003744f,-0.0148185f,0.00304668f,0.00645075f});
  }
}
private class MFInt32549 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
private class MFInt32550 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1});
  }
}
private class MFVec2f551 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f,0.105f,0.8225f,0.0994f,0.7939f,0.1016f,0.7996f,0.1065f,0.9311f,0.1887f,0.7939f,0.1016f,0.8225f,0.0994f,0.9145f,0.1932f,0.794f,0.107f,0.9232f,0.1611f,0.908f,0.1649f,0.8025f,0.1324f,0.818f,0.1313f,0.7986f,0.1359f,0.7957f,0.11f,0.7939f,0.1101f,0.794f,0.107f,0.8228f,0.1342f,0.8186f,0.1401f,0.819f,0.1409f,0.9081f,0.1606f,0.921f,0.1574f,0.8033f,0.1412f,0.8033f,0.142f,0.8231f,0.1042f,0.8212f,0.1078f,0.8231f,0.1042f,0.8236f,0.1075f,0.7948f,0.0956f,0.8206f,0.0932f,0.8206f,0.0932f,0.7948f,0.0956f,0.8249f,0.0987f,0.8253f,0.1032f,0.8258f,0.1063f,0.8253f,0.1032f,0.8249f,0.0987f,0.823f,0.0929f,0.823f,0.0929f,0.7917f,0.1017f,0.7916f,0.1064f,0.7918f,0.1091f,0.7916f,0.1063f,0.7917f,0.1017f,0.7927f,0.0957f,0.7927f,0.0957f,0.9376f,0.1925f,0.9098f,0.1997f,0.927f,0.1595f,0.9344f,0.1846f,0.9361f,0.1842f,0.9366f,0.1872f,0.9035f,0.1654f,0.9061f,0.1582f,0.9213f,0.1544f,0.9096f,0.1911f,0.9084f,0.195f,0.9074f,0.1918f});
  }
}
private class MFVec3f552 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01156275f,-0.0393669f,-0.00499725f,-0.00747f,-0.0361026f,-0.00506475f,0.0025605f,-0.040176f,-0.0078075f,-0.00924525f,-0.00268956f,0.007047f,-0.00924525f,-0.00252495f,-0.00596025f,0.01046925f,-0.00252495f,-0.00596025f,0.01046925f,-0.00268956f,0.007047f,0.00127575f,-0.0066402f,-0.00823275f,0.0098865f,-0.0446121f,-0.004122f,-0.00387f,-0.0472068f,-0.0047295f,0.0098865f,-0.0444447f,0.00501525f,-0.00387f,-0.0470394f,0.00576225f,0.002583f,-0.0481833f,-0.00472725f,0.002583f,-0.0480159f,0.00598725f,0.01156275f,-0.0391716f,0.00565425f,0.0025605f,-0.039897f,0.00878625f,0.00127575f,-0.00665973f,0.0092835f,-0.00747f,-0.0359073f,0.00558675f,-0.00924525f,-0.00271746f,0.0094455f,0.01046925f,-0.00271746f,0.0094455f,0.00127575f,-0.00661788f,0.009576f,-0.01113975f,0.00368838f,0.00941175f,0.00127575f,-0.00657603f,-0.00852525f,-0.00924525f,-0.00274257f,-0.0084555f,0.01046925f,-0.00274257f,-0.0084555f,0.01131525f,0.00407898f,-0.0087165f,-0.01113525f,0.00407898f,-0.0087165f,0.0112185f,0.00368838f,0.00941175f,-0.00749475f,0.01159245f,-0.008127f,-0.00749925f,0.0116343f,0.00836325f,0.0089955f,0.0116343f,0.00836325f,0.00907875f,0.01159245f,-0.008127f,-0.00875025f,-0.00141174f,0.0101475f,0.0012555f,-0.00534564f,0.0102465f,0.00990225f,-0.0014508f,0.0101475f,0.01059525f,0.00423801f,0.01012725f,0.008532f,0.01173753f,0.01010925f,-0.0071055f,0.01173753f,0.01010925f,-0.01064475f,0.00424359f,0.01012725f,0.001251f,-0.00515871f,-0.0091755f,-0.00834975f,-0.00168795f,-0.00940725f,-0.010098f,0.00410688f,-0.009558f,-0.006822f,0.0114948f,-0.0095715f,0.0082575f,0.0114948f,-0.0095715f,0.01017225f,0.00411804f,-0.009558f,0.00944325f,-0.00176607f,-0.00940725f});
  }
}
private class MFInt32553 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFInt32554 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFVec2f555 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f,0.1649f,0.8228f,0.1342f,0.8238f,0.1612f,0.9018f,0.1387f,0.818f,0.1313f,0.8186f,0.139f,0.9163f,0.135f,0.9232f,0.1611f,0.8031f,0.1401f,0.8044f,0.1596f,0.8199f,0.1584f,0.8025f,0.1324f,0.7986f,0.1359f,0.8014f,0.1628f,0.8179f,0.1294f,0.8023f,0.1305f,0.8179f,0.1291f,0.8023f,0.1302f,0.8199f,0.1671f,0.8202f,0.1672f,0.902f,0.1343f,0.914f,0.1313f,0.8058f,0.1681f,0.8058f,0.1689f,0.9035f,0.1654f,0.8978f,0.139f,0.927f,0.1595f,0.9196f,0.1336f,0.9092f,0.1696f,0.9243f,0.1658f,0.9003f,0.1324f,0.9142f,0.1283f});
  }
}
private class MFVec3f556 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0016695f,-0.0347076f,-0.00737325f,0.00934425f,-0.0339264f,0.005256f,-0.0068085f,-0.0304668f,0.005382f,-0.00864675f,-0.00622449f,0.00541125f,-0.00864675f,-0.00640026f,-0.00524025f,0.009576f,0.00002232f,-0.00537525f,-0.00945675f,0.00328941f,-0.005445f,0.009576f,0.00019809f,0.00527625f,-0.00945675f,0.00346797f,0.0052065f,0.0054315f,0.00606825f,-0.0055035f,0.0054315f,0.00624681f,0.005148f,-0.00396225f,0.00591759f,0.00515475f,-0.00396225f,0.00573903f,-0.00549675f,0.00057375f,-0.00080073f,-0.00818775f,0.00057375f,-0.00052452f,0.00840825f,0.00167625f,-0.0344565f,0.007974f,-0.00403425f,-0.0414036f,0.00517725f,0.00146925f,-0.0417663f,0.005337f,0.00933975f,-0.0340938f,-0.00499275f,0.00778725f,-0.0391437f,0.004482f,0.00778275f,-0.0392832f,-0.0039825f,-0.006813f,-0.0306342f,-0.005265f,-0.00403875f,-0.041571f,-0.0045405f,0.00144225f,-0.0427149f,-0.00453825f});
  }
}
private class MFInt32557 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFInt32558 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFVec2f559 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f,0.1649f,0.8238f,0.1612f,0.8199f,0.1584f,0.8044f,0.1596f,0.8014f,0.1628f,0.8049f,0.166f,0.807f,0.1802f,0.8204f,0.1792f,0.8232f,0.1783f,0.8982f,0.1238f,0.9018f,0.1387f,0.9123f,0.1202f,0.9163f,0.135f,0.8038f,0.18f,0.8141f,0.1881f,0.8169f,0.1876f,0.8192f,0.1861f,0.8213f,0.1861f,0.8983f,0.1142f,0.9079f,0.1117f,0.9004f,0.112f,0.9052f,0.1108f,0.8067f,0.1872f,0.8088f,0.1869f,0.8179f,0.1883f,0.8142f,0.1891f,0.8114f,0.188f,0.8106f,0.1889f,0.9027f,0.111f,0.8192f,0.1563f,0.8048f,0.1573f,0.8192f,0.156f,0.8048f,0.1571f,0.8978f,0.139f,0.9196f,0.1336f,0.8956f,0.1239f,0.9147f,0.119f,0.8959f,0.1141f,0.9101f,0.1105f,0.8989f,0.1113f,0.9025f,0.1098f,0.906f,0.1094f,0.9033f,0.1433f,0.9173f,0.1398f});
  }
}
private class MFVec3f560 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.006948f,-0.00389484f,0.005778f,-0.0069525f,-0.0040734f,-0.0048735f,-0.00567225f,-0.01380771f,0.00567675f,-0.00568125f,-0.01409787f,-0.00434025f,0.007749f,-0.01315206f,0.006102f,0.0016155f,-0.01351476f,0.007812f,0.00774f,-0.01346454f,-0.004779f,0.001602f,-0.01392768f,-0.00670275f,-0.00285075f,-0.02322675f,0.005166f,-0.00285975f,-0.02350017f,-0.003825f,0.00776025f,-0.02293938f,0.005049f,0.0024345f,-0.02290311f,0.0067635f,0.0077535f,-0.02320164f,-0.0035595f,0.00242325f,-0.02326581f,-0.0054f,-0.0035685f,-0.02511f,0.00067275f,0.00695925f,-0.02518254f,0.00066825f,0.00245925f,-0.02640177f,0.00068625f,-0.003474f,-0.0246636f,0.00315f,0.007047f,-0.02480868f,-0.00141975f,0.00216675f,-0.02567358f,0.0039735f,-0.0034785f,-0.02483658f,-0.0016785f,0.0070515f,-0.02466081f,0.0028665f,0.00215775f,-0.02597211f,-0.00239175f,0.00831825f,0.0007812f,0.00547875f,-0.007839f,0.00405387f,-0.00504225f,-0.0078345f,0.00422964f,0.005607f,-0.0031455f,0.0068355f,0.00516375f,-0.00315f,0.00667368f,-0.00470025f,0.00492075f,0.00693594f,0.005157f,0.00831375f,0.0006138f,-0.00477f,0.00491625f,0.00677133f,-0.00470925f,0.00060525f,0.00025947f,0.0081945f,0.0005985f,0.00000279f,-0.00715275f});
  }
}
private class MFInt32561 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1});
  }
}
private class MFInt32562 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1});
  }
}
private class MFVec2f563 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f,0.0345f,0.7525f,0.0502f,0.7571f,0.0508f,0.7729f,0.0334f,0.7734f,0.0512f,0.7924f,0.0508f,0.791f,0.0281f,0.9531f,0.2644f,0.9665f,0.2386f,0.9827f,0.2362f,0.9706f,0.2558f,0.9479f,0.2423f,0.7736f,0.0553f,0.7595f,0.0549f,0.7559f,0.0544f,0.7596f,0.0549f,0.7736f,0.0553f,0.7721f,0.0268f,0.7644f,0.0276f,0.7723f,0.0268f,0.7938f,0.0298f,0.795f,0.0487f,0.9457f,0.2448f,0.9501f,0.2632f,0.7926f,0.0543f,0.7926f,0.0544f,0.7903f,0.0215f,0.7903f,0.0215f,0.9803f,0.2531f,0.9874f,0.236f,0.9479f,0.2423f,0.9532f,0.2644f,0.9832f,0.2324f,0.9795f,0.2325f,0.9656f,0.2346f,0.9721f,0.2624f,0.9795f,0.2602f,0.9719f,0.2625f,0.9502f,0.2632f,0.9457f,0.2447f,0.9471f,0.2389f,0.9471f,0.2388f,0.9551f,0.2707f,0.955f,0.2707f});
  }
}
private class MFVec3f564 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01703925f,-0.02329092f,-0.00188325f,0.010269f,-0.02085804f,-0.0120735f,0.01363275f,-0.02327418f,-0.00188775f,-0.0018045f,-0.01964718f,-0.0151245f,-0.0130365f,-0.0209529f,-0.01204875f,0.00967275f,-0.00093744f,-0.0015885f,-0.0019215f,-0.00045756f,-0.00821025f,-0.01387125f,-0.00092907f,-0.00157725f,-0.01622925f,0.00377208f,0.0133335f,-0.01787175f,-0.02481705f,0.0135045f,0.01458f,-0.02475009f,0.01350225f,0.0132795f,0.00376929f,0.01336275f,-0.01436625f,-0.029295f,0.01342125f,-0.01372725f,-0.0283743f,-0.001989f,-0.010278f,-0.02640177f,-0.01068075f,-0.001629f,-0.02527461f,-0.013032f,0.00755325f,-0.02634318f,-0.0106065f,0.01043325f,-0.0283743f,-0.00197325f,0.0119115f,-0.0292392f,0.013419f,0.009216f,0.01206117f,0.014769f,0.0067185f,0.00752742f,-0.00027f,-0.00175275f,0.00794313f,-0.00505575f,-0.0108045f,0.0075051f,-0.0001485f,-0.01245375f,0.01207791f,0.0147465f,-0.01414125f,0.00136989f,0.0151065f,-0.01551375f,-0.02252367f,0.015102f,0.0131355f,-0.02246508f,0.01509975f,0.01124325f,0.0013671f,0.0151335f});
  }
}
private class MFInt32565 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1});
  }
}
private class MFInt32566 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1});
  }
}
private class MFVec2f567 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f,0.1016f,0.7938f,0.0824f,0.7694f,0.0827f,0.766f,0.1014f,0.7924f,0.0508f,0.7734f,0.0512f,0.7938f,0.0824f,0.7939f,0.1016f,0.766f,0.1015f,0.965f,0.2069f,0.7734f,0.0512f,0.7924f,0.0507f,0.7909f,0.1057f,0.7677f,0.1056f,0.7677f,0.1057f,0.7909f,0.1057f,0.9517f,0.2441f,0.7765f,0.0488f,0.7765f,0.0488f,0.789f,0.0484f,0.7643f,0.0825f,0.7643f,0.0824f,0.7614f,0.1009f,0.7614f,0.1009f,0.7991f,0.0823f,0.7971f,0.0505f,0.7971f,0.0505f,0.7991f,0.0824f,0.7688f,0.0511f,0.7688f,0.0511f,0.7994f,0.1003f,0.7994f,0.1003f,0.7625f,0.1038f,0.7625f,0.1038f,0.7972f,0.1034f,0.7972f,0.1034f,0.9479f,0.2423f,0.9665f,0.2385f,0.941f,0.2114f,0.9376f,0.1925f,0.9651f,0.1878f,0.9665f,0.2386f,0.9479f,0.2423f,0.9639f,0.2415f,0.9639f,0.2415f,0.9517f,0.244f,0.9701f,0.2063f,0.9698f,0.1875f,0.9358f,0.2124f,0.9433f,0.2434f,0.9433f,0.2434f,0.9358f,0.2123f,0.9711f,0.2379f,0.9711f,0.2379f});
  }
}
private class MFVec3f568 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01507725f,-0.0309411f,-0.0085725f,0.0112545f,-0.0309411f,-0.0085725f,-0.0131715f,-0.0572787f,-0.008595f,0.008667f,-0.0573345f,-0.00859275f,-0.01703925f,0.00104625f,-0.007704f,0.01363275f,0.0010602f,-0.00771075f,-0.01652625f,-0.0331173f,0.00783675f,0.0117f,-0.0331173f,0.00783675f,0.00871425f,-0.0593991f,0.00728775f,-0.013734f,-0.0593991f,0.00728775f,-0.01787175f,-0.00048267f,0.00768375f,0.01458f,-0.00041571f,0.0076815f,-0.01179675f,-0.0643932f,0.0063f,-0.0111825f,-0.0630819f,-0.00747225f,0.00661275f,-0.0631377f,-0.0074655f,0.00665325f,-0.0643932f,0.0063f,-0.0110115f,-0.0566649f,-0.01058175f,-0.01289025f,-0.0304947f,-0.011331f,-0.01473075f,0.00171306f,-0.0100215f,0.011151f,0.00172701f,-0.010026f,0.009081f,-0.0303831f,-0.0113265f,0.0065205f,-0.0566649f,-0.0105795f,0.00511875f,-0.0608499f,-0.010287f,-0.00966825f,-0.060822f,-0.01029375f,-0.01418625f,-0.0334242f,0.01089675f,-0.01173825f,-0.0582273f,0.00936f,-0.01019925f,-0.0618822f,0.00866025f,0.0050985f,-0.0618822f,0.00866025f,0.00659925f,-0.0582273f,0.00936f,0.00940725f,-0.0333126f,0.0108945f,0.012636f,-0.00057195f,0.01044f,-0.015399f,-0.00062775f,0.01044225f,-0.014211f,0.00374976f,-0.0060705f,-0.0146745f,0.00288765f,0.0057825f,0.01195875f,0.00294903f,0.0057825f,0.01088775f,0.00375813f,-0.006075f});
  }
}
private class MFInt32569 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
private class MFInt32570 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1});
  }
}
private class MFVec2f571 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f,0.1071f,0.7939f,0.1016f,0.766f,0.1014f,0.7709f,0.1068f,0.9594f,0.1833f,0.766f,0.1015f,0.7939f,0.1016f,0.9426f,0.186f,0.7648f,0.1066f,0.9545f,0.1568f,0.9398f,0.1599f,0.771f,0.1315f,0.7861f,0.131f,0.767f,0.1345f,0.7667f,0.1094f,0.7644f,0.1092f,0.7648f,0.1066f,0.7904f,0.1338f,0.786f,0.139f,0.7863f,0.1397f,0.9402f,0.1559f,0.9531f,0.1532f,0.7709f,0.1396f,0.7709f,0.1403f,0.794f,0.107f,0.7917f,0.1102f,0.794f,0.107f,0.7939f,0.1101f,0.7675f,0.0958f,0.7934f,0.0956f,0.7934f,0.0956f,0.7675f,0.0958f,0.7967f,0.1011f,0.7964f,0.1056f,0.7964f,0.1088f,0.7964f,0.1057f,0.7967f,0.1011f,0.7958f,0.0955f,0.7958f,0.0955f,0.7633f,0.1008f,0.7625f,0.1056f,0.7622f,0.1084f,0.7625f,0.1055f,0.7633f,0.1008f,0.765f,0.0957f,0.765f,0.0957f,0.9651f,0.1878f,0.9376f,0.1925f,0.9583f,0.1554f,0.963f,0.1801f,0.9654f,0.1799f,0.9654f,0.1826f,0.9354f,0.1602f,0.9385f,0.1536f,0.9536f,0.1504f,0.9383f,0.1837f,0.9366f,0.1872f,0.9361f,0.1842f});
  }
}
private class MFVec3f572 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0115605f,-0.03348f,-0.00443925f,-0.00747225f,-0.0305226f,-0.004518f,0.00255825f,-0.0342612f,-0.0071505f,-0.0092475f,-0.00110205f,0.00667575f,-0.00924975f,0.00012834f,-0.00456525f,0.010467f,0.00012834f,-0.00456525f,0.010467f,-0.00110205f,0.00667575f,0.0012735f,-0.00279f,-0.007389f,0.00988425f,-0.0382509f,-0.00371925f,-0.0038745f,-0.0406503f,-0.00431325f,0.00988425f,-0.0379719f,0.00528075f,-0.0038745f,-0.0402876f,0.006021f,0.00258075f,-0.0415431f,-0.00430875f,0.00258075f,-0.0411804f,0.00624375f,0.0115605f,-0.0331731f,0.00585f,0.00255825f,-0.0337869f,0.00887625f,0.0012735f,-0.00523962f,0.008631f,-0.00747225f,-0.0302157f,0.00577125f,-0.007497f,0.01456938f,-0.0066735f,-0.0075015f,0.01287864f,0.008406f,0.00899325f,0.01287864f,0.008406f,0.0090765f,0.01456938f,-0.0066735f,-0.010575f,0.00749952f,-0.00707625f,-0.0111375f,0.00539307f,0.00880875f,-0.010647f,0.0057474f,0.00985725f,-0.0087525f,0.00011439f,0.009945f,0.00125325f,-0.00385299f,0.00965475f,0.0099f,0.00007254f,0.00994725f,0.010593f,0.00574182f,0.0098595f,0.00852975f,0.01290096f,0.01015425f,-0.00710775f,0.01290096f,0.01015425f,0.011313f,0.00539307f,0.00880875f,0.01126575f,0.00745488f,-0.00707175f,0.01017f,0.00833373f,-0.0082395f,0.009441f,0.00174654f,-0.008415f,0.0012465f,-0.00149823f,-0.007839f,-0.008352f,0.00182745f,-0.00842175f,-0.01010025f,0.00832257f,-0.0082395f,-0.0068265f,0.01474515f,-0.0077085f,0.008253f,0.01474515f,-0.0077085f,-0.0092475f,-0.00143127f,0.0090675f,0.0012735f,-0.00526194f,0.00899775f,0.010467f,-0.00143127f,0.0090675f,0.001341f,-0.00274536f,-0.007641f,-0.00898425f,0.00035712f,-0.007416f,0.010467f,0.00035712f,-0.007416f});
  }
}
private class MFInt32573 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFInt32574 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFVec2f575 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f,0.1599f,0.7904f,0.1338f,0.7888f,0.1598f,0.9363f,0.1341f,0.7861f,0.131f,0.7859f,0.138f,0.9502f,0.1313f,0.9545f,0.1568f,0.7712f,0.1385f,0.7707f,0.1575f,0.7854f,0.1571f,0.771f,0.1315f,0.767f,0.1345f,0.7676f,0.1604f,0.786f,0.1292f,0.7713f,0.1297f,0.786f,0.129f,0.7713f,0.1294f,0.7847f,0.165f,0.7849f,0.1652f,0.9369f,0.1301f,0.9483f,0.1278f,0.7712f,0.1654f,0.7712f,0.1661f,0.9354f,0.1602f,0.9325f,0.1343f,0.9583f,0.1554f,0.9533f,0.1301f,0.9406f,0.1642f,0.9551f,0.1612f,0.9355f,0.1283f,0.9488f,0.1251f});
  }
}
private class MFVec3f576 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00185175f,-0.0327267f,-0.006714f,0.0095265f,-0.0319455f,0.0052425f,-0.00663525f,-0.0287649f,0.0053505f,-0.00864675f,-0.00507222f,0.005166f,-0.00864675f,-0.00534285f,-0.0049185f,0.009576f,0.00046872f,-0.0052335f,-0.00945675f,0.00344007f,-0.00531f,0.009576f,0.00077841f,0.00505575f,-0.00945675f,0.00374976f,0.004977f,0.0054315f,0.00599292f,-0.005238f,0.0054315f,0.00626355f,0.0048465f,-0.00396225f,0.00596502f,0.0048555f,-0.00396225f,0.00569439f,-0.005229f,0.00057375f,-0.00031806f,-0.00794475f,0.00057375f,0.00016461f,0.00808425f,0.00186075f,-0.0323919f,0.00781875f,-0.0038295f,-0.0387252f,0.00519975f,0.001674f,-0.03906f,0.0053505f,0.00951975f,-0.0321687f,-0.00446175f,0.007983f,-0.0367164f,0.00452925f,0.0079785f,-0.0368838f,-0.00348525f,-0.006642f,-0.029016f,-0.00473175f,-0.00383625f,-0.0389205f,-0.00400275f,0.001647f,-0.0399807f,-0.003996f});
  }
}
private class MFInt32577 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFInt32578 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFVec2f579 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f,0.163f,0.7888f,0.1598f,0.7854f,0.1571f,0.7707f,0.1575f,0.7676f,0.1604f,0.7706f,0.1634f,0.7714f,0.1739f,0.7841f,0.1736f,0.787f,0.1731f,0.9344f,0.121f,0.9363f,0.1341f,0.9479f,0.1182f,0.9502f,0.1313f,0.7684f,0.1736f,0.7774f,0.1846f,0.7801f,0.1842f,0.7824f,0.1828f,0.7844f,0.1829f,0.9351f,0.111f,0.9443f,0.1091f,0.9372f,0.109f,0.9418f,0.1081f,0.7705f,0.1833f,0.7725f,0.1831f,0.781f,0.1849f,0.7774f,0.1856f,0.7748f,0.1843f,0.774f,0.1852f,0.9395f,0.1081f,0.7849f,0.1552f,0.7712f,0.1555f,0.7849f,0.1549f,0.7712f,0.1553f,0.9325f,0.1343f,0.9533f,0.1301f,0.9319f,0.1209f,0.9502f,0.1172f,0.9329f,0.1108f,0.9464f,0.108f,0.9358f,0.1082f,0.9393f,0.1069f,0.9427f,0.1067f,0.9372f,0.1384f,0.9506f,0.1357f});
  }
}
private class MFVec3f580 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0071235f,-0.00399807f,0.00467775f,-0.00713025f,-0.00423801f,-0.00540675f,-0.0054945f,-0.01448847f,0.004374f,-0.005499f,-0.01470051f,-0.00488475f,0.00793575f,-0.01356219f,0.0047475f,0.00179775f,-0.01408392f,0.006525f,0.007929f,-0.01379376f,-0.00531f,0.00178875f,-0.0143964f,-0.00709875f,-0.00306225f,-0.02276082f,0.0038295f,-0.00306675f,-0.02294217f,-0.004104f,0.0079785f,-0.02227536f,0.0037125f,0.00263025f,-0.02303424f,0.0054765f,0.007974f,-0.02244834f,-0.00388575f,0.00262125f,-0.02329092f,-0.00569925f,-0.00379575f,-0.0251937f,-0.0000945f,0.0071595f,-0.02519091f,-0.00010125f,0.002646f,-0.02686212f,-0.000054f,-0.003699f,-0.02464686f,0.00208575f,0.0072495f,-0.02464686f,-0.00195525f,0.002358f,-0.02596095f,0.00283275f,-0.0037035f,-0.02478078f,-0.00217575f,0.007254f,-0.02453526f,0.001827f,0.002349f,-0.02622879f,-0.00278325f,0.0085005f,0.00021204f,0.004374f,-0.007668f,0.0031527f,-0.005598f,-0.00766125f,0.00338985f,0.00448425f,-0.002979f,0.00574461f,0.0040545f,-0.00298575f,0.0055242f,-0.00528525f,0.00508725f,0.00581436f,0.00404775f,0.00849375f,-0.00001674f,-0.005328f,0.0050805f,0.00559395f,-0.00529425f,0.00078975f,-0.00022599f,0.006948f,0.00078075f,-0.00056916f,-0.00758025f});
  }
}
private class MFInt32581 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1});
  }
}
private class MFInt32582 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1});
  }
}
private class MFVec2f583 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f,0.1014f,0.7694f,0.0827f,0.748f,0.0813f,0.7455f,0.0995f,0.7415f,0.0989f,0.7435f,0.0798f,0.9864f,0.2045f,0.7455f,0.0995f,0.7734f,0.0512f,0.7571f,0.0508f,0.7525f,0.0502f,0.9827f,0.2362f,0.9665f,0.2386f,0.7694f,0.0827f,0.766f,0.1015f,0.774f,0.0829f,0.9619f,0.2395f,0.7782f,0.0512f,0.774f,0.083f,0.7619f,0.1052f,0.7474f,0.1039f,0.7446f,0.1034f,0.7473f,0.1038f,0.7619f,0.1052f,0.9712f,0.2404f,0.9799f,0.239f,0.7566f,0.0479f,0.7602f,0.0485f,0.7691f,0.0486f,0.771f,0.1015f,0.771f,0.1014f,0.768f,0.1042f,0.768f,0.1042f,0.9897f,0.1861f,0.991f,0.2053f,0.9856f,0.1862f,0.9665f,0.2385f,0.9874f,0.236f,0.965f,0.2069f,0.9651f,0.1878f,0.9604f,0.2075f,0.9619f,0.2395f,0.9604f,0.2074f,0.9836f,0.239f,0.98f,0.239f,0.9712f,0.2404f});
  }
}
private class MFVec3f584 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.01223325f,-0.0311085f,-0.008721f,0.0102915f,-0.0311085f,-0.00871875f,-0.00087975f,-0.0294345f,-0.01209375f,-0.01125675f,-0.0567765f,-0.00950625f,0.008946f,-0.0567765f,-0.00950625f,-0.0004365f,-0.056079f,-0.0124245f,0.0108135f,0.00080631f,-0.0050265f,-0.00125775f,0.00201996f,-0.0080775f,-0.01248975f,0.00071424f,-0.005004f,-0.0145305f,-0.0335916f,0.00429525f,0.01180125f,-0.0335916f,0.00429525f,-0.01262475f,-0.0599571f,0.00427275f,0.00921375f,-0.059985f,0.004275f,-0.0164925f,-0.00162378f,0.00516375f,0.0141795f,-0.00160704f,0.005157f,-0.009108f,-0.0652581f,0.00268875f,-0.007461f,-0.0620775f,-0.0071415f,-0.000468f,-0.0615195f,-0.009207f,0.00587475f,-0.0620496f,-0.0072405f,0.006066f,-0.065286f,0.0026955f,-0.0123435f,-0.034038f,0.00738225f,-0.0104805f,-0.0599292f,0.006381f,-0.00789525f,-0.0638631f,0.00577575f,0.00478575f,-0.063891f,0.0057825f,0.0070785f,-0.059985f,0.0063675f,0.00962775f,-0.0339264f,0.00738675f,0.01169775f,-0.00201717f,0.0075105f,-0.014184f,-0.00203112f,0.007515f,0.00985725f,0.00215109f,0.0031275f,0.008055f,0.00334521f,-0.002682f,-0.00126675f,0.00445563f,-0.00513225f,-0.0099315f,0.00328941f,-0.002781f,-0.012114f,0.00215388f,0.003132f});
  }
}
private class MFInt32585 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1});
  }
}
private class MFInt32586 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1});
  }
}
private class MFVec2f587 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f,0.1276f,0.7543f,0.1247f,0.753f,0.131f,0.7531f,0.1316f,0.9854f,0.1598f,0.9725f,0.1615f,0.9734f,0.1584f,0.9844f,0.1569f,0.7413f,0.123f,0.7403f,0.1293f,0.7378f,0.1249f,0.7401f,0.1299f,0.7405f,0.104f,0.7443f,0.1047f,0.9859f,0.1809f,0.7455f,0.0995f,0.766f,0.1015f,0.9713f,0.1822f,0.7589f,0.1059f,0.7648f,0.1066f,0.766f,0.1014f,0.7622f,0.1091f,0.7648f,0.1066f,0.7644f,0.1092f,0.7455f,0.0995f,0.7415f,0.0989f,0.7664f,0.0954f,0.7667f,0.0954f,0.7485f,0.0932f,0.7449f,0.0928f,0.7484f,0.0932f,0.7683f,0.1016f,0.7686f,0.0957f,0.7683f,0.0956f,0.7679f,0.1015f,0.7671f,0.1055f,0.7666f,0.1084f,0.7674f,0.1056f,0.9687f,0.1615f,0.9723f,0.1564f,0.9888f,0.1589f,0.9852f,0.1547f,0.9898f,0.1809f,0.9856f,0.1862f,0.9651f,0.1878f,0.9675f,0.1796f,0.9654f,0.1826f,0.9654f,0.1799f,0.9897f,0.1861f});
  }
}
private class MFVec3f588 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0104445f,-0.02091105f,-0.004455f,-0.007317f,-0.01845306f,-0.00481275f,0.00275625f,-0.02134908f,-0.007074f,0.00859275f,-0.02466918f,-0.0038565f,-0.00388125f,-0.02652174f,-0.004518f,0.00858375f,-0.02485332f,0.003825f,-0.003897f,-0.02675889f,0.00441f,0.002727f,-0.02718576f,-0.004554f,0.002727f,-0.02733921f,0.003879f,0.0104355f,-0.02115657f,0.0046215f,0.00221625f,-0.02182896f,0.0074745f,-0.00732825f,-0.01860093f,0.004689f,-0.0087435f,-0.00426033f,0.005778f,-0.008559f,-0.00094023f,-0.005013f,0.00999225f,-0.00094023f,-0.005013f,0.01005075f,-0.00426033f,0.005778f,0.001062f,-0.0079515f,0.0077445f,0.001269f,-0.00012555f,-0.00780975f,-0.007308f,0.00969804f,0.00842625f,-0.0057915f,0.01270845f,-0.003339f,0.00170775f,0.01322739f,-0.00582075f,0.00880875f,0.01269729f,-0.00321075f,0.0088875f,0.00966456f,0.0085545f,-0.00955125f,0.0054126f,-0.00523575f,0.001269f,0.00610452f,-0.008154f,0.0106515f,0.0054126f,-0.00523575f,0.01091925f,0.00219015f,0.0085455f,0.0102015f,0.00280953f,0.009675f,0.00956025f,-0.00388089f,0.00918675f,0.0008145f,-0.00684945f,0.00838125f,-0.00812025f,-0.00380277f,0.00921825f,-0.00986625f,0.00287649f,0.0095355f,-0.0067455f,0.00951111f,0.00929925f,0.00817425f,0.00948042f,0.0094185f,-0.01091925f,0.002232f,0.008541f,0.0009945f,-0.00801009f,0.00797625f,-0.0093285f,-0.00490761f,0.008199f,0.0101205f,-0.00490761f,0.008199f});
  }
}
private class MFInt32589 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFInt32590 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFVec2f591 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f,0.1615f,0.7578f,0.1276f,0.7541f,0.1444f,0.9727f,0.1441f,0.7543f,0.1247f,0.7533f,0.1302f,0.9851f,0.1424f,0.9854f,0.1598f,0.7404f,0.1285f,0.7384f,0.1404f,0.7513f,0.1418f,0.7413f,0.123f,0.7378f,0.1249f,0.7355f,0.1424f,0.7545f,0.1231f,0.7416f,0.1216f,0.7546f,0.1229f,0.7417f,0.1214f,0.7496f,0.1479f,0.7498f,0.1481f,0.9738f,0.1409f,0.9839f,0.1396f,0.738f,0.1467f,0.7381f,0.1469f,0.9687f,0.1616f,0.9694f,0.1441f,0.9888f,0.1589f,0.988f,0.1416f,0.9725f,0.165f,0.9854f,0.1633f,0.9728f,0.1395f,0.9846f,0.1375f});
  }
}
private class MFVec3f592 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.00166725f,-0.02316258f,-0.00654525f,0.00914625f,-0.02214702f,0.0047385f,-0.006417f,-0.01999314f,0.00484875f,-0.008352f,-0.00421569f,0.00459225f,-0.008334f,-0.00397296f,-0.00448425f,0.008775f,0.00038781f,-0.004356f,-0.00898875f,0.0028458f,-0.00471825f,0.008766f,0.00014229f,0.0047205f,-0.00899775f,0.00269793f,0.00478575f,0.00498375f,0.00458397f,-0.00465975f,0.00497475f,0.0044361f,0.004842f,-0.00340425f,0.0040176f,0.00483525f,-0.00339525f,0.00416268f,-0.0046665f,0.0010845f,-0.00005022f,-0.006975f,0.00054675f,-0.00053289f,0.00757575f,0.00166725f,-0.02261853f,0.00724275f,-0.00432675f,-0.02781072f,0.0046845f,-0.0011115f,-0.0283464f,0.004833f,0.00914625f,-0.02250972f,-0.00435375f,0.00794925f,-0.02591352f,0.00403875f,0.00748125f,-0.02615904f,-0.00331425f,-0.00644625f,-0.02036979f,-0.00461025f,-0.0043515f,-0.0281232f,-0.00382275f,-0.00117675f,-0.0285417f,-0.003816f});
  }
}
private class MFInt32593 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFInt32594 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFVec2f595 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f,0.1465f,0.7541f,0.1444f,0.7513f,0.1418f,0.7384f,0.1404f,0.7355f,0.1424f,0.7377f,0.1451f,0.7372f,0.1554f,0.7483f,0.1563f,0.7507f,0.1564f,0.9726f,0.1318f,0.9727f,0.1441f,0.9847f,0.1302f,0.9851f,0.1424f,0.7347f,0.1548f,0.7409f,0.1641f,0.7434f,0.1641f,0.7455f,0.1632f,0.7469f,0.164f,0.9746f,0.124f,0.9828f,0.1229f,0.9766f,0.1225f,0.9807f,0.1219f,0.7351f,0.1625f,0.7369f,0.1626f,0.7443f,0.165f,0.7408f,0.1649f,0.7387f,0.1637f,0.7379f,0.1643f,0.9788f,0.1219f,0.7512f,0.1402f,0.7392f,0.1389f,0.7512f,0.14f,0.7393f,0.1388f,0.9694f,0.1441f,0.988f,0.1416f,0.9705f,0.1317f,0.9868f,0.1295f,0.9727f,0.1237f,0.9848f,0.1221f,0.9756f,0.1218f,0.9787f,0.1209f,0.9817f,0.1209f,0.973f,0.1475f,0.9849f,0.146f});
  }
}
private class MFVec3f596 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0071145f,-0.0026784f,0.00483525f,-0.00713925f,-0.00302436f,-0.0045315f,-0.00645525f,-0.01332783f,0.004635f,-0.00650925f,-0.01365705f,-0.0041445f,0.00801f,-0.01377423f,0.0049905f,0.0009765f,-0.01360683f,0.0066735f,0.0079515f,-0.01413135f,-0.00454725f,0.00089775f,-0.01409508f,-0.00624375f,-0.00529425f,-0.02153043f,0.00422775f,-0.00535275f,-0.02182059f,-0.00346275f,0.0081945f,-0.02243718f,0.0041175f,0.001575f,-0.0223479f,0.00582525f,0.008136f,-0.02271339f,-0.00324675f,0.0014895f,-0.02275245f,-0.0050085f,-0.0058095f,-0.02339694f,0.00042075f,0.00675675f,-0.02466639f,0.000414f,0.001116f,-0.02541411f,0.00045675f,-0.00560925f,-0.02294496f,0.0025335f,0.0069345f,-0.02429253f,-0.0013815f,0.00085725f,-0.02462733f,0.003258f,-0.0056475f,-0.0231291f,-0.00159525f,0.006966f,-0.02413629f,0.00228375f,0.00079425f,-0.02493981f,-0.002187f,0.008235f,0.00095697f,0.00454725f,-0.00735525f,0.00273978f,-0.00480375f,-0.007326f,0.00311364f,0.0046575f,-0.00265275f,0.00501642f,0.0042435f,-0.00265275f,0.00466767f,-0.0044955f,0.00517725f,0.00525078f,0.00423675f,0.008235f,0.00059427f,-0.004545f,0.00517725f,0.00490203f,-0.00450225f,0.00072f,0.00049104f,0.00704925f,0.00072f,-0.00005301f,-0.0067365f});
  }
}
}
