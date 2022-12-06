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
public class JoeSkeletonSiteSkinSaluteWalk {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JoeSkeletonSiteSkinSaluteWalk().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JoeSkeletonSiteSkinSaluteWalk.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(2))
        .addComments("TODO fix X3D Tooltips entry for HAnim component")
        .addMeta(new meta().setName("title").setContent("JoeSkeletonSiteSkinSaluteWalk.x3d"))
        .addMeta(new meta().setName("description").setContent("Attempting to show skeleton, skin, sites and animation"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSiteSkinSaluteWalk.original.x3dv"))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("created").setContent("9 January 2004"))
        .addMeta(new meta().setName("translated").setContent("4 December 2022"))
        .addMeta(new meta().setName("modified").setContent("4 December 2022"))
        .addMeta(new meta().setName("translator").setContent("Michalis Kamburelis"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d"))
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("filename").setContent("hanimLOA3A8320080320..x3dv 20080627"))
        .addMeta(new meta().setName("warning").setContent("Under development, numerous errors and warnings"))
        .addMeta(new meta().setName("TODO").setContent("Provide feedback to tovrmlx3d converter"))
        .addMeta(new meta().setName("TODO").setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics."))
        .addMeta(new meta().setName("TODO").setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"))
        .addMeta(new meta().setName("TODO").setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Group().setDEF("JointCenters_WorldInfo")
          .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")))
        .addChild(new Group()
          .addChild(new Transform().setScale(new float[] {10f,10f,10f}).setTranslation(new float[] {0f,3f,0f})
            .addChild(new Shape().setDEF("jointbox")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321().getArray()).setCreaseAngle(0.10000000149011612f)
                .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
                .setColor(new Color().setColor(new MFColor3().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f).setDiffuseColor(new float[] {0f,0f,0f}).setShininess(1f).setTransparency(1f)))))
          .addChild(new Transform().setScale(new float[] {0.10000000149011612f,0.10000000149011612f,0.10000000149011612f}).setTranslation(new float[] {0f,0.10000000149011612f,0f})
            .addChild(new Shape().setDEF("sitebox")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt324().getArray()).setCreaseAngle(0.10000000149011612f)
                .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1f).setDiffuseColor(new float[] {1f,0f,0f}).setEmissiveColor(new float[] {1f,0f,0f}).setShininess(0.699999988079071f).setSpecularColor(new float[] {1f,0f,0f}).setTransparency(0.6000000238418579f)))))
          .addChild(new Transform().setScale(new float[] {0.10000000149011612f,0.10000000149011612f,0.10000000149011612f}).setTranslation(new float[] {0f,0.20000000298023224f,0f})
            .addChild(new Shape()
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt326().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray())))
              .setAppearance(new Appearance().setDEF("SegmentLine")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0f,1f,0f}).setTransparency(0.800000011920929f)))))
          .addChild(new Transform().setScale(new float[] {0.10000000149011612f,0.10000000149011612f,0.10000000149011612f}).setTranslation(new float[] {0f,0.30000001192092896f,0f})
            .addChild(new Shape().setDEF("skinsphere")
              .setGeometry(new Sphere().setRadius(0.004999999888241291f))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f).setDiffuseColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,1f,0f}).setShininess(1f).setSpecularColor(new float[] {0f,1f,0f}))))))
        .addChild(new Group().setDEF("SpecHumanoid")
          .addChild(new Group().setDEF("JoeISOHumanoid")
            .addChild(new HAnimHumanoid().setName("Joe").setDEF("JoeHumanoid").setVersion("1.0")
              .addJoints(new HAnimJoint().setName("HumanoidRoot").setDEF("Joe_HumanoidRoot").setCenter(new float[] {0f,0.875f,0f}).setTranslation(new float[] {0f,0.875f,0f}).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
                .addChild(new HAnimSegment().setName("sacrum").setDEF("Joe_sacrum")
                  .addChild(new Shape().setUSE("jointbox"))
                  .addChild(new Shape()
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3210().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray())))
                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                .addChild(new HAnimJoint().setName("sacroiliac").setDEF("Joe_sacroiliac").setCenter(new float[] {0f,0.9200000166893005f,0f}).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray()).setTranslation(new float[] {0f,0.914900004863739f,0.0015999999595806003f}).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                  .addChild(new HAnimSegment().setName("pelvis").setDEF("Joe_pelvis")
                    .addChild(new Shape().setUSE("jointbox"))
                    .addChild(new Shape()
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3216().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray())))
                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                    .addChild(new HAnimSite().setName("l_iliocristale").setDEF("Joe_l_iliocristale").setTranslation(new float[] {0.14249999821186066f,1.065000057220459f,0.0032999999821186066f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("l_trochanterion").setDEF("Joe_l_trochanterion").setTranslation(new float[] {0.15000000596046448f,0.8999999761581421f,-0.009999999776482582f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("r_iliocristale").setDEF("Joe_r_iliocristale").setTranslation(new float[] {-0.14249999821186066f,1.065000057220459f,0.0032999999821186066f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("r_trochanterion").setDEF("Joe_r_trochanterion").setTranslation(new float[] {-0.15000000596046448f,0.8999999761581421f,-0.009999999776482582f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("l_asis").setDEF("Joe_l_asis").setTranslation(new float[] {0.09350000321865082f,1.0299999713897705f,0.07500000298023224f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("r_asis").setDEF("Joe_r_asis").setTranslation(new float[] {-0.09350000321865082f,1.0299999713897705f,0.07500000298023224f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("l_psis").setDEF("Joe_l_psis").setTranslation(new float[] {0.07729999721050262f,1.0190000534057617f,-0.11999999731779099f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("r_psis").setDEF("Joe_r_psis").setTranslation(new float[] {-0.07729999721050262f,1.0190000534057617f,-0.11999999731779099f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("floormarker").setDEF("Joe_floormarker")
                      .addChild(new Transform().setScale(new float[] {3f,3f,3f})
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimSite().setName("crotch").setDEF("Joe_crotch").setTranslation(new float[] {0f,0.8700000047683716f,-0.02199999988079071f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new Transform().setTranslation(new float[] {0f,0.9200000166893005f,0.07999999821186066f})
                      .addChild(new Shape().setUSE("skinsphere")))
                    .addChild(new Transform().setTranslation(new float[] {0f,0.8700000047683716f,-0.02199999988079071f})
                      .addChild(new Shape().setUSE("skinsphere"))))
                  .addChild(new HAnimJoint().setName("l_hip").setDEF("Joe_l_hip").setCenter(new float[] {0.10000000149011612f,0.9200000166893005f,0f}).setSkinCoordIndex(new MFInt3218().getArray()).setSkinCoordWeight(new MFFloat19().getArray()).setTranslation(new float[] {0.10000000149011612f,0.9200000166893005f,0f}).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                    .addChild(new HAnimSegment().setName("l_thigh").setDEF("Joe_l_thigh")
                      .addChild(new Shape().setUSE("jointbox"))
                      .addChild(new Shape()
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3222().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray())))
                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                      .addChild(new HAnimSite().setName("l_knee_crease").setDEF("Joe_l_knee_crease").setTranslation(new float[] {0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite().setName("l_femoral_lateral_epicn").setDEF("Joe_l_femoral_lateral_epicn").setTranslation(new float[] {0.17000000178813934f,0.4659999907016754f,0f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite().setName("l_femoral_medial_epicn").setDEF("Joe_l_femoral_medial_epicn").setTranslation(new float[] {0.05000000074505806f,0.4659999907016754f,0f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new Transform().setTranslation(new float[] {0.10000000149011612f,0.8999999761581421f,0.07750000059604645f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.07900000363588333f,0.9200000166893005f,-0.14000000059604645f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.17100000381469727f,0.6499999761581421f,0f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.019999999552965164f,0.6499999761581421f,0f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.10000000149011612f,0.6499999761581421f,-0.07999999821186066f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.10000000149011612f,0.6499999761581421f,0.07000000029802322f})
                        .addChild(new Shape().setUSE("skinsphere"))))
                    .addChild(new HAnimJoint().setName("l_knee").setDEF("Joe_l_knee").setCenter(new float[] {0.11500000208616257f,0.4659999907016754f,0f}).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray()).setTranslation(new float[] {0.11500000208616257f,0.4659999907016754f,0f}).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                      .addChild(new HAnimSegment().setName("l_calf").setDEF("Joe_l_calf")
                        .addChild(new Shape().setUSE("jointbox"))
                        .addChild(new Shape()
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3228().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray())))
                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                        .addChild(new HAnimSite().setName("l_lateral_malleolus").setDEF("Joe_l_lateral_malleolus").setTranslation(new float[] {0.15000000596046448f,0.07000000029802322f,0f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite().setName("l_medial_malleolus").setDEF("Joe_l_medial_malleolus").setTranslation(new float[] {0.08500000089406967f,0.0860000029206276f,0.012500000186264515f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.4659999907016754f,0.05999999865889549f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.17000000178813934f,0.4659999907016754f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.05000000074505806f,0.4659999907016754f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.17000000178813934f,0.30000001192092896f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.05999999865889549f,0.30000001192092896f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.10000000149011612f,0.30000001192092896f,-0.05000000074505806f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.10000000149011612f,0.30000001192092896f,0.05000000074505806f})
                          .addChild(new Shape().setUSE("skinsphere"))))
                      .addChild(new HAnimJoint().setName("l_ankle").setDEF("Joe_l_ankle").setCenter(new float[] {0.11500000208616257f,0.0689999982714653f,0f}).setSkinCoordIndex(new MFInt3230().getArray()).setSkinCoordWeight(new MFFloat31().getArray()).setTranslation(new float[] {0.11500000208616257f,0.0689999982714653f,0f}).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray())
                        .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("Joe_l_hindfoot")
                          .addChild(new Shape().setUSE("jointbox"))
                          .addChild(new Shape()
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3234().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray())))
                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                          .addChild(new HAnimSite().setName("l_sphyrion").setDEF("Joe_l_sphyrion").setTranslation(new float[] {0.09000000357627869f,0.0560000017285347f,0.012500000186264515f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite().setName("l_calcaneous_post").setDEF("Joe_l_calcaneous_post").setTranslation(new float[] {0.11500000208616257f,0.03999999910593033f,-0.054999999701976776f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new Transform().setTranslation(new float[] {0.15000000596046448f,0.07000000029802322f,0f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.08500000089406967f,0.0860000029206276f,0.012500000186264515f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.0689999982714653f,-0.04500000178813934f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.11699999868869781f,0.09749999642372131f,0.061500001698732376f})
                            .addChild(new Shape().setUSE("skinsphere"))))
                        .addChild(new HAnimJoint().setName("l_subtalar").setDEF("Joe_l_subtalar").setCenter(new float[] {0.11500000208616257f,0.03099999949336052f,0.029999999329447746f}).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray()).setTranslation(new float[] {0.11500000208616257f,0.03099999949336052f,0.029999999329447746f}).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                          .addChild(new HAnimSegment().setName("l_midproximal").setDEF("Joe_l_l_midproximal")
                            .addChild(new Shape().setUSE("jointbox"))
                            .addChild(new Shape()
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3240().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray())))
                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                            .addChild(new Transform().setTranslation(new float[] {0.13750000298023224f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.014999999664723873f,-0.04500000178813934f})
                              .addChild(new Shape().setUSE("skinsphere"))))
                          .addChild(new HAnimJoint().setName("l_midtarsal").setDEF("Joe_l_midtarsal").setCenter(new float[] {0.11500000208616257f,0.03700000047683716f,0.09000000357627869f}).setSkinCoordIndex(new MFInt3242().getArray()).setSkinCoordWeight(new MFFloat43().getArray()).setTranslation(new float[] {0.11500000208616257f,0.03700000047683716f,0.09000000357627869f}).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
                            .addChild(new HAnimSegment().setName("l_middistal").setDEF("Joe_l_middistal")
                              .addChild(new Shape().setUSE("jointbox"))
                              .addChild(new Shape()
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3246().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray())))
                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                              .addChild(new HAnimSite().setName("l_metatarsal_pha1").setDEF("Joe_l_metatarsal_pha1").setTranslation(new float[] {0.08699999749660492f,0.009999999776482582f,0.12200000137090683f})
                                .addChild(new Shape().setUSE("sitebox")))
                              .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.05999999865889549f,0.10000000149011612f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.16500000655651093f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.0949999988079071f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere"))))
                            .addChild(new HAnimJoint().setName("l_metatarsal").setDEF("Joe_l_metatarsal").setCenter(new float[] {0.11500000208616257f,0.019999999552965164f,0.12200000137090683f}).setSkinCoordIndex(new MFInt3248().getArray()).setSkinCoordWeight(new MFFloat49().getArray()).setTranslation(new float[] {0.11500000208616257f,0.019999999552965164f,0.12999999523162842f}).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                              .addChild(new HAnimSegment().setName("l_forefoot").setDEF("Joe_l_forefoot")
                                .addChild(new Shape().setUSE("jointbox"))
                                .addChild(new Shape()
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3252().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray())))
                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                .addChild(new HAnimSite().setName("l_metatarsal_pha5").setDEF("Joe_l_metatarsal_pha5").setTranslation(new float[] {0.16500000655651093f,0.009999999776482582f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("sitebox")))
                                .addChild(new HAnimSite().setName("l_digit2").setDEF("Joe_l_digit2").setTranslation(new float[] {0.10999999940395355f,0.010999999940395355f,0.1899999976158142f})
                                  .addChild(new Shape().setUSE("sitebox")))
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
                                  .addChild(new Shape().setUSE("skinsphere"))))))))))
                  .addChild(new HAnimJoint().setName("r_hip").setDEF("Joe_r_hip").setCenter(new float[] {-0.10000000149011612f,0.9200000166893005f,0f}).setSkinCoordIndex(new MFInt3254().getArray()).setSkinCoordWeight(new MFFloat55().getArray()).setUlimit(new MFFloat56().getArray()).setLlimit(new MFFloat57().getArray())
                    .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.9200000166893005f,0f})
                      .addChild(new Shape().setUSE("jointbox")))
                    .addChild(new HAnimSegment().setName("r_thigh").setDEF("Joe_r_thigh")
                      .addChild(new Shape()
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3258().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray())))
                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                      .addChild(new HAnimSite().setName("r_knee_crease").setDEF("Joe_r_knee_crease").setTranslation(new float[] {-0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite().setName("r_femoral_lateral_epicn").setDEF("Joe_r_femoral_lateral_epicn").setTranslation(new float[] {-0.17000000178813934f,0.4659999907016754f,0f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite().setName("r_femoral_medial_epicn").setDEF("Joe_r_femoral_medial_epicn").setTranslation(new float[] {-0.05000000074505806f,0.4659999907016754f,0f})
                        .addChild(new Shape().setUSE("sitebox")))
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
                        .addChild(new Shape().setUSE("skinsphere"))))
                    .addChild(new HAnimJoint().setName("r_knee").setDEF("Joe_r_knee").setCenter(new float[] {-0.05000000074505806f,0.4659999907016754f,0f}).setSkinCoordIndex(new MFInt3260().getArray()).setSkinCoordWeight(new MFFloat61().getArray()).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                      .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.49129998683929443f,0f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new HAnimSegment().setName("r_calf").setDEF("Joe_r_calf")
                        .addChild(new Shape()
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3264().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray())))
                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                        .addChild(new HAnimSite().setName("r_lateral_malleolus").setDEF("Joe_r_lateral_malleolus").setTranslation(new float[] {-0.15000000596046448f,0.07000000029802322f,0f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite().setName("r_medial_malleolus").setDEF("Joe_r_medial_malleolus").setTranslation(new float[] {-0.08500000089406967f,0.0860000029206276f,0.012500000186264515f})
                          .addChild(new Shape().setUSE("sitebox")))
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
                          .addChild(new Shape().setUSE("skinsphere"))))
                      .addChild(new HAnimJoint().setName("r_ankle").setDEF("Joe_r_ankle").setCenter(new float[] {-0.11500000208616257f,0.0689999982714653f,0f}).setSkinCoordIndex(new MFInt3266().getArray()).setSkinCoordWeight(new MFFloat67().getArray()).setUlimit(new MFFloat68().getArray()).setLlimit(new MFFloat69().getArray())
                        .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.07119999825954437f,0f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("Joe_r_hindfoot")
                          .addChild(new Shape()
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3270().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray())))
                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                          .addChild(new HAnimSite().setName("r_sphyrion").setDEF("Joe_r_sphyrion").setTranslation(new float[] {-0.09000000357627869f,0.0560000017285347f,0.012500000186264515f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite().setName("r_calcaneous_post").setDEF("Joe_r_calcaneous_post").setTranslation(new float[] {-0.11500000208616257f,0.03999999910593033f,-0.054999999701976776f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new Transform().setTranslation(new float[] {-0.15000000596046448f,0.07000000029802322f,0f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.08500000089406967f,0.0860000029206276f,0.012500000186264515f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.0689999982714653f,-0.04500000178813934f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.11699999868869781f,0.09749999642372131f,0.061500001698732376f})
                            .addChild(new Shape().setUSE("skinsphere"))))
                        .addChild(new HAnimJoint().setName("r_subtalar").setDEF("Joe_r_subtalar").setCenter(new float[] {-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f}).setSkinCoordIndex(new MFInt3272().getArray()).setSkinCoordWeight(new MFFloat73().getArray()).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                          .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new HAnimSegment().setName("r_midproximal").setDEF("Joe_r_midproximal")
                            .addChild(new Shape()
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3276().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray())))
                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                            .addChild(new Transform().setTranslation(new float[] {-0.13750000298023224f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere"))))
                          .addChild(new HAnimJoint().setName("r_midtarsal").setDEF("Joe_r_midtarsal").setCenter(new float[] {-0.11500000208616257f,0.03700000047683716f,0.09000000357627869f}).setSkinCoordIndex(new MFInt3278().getArray()).setSkinCoordWeight(new MFFloat79().getArray()).setUlimit(new MFFloat80().getArray()).setLlimit(new MFFloat81().getArray())
                            .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.019999999552965164f,0.07000000029802322f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new HAnimSegment().setName("r_middistal").setDEF("Joe_r_middistal")
                              .addChild(new Shape()
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3282().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray())))
                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                              .addChild(new HAnimSite().setName("r_metatarsal_pha1").setDEF("Joe_r_metatarsal_pha1").setTranslation(new float[] {-0.11500000208616257f,0.019999999552965164f,0.12200000137090683f})
                                .addChild(new Shape().setUSE("sitebox")))
                              .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.05999999865889549f,0.10000000149011612f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.16500000655651093f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.16500000655651093f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere"))))
                            .addChild(new HAnimJoint().setName("r_metatarsal").setDEF("Joe_r_metatarsal").setCenter(new float[] {-0.10000000149011612f,0.009999999776482582f,0.14000000059604645f}).setSkinCoordIndex(new MFInt3284().getArray()).setSkinCoordWeight(new MFFloat85().getArray()).setUlimit(new MFFloat86().getArray()).setLlimit(new MFFloat87().getArray())
                              .addChild(new Transform().setTranslation(new float[] {-0.10859999805688858f,0.009999999776482582f,0.14000000059604645f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new HAnimSegment().setName("r_forefoot").setDEF("Joe_r_forefoot")
                                .addChild(new Shape()
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3288().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray())))
                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                .addChild(new HAnimSite().setName("r_metatarsal_pha5").setDEF("Joe_r_metatarsal_pha5").setTranslation(new float[] {-0.16500000655651093f,0.009999999776482582f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("sitebox")))
                                .addChild(new HAnimSite().setName("r_digit2").setDEF("Joe_r_digit2").setTranslation(new float[] {-0.10999999940395355f,0.010999999940395355f,0.1899999976158142f})
                                  .addChild(new Shape().setUSE("sitebox")))
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
                                  .addChild(new Shape().setUSE("skinsphere")))))))))))
                .addChild(new HAnimJoint().setName("vl5").setDEF("Joe_vl5").setCenter(new float[] {0f,1.0449999570846558f,-0.0949999988079071f}).setSkinCoordIndex(new MFInt3290().getArray()).setSkinCoordWeight(new MFFloat91().getArray()).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
                  .addChild(new Transform().setTranslation(new float[] {0f,1.0449999570846558f,-0.0949999988079071f})
                    .addChild(new Shape().setUSE("jointbox")))
                  .addChild(new HAnimSegment().setName("toPelvis").setDEF("Joe_toPelvisMarker")
                    .addChild(new Shape()
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3294().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray())))
                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                  .addChild(new HAnimSegment().setName("l5").setDEF("Joe_l5")
                    .addChild(new Shape()
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3296().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray())))
                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                    .addChild(new HAnimSite().setName("waist_preferred_post").setDEF("Joe_waist_preferred_post").setTranslation(new float[] {0f,1.0915000438690186f,-0.10909999907016754f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite().setName("navel").setDEF("Joe_navel").setTranslation(new float[] {0f,1.0722500085830688f,0.09000000357627869f})
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint().setName("vl4").setDEF("Joe_vl4").setCenter(new float[] {0f,1.0679999589920044f,-0.08500000089406967f}).setUlimit(new MFFloat98().getArray()).setLlimit(new MFFloat99().getArray())
                    .addChild(new Transform().setTranslation(new float[] {0f,1.0679999589920044f,-0.08500000089406967f})
                      .addChild(new Shape().setUSE("jointbox")))
                    .addChild(new HAnimSegment().setName("l4").setDEF("Joe_l4")
                      .addChild(new Shape()
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32100().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray())))
                        .setAppearance(new Appearance().setUSE("SegmentLine"))))
                    .addChild(new HAnimJoint().setName("vl3").setDEF("Joe_vl3").setCenter(new float[] {0f,1.0920000076293945f,-0.07249999791383743f}).setUlimit(new MFFloat102().getArray()).setLlimit(new MFFloat103().getArray())
                      .addChild(new Transform().setTranslation(new float[] {0f,1.0920000076293945f,-0.07249999791383743f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new HAnimSegment().setName("l3").setDEF("Joe_l3")
                        .addChild(new Shape()
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32104().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f105().getArray())))
                          .setAppearance(new Appearance().setUSE("SegmentLine"))))
                      .addChild(new HAnimJoint().setName("vl2").setDEF("Joe_vl2").setCenter(new float[] {0f,1.1200000047683716f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32106().getArray()).setSkinCoordWeight(new MFFloat107().getArray()).setUlimit(new MFFloat108().getArray()).setLlimit(new MFFloat109().getArray())
                        .addChild(new Transform().setTranslation(new float[] {0f,1.1200000047683716f,-0.06499999761581421f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new HAnimSegment().setName("l2").setDEF("Joe_l2")
                          .addChild(new Shape()
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32110().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f111().getArray())))
                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                          .addChild(new HAnimSite().setName("r_rib10").setDEF("Joe_r_rib10").setTranslation(new float[] {-0.08699999749660492f,1.190000057220459f,0.09000000357627869f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite().setName("l_rib10").setDEF("Joe_l_rib10").setTranslation(new float[] {0.08699999749660492f,1.190000057220459f,0.09000000357627869f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite().setName("rib10_midspine").setDEF("Joe_rib10_midspine").setTranslation(new float[] {0f,1.1907999515533447f,-0.11129999905824661f})
                            .addChild(new Shape().setUSE("sitebox")))
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
                            .addChild(new Shape().setUSE("skinsphere"))))
                        .addChild(new HAnimJoint().setName("vl1").setDEF("Joe_vl1").setCenter(new float[] {0f,1.145900011062622f,-0.0625f}).setUlimit(new MFFloat112().getArray()).setLlimit(new MFFloat113().getArray())
                          .addChild(new Transform().setTranslation(new float[] {0f,1.145900011062622f,-0.0625f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new HAnimSegment().setName("l1").setDEF("Joe_l1")
                            .addChild(new Shape()
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32114().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f115().getArray())))
                              .setAppearance(new Appearance().setUSE("SegmentLine"))))
                          .addChild(new HAnimJoint().setName("vt12").setDEF("Joe_vt12").setCenter(new float[] {0f,1.1790000200271606f,-0.06800000369548798f}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                            .addChild(new Transform().setTranslation(new float[] {0f,1.1790000200271606f,-0.06800000369548798f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new HAnimSegment().setName("t12").setDEF("Joe_t12")
                              .addChild(new Shape()
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32118().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray())))
                                .setAppearance(new Appearance().setUSE("SegmentLine"))))
                            .addChild(new HAnimJoint().setName("vt11").setDEF("Joe_vt11").setCenter(new float[] {0f,1.267899990081787f,-0.08100000023841858f}).setUlimit(new MFFloat120().getArray()).setLlimit(new MFFloat121().getArray())
                              .addChild(new Transform().setTranslation(new float[] {0f,1.2144999504089355f,-0.0754999965429306f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new HAnimSegment().setName("t11").setDEF("Joe_t11")
                                .addChild(new Shape()
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32122().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f123().getArray())))
                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                              .addChild(new HAnimJoint().setName("vt10").setDEF("Joe_vt10").setCenter(new float[] {0f,1.2419999837875366f,-0.09000000357627869f}).setSkinCoordIndex(new MFInt32124().getArray()).setSkinCoordWeight(new MFFloat125().getArray()).setUlimit(new MFFloat126().getArray()).setLlimit(new MFFloat127().getArray())
                                .addChild(new Transform().setTranslation(new float[] {0f,1.2419999837875366f,-0.09000000357627869f})
                                  .addChild(new Shape().setUSE("jointbox")))
                                .addChild(new HAnimSegment().setName("t10").setDEF("Joe_t10")
                                  .addChild(new Shape()
                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32128().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f129().getArray())))
                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                  .addChild(new HAnimSite().setName("substernale").setDEF("Joe_substernale").setTranslation(new float[] {0f,1.25f,0.11299999803304672f})
                                    .addChild(new Shape().setUSE("sitebox"))))
                                .addChild(new HAnimJoint().setName("vt9").setDEF("Joe_vt9").setCenter(new float[] {0f,1.2680000066757202f,-0.10000000149011612f}).setSkinCoordIndex(new MFInt32130().getArray()).setSkinCoordWeight(new MFFloat131().getArray()).setUlimit(new MFFloat132().getArray()).setLlimit(new MFFloat133().getArray())
                                  .addChild(new Transform().setTranslation(new float[] {0f,1.2680000066757202f,-0.10000000149011612f})
                                    .addChild(new Shape().setUSE("jointbox")))
                                  .addChild(new HAnimSegment().setName("t9").setDEF("Joe_t9")
                                    .addChild(new Shape()
                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32134().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f135().getArray())))
                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                    .addChild(new HAnimSite().setName("r_thelion").setDEF("Joe_r_thelion").setTranslation(new float[] {-0.11349999904632568f,1.3179999589920044f,0.0949999988079071f})
                                      .addChild(new Shape().setUSE("sitebox")))
                                    .addChild(new HAnimSite().setName("l_thelion").setDEF("Joe_l_thelion").setTranslation(new float[] {0.11349999904632568f,1.3179999589920044f,0.0949999988079071f})
                                      .addChild(new Shape().setUSE("sitebox"))))
                                  .addChild(new HAnimJoint().setName("vt8").setDEF("Joe_vt8").setCenter(new float[] {0f,1.2940000295639038f,-0.10999999940395355f}).setUlimit(new MFFloat136().getArray()).setLlimit(new MFFloat137().getArray())
                                    .addChild(new Transform().setTranslation(new float[] {0f,1.2940000295639038f,-0.10999999940395355f})
                                      .addChild(new Shape().setUSE("jointbox")))
                                    .addChild(new HAnimSegment().setName("t8").setDEF("Joe_t8")
                                      .addChild(new Shape()
                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32138().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f139().getArray())))
                                        .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                    .addChild(new HAnimJoint().setName("vt7").setDEF("Joe_vt7").setCenter(new float[] {0f,1.3229999542236328f,-0.11550000309944153f}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                                      .addChild(new Transform().setTranslation(new float[] {0f,1.3229999542236328f,-0.11550000309944153f})
                                        .addChild(new Shape().setUSE("jointbox")))
                                      .addChild(new HAnimSegment().setName("t7").setDEF("Joe_t7")
                                        .addChild(new Shape()
                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32142().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray())))
                                          .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                      .addChild(new HAnimJoint().setName("vt6").setDEF("Joe_vt6").setCenter(new float[] {0f,1.3519999980926514f,-0.11999999731779099f}).setUlimit(new MFFloat144().getArray()).setLlimit(new MFFloat145().getArray())
                                        .addChild(new Transform().setTranslation(new float[] {0f,1.3519999980926514f,-0.11999999731779099f})
                                          .addChild(new Shape().setUSE("jointbox")))
                                        .addChild(new HAnimSegment().setName("t6").setDEF("Joe_t6")
                                          .addChild(new Shape()
                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32146().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f147().getArray())))
                                            .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                        .addChild(new HAnimJoint().setName("vt5").setDEF("Joe_vt5").setCenter(new float[] {0f,1.38100004196167f,-0.12349999696016312f}).setUlimit(new MFFloat148().getArray()).setLlimit(new MFFloat149().getArray())
                                          .addChild(new Transform().setTranslation(new float[] {0f,1.38100004196167f,-0.12349999696016312f})
                                            .addChild(new Shape().setUSE("jointbox")))
                                          .addChild(new HAnimSegment().setName("t5").setDEF("Joe_t5")
                                            .addChild(new Shape()
                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32150().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f151().getArray())))
                                              .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                          .addChild(new HAnimJoint().setName("vt4").setDEF("Joe_vt4").setCenter(new float[] {0f,1.409999966621399f,-0.12349999696016312f}).setSkinCoordIndex(new MFInt32152().getArray()).setSkinCoordWeight(new MFFloat153().getArray()).setUlimit(new MFFloat154().getArray()).setLlimit(new MFFloat155().getArray())
                                            .addChild(new Transform().setTranslation(new float[] {0f,1.409999966621399f,-0.12349999696016312f})
                                              .addChild(new Shape().setUSE("jointbox")))
                                            .addChild(new Transform().setTranslation(new float[] {0f,1.409999966621399f,-0.14499999582767487f})
                                              .addChild(new Shape().setUSE("skinsphere")))
                                            .addChild(new HAnimSegment().setName("t4").setDEF("Joe_t4")
                                              .addChild(new Shape()
                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32156().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f157().getArray())))
                                                .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                            .addChild(new HAnimJoint().setName("vt3").setDEF("Joe_vt3").setCenter(new float[] {0f,1.437999963760376f,-0.11999999731779099f}).setUlimit(new MFFloat158().getArray()).setLlimit(new MFFloat159().getArray())
                                              .addChild(new Transform().setTranslation(new float[] {0f,1.437999963760376f,-0.11999999731779099f})
                                                .addChild(new Shape().setUSE("jointbox")))
                                              .addChild(new HAnimSegment().setName("t3").setDEF("Joe_t3")
                                                .addChild(new Shape()
                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32160().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray())))
                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                              .addChild(new HAnimJoint().setName("vt2").setDEF("Joe_vt2").setCenter(new float[] {0f,1.468000054359436f,-0.10499999672174454f}).setUlimit(new MFFloat162().getArray()).setLlimit(new MFFloat163().getArray())
                                                .addChild(new Transform().setTranslation(new float[] {0f,1.468000054359436f,-0.10499999672174454f})
                                                  .addChild(new Shape().setUSE("jointbox")))
                                                .addChild(new HAnimSegment().setName("t2").setDEF("Joe_t2")
                                                  .addChild(new Shape()
                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32164().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f165().getArray())))
                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                .addChild(new HAnimJoint().setName("vt1").setDEF("Joe_vt1").setCenter(new float[] {0f,1.496999979019165f,-0.09000000357627869f}).setSkinCoordIndex(new MFInt32166().getArray()).setSkinCoordWeight(new MFFloat167().getArray()).setUlimit(new MFFloat168().getArray()).setLlimit(new MFFloat169().getArray())
                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.496999979019165f,-0.09000000357627869f})
                                                    .addChild(new Shape().setUSE("jointbox")))
                                                  .addChild(new HAnimSegment().setName("t1").setDEF("Joe_t1")
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32170().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f171().getArray())))
                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                    .addChild(new HAnimSite().setName("suprasternale").setDEF("Joe_suprasternale").setTranslation(new float[] {0f,1.440000057220459f,0.029999999329447746f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite().setName("cervicale").setDEF("Joe_cervicale").setTranslation(new float[] {0f,1.5299999713897705f,-0.08399999886751175f})
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint().setName("vc7").setDEF("Joe_vc7").setCenter(new float[] {0f,1.524999976158142f,-0.07199999690055847f}).setSkinCoordIndex(new MFInt32172().getArray()).setSkinCoordWeight(new MFFloat173().getArray()).setUlimit(new MFFloat174().getArray()).setLlimit(new MFFloat175().getArray())
                                                    .addChild(new Transform().setTranslation(new float[] {0f,1.524999976158142f,-0.07199999690055847f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new HAnimSegment().setName("c7").setDEF("Joe_c7")
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32176().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f177().getArray())))
                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                      .addChild(new HAnimSite().setName("r_neck_base").setDEF("Joe_r_neck_base").setTranslation(new float[] {-0.06459999829530716f,1.5148999691009521f,-0.03849999979138374f})
                                                        .addChild(new Shape().setUSE("sitebox")))
                                                      .addChild(new HAnimSite().setName("l_neck_base").setDEF("Joe_l_neck_base").setTranslation(new float[] {0.06459999829530716f,1.5148999691009521f,-0.03849999979138374f})
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint().setName("vc6").setDEF("Joe_vc6").setCenter(new float[] {0f,1.5399999618530273f,-0.05000000074505806f}).setUlimit(new MFFloat178().getArray()).setLlimit(new MFFloat179().getArray())
                                                      .addChild(new Transform().setTranslation(new float[] {0f,1.5399999618530273f,-0.05000000074505806f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSegment().setName("c6").setDEF("Joe_c6")
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32180().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f181().getArray())))
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                      .addChild(new HAnimJoint().setName("vc5").setDEF("Joe_vc5").setCenter(new float[] {0f,1.5520000457763672f,-0.03500000014901161f}).setUlimit(new MFFloat182().getArray()).setLlimit(new MFFloat183().getArray())
                                                        .addChild(new Transform().setTranslation(new float[] {0f,1.5520000457763672f,-0.03500000014901161f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new HAnimSegment().setName("c5").setDEF("Joe_c5")
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32184().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray())))
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                        .addChild(new HAnimJoint().setName("vc4").setDEF("Joe_vc4").setCenter(new float[] {0f,1.5674999952316284f,-0.025599999353289604f}).setUlimit(new MFFloat186().getArray()).setLlimit(new MFFloat187().getArray())
                                                          .addChild(new Transform().setTranslation(new float[] {0f,1.5674999952316284f,-0.025599999353289604f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new HAnimSegment().setName("c4").setDEF("Joe_c4")
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32188().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f189().getArray())))
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                          .addChild(new HAnimJoint().setName("vc3").setDEF("Joe_vc3").setCenter(new float[] {0f,1.5822499990463257f,-0.01850000023841858f}).setUlimit(new MFFloat190().getArray()).setLlimit(new MFFloat191().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {0f,1.5822499990463257f,-0.01850000023841858f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("c3").setDEF("Joe_c3")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32192().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f193().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                            .addChild(new HAnimJoint().setName("vc2").setDEF("Joe_vc2").setCenter(new float[] {0f,1.5950000286102295f,-0.017500000074505806f}).setUlimit(new MFFloat194().getArray()).setLlimit(new MFFloat195().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {0f,1.5950000286102295f,-0.017500000074505806f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("c2").setDEF("Joe_c2")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32196().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("vc1").setDEF("Joe_vc1").setCenter(new float[] {0f,1.6100000143051147f,-0.014999999664723873f}).setUlimit(new MFFloat198().getArray()).setLlimit(new MFFloat199().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {0f,1.6100000143051147f,-0.014999999664723873f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("c1").setDEF("Joe_c1")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32200().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f201().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("skullbase").setDEF("Joe_skullbase").setCenter(new float[] {0f,1.6299999952316284f,-0.009999999776482582f}).setSkinCoordIndex(new MFInt32202().getArray()).setSkinCoordWeight(new MFFloat203().getArray()).setUlimit(new MFFloat204().getArray()).setLlimit(new MFFloat205().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.6299999952316284f,-0.009999999776482582f})
                                                                    .addChild(new Transform().setScale(new float[] {2f,2f,2f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimSegment().setName("skull").setDEF("Joe_skull")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32206().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f207().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new HAnimSite().setName("skull_tip").setDEF("Joe_skull_tip").setTranslation(new float[] {0f,1.7699999809265137f,0f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("sellion").setDEF("Joe_sellion").setTranslation(new float[] {0f,1.6649999618530273f,0.09000000357627869f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("r_infraorbitale").setDEF("Joe_r_infraorbitale").setTranslation(new float[] {-0.032999999821186066f,1.6200000047683716f,0.08699999749660492f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("l_infraorbitale").setDEF("Joe_l_infraorbitale").setTranslation(new float[] {0.032999999821186066f,1.6200000047683716f,0.08699999749660492f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("supramenton").setDEF("Joe_supramenton").setTranslation(new float[] {0f,1.5499999523162842f,0.09700000286102295f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("r_tragion").setDEF("Joe_r_tragion").setTranslation(new float[] {-0.07699999958276749f,1.6399999856948853f,-0.009999999776482582f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("r_gonion").setDEF("Joe_r_gonion").setTranslation(new float[] {-0.052000001072883606f,1.5800000429153442f,0.014999999664723873f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("l_tragion").setDEF("Joe_l_tragion").setTranslation(new float[] {0.07699999958276749f,1.6399999856948853f,-0.009999999776482582f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("l_gonion").setDEF("Joe_l_gonion").setTranslation(new float[] {0.06310000270605087f,1.5800000429153442f,0.014999999664723873f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("nuchale").setDEF("Joe_nuchale").setTranslation(new float[] {0f,1.625f,-0.0925000011920929f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                                  .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("Joe_l_eyeball_joint").setCenter(new float[] {0.03400000184774399f,1.659000039100647f,0.05999999865889549f}).setUlimit(new MFFloat208().getArray()).setLlimit(new MFFloat209().getArray())
                                                                    .addChild(new Transform().setScale(new float[] {1f,1f,1.399999976158142f}).setTranslation(new float[] {0.03400000184774399f,1.6549999713897705f,0.06499999761581421f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSegment().setName("l_eyeball").setDEF("Joe_l_eyeball")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32210().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f211().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))))
                                                                  .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("Joe_r_eyeball_joint").setCenter(new float[] {-0.03400000184774399f,1.659000039100647f,0.05999999865889549f}).setUlimit(new MFFloat212().getArray()).setLlimit(new MFFloat213().getArray())
                                                                    .addChild(new Transform().setScale(new float[] {1f,1f,1.399999976158142f}).setTranslation(new float[] {-0.03400000184774399f,1.6549999713897705f,0.06499999761581421f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSegment().setName("r_eyeball").setDEF("Joe_r_eyeball")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32214().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f215().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))))))))))))
                                                  .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("Joe_l_sternoclavicular").setCenter(new float[] {0.0820000022649765f,1.448799967765808f,-0.03530000150203705f}).setSkinCoordIndex(new MFInt32216().getArray()).setSkinCoordWeight(new MFFloat217().getArray()).setUlimit(new MFFloat218().getArray()).setLlimit(new MFFloat219().getArray())
                                                    .addChild(new Transform().setTranslation(new float[] {0.0820000022649765f,1.448799967765808f,-0.03530000150203705f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new HAnimSegment().setName("l_clavicle").setDEF("Joe_l_clavicle")
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32220().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray())))
                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                      .addChild(new HAnimSite().setName("l_clavicale").setDEF("Joe_l_clavicale").setTranslation(new float[] {0.029999999329447746f,1.4600000381469727f,0.03500000014901161f})
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("Joe_l_acromioclavicular").setCenter(new float[] {0.09619999676942825f,1.426900029182434f,-0.042399998754262924f}).setSkinCoordIndex(new MFInt32222().getArray()).setSkinCoordWeight(new MFFloat223().getArray()).setUlimit(new MFFloat224().getArray()).setLlimit(new MFFloat225().getArray())
                                                      .addChild(new Transform().setTranslation(new float[] {0.09619999676942825f,1.426900029182434f,-0.042399998754262924f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSegment().setName("l_scapula").setDEF("Joe_l_scapula")
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32226().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f227().getArray())))
                                                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                        .addChild(new HAnimSite().setName("l_acromion").setDEF("Joe_l_acromion").setTranslation(new float[] {0.17499999701976776f,1.4824999570846558f,-0.05999999865889549f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite().setName("l_axilla_ant").setDEF("Joe_l_axilla_ant").setTranslation(new float[] {0.17000000178813934f,1.3799999952316284f,0.007000000216066837f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite().setName("l_axilla_post").setDEF("Joe_l_axilla_post").setTranslation(new float[] {0.1599999964237213f,1.3799999952316284f,-0.125f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new Transform().setTranslation(new float[] {0.10999999940395355f,1.4270000457763672f,-0.13750000298023224f})
                                                          .addChild(new Shape().setUSE("skinsphere"))))
                                                      .addChild(new HAnimJoint().setName("l_shoulder").setDEF("Joe_l_shoulder").setCenter(new float[] {0.20000000298023224f,1.440000057220459f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32228().getArray()).setSkinCoordWeight(new MFFloat229().getArray()).setUlimit(new MFFloat230().getArray()).setLlimit(new MFFloat231().getArray())
                                                        .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.440000057220459f,-0.03999999910593033f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new HAnimSegment().setName("l_upperarm").setDEF("Joe_l_upperarm")
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32232().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray())))
                                                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                          .addChild(new HAnimSite().setName("l_humeral_medial_epicn").setDEF("Joe_l_humeral_medial_epicn").setTranslation(new float[] {0.16500000655651093f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite().setName("l_radiale").setDEF("Joe_l_radiale").setTranslation(new float[] {0.23000000417232513f,1.1330000162124634f,-0.054999999701976776f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite().setName("l_humeral_lateral_epicn").setDEF("Joe_l_humeral_lateral_epicn").setTranslation(new float[] {0.24400000274181366f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.23499999940395355f,1.4199999570846558f,-0.0625f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.25f,1.2699999809265137f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.17000000178813934f,1.2699999809265137f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.2699999809265137f,-0.09000000357627869f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.2699999809265137f,0.019999999552965164f})
                                                            .addChild(new Shape().setUSE("skinsphere"))))
                                                        .addChild(new HAnimJoint().setName("l_elbow").setDEF("Joe_l_elbow").setCenter(new float[] {0.20000000298023224f,1.138800024986267f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32234().getArray()).setSkinCoordWeight(new MFFloat235().getArray()).setUlimit(new MFFloat236().getArray()).setLlimit(new MFFloat237().getArray())
                                                          .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new HAnimSegment().setName("l_forearm").setDEF("Joe_l_forearm")
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32238().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray())))
                                                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                            .addChild(new HAnimSite().setName("l_radial_styloid").setDEF("Joe_l_radial_styloid").setTranslation(new float[] {0.19009999930858612f,0.8644999861717224f,-0.04149999842047691f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite().setName("l_olecranon").setDEF("Joe_l_olecranon").setTranslation(new float[] {0.20000000298023224f,1.138800024986267f,-0.07999999821186066f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.138800024986267f,-0.013000000268220901f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.22499999403953552f,1f,-0.009999999776482582f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.22499999403953552f,1f,-0.07000000029802322f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1850000023841858f,1f,-0.009999999776482582f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1850000023841858f,1f,-0.07000000029802322f})
                                                              .addChild(new Shape().setUSE("skinsphere"))))
                                                          .addChild(new HAnimJoint().setName("l_wrist").setDEF("Joe_l_wrist").setCenter(new float[] {0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32240().getArray()).setSkinCoordWeight(new MFFloat241().getArray()).setUlimit(new MFFloat242().getArray()).setLlimit(new MFFloat243().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("l_hand").setDEF("Joe_l_hand")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32244().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                              .addChild(new HAnimSite().setName("l_metacarpal_pha2").setDEF("Joe_l_metacarpal_pha2").setTranslation(new float[] {0.20090000331401825f,0.8138999938964844f,-0.02370000071823597f})
                                                                .addChild(new Shape().setUSE("sitebox")))
                                                              .addChild(new HAnimSite().setName("l_ulnar_styloid").setDEF("Joe_l_ulnar_styloid").setTranslation(new float[] {0.2142000049352646f,0.8529000282287598f,-0.06480000168085098f})
                                                                .addChild(new Shape().setUSE("sitebox")))
                                                              .addChild(new HAnimSite().setName("l_metacarpal_pha5").setDEF("Joe_l_metacarpal_pha5").setTranslation(new float[] {0.19290000200271606f,0.7860000133514404f,-0.11219999939203262f})
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint().setName("l_thumb1").setDEF("Joe_l_thumb1").setCenter(new float[] {0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f}).setSkinCoordIndex(new MFInt32246().getArray()).setSkinCoordWeight(new MFFloat247().getArray()).setUlimit(new MFFloat248().getArray()).setLlimit(new MFFloat249().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("l_thumb_metacarpal").setDEF("Joe_l_thumb_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32250().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("l_thumb2").setDEF("Joe_l_thumb2").setCenter(new float[] {0.19509999454021454f,0.8226000070571899f,0.02459999918937683f}).setSkinCoordIndex(new MFInt32252().getArray()).setSkinCoordWeight(new MFFloat253().getArray()).setUlimit(new MFFloat254().getArray()).setLlimit(new MFFloat255().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {0.19509999454021454f,0.8226000070571899f,0.02459999918937683f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("l_thumb_distal").setDEF("Joe_l_thumb_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32256().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("l_thumb3").setDEF("Joe_l_thumb3").setCenter(new float[] {0.19550000131130219f,0.8159000277519226f,0.04639999940991402f}).setSkinCoordIndex(new MFInt32258().getArray()).setSkinCoordWeight(new MFFloat259().getArray()).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {0.19550000131130219f,0.8159000277519226f,0.04639999940991402f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("l_thumb_distal").setDEF("Joe_l_thumb_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32262().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new HAnimSite().setName("l_thumb_distal_tip").setDEF("Joe_l_thumb_distal_tip").setTranslation(new float[] {0.19820000231266022f,0.8061000108718872f,0.07590000331401825f})
                                                                      .addChild(new Shape().setUSE("sitebox")))))))
                                                            .addChild(new HAnimJoint().setName("l_index0").setDEF("Joe_l_index0").setCenter(new float[] {0.19830000400543213f,0.8023999929428101f,-0.02800000086426735f}).setSkinCoordIndex(new MFInt32264().getArray()).setSkinCoordWeight(new MFFloat265().getArray()).setUlimit(new MFFloat266().getArray()).setLlimit(new MFFloat267().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {0.19830000400543213f,0.8023999929428101f,-0.02800000086426735f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("l_index_metacarpal").setDEF("Joe_l_index_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32268().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f269().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("l_index1").setDEF("Joe_l_index1").setCenter(new float[] {0.19830000400543213f,0.781499981880188f,-0.02800000086426735f}).setSkinCoordIndex(new MFInt32270().getArray()).setSkinCoordWeight(new MFFloat271().getArray()).setUlimit(new MFFloat272().getArray()).setLlimit(new MFFloat273().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {0.19830000400543213f,0.781499981880188f,-0.02800000086426735f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("l_index_proximal").setDEF("Joe_l_index_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32274().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("l_index2").setDEF("Joe_l_index2").setCenter(new float[] {0.20170000195503235f,0.736299991607666f,-0.024800000712275505f}).setSkinCoordIndex(new MFInt32276().getArray()).setSkinCoordWeight(new MFFloat277().getArray()).setUlimit(new MFFloat278().getArray()).setLlimit(new MFFloat279().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {0.20170000195503235f,0.736299991607666f,-0.024800000712275505f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("l_index_middle").setDEF("Joe_l_index_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32280().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                  .addChild(new HAnimJoint().setName("l_index3").setDEF("Joe_l_index3").setCenter(new float[] {0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f}).setSkinCoordIndex(new MFInt32282().getArray()).setSkinCoordWeight(new MFFloat283().getArray()).setUlimit(new MFFloat284().getArray()).setLlimit(new MFFloat285().getArray())
                                                                    .addChild(new Transform().setTranslation(new float[] {0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSegment().setName("l_index_distal").setDEF("Joe_l_index_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32286().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new HAnimSite().setName("l_index_distal_tip").setDEF("Joe_l_index_distal_tip").setTranslation(new float[] {0.20890000462532043f,0.6858000159263611f,-0.02449999935925007f})
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new HAnimSite().setName("l_dactylion").setDEF("Joe_l_dactylion").setTranslation(new float[] {0.20559999346733093f,0.6743000149726868f,-0.04820000007748604f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint().setName("l_middle0").setDEF("Joe_l_middle0").setCenter(new float[] {0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f}).setSkinCoordIndex(new MFInt32288().getArray()).setSkinCoordWeight(new MFFloat289().getArray()).setUlimit(new MFFloat290().getArray()).setLlimit(new MFFloat291().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("l_middle_metacarpal").setDEF("Joe_l_middle_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32292().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("l_middle1").setDEF("Joe_l_middle1").setCenter(new float[] {0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f}).setSkinCoordIndex(new MFInt32294().getArray()).setSkinCoordWeight(new MFFloat295().getArray()).setUlimit(new MFFloat296().getArray()).setLlimit(new MFFloat297().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("l_middle_proximal").setDEF("Joe_l_middle_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32298().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("l_middle2").setDEF("Joe_l_middle2").setCenter(new float[] {0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f}).setSkinCoordIndex(new MFInt32300().getArray()).setSkinCoordWeight(new MFFloat301().getArray()).setUlimit(new MFFloat302().getArray()).setLlimit(new MFFloat303().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("l_middle_middle").setDEF("Joe_l_middle_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32304().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                  .addChild(new HAnimJoint().setName("l_middle3").setDEF("Joe_l_middle3").setCenter(new float[] {0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f}).setSkinCoordIndex(new MFInt32306().getArray()).setSkinCoordWeight(new MFFloat307().getArray()).setUlimit(new MFFloat308().getArray()).setLlimit(new MFFloat309().getArray())
                                                                    .addChild(new Transform().setTranslation(new float[] {0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSegment().setName("l_middle_distal").setDEF("Joe_l_middle_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32310().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new HAnimSite().setName("l_middle_distal_tip").setDEF("Joe_l_middle_distal_tip").setTranslation(new float[] {0.20800000429153442f,0.6730999946594238f,-0.04910000041127205f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint().setName("l_ring0").setDEF("Joe_l_ring0").setCenter(new float[] {0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f}).setSkinCoordIndex(new MFInt32312().getArray()).setSkinCoordWeight(new MFFloat313().getArray()).setUlimit(new MFFloat314().getArray()).setLlimit(new MFFloat315().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("l_ring_metacarpal").setDEF("Joe_l_ring_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32316().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f317().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("l_ring1").setDEF("Joe_l_ring1").setCenter(new float[] {0.1956000030040741f,0.781499981880188f,-0.07940000295639038f}).setSkinCoordIndex(new MFInt32318().getArray()).setSkinCoordWeight(new MFFloat319().getArray()).setUlimit(new MFFloat320().getArray()).setLlimit(new MFFloat321().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956000030040741f,0.781499981880188f,-0.07940000295639038f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("l_ring_proximal").setDEF("Joe_l_ring_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32322().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("l_ring2").setDEF("Joe_l_ring2").setCenter(new float[] {0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f}).setSkinCoordIndex(new MFInt32324().getArray()).setSkinCoordWeight(new MFFloat325().getArray()).setUlimit(new MFFloat326().getArray()).setLlimit(new MFFloat327().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("l_ring_middle").setDEF("Joe_l_ring_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32328().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                  .addChild(new HAnimJoint().setName("l_ring3").setDEF("Joe_l_ring3").setCenter(new float[] {0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f}).setSkinCoordIndex(new MFInt32330().getArray()).setSkinCoordWeight(new MFFloat331().getArray()).setUlimit(new MFFloat332().getArray()).setLlimit(new MFFloat333().getArray())
                                                                    .addChild(new Transform().setTranslation(new float[] {0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSegment().setName("l_ring_distal").setDEF("Joe_l_ring_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32334().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new HAnimSite().setName("l_ring_distal_tip").setDEF("Joe_l_ring_distal_tip").setTranslation(new float[] {0.20350000262260437f,0.675000011920929f,-0.07559999823570251f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint().setName("l_pinky0").setDEF("Joe_l_pinky0").setCenter(new float[] {0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f}).setSkinCoordIndex(new MFInt32336().getArray()).setSkinCoordWeight(new MFFloat337().getArray()).setUlimit(new MFFloat338().getArray()).setLlimit(new MFFloat339().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("l_pinky_metacarpal").setDEF("Joe_l_pinky_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32340().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("l_pinky1").setDEF("Joe_l_pinky1").setCenter(new float[] {0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f}).setSkinCoordIndex(new MFInt32342().getArray()).setSkinCoordWeight(new MFFloat343().getArray()).setUlimit(new MFFloat344().getArray()).setLlimit(new MFFloat345().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("l_pinky_proximal").setDEF("Joe_l_pinky_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32346().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("l_pinky2").setDEF("Joe_l_pinky2").setCenter(new float[] {0.19380000233650208f,0.745199978351593f,-0.10239999741315842f}).setSkinCoordIndex(new MFInt32348().getArray()).setSkinCoordWeight(new MFFloat349().getArray()).setUlimit(new MFFloat350().getArray()).setLlimit(new MFFloat351().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {0.19380000233650208f,0.745199978351593f,-0.10239999741315842f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("l_pinky_middle").setDEF("Joe_l_pinky_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32352().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                  .addChild(new HAnimJoint().setName("l_pinky3").setDEF("Joe_l_pinky3").setCenter(new float[] {0.19480000436306f,0.7276999950408936f,-0.10170000046491623f}).setSkinCoordIndex(new MFInt32354().getArray()).setSkinCoordWeight(new MFFloat355().getArray()).setUlimit(new MFFloat356().getArray()).setLlimit(new MFFloat357().getArray())
                                                                    .addChild(new Transform().setTranslation(new float[] {0.19480000436306f,0.7276999950408936f,-0.10170000046491623f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSegment().setName("l_pinky_distal").setDEF("Joe_l_pinky_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32358().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new HAnimSite().setName("l_pinky_distal_tip").setDEF("Joe_l_pinky_distal_tip").setTranslation(new float[] {0.2013999968767166f,0.7009000182151794f,-0.10119999945163727f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))))))))
                                                .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("Joe_r_sternoclavicular").setCenter(new float[] {-0.029999999329447746f,1.4600000381469727f,0f}).setSkinCoordIndex(new MFInt32360().getArray()).setSkinCoordWeight(new MFFloat361().getArray()).setUlimit(new MFFloat362().getArray()).setLlimit(new MFFloat363().getArray())
                                                  .addChild(new Transform().setTranslation(new float[] {-0.029999999329447746f,1.4600000381469727f,0.019999999552965164f})
                                                    .addChild(new Shape().setUSE("jointbox")))
                                                  .addChild(new HAnimSegment().setName("r_clavicle").setDEF("Joe_r_clavicle")
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32364().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray())))
                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                    .addChild(new HAnimSite().setName("r_clavicale").setDEF("Joe_r_clavicale").setTranslation(new float[] {-0.029999999329447746f,1.4600000381469727f,0.03500000014901161f})
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("Joe_r_acromioclavicular").setCenter(new float[] {-0.09000000357627869f,1.409999966621399f,-0.10999999940395355f}).setSkinCoordIndex(new MFInt32366().getArray()).setSkinCoordWeight(new MFFloat367().getArray()).setUlimit(new MFFloat368().getArray()).setLlimit(new MFFloat369().getArray())
                                                    .addChild(new Transform().setTranslation(new float[] {-0.09000000357627869f,1.409999966621399f,-0.09000000357627869f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new HAnimSegment().setName("r_scapula").setDEF("Joe_r_scapula")
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32370().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray())))
                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                      .addChild(new HAnimSite().setName("r_acromion").setDEF("Joe_r_acromion").setTranslation(new float[] {-0.17800000309944153f,1.4824999570846558f,-0.0625f})
                                                        .addChild(new Shape().setUSE("sitebox")))
                                                      .addChild(new HAnimSite().setName("r_axilla_ant").setDEF("Joe_r_axilla_ant").setTranslation(new float[] {-0.17000000178813934f,1.3799999952316284f,0.007000000216066837f})
                                                        .addChild(new Shape().setUSE("sitebox")))
                                                      .addChild(new HAnimSite().setName("r_axilla_post").setDEF("Joe_r_axilla_post").setTranslation(new float[] {-0.1599999964237213f,1.3799999952316284f,-0.12700000405311584f})
                                                        .addChild(new Shape().setUSE("sitebox")))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.10999999940395355f,1.4270000457763672f,-0.13750000298023224f})
                                                        .addChild(new Shape().setUSE("skinsphere"))))
                                                    .addChild(new HAnimJoint().setName("r_shoulder").setDEF("Joe_r_shoulder").setCenter(new float[] {-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32372().getArray()).setSkinCoordWeight(new MFFloat373().getArray()).setUlimit(new MFFloat374().getArray()).setLlimit(new MFFloat375().getArray())
                                                      .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSegment().setName("r_upperarm").setDEF("Joe_r_upperarm")
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32376().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray())))
                                                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                        .addChild(new HAnimSite().setName("r_humeral_medial_epicn").setDEF("Joe_r_humeral_medial_epicn").setTranslation(new float[] {-0.16500000655651093f,1.138800024986267f,-0.03999999910593033f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite().setName("r_radiale").setDEF("Joe_r_radiale").setTranslation(new float[] {-0.23000000417232513f,1.1330000162124634f,-0.054999999701976776f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite().setName("r_humeral_lateral_epicn").setDEF("Joe_r_humeral_lateral_epicn").setTranslation(new float[] {-0.24400000274181366f,1.138800024986267f,-0.03999999910593033f})
                                                          .addChild(new Shape().setUSE("sitebox")))
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
                                                          .addChild(new Shape().setUSE("skinsphere"))))
                                                      .addChild(new HAnimJoint().setName("r_elbow").setDEF("Joe_r_elbow").setCenter(new float[] {-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32378().getArray()).setSkinCoordWeight(new MFFloat379().getArray()).setUlimit(new MFFloat380().getArray()).setLlimit(new MFFloat381().getArray())
                                                        .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new HAnimSegment().setName("r_forearm").setDEF("Joe_r_forearm")
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32382().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray())))
                                                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                          .addChild(new HAnimSite().setName("r_radial_styloid").setDEF("Joe_r_radial_styloid").setTranslation(new float[] {-0.20000000298023224f,0.8999999761581421f,-0.014999999664723873f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite().setName("r_olecranon").setDEF("Joe_r_olecranon").setTranslation(new float[] {-0.20000000298023224f,1.138800024986267f,-0.07999999821186066f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.138800024986267f,0.013000000268220901f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.22499999403953552f,1f,-0.009999999776482582f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.22499999403953552f,1f,-0.07000000029802322f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1850000023841858f,1f,-0.009999999776482582f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1850000023841858f,1f,-0.07000000029802322f})
                                                            .addChild(new Shape().setUSE("skinsphere"))))
                                                        .addChild(new HAnimJoint().setName("r_wrist").setDEF("Joe_r_wrist").setCenter(new float[] {-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32384().getArray()).setSkinCoordWeight(new MFFloat385().getArray()).setUlimit(new MFFloat386().getArray()).setLlimit(new MFFloat387().getArray())
                                                          .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new HAnimSegment().setName("r_hand").setDEF("Joe_r_hand")
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32388().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray())))
                                                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                            .addChild(new HAnimSite().setName("r_ulnar_styloid").setDEF("Joe_r_ulnar_styloid").setTranslation(new float[] {-0.20000000298023224f,0.8999999761581421f,-0.08500000089406967f})
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint().setName("r_thumb1").setDEF("Joe_r_thumb1").setCenter(new float[] {-0.20000000298023224f,0.8500000238418579f,0f}).setSkinCoordIndex(new MFInt32390().getArray()).setSkinCoordWeight(new MFFloat391().getArray()).setUlimit(new MFFloat392().getArray()).setLlimit(new MFFloat393().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8500000238418579f,0f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("r_thumb_metacarpal").setDEF("Joe_r_thumb_metacarpal")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32394().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                            .addChild(new HAnimJoint().setName("r_thumb2").setDEF("Joe_r_thumb2").setCenter(new float[] {-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f}).setSkinCoordIndex(new MFInt32396().getArray()).setSkinCoordWeight(new MFFloat397().getArray()).setUlimit(new MFFloat398().getArray()).setLlimit(new MFFloat399().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("r_thumb_proximal").setDEF("Joe_r_thumb_proximal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32400().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f401().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("r_thumb3").setDEF("Joe_r_thumb3").setCenter(new float[] {-0.20000000298023224f,0.800000011920929f,0.05000000074505806f}).setSkinCoordIndex(new MFInt32402().getArray()).setSkinCoordWeight(new MFFloat403().getArray()).setUlimit(new MFFloat404().getArray()).setLlimit(new MFFloat405().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.800000011920929f,0.05000000074505806f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Transform().setDEF("Thumbnail").setTranslation(new float[] {-0.20000000298023224f,0.7850000262260437f,0.07500000298023224f})
                                                                  .addChild(new Shape().setUSE("sitebox")))
                                                                .addChild(new HAnimSegment().setName("r_thumb_distal").setDEF("Joe_r_thumb_distal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32406().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new HAnimSite().setName("r_thumb_distal_tip").setDEF("Joe_r_thumb_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.7799999713897705f,0.07000000029802322f})
                                                                    .addChild(new Shape().setUSE("sitebox")))))))
                                                          .addChild(new HAnimJoint().setName("r_index0").setDEF("Joe_r_index0").setCenter(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32408().getArray()).setSkinCoordWeight(new MFFloat409().getArray()).setUlimit(new MFFloat410().getArray()).setLlimit(new MFFloat411().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("r_index_metacarpal").setDEF("Joe_r_index_metacarpal")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32412().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                              .addChild(new HAnimSite().setName("r_metacarpal_pha2").setDEF("Joe_r_metacarpal_pha2").setTranslation(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.004999999888241291f})
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint().setName("r_index1").setDEF("Joe_r_index1").setCenter(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32414().getArray()).setSkinCoordWeight(new MFFloat415().getArray()).setUlimit(new MFFloat416().getArray()).setLlimit(new MFFloat417().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("r_index_proximal").setDEF("Joe_r_index_proximal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32418().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f419().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("r_index2").setDEF("Joe_r_index2").setCenter(new float[] {-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32420().getArray()).setSkinCoordWeight(new MFFloat421().getArray()).setUlimit(new MFFloat422().getArray()).setLlimit(new MFFloat423().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("r_index_middle").setDEF("Joe_r_index_middle")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32424().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("r_index3").setDEF("Joe_r_index3").setCenter(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32426().getArray()).setSkinCoordWeight(new MFFloat427().getArray()).setUlimit(new MFFloat428().getArray()).setLlimit(new MFFloat429().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("r_index_distal").setDEF("Joe_r_index_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32430().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new HAnimSite().setName("r_index_distal_tip").setDEF("Joe_r_index_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.6949999928474426f,-0.014999999664723873f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint().setName("r_middle0").setDEF("Joe_r_middle0").setCenter(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32432().getArray()).setSkinCoordWeight(new MFFloat433().getArray()).setUlimit(new MFFloat434().getArray()).setLlimit(new MFFloat435().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("r_middle_metacarpal").setDEF("Joe_r_middle_metacarpal")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32436().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                            .addChild(new HAnimJoint().setName("r_middle1").setDEF("Joe_r_middle1").setCenter(new float[] {-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32438().getArray()).setSkinCoordWeight(new MFFloat439().getArray()).setUlimit(new MFFloat440().getArray()).setLlimit(new MFFloat441().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("r_middle_proximal").setDEF("Joe_r_middle_proximal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32442().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("r_middle2").setDEF("Joe_r_middle2").setCenter(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32444().getArray()).setSkinCoordWeight(new MFFloat445().getArray()).setUlimit(new MFFloat446().getArray()).setLlimit(new MFFloat447().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("r_middle_middle").setDEF("Joe_r_middle_middle")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32448().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("r_middle3").setDEF("Joe_r_middle3").setCenter(new float[] {-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32450().getArray()).setSkinCoordWeight(new MFFloat451().getArray()).setUlimit(new MFFloat452().getArray()).setLlimit(new MFFloat453().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("r_middle_distal").setDEF("Joe_r_middle_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32454().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f455().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new HAnimSite().setName("r_dactylion").setDEF("Joe_r_dactylion").setTranslation(new float[] {-0.20000000298023224f,0.6800000071525574f,-0.03999999910593033f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite().setName("r_middle_distal_tip").setDEF("Joe_r_middle_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.6800000071525574f,-0.03999999910593033f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint().setName("r_ring0").setDEF("Joe_r_ring0").setCenter(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32456().getArray()).setSkinCoordWeight(new MFFloat457().getArray()).setUlimit(new MFFloat458().getArray()).setLlimit(new MFFloat459().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("r_ring_metacarpal").setDEF("Joe_r_ring_metacarpal")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32460().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f461().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                            .addChild(new HAnimJoint().setName("r_ring1").setDEF("Joe_r_ring1").setCenter(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32462().getArray()).setSkinCoordWeight(new MFFloat463().getArray()).setUlimit(new MFFloat464().getArray()).setLlimit(new MFFloat465().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("r_ring_proximal").setDEF("Joe_r_ring_proximal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32466().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("r_ring2").setDEF("Joe_r_ring2").setCenter(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32468().getArray()).setSkinCoordWeight(new MFFloat469().getArray()).setUlimit(new MFFloat470().getArray()).setLlimit(new MFFloat471().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("r_ring_middle").setDEF("Joe_r_ring_middle")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32472().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f473().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("r_ring3").setDEF("Joe_r_ring3").setCenter(new float[] {-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32474().getArray()).setSkinCoordWeight(new MFFloat475().getArray()).setUlimit(new MFFloat476().getArray()).setLlimit(new MFFloat477().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("r_ring_distal").setDEF("Joe_r_ring_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32478().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f479().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new HAnimSite().setName("r_ring_distal_tip").setDEF("Joe_r_ring_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.6949999928474426f,-0.06499999761581421f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint().setName("r_pinky0").setDEF("Joe_r_pinky0").setCenter(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f}).setSkinCoordIndex(new MFInt32480().getArray()).setSkinCoordWeight(new MFFloat481().getArray()).setUlimit(new MFFloat482().getArray()).setLlimit(new MFFloat483().getArray())
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new HAnimSegment().setName("r_pinky_metacarpal").setDEF("Joe_r_pinky_metacarpal")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32484().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f485().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                              .addChild(new HAnimSite().setName("r_metacarpal_pha5").setDEF("Joe_r_metacarpal_pha5").setTranslation(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.0949999988079071f})
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint().setName("r_pinky1").setDEF("Joe_r_pinky1").setCenter(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f}).setSkinCoordIndex(new MFInt32486().getArray()).setSkinCoordWeight(new MFFloat487().getArray()).setUlimit(new MFFloat488().getArray()).setLlimit(new MFFloat489().getArray())
                                                              .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSegment().setName("r_pinky_proximal").setDEF("Joe_r_pinky_proximal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32490().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f491().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                              .addChild(new HAnimJoint().setName("r_pinky2").setDEF("Joe_r_pinky2").setCenter(new float[] {-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f}).setSkinCoordIndex(new MFInt32492().getArray()).setSkinCoordWeight(new MFFloat493().getArray()).setUlimit(new MFFloat494().getArray()).setLlimit(new MFFloat495().getArray())
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSegment().setName("r_pinky_middle").setDEF("Joe_r_pinky_middle")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32496().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f497().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                .addChild(new HAnimJoint().setName("r_pinky3").setDEF("Joe_r_pinky3").setCenter(new float[] {-0.20000000298023224f,0.7350000143051147f,-0.09000000357627869f}).setSkinCoordIndex(new MFInt32498().getArray()).setSkinCoordWeight(new MFFloat499().getArray()).setUlimit(new MFFloat500().getArray()).setLlimit(new MFFloat501().getArray())
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7350000143051147f,-0.08500000089406967f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new HAnimSegment().setName("r_pinky_distal").setDEF("Joe_r_pinky_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32502().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f503().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new HAnimSite().setName("r_pinky_distal_tip").setDEF("Joe_r_pinky_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.08500000089406967f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))))))))))))))))))))))))
              .addJoints(new HAnimJoint().setUSE("Joe_sacroiliac"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_hip"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_knee"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_ankle"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_subtalar"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_midtarsal"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_metatarsal"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_hip"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_knee"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_ankle"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_subtalar"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_midtarsal"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_metatarsal"))
              .addJoints(new HAnimJoint().setUSE("Joe_vl5"))
              .addJoints(new HAnimJoint().setUSE("Joe_vl4"))
              .addJoints(new HAnimJoint().setUSE("Joe_vl3"))
              .addJoints(new HAnimJoint().setUSE("Joe_vl2"))
              .addJoints(new HAnimJoint().setUSE("Joe_vl1"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt12"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt11"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt10"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt9"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt8"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt7"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt6"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt5"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt4"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt3"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt2"))
              .addJoints(new HAnimJoint().setUSE("Joe_vt1"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc7"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc6"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc5"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc4"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc3"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc2"))
              .addJoints(new HAnimJoint().setUSE("Joe_vc1"))
              .addJoints(new HAnimJoint().setUSE("Joe_skullbase"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_eyeball_joint"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_eyeball_joint"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_sternoclavicular"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_acromioclavicular"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_shoulder"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_elbow"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_wrist"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_thumb1"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_thumb2"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_thumb3"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_index0"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_index1"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_index2"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_index3"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_middle0"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_middle1"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_middle2"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_middle3"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_ring0"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_ring1"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_ring2"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_ring3"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_pinky0"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_pinky1"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_pinky2"))
              .addJoints(new HAnimJoint().setUSE("Joe_l_pinky3"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_sternoclavicular"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_acromioclavicular"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_shoulder"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_elbow"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_wrist"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_thumb1"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_thumb2"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_thumb3"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_index0"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_index1"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_index2"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_index3"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_middle0"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_middle1"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_middle2"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_middle3"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_ring0"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_ring1"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_ring2"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_ring3"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_pinky0"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_pinky1"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_pinky2"))
              .addJoints(new HAnimJoint().setUSE("Joe_r_pinky3"))
              .addSkin(new Shape()
                .addSkin(new IndexedFaceSet().setCoordIndex(new MFInt32504().getArray().append(new MFInt32505().getArray()).append(new MFInt32506().getArray()).append(new MFInt32507().getArray())).setCreaseAngle(3.0999999046325684f)
                  .setCoord(new Coordinate().setDEF("JoeSkinCoord").setPoint(new MFVec3f508().getArray().append(new MFVec3f509().getArray())))
                  .setColor(new Color().setColor(new MFColor510().getArray().append(new MFColor511().getArray()).append(new MFColor512().getArray()))))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUrl(new MFString513().getArray()))
                  .setMaterial(new Material().setAmbientIntensity(0.6000000238418579f).setDiffuseColor(new float[] {0f,0f,0f}).setShininess(0.6000000238418579f))))
              .setSkinCoord(new Coordinate().setUSE("JoeSkinCoord"))
              .addJoints(new HAnimJoint().setUSE("Joe_HumanoidRoot")))))
        .addChild(new TimeSensor().setDEF("Time1").setCycleInterval(2.86d).setLoop(true))
        .addChild(new TimeSensor().setDEF("Time2").setCycleInterval(5.72d).setLoop(true))
        .addChild(new OrientationInterpolator().setDEF("Pitch").setKey(new MFFloat514().getArray()).setKeyValue(new MFRotation515().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Yaw").setKey(new MFFloat516().getArray()).setKeyValue(new MFRotation517().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Roll").setKey(new MFFloat518().getArray()).setKeyValue(new MFRotation519().getArray()))
        .addChild(new OrientationInterpolator().setDEF("vc6Yaw").setKey(new MFFloat520().getArray()).setKeyValue(new MFRotation521().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("vc6Yaw"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc6Yaw").setToField("set_rotation").setToNode("Joe_vc6"))
        .addChild(new OrientationInterpolator().setDEF("r_sternoclavicularRoll").setKey(new MFFloat522().getArray()).setKeyValue(new MFRotation523().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_acromioclavicularRoll").setKey(new MFFloat524().getArray()).setKeyValue(new MFRotation525().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_shoulderRoll").setKey(new MFFloat526().getArray()).setKeyValue(new MFRotation527().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ForeArmPitch").setKey(new MFFloat528().getArray()).setKeyValue(new MFRotation529().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_wristRoll").setKey(new MFFloat530().getArray()).setKeyValue(new MFRotation531().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_handPitch").setKey(new MFFloat532().getArray()).setKeyValue(new MFRotation533().getArray()))
        .addChild(new OrientationInterpolator().setDEF("l_shoulderRoll").setKey(new MFFloat534().getArray()).setKeyValue(new MFRotation535().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_sternoclavicularRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_acromioclavicularRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_shoulderRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_ForeArmPitch"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_wristRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_handPitch"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_sternoclavicularRoll").setToField("set_rotation").setToNode("Joe_r_sternoclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_acromioclavicularRoll").setToField("set_rotation").setToNode("Joe_r_acromioclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_shoulderRoll").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ForeArmPitch").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_wristRoll").setToField("set_rotation").setToNode("Joe_r_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_shoulderRoll").setToField("set_rotation").setToNode("Joe_l_shoulder"))
        .addChild(new Group()
          .addChild(new PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new MFFloat536().getArray()).setKeyValue(new MFVec3f537().getArray()))
          .addChild(new OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(new MFFloat538().getArray()).setKeyValue(new MFRotation539().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new MFFloat540().getArray()).setKeyValue(new MFRotation541().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new MFFloat542().getArray()).setKeyValue(new MFRotation543().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new MFFloat544().getArray()).setKeyValue(new MFRotation545().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new MFFloat546().getArray()).setKeyValue(new MFRotation547().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_subtalar_ANIMATOR").setKey(new MFFloat548().getArray()).setKeyValue(new MFRotation549().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(new MFFloat550().getArray()).setKeyValue(new MFRotation551().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_metatarsal_ANIMATOR").setKey(new MFFloat552().getArray()).setKeyValue(new MFRotation553().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new MFFloat554().getArray()).setKeyValue(new MFRotation555().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new MFFloat556().getArray()).setKeyValue(new MFRotation557().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_subtalar_ANIMATOR").setKey(new MFFloat558().getArray()).setKeyValue(new MFRotation559().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(new MFFloat560().getArray()).setKeyValue(new MFRotation561().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_metatarsal_ANIMATOR").setKey(new MFFloat562().getArray()).setKeyValue(new MFRotation563().getArray()))
          .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new MFFloat564().getArray()).setKeyValue(new MFRotation565().getArray()))
          .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new MFFloat566().getArray()).setKeyValue(new MFRotation567().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new MFFloat568().getArray()).setKeyValue(new MFRotation569().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new MFFloat570().getArray()).setKeyValue(new MFRotation571().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new MFFloat572().getArray()).setKeyValue(new MFRotation573().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new MFFloat574().getArray()).setKeyValue(new MFRotation575().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new MFFloat576().getArray()).setKeyValue(new MFRotation577().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new MFFloat578().getArray()).setKeyValue(new MFRotation579().getArray())))
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
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_WRIST_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_wrist"))
        .addChild(new NavigationInfo().setAvatarSize(new MFFloat580().getArray()).setHeadlight(false))
        .addChild(new Viewpoint().setDescription("Front Up View").setOrientation(new float[] {-1f,-1f,0f,0.550000011920929f}).setPosition(new float[] {-1f,2f,2.5f}))
        .addChild(new Viewpoint().setDescription("From Left View").setOrientation(new float[] {0.30000001192092896f,1f,0f,-1.5700000524520874f}).setPosition(new float[] {-2.5f,1.5f,0f}))
        .addChild(new Viewpoint().setDescription("Front Mid View").setPosition(new float[] {0f,0.5f,1.25f}))
        .addChild(new Viewpoint().setDescription("Front Feet View").setPosition(new float[] {0f,0f,0.75f}))
        .addChild(new Viewpoint().setDescription("From Right View").setOrientation(new float[] {0f,1f,0f,1.5700000524520874f}).setPosition(new float[] {1f,1f,0f}))
        .addChild(new Viewpoint().setDescription("Front Head View").setPosition(new float[] {0f,1.649999976158142f,0.75f}))
        .addChild(new Viewpoint().setDescription("Front Mid View").setPosition(new float[] {0f,1f,1.75f}))
        .addChild(new Viewpoint().setDescription("Rear View").setOrientation(new float[] {0f,1f,0f,3.140000104904175f}).setPosition(new float[] {0f,1.5f,-4f}))
        .addChild(new Viewpoint().setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.5700000524520874f}).setPosition(new float[] {0f,4f,0f}))
        .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(new float[] {1f,0f,0f,1.5700000524520874f}).setPosition(new float[] {0f,-4f,0f}))
        .addChild(new Background().setGroundAngle(new MFFloat581().getArray()).setGroundColor(new MFColor582().getArray()).setSkyColor(new MFColor583().getArray()))
        .addChild(new Transform().setDEF("cordsysfloor").setScale(new float[] {0.17499999701976776f,0.17499999701976776f,0.17499999701976776f})
          .addChild(new Inline().setUrl(new MFString584().getArray()))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"By Joe for Joe"});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.009999999776482582f,0f,-0.009999999776482582f,0f,0f,0f,0f,0.015699999406933784f,0.009999999776482582f,0f,0f,0f,0f,-0.009999999776482582f,0f,-0.009999999776482582f,0f});
  }
}
protected class MFColor3 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,1f,1f,0f,1f,1f,1f,1f,0f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.009999999776482582f,0f,-0.009999999776482582f,0f,0f,0f,0f,0.009999999776482582f,0.009999999776482582f,0f,0f,0f,0f,-0.009999999776482582f,0f,-0.009999999776482582f,0f});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0.00009999999747378752f,0f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.875f,0f,0f,0.9200000166893005f,0f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.3499999940395355f,0.3499999940395355f,1f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat15 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9200000166893005f,0f,0.09610000252723694f,0.9124000072479248f,0f,-0.0949999988079071f,0.9171000123023987f,0.002899999963119626f,0f,1.0449999570846558f,-0.0949999988079071f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
protected class MFFloat19 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6499999761581421f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.10000000149011612f,0.9200000166893005f,0f,0.11500000208616257f,0.4659999907016754f,0f});
  }
}
protected class MFInt3224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat27 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f29 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11500000208616257f,0.4659999907016754f,0f,0.10000000149011612f,0.0689999982714653f,0f});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.10000000149011612f,0.0689999982714653f,0f,0.11500000208616257f,0.03099999949336052f,0.029999999329447746f});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat38 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat39 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11500000208616257f,0.03099999949336052f,0.029999999329447746f,0.11500000208616257f,0.03700000047683716f,0.09000000357627869f});
  }
}
protected class MFInt3242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat44 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11500000208616257f,0.03700000047683716f,0.09000000357627869f,0.11500000208616257f,0.019999999552965164f,0.12200000137090683f});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11500000208616257f,0.019999999552965164f,0.12200000137090683f,0.13199999928474426f,0.013000000268220901f,0.1899999976158142f});
  }
}
protected class MFInt3254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6499999761581421f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.9200000166893005f,0f,-0.10000000149011612f,0.49129998683929443f,0f});
  }
}
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat62 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat63 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f65 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.49129998683929443f,0f,-0.10000000149011612f,0.07119999825954437f,0f});
  }
}
protected class MFInt3266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.07119999825954437f,0f,-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f});
  }
}
protected class MFInt3272 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f,-0.10000000149011612f,0.019999999552965164f,0.07000000029802322f});
  }
}
protected class MFInt3278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat81 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.019999999552965164f,0.07000000029802322f,-0.10000000149011612f,0.009999999776482582f,0.14000000059604645f});
  }
}
protected class MFInt3284 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.009999999776482582f,0.14000000059604645f,-0.10429999977350235f,0.0015999999595806003f,0.20000000298023224f});
  }
}
protected class MFInt3290 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
protected class MFFloat91 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0449999570846558f,-0.0949999988079071f,0f,0.914900004863739f,0.0015999999595806003f});
  }
}
protected class MFInt3296 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f97 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0449999570846558f,-0.0949999988079071f,0f,1.0679999589920044f,-0.08500000089406967f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat99 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f101 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0679999589920044f,-0.08500000089406967f,0f,1.0920000076293945f,-0.07249999791383743f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32104 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f105 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0920000076293945f,-0.07249999791383743f,0f,1.1200000047683716f,-0.06499999761581421f});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,0.699999988079071f,1f,0.800000011920929f});
  }
}
protected class MFFloat108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat109 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32110 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f111 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.1200000047683716f,-0.06499999761581421f,0f,1.145900011062622f,-0.0625f});
  }
}
protected class MFFloat112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat113 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32114 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f115 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.145900011062622f,-0.0625f,0f,1.1790000200271606f,-0.06800000369548798f});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat117 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f119 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.1790000200271606f,-0.06800000369548798f,0f,1.2419999837875366f,-0.09000000357627869f});
  }
}
protected class MFFloat120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat121 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32122 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f123 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2144999504089355f,-0.0754999965429306f,0f,1.2419999837875366f,-0.09000000357627869f});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
protected class MFFloat125 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat127 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32128 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f129 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2419999837875366f,-0.09000000357627869f,0f,1.2680000066757202f,-0.10000000149011612f});
  }
}
protected class MFInt32130 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
protected class MFFloat131 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat132 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat133 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32134 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f135 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2680000066757202f,-0.10000000149011612f,0f,1.2940000295639038f,-0.10999999940395355f});
  }
}
protected class MFFloat136 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat137 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32138 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f139 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2940000295639038f,-0.10999999940395355f,0f,1.3519999980926514f,-0.11999999731779099f});
  }
}
protected class MFFloat140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat141 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32142 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f143 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.3519999980926514f,-0.11999999731779099f,0f,1.38100004196167f,-0.12349999696016312f});
  }
}
protected class MFFloat144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat145 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32146 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f147 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.38100004196167f,-0.12349999696016312f,0f,1.409999966621399f,-0.12349999696016312f});
  }
}
protected class MFFloat148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat149 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32150 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f151 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.409999966621399f,-0.12349999696016312f,0f,1.437999963760376f,-0.11999999731779099f});
  }
}
protected class MFInt32152 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
protected class MFFloat153 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat155 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32156 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f157 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.409999966621399f,-0.12349999696016312f,0f,1.437999963760376f,-0.11999999731779099f});
  }
}
protected class MFFloat158 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat159 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32160 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f161 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.437999963760376f,-0.11999999731779099f,0f,1.468000054359436f,-0.10499999672174454f});
  }
}
protected class MFFloat162 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat163 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32164 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f165 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.468000054359436f,-0.10499999672174454f,0f,1.496999979019165f,-0.09000000357627869f});
  }
}
protected class MFInt32166 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
protected class MFFloat167 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat168 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat169 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32170 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f171 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.496999979019165f,-0.09000000357627869f,0f,1.524999976158142f,-0.07199999690055847f});
  }
}
protected class MFInt32172 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
protected class MFFloat173 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat175 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32176 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f177 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.524999976158142f,-0.07199999690055847f,0.0820000022649765f,1.448799967765808f,-0.03530000150203705f,-0.029999999329447746f,1.4600000381469727f,0.019999999552965164f,0f,1.5399999618530273f,-0.05000000074505806f});
  }
}
protected class MFFloat178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat179 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32180 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f181 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5399999618530273f,-0.05000000074505806f,0f,1.5674999952316284f,-0.025599999353289604f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32184 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f185 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5674999952316284f,-0.025599999353289604f,0f,1.5822499990463257f,-0.01850000023841858f});
  }
}
protected class MFFloat186 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat187 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32188 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f189 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5822499990463257f,-0.01850000023841858f,0f,1.5950000286102295f,-0.017500000074505806f});
  }
}
protected class MFFloat190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat191 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32192 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f193 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5950000286102295f,-0.017500000074505806f,0f,1.6100000143051147f,-0.014999999664723873f});
  }
}
protected class MFFloat194 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat195 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32196 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f197 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.6100000143051147f,-0.014999999664723873f,0f,1.614400029182434f,-0.0034000000450760126f});
  }
}
protected class MFFloat198 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat199 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32200 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f201 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.614400029182434f,-0.0034000000450760126f,0f,1.6299999952316284f,-0.009999999776482582f});
  }
}
protected class MFInt32202 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFFloat203 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat204 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat205 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32206 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f207 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.6299999952316284f,-0.009999999776482582f,0.03400000184774399f,1.659000039100647f,0.05999999865889549f,-0.03400000184774399f,1.6549999713897705f,0.06499999761581421f});
  }
}
protected class MFFloat208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat209 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f211 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.03400000184774399f,1.6549999713897705f,0.06499999761581421f,-0.03400000184774399f,1.6549999713897705f,0.06499999761581421f});
  }
}
protected class MFFloat212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f215 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.03400000184774399f,1.6549999713897705f,0.06499999761581421f,-0.03400000184774399f,1.6549999713897705f,0.06499999761581421f});
  }
}
protected class MFInt32216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
protected class MFFloat217 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f221 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0820000022649765f,1.448799967765808f,-0.03530000150203705f,0.09619999676942825f,1.426900029182434f,-0.042399998754262924f});
  }
}
protected class MFInt32222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
protected class MFFloat223 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat224 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat225 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f227 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.09619999676942825f,1.426900029182434f,-0.042399998754262924f,0.20000000298023224f,1.440000057220459f,-0.03999999910593033f});
  }
}
protected class MFInt32228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
protected class MFFloat229 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat230 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat231 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f233 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029000073671341f,1.440000057220459f,-0.03869999945163727f,0.20000000298023224f,1.138800024986267f,-0.03999999910593033f});
  }
}
protected class MFInt32234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
protected class MFFloat235 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat236 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat237 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f239 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20000000298023224f,1.138800024986267f,-0.03999999910593033f,0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f});
  }
}
protected class MFInt32240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
protected class MFFloat241 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat242 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat243 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
protected class MFVec3f245 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f,0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f,0.19830000400543213f,0.8023999929428101f,-0.02800000086426735f,0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f,0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f,0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f});
  }
}
protected class MFInt32246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
protected class MFFloat247 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f251 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f,0.19509999454021454f,0.8226000070571899f,0.02459999918937683f});
  }
}
protected class MFInt32252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
protected class MFFloat253 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFFloat254 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat255 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f257 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19509999454021454f,0.8226000070571899f,0.02459999918937683f,0.19550000131130219f,0.8159000277519226f,0.04639999940991402f});
  }
}
protected class MFInt32258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
protected class MFFloat259 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat261 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f263 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19550000131130219f,0.8159000277519226f,0.04639999940991402f,0.19820000231266022f,0.8061000108718872f,0.07590000331401825f});
  }
}
protected class MFInt32264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
protected class MFFloat265 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat266 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat267 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f269 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19830000400543213f,0.8023999929428101f,-0.02800000086426735f,0.19830000400543213f,0.781499981880188f,-0.02800000086426735f});
  }
}
protected class MFInt32270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
protected class MFFloat271 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFFloat272 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat273 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f275 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19830000400543213f,0.781499981880188f,-0.02800000086426735f,0.20170000195503235f,0.736299991607666f,-0.024800000712275505f});
  }
}
protected class MFInt32276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
protected class MFFloat277 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat278 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat279 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32280 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f281 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20170000195503235f,0.736299991607666f,-0.024800000712275505f,0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f});
  }
}
protected class MFInt32282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
protected class MFFloat283 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat284 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat285 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f287 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f,0.20890000462532043f,0.6858000159263611f,-0.02449999935925007f});
  }
}
protected class MFInt32288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
protected class MFFloat289 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat290 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat291 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32292 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f293 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f,0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f});
  }
}
protected class MFInt32294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
protected class MFFloat295 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat296 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f299 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f,0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f});
  }
}
protected class MFInt32300 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
protected class MFFloat301 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat302 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat303 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32304 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f305 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f,0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f});
  }
}
protected class MFInt32306 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat307 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat308 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat309 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32310 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f311 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f,0.20800000429153442f,0.6730999946594238f,-0.04910000041127205f});
  }
}
protected class MFInt32312 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
protected class MFFloat313 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat314 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat315 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32316 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f317 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f,0.1956000030040741f,0.781499981880188f,-0.07940000295639038f});
  }
}
protected class MFInt32318 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
protected class MFFloat319 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat320 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat321 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f323 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956000030040741f,0.781499981880188f,-0.07940000295639038f,0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f});
  }
}
protected class MFInt32324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
protected class MFFloat325 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat326 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat327 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f329 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f,0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f});
  }
}
protected class MFInt32330 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
protected class MFFloat331 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32334 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f335 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f,0.20350000262260437f,0.675000011920929f,-0.07559999823570251f});
  }
}
protected class MFInt32336 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
protected class MFFloat337 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat338 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat339 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32340 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f341 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f,0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f});
  }
}
protected class MFInt32342 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
protected class MFFloat343 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat345 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32346 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f347 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f,0.19380000233650208f,0.745199978351593f,-0.10239999741315842f});
  }
}
protected class MFInt32348 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
protected class MFFloat349 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat351 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32352 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f353 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19380000233650208f,0.745199978351593f,-0.10239999741315842f,0.19480000436306f,0.7276999950408936f,-0.10170000046491623f});
  }
}
protected class MFInt32354 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
protected class MFFloat355 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat357 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32358 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f359 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19480000436306f,0.7276999950408936f,-0.10170000046491623f,0.2013999968767166f,0.7009000182151794f,-0.10119999945163727f});
  }
}
protected class MFInt32360 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
protected class MFFloat361 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat362 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat363 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32364 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f365 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.029999999329447746f,1.4600000381469727f,0.019999999552965164f,-0.09000000357627869f,1.409999966621399f,-0.09000000357627869f});
  }
}
protected class MFInt32366 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
protected class MFFloat367 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,0.8999999761581421f});
  }
}
protected class MFFloat368 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat369 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32370 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f371 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09000000357627869f,1.409999966621399f,-0.09000000357627869f,-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f});
  }
}
protected class MFInt32372 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
protected class MFFloat373 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.10000000149011612f,1f,1f,1f,1f,1f,1f,1f,0.30000001192092896f,0.20000000298023224f});
  }
}
protected class MFFloat374 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat375 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32376 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f377 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f,-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f});
  }
}
protected class MFInt32378 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
protected class MFFloat379 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat380 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat381 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32382 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f383 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f,-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f});
  }
}
protected class MFInt32384 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
protected class MFFloat385 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat386 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat387 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32388 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
protected class MFVec3f389 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f,-0.20000000298023224f,0.8500000238418579f,0f,-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f,-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f,-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f,-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f});
  }
}
protected class MFInt32390 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
protected class MFFloat391 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat392 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat393 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32394 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f395 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8500000238418579f,0f,-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f});
  }
}
protected class MFInt32396 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
protected class MFFloat397 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFFloat398 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat399 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32400 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f401 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f,-0.20000000298023224f,0.800000011920929f,0.05000000074505806f});
  }
}
protected class MFInt32402 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
protected class MFFloat403 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat404 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat405 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32406 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f407 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.800000011920929f,0.05000000074505806f,-0.20000000298023224f,0.7799999713897705f,0.07000000029802322f});
  }
}
protected class MFInt32408 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
protected class MFFloat409 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat410 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat411 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32412 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f413 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f,-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f});
  }
}
protected class MFInt32414 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
protected class MFFloat415 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFFloat416 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat417 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32418 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f419 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f,-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f});
  }
}
protected class MFInt32420 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
protected class MFFloat421 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat422 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat423 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32424 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f425 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f,-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f});
  }
}
protected class MFInt32426 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
protected class MFFloat427 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat428 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat429 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32430 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f431 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f,-0.20000000298023224f,0.6949999928474426f,-0.014999999664723873f});
  }
}
protected class MFInt32432 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
protected class MFFloat433 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat434 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat435 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32436 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f437 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f,-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f});
  }
}
protected class MFInt32438 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
protected class MFFloat439 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat441 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32442 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f443 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f,-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f});
  }
}
protected class MFInt32444 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
protected class MFFloat445 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat446 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat447 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32448 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f449 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f,-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f});
  }
}
protected class MFInt32450 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
protected class MFFloat451 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat452 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat453 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32454 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f455 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f,-0.20000000298023224f,0.6758000254631042f,-0.03999999910593033f});
  }
}
protected class MFInt32456 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
protected class MFFloat457 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat458 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat459 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32460 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f461 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f,-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f});
  }
}
protected class MFInt32462 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
protected class MFFloat463 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat464 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat465 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32466 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f467 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f,-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f});
  }
}
protected class MFInt32468 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
protected class MFFloat469 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat470 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat471 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32472 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f473 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f,-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f});
  }
}
protected class MFInt32474 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
protected class MFFloat475 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat476 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat477 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32478 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f479 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f,-0.20000000298023224f,0.6949999928474426f,-0.06499999761581421f});
  }
}
protected class MFInt32480 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
protected class MFFloat481 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat482 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat483 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32484 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f485 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f,-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f});
  }
}
protected class MFInt32486 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
protected class MFFloat487 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat488 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat489 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32490 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f491 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f,-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f});
  }
}
protected class MFInt32492 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
protected class MFFloat493 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat494 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat495 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32496 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f497 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f,-0.20000000298023224f,0.7350000143051147f,-0.08500000089406967f});
  }
}
protected class MFInt32498 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
protected class MFFloat499 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat500 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat501 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32502 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f503 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7350000143051147f,-0.08500000089406967f,-0.20000000298023224f,0.7200000286102295f,-0.08500000089406967f});
  }
}
protected class MFInt32504 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
protected class MFInt32506 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
protected class MFInt32507 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
protected class MFVec3f508 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.7699999809265137f,0f,0f,1.6649999618530273f,0.09000000357627869f,-0.032999999821186066f,1.6200000047683716f,0.08699999749660492f,0.032999999821186066f,1.6200000047683716f,0.08699999749660492f,0f,1.5499999523162842f,0.09700000286102295f,-0.07699999958276749f,1.6399999856948853f,-0.009999999776482582f,-0.05270000174641609f,1.5800000429153442f,0.014999999664723873f,0.07699999958276749f,1.6399999856948853f,-0.009999999776482582f,0.05270000174641609f,1.5800000429153442f,0.014999999664723873f,0f,1.625f,-0.0925000011920929f,-0.029999999329447746f,1.4600000381469727f,0.03500000014901161f,0f,1.440000057220459f,0.029999999329447746f,0.029999999329447746f,1.4600000381469727f,0.03500000014901161f,-0.11349999904632568f,1.3179999589920044f,0.0949999988079071f,0.11349999904632568f,1.3179999589920044f,0.0949999988079071f,0f,1.25f,0.11299999803304672f,-0.08699999749660492f,1.190000057220459f,0.09000000357627869f,-0.09350000321865082f,1.0299999713897705f,0.07500000298023224f,0.08699999749660492f,1.190000057220459f,0.09000000357627869f,0.09350000321865082f,1.0299999713897705f,0.07500000298023224f,-0.14249999821186066f,1.065000057220459f,0.0032999999821186066f,-0.15000000596046448f,0.8999999761581421f,-0.009999999776482582f,0.14249999821186066f,1.065000057220459f,0.0032999999821186066f,0.15000000596046448f,0.8999999761581421f,-0.009999999776482582f,0f,1.5299999713897705f,-0.08399999886751175f,0.004900000058114529f,1.1907999515533447f,-0.1120000034570694f,-0.07729999721050262f,1.0190000534057617f,-0.11999999731779099f,0.07729999721050262f,1.0190000534057617f,-0.11999999731779099f,0.004999999888241291f,1.0915000438690186f,-0.10909999907016754f,-0.17800000309944153f,1.4824999570846558f,-0.06199999898672104f,-0.17000000178813934f,1.3799999952316284f,0.007000000216066837f,-0.18799999356269836f,0.8676000237464905f,-0.035999998450279236f,-0.1599999964237213f,1.3799999952316284f,-0.12700000405311584f,-0.20000000298023224f,1.138800024986267f,-0.07999999821186066f,-0.24400000274181366f,1.138800024986267f,-0.03999999910593033f,-0.16500000655651093f,1.138800024986267f,-0.03999999910593033f,-0.23000000417232513f,1.1330000162124634f,-0.054999999701976776f,-0.19769999384880066f,0.8169999718666077f,-0.01769999973475933f,-0.1941000074148178f,0.6769999861717224f,-0.04230000078678131f,-0.21170000731945038f,0.8560000061988831f,-0.058400001376867294f,-0.19300000369548798f,0.7889999747276306f,-0.10639999806880951f,0.17499999701976776f,1.4824999570846558f,-0.05999999865889549f,0.17000000178813934f,1.3799999952316284f,0.007000000216066837f,0.1899999976158142f,0.8644999861717224f,-0.04149999842047691f,0.1599999964237213f,1.3799999952316284f,-0.125f,0.20000000298023224f,1.138800024986267f,-0.07999999821186066f,0.16500000655651093f,1.138800024986267f,-0.03999999910593033f,0.24400000274181366f,1.138800024986267f,-0.03999999910593033f,0.23000000417232513f,1.1330000162124634f,-0.054999999701976776f,0.20090000331401825f,0.8138999938964844f,-0.02370000071823597f,0.20559999346733093f,0.6743000149726868f,-0.04820000007748604f,0.2142000049352646f,0.8529000282287598f,-0.06480000168085098f,0.19290000200271606f,0.7860000133514404f,-0.11219999939203262f,-0.10000000149011612f,0.49129998683929443f,-0.029999999329447746f,-0.17000000178813934f,0.4659999907016754f,0f,-0.05000000074505806f,0.4659999907016754f,0f,-0.16500000655651093f,0.009999999776482582f,0.11999999731779099f,-0.15000000596046448f,0.07000000029802322f,0f,-0.08500000089406967f,0.0860000029206276f,0.012500000186264515f,-0.09000000357627869f,0.0560000017285347f,0.012500000186264515f,-0.11500000208616257f,0.019999999552965164f,0.12200000137090683f,-0.11500000208616257f,0.03999999910593033f,-0.054999999701976776f,-0.10999999940395355f,0.010999999940395355f,0.1899999976158142f,0.09929999709129333f,0.4880000054836273f,-0.03099999949336052f,0.17000000178813934f,0.4659999907016754f,0f,0.05000000074505806f,0.48669999837875366f,0f,0.16500000655651093f,0.009999999776482582f,0.11999999731779099f,0.15000000596046448f,0.07000000029802322f,0f,0.08500000089406967f,0.0860000029206276f,0.012500000186264515f,0.09000000357627869f,0.0560000017285347f,0.012500000186264515f,0.11500000208616257f,0.019999999552965164f,0.12200000137090683f,0.11500000208616257f,0.03999999910593033f,-0.054999999701976776f,0.10999999940395355f,0.010999999940395355f,0.1899999976158142f,0f,0.875f,0f,-0.06459999829530716f,1.5149999856948853f,-0.03799999877810478f,0.06459999829530716f,1.5148999691009521f,-0.03799999877810478f,0f,1.0722500085830688f,0.09000000357627869f,-0.10999999940395355f,1.4270000457763672f,-0.13750000298023224f,-0.23499999940395355f,1.4199999570846558f,-0.0625f,0.10999999940395355f,1.4270000457763672f,-0.13750000298023224f,0.23499999940395355f,1.4199999570846558f,-0.0625f,0f,1.409999966621399f,-0.14499999582767487f,0f,0.925000011920929f,0.07999999821186066f,-0.08699999749660492f,1.190000057220459f,-0.09000000357627869f,0.08699999749660492f,1.190000057220459f,-0.09000000357627869f,0.1720000058412552f,1.3200000524520874f,-0.029999999329447746f,-0.1720000058412552f,1.3200000524520874f,-0.029999999329447746f,0.15000000596046448f,1.2300000190734863f,-0.014999999664723873f,-0.15000000596046448f,1.2300000190734863f,-0.014999999664723873f,0.07900000363588333f,0.9200000166893005f,-0.14000000059604645f,0.10000000149011612f,0.8999999761581421f,0.07699999958276749f,-0.07900000363588333f,0.9200000166893005f,-0.14000000059604645f,-0.10000000149011612f,0.8999999761581421f,0.07500000298023224f,0f,0.8700000047683716f,0f,0.17100000381469727f,0.6499999761581421f,0f,0.019999999552965164f,0.6499999761581421f,0f,0.10000000149011612f,0.6499999761581421f,-0.07999999821186066f,0.10000000149011612f,0.6499999761581421f,0.07000000029802322f,-0.17100000381469727f,0.6499999761581421f,0f,-0.019999999552965164f,0.6499999761581421f,0f,-0.10000000149011612f,0.6499999761581421f,-0.07999999821186066f,-0.10000000149011612f,0.6499999761581421f,0.07000000029802322f,0.25f,1.2699999809265137f,-0.03999999910593033f,0.17000000178813934f,1.2699999809265137f,-0.03999999910593033f,0.20000000298023224f,1.2699999809265137f,-0.09000000357627869f,0.20000000298023224f,1.2699999809265137f,0.019999999552965164f,0.24400000274181366f,1.138800024986267f,-0.03999999910593033f,0.16500000655651093f,1.138800024986267f,-0.03999999910593033f,0.20000000298023224f,1.138800024986267f,-0.07999999821186066f,0.20000000298023224f,1.138800024986267f,-0.013000000268220901f,0.22499999403953552f,1f,-0.009999999776482582f,0.22499999403953552f,1f,-0.07000000029802322f,0.1850000023841858f,1f,-0.009999999776482582f,0.1850000023841858f,1f,-0.07000000029802322f,0.20000000298023224f,1.138800024986267f,-0.03999999910593033f,0.22499999403953552f,0.9200000166893005f,-0.03999999910593033f,0.17499999701976776f,0.9200000166893005f,-0.03999999910593033f,0.20000000298023224f,0.9200000166893005f,-0.06499999761581421f,0.20000000298023224f,0.9200000166893005f,-0.014999999664723873f,0.22499999403953552f,0.8899999856948853f,-0.03999999910593033f,0.17499999701976776f,0.8899999856948853f,-0.03999999910593033f,0.20000000298023224f,0.8899999856948853f,-0.06499999761581421f,0.20000000298023224f,0.8899999856948853f,-0.014999999664723873f,0.21799999475479126f,0.8600000143051147f,-0.03999999910593033f,0.18400000035762787f,0.8600000143051147f,-0.03999999910593033f,0.20000000298023224f,0.8700000047683716f,-0.07000000029802322f,0.20000000298023224f,0.8700000047683716f,0f,0.20999999344348907f,0.8500000238418579f,0f,0.18539999425411224f,0.8500000238418579f,0f,0.21199999749660492f,0.8399999737739563f,-0.014999999664723873f,0.18299999833106995f,0.8399999737739563f,-0.014999999664723873f,0.21299999952316284f,0.8349999785423279f,-0.03999999910593033f,0.1899999976158142f,0.8349999785423279f,-0.03999999910593033f,0.210999995470047f,0.8349999785423279f,-0.06499999761581421f,0.19200000166893005f,0.8349999785423279f,-0.06499999761581421f,0.20800000429153442f,0.8399999737739563f,-0.08500000089406967f,0.1899999976158142f,0.8399999737739563f,-0.08500000089406967f,0.20000000298023224f,0.8399999737739563f,-0.0949999988079071f,0.2150000035762787f,0.8199999928474426f,0f,0.19300000369548798f,0.8149999976158142f,0.004999999888241291f,0.1979999989271164f,0.800000011920929f,0.012000000104308128f,0.20999999344348907f,0.8199999928474426f,0.029999999329447746f,0.1899999976158142f,0.8199999928474426f,0.029999999329447746f,0.20000000298023224f,0.8349999785423279f,0.039000000804662704f,0.21199999749660492f,0.800000011920929f,0.05000000074505806f,0.18799999356269836f,0.800000011920929f,0.05000000074505806f,0.20000000298023224f,0.8069999814033508f,0.05700000002980232f,0.20000000298023224f,0.7929999828338623f,0.03500000014901161f,0.20000000298023224f,0.7739999890327454f,0.07599999755620956f,0.21199999749660492f,0.7799999713897705f,0.07000000029802322f,0.18799999356269836f,0.7799999713897705f,0.07000000029802322f,0.20000000298023224f,0.7850000262260437f,0.07500000298023224f,0.20000000298023224f,0.7699999809265137f,0.06199999898672104f,0.2150000035762787f,0.7929999828338623f,-0.014999999664723873f,0.18700000643730164f,0.7929999828338623f,-0.014999999664723873f,0.20000000298023224f,0.7929999828338623f,-0.004999999888241291f,0.2150000035762787f,0.7879999876022339f,-0.03999999910593033f,0.18700000643730164f,0.7879999876022339f,-0.03999999910593033f,0.2150000035762787f,0.7929999828338623f,-0.06499999761581421f,0.18700000643730164f,0.7929999828338623f,-0.06499999761581421f,0.20999999344348907f,0.7900000214576721f,-0.08500000089406967f,0.1899999976158142f,0.7900000214576721f,-0.08500000089406967f,0.20000000298023224f,0.7900000214576721f,-0.0949999988079071f,0.1899999976158142f,0.7699999809265137f,-0.027499999850988388f,0.1899999976158142f,0.7699999809265137f,-0.05249999836087227f,0.1899999976158142f,0.7799999713897705f,-0.07750000059604645f,0.21199999749660492f,0.7450000047683716f,-0.014999999664723873f,0.18799999356269836f,0.7450000047683716f,-0.019999999552965164f,0.20000000298023224f,0.7450000047683716f,-0.025499999523162842f,0.20000000298023224f,0.7450000047683716f,-0.0044999998062849045f,0.210999995470047f,0.7200000286102295f,-0.014999999664723873f,0.1889999955892563f,0.7200000286102295f,-0.014999999664723873f,0.20000000298023224f,0.7200000286102295f,-0.025200000032782555f,0.20000000298023224f,0.7200000286102295f,-0.004800000227987766f,0.20999999344348907f,0.6949999928474426f,-0.014999999664723873f,0.1899999976158142f,0.6949999928474426f,-0.014999999664723873f,0.20000000298023224f,0.6949999928474426f,-0.02500000037252903f,0.20000000298023224f,0.6949999928474426f,-0.004999999888241291f,0.20000000298023224f,0.6850000023841858f,-0.014999999664723873f,0.2150000035762787f,0.7400000095367432f,-0.03999999910593033f,0.1850000023841858f,0.7400000095367432f,-0.03999999910593033f,0.20000000298023224f,0.7400000095367432f,-0.054999999701976776f,0.20000000298023224f,0.7400000095367432f,-0.02500000037252903f,0.20999999344348907f,0.7142000198364258f,-0.03999999910593033f,0.1899999976158142f,0.7142000198364258f,-0.03999999910593033f,0.20000000298023224f,0.7142000198364258f,-0.05299999937415123f,0.20000000298023224f,0.7142000198364258f,-0.027000000700354576f,0.20999999344348907f,0.6800000071525574f,-0.03999999910593033f,0.1899999976158142f,0.6800000071525574f,-0.03999999910593033f,0.20000000298023224f,0.6800000071525574f,-0.05000000074505806f,0.20000000298023224f,0.6800000071525574f,-0.029999999329447746f,0.20000000298023224f,0.6700000166893005f,-0.03999999910593033f,0.21199999749660492f,0.7400000095367432f,-0.06499999761581421f,0.18799999356269836f,0.7400000095367432f,-0.06499999761581421f,0.20000000298023224f,0.7400000095367432f,-0.07559999823570251f,0.20000000298023224f,0.7400000095367432f,-0.05420000106096268f,0.20999999344348907f,0.7177000045776367f,-0.06499999761581421f,0.1899999976158142f,0.7177000045776367f,-0.06499999761581421f,0.20000000298023224f,0.7177000045776367f,-0.07509999722242355f,0.20000000298023224f,0.7177000045776367f,-0.05490000173449516f,0.20999999344348907f,0.6949999928474426f,-0.06499999761581421f,0.1899999976158142f,0.6949999928474426f,-0.06499999761581421f,0.20000000298023224f,0.6949999928474426f,-0.07500000298023224f,0.20000000298023224f,0.6949999928474426f,-0.054999999701976776f,0.20000000298023224f,0.6850000023841858f,-0.06499999761581421f,0.210999995470047f,0.7549999952316284f,-0.08500000089406967f,0.1889999955892563f,0.7549999952316284f,-0.08500000089406967f,0.20000000298023224f,0.7549999952316284f,-0.09520000219345093f,0.20000000298023224f,0.7549999952316284f,-0.07479999959468842f,0.20999999344348907f,0.7350000143051147f,-0.08500000089406967f,0.1899999976158142f,0.7350000143051147f,-0.08500000089406967f,0.20000000298023224f,0.7350000143051147f,-0.09510000050067902f,0.20000000298023224f,0.7350000143051147f,-0.07490000128746033f,0.20999999344348907f,0.7200000286102295f,-0.08500000089406967f,0.1899999976158142f,0.7200000286102295f,-0.08500000089406967f,0.20000000298023224f,0.7200000286102295f,-0.0949999988079071f,0.20000000298023224f,0.7200000286102295f,-0.07500000298023224f,0.20000000298023224f,0.7099999785423279f,-0.08500000089406967f,-0.23000000417232513f,1.2300000190734863f,-0.03999999910593033f,-0.1599999964237213f,1.2300000190734863f,-0.03999999910593033f,-0.20000000298023224f,1.2350000143051147f,-0.10499999672174454f,-0.20000000298023224f,1.2350000143051147f,0.019999999552965164f,-0.24400000274181366f,1.138800024986267f,-0.03999999910593033f,-0.16500000655651093f,1.138800024986267f,-0.03999999910593033f,-0.20000000298023224f,1.138800024986267f,-0.07999999821186066f,-0.20000000298023224f,1.138800024986267f,0.013000000268220901f,-0.22499999403953552f,1f,-0.009999999776482582f,-0.22499999403953552f,1f,-0.07000000029802322f,-0.1850000023841858f,1f,-0.009999999776482582f,-0.1850000023841858f,1f,-0.07000000029802322f,-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f,-0.22499999403953552f,0.9200000166893005f,-0.03999999910593033f,-0.17499999701976776f,0.9200000166893005f,-0.03999999910593033f,-0.20000000298023224f,0.9200000166893005f,-0.06499999761581421f,-0.20000000298023224f,0.9200000166893005f,-0.014999999664723873f,-0.22499999403953552f,0.8899999856948853f,-0.03999999910593033f,-0.17499999701976776f,0.8899999856948853f,-0.03999999910593033f,-0.20000000298023224f,0.8899999856948853f,-0.06499999761581421f,-0.20000000298023224f,0.8899999856948853f,-0.014999999664723873f,-0.21799999475479126f,0.8600000143051147f,-0.03999999910593033f,-0.18400000035762787f,0.8600000143051147f,-0.03999999910593033f,-0.20000000298023224f,0.8700000047683716f,-0.07000000029802322f,-0.20000000298023224f,0.8700000047683716f,0f,-0.20999999344348907f,0.8500000238418579f,0f,-0.18539999425411224f,0.8500000238418579f,0f,-0.21199999749660492f,0.8399999737739563f,-0.014999999664723873f,-0.18299999833106995f,0.8399999737739563f,-0.014999999664723873f,-0.21299999952316284f,0.8349999785423279f,-0.03999999910593033f,-0.1899999976158142f,0.8349999785423279f,-0.03999999910593033f,-0.210999995470047f,0.8349999785423279f,-0.06499999761581421f,-0.19200000166893005f,0.8349999785423279f,-0.06499999761581421f,-0.20800000429153442f,0.8399999737739563f,-0.08500000089406967f,-0.1899999976158142f,0.8399999737739563f,-0.08500000089406967f,-0.20000000298023224f,0.8399999737739563f,-0.0949999988079071f,-0.2150000035762787f,0.8199999928474426f,0f,-0.19300000369548798f,0.8149999976158142f,0.004999999888241291f,-0.1979999989271164f,0.800000011920929f,0.012000000104308128f,-0.20999999344348907f,0.8199999928474426f,0.029999999329447746f,-0.1899999976158142f,0.8199999928474426f,0.029999999329447746f,-0.20000000298023224f,0.8349999785423279f,0.039000000804662704f,-0.21199999749660492f,0.800000011920929f,0.05000000074505806f,-0.18799999356269836f,0.800000011920929f,0.05000000074505806f,-0.20000000298023224f,0.8069999814033508f,0.05700000002980232f,-0.20000000298023224f,0.7929999828338623f,0.03500000014901161f,-0.20000000298023224f,0.7739999890327454f,0.07599999755620956f,-0.21199999749660492f,0.7799999713897705f,0.07000000029802322f,-0.18799999356269836f,0.7799999713897705f,0.07000000029802322f,-0.20000000298023224f,0.7850000262260437f,0.07500000298023224f,-0.20000000298023224f,0.7699999809265137f,0.06199999898672104f,-0.2150000035762787f,0.7929999828338623f,-0.014999999664723873f,-0.18700000643730164f,0.7929999828338623f,-0.014999999664723873f,-0.20000000298023224f,0.7929999828338623f,-0.004999999888241291f,-0.2150000035762787f,0.7879999876022339f,-0.03999999910593033f,-0.18700000643730164f,0.7879999876022339f,-0.03999999910593033f,-0.2150000035762787f,0.7929999828338623f,-0.06499999761581421f,-0.18700000643730164f,0.7929999828338623f,-0.06499999761581421f,-0.20999999344348907f,0.7900000214576721f,-0.08500000089406967f,-0.1899999976158142f,0.7900000214576721f,-0.08500000089406967f,-0.20000000298023224f,0.7900000214576721f,-0.0949999988079071f,-0.1899999976158142f,0.7699999809265137f,-0.027499999850988388f});
  }
}
protected class MFVec3f509 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899999976158142f,0.7699999809265137f,-0.05249999836087227f,-0.1899999976158142f,0.7799999713897705f,-0.07750000059604645f,-0.21199999749660492f,0.7450000047683716f,-0.014999999664723873f,-0.18799999356269836f,0.7450000047683716f,-0.019999999552965164f,-0.20000000298023224f,0.7450000047683716f,-0.025499999523162842f,-0.20000000298023224f,0.7450000047683716f,-0.0044999998062849045f,-0.210999995470047f,0.7200000286102295f,-0.014999999664723873f,-0.1889999955892563f,0.7200000286102295f,-0.014999999664723873f,-0.20000000298023224f,0.7200000286102295f,-0.025200000032782555f,-0.20000000298023224f,0.7200000286102295f,-0.004800000227987766f,-0.20999999344348907f,0.6949999928474426f,-0.014999999664723873f,-0.1899999976158142f,0.6949999928474426f,-0.014999999664723873f,-0.20000000298023224f,0.6949999928474426f,-0.02500000037252903f,-0.20000000298023224f,0.6949999928474426f,-0.004999999888241291f,-0.20000000298023224f,0.6850000023841858f,-0.014999999664723873f,-0.2150000035762787f,0.7400000095367432f,-0.03999999910593033f,-0.1850000023841858f,0.7400000095367432f,-0.03999999910593033f,-0.20000000298023224f,0.7400000095367432f,-0.054999999701976776f,-0.20000000298023224f,0.7400000095367432f,-0.02500000037252903f,-0.20999999344348907f,0.7142000198364258f,-0.03999999910593033f,-0.1899999976158142f,0.7142000198364258f,-0.03999999910593033f,-0.20000000298023224f,0.7142000198364258f,-0.05299999937415123f,-0.20000000298023224f,0.7142000198364258f,-0.027000000700354576f,-0.20999999344348907f,0.6800000071525574f,-0.03999999910593033f,-0.1899999976158142f,0.6800000071525574f,-0.03999999910593033f,-0.20000000298023224f,0.6800000071525574f,-0.05000000074505806f,-0.20000000298023224f,0.6800000071525574f,-0.029999999329447746f,-0.20000000298023224f,0.6700000166893005f,-0.03999999910593033f,-0.21199999749660492f,0.7400000095367432f,-0.06499999761581421f,-0.18799999356269836f,0.7400000095367432f,-0.06499999761581421f,-0.20000000298023224f,0.7400000095367432f,-0.07559999823570251f,-0.20000000298023224f,0.7400000095367432f,-0.05420000106096268f,-0.20999999344348907f,0.7177000045776367f,-0.06499999761581421f,-0.1899999976158142f,0.7177000045776367f,-0.06499999761581421f,-0.20000000298023224f,0.7177000045776367f,-0.07509999722242355f,-0.20000000298023224f,0.7177000045776367f,-0.05490000173449516f,-0.20999999344348907f,0.6949999928474426f,-0.06499999761581421f,-0.1899999976158142f,0.6949999928474426f,-0.06499999761581421f,-0.20000000298023224f,0.6949999928474426f,-0.07500000298023224f,-0.20000000298023224f,0.6949999928474426f,-0.054999999701976776f,-0.20000000298023224f,0.6850000023841858f,-0.06499999761581421f,-0.210999995470047f,0.7549999952316284f,-0.08500000089406967f,-0.1889999955892563f,0.7549999952316284f,-0.08500000089406967f,-0.20000000298023224f,0.7549999952316284f,-0.09520000219345093f,-0.20000000298023224f,0.7549999952316284f,-0.07479999959468842f,-0.20999999344348907f,0.7350000143051147f,-0.08500000089406967f,-0.1899999976158142f,0.7350000143051147f,-0.08500000089406967f,-0.20000000298023224f,0.7350000143051147f,-0.09510000050067902f,-0.20000000298023224f,0.7350000143051147f,-0.07490000128746033f,-0.20999999344348907f,0.7200000286102295f,-0.08500000089406967f,-0.1899999976158142f,0.7200000286102295f,-0.08500000089406967f,-0.20000000298023224f,0.7200000286102295f,-0.0949999988079071f,-0.20000000298023224f,0.7200000286102295f,-0.07500000298023224f,-0.20000000298023224f,0.7099999785423279f,-0.08500000089406967f,0.11500000208616257f,0.4659999907016754f,0.05999999865889549f,0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f,0.15000000596046448f,0.4659999907016754f,0f,0.05000000074505806f,0.4659999907016754f,0f,0.17000000178813934f,0.30000001192092896f,0f,0.05999999865889549f,0.30000001192092896f,0f,0.10000000149011612f,0.30000001192092896f,-0.05000000074505806f,0.10000000149011612f,0.30000001192092896f,0.05000000074505806f,0.15000000596046448f,0.07000000029802322f,0f,0.08500000089406967f,0.0860000029206276f,0.012500000186264515f,0.11500000208616257f,0.0689999982714653f,-0.04500000178813934f,0.11699999868869781f,0.09749999642372131f,0.061500001698732376f,0.13750000298023224f,0.006000000052154064f,-0.029999999329447746f,0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f,0.11500000208616257f,0.014999999664723873f,-0.04500000178813934f,0.11500000208616257f,0.05999999865889549f,0.10000000149011612f,0.11500000208616257f,0f,0.07000000029802322f,0.16500000655651093f,0f,0.07000000029802322f,0.0949999988079071f,0f,0.07000000029802322f,0.11500000208616257f,0.03999999910593033f,0.12999999523162842f,0.125f,0f,0.11999999731779099f,0.16500000655651093f,0f,0.11999999731779099f,0.08699999749660492f,0f,0.12200000137090683f,0.09000000357627869f,0.012000000104308128f,0.18799999356269836f,0.10999999940395355f,0.010999999940395355f,0.1899999976158142f,0.12800000607967377f,0.010999999940395355f,0.1850000023841858f,0.1420000046491623f,0.010999999940395355f,0.17800000309944153f,0.15399999916553497f,0.009999999776482582f,0.1679999977350235f,-0.11500000208616257f,0.4659999907016754f,0.05999999865889549f,-0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f,-0.17000000178813934f,0.4659999907016754f,0f,-0.05000000074505806f,0.4659999907016754f,0f,-0.17000000178813934f,0.30000001192092896f,0f,-0.05999999865889549f,0.30000001192092896f,0f,-0.10000000149011612f,0.30000001192092896f,-0.05000000074505806f,-0.10000000149011612f,0.30000001192092896f,0.05000000074505806f,-0.15000000596046448f,0.07000000029802322f,0f,-0.08500000089406967f,0.0860000029206276f,0.012500000186264515f,-0.11500000208616257f,0.0689999982714653f,-0.04500000178813934f,-0.11699999868869781f,0.09749999642372131f,0.06199999898672104f,-0.13750000298023224f,0.006000000052154064f,-0.029999999329447746f,-0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f,-0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f,-0.11500000208616257f,0.05999999865889549f,0.10000000149011612f,-0.11500000208616257f,0f,0.07000000029802322f,-0.16500000655651093f,0f,0.07000000029802322f,-0.0949999988079071f,0f,0.07000000029802322f,-0.11500000208616257f,0.03999999910593033f,0.12999999523162842f,-0.125f,0f,0.11999999731779099f,-0.16500000655651093f,0f,0.11999999731779099f,-0.08699999749660492f,0f,0.12200000137090683f,-0.09000000357627869f,0.012000000104308128f,0.18799999356269836f,-0.10999999940395355f,0.010999999940395355f,0.1899999976158142f,-0.12800000607967377f,0.010999999940395355f,0.1850000023841858f,-0.1420000046491623f,0.010999999940395355f,0.17800000309944153f,-0.15399999916553497f,0.009999999776482582f,0.1679999977350235f});
  }
}
protected class MFColor510 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f});
  }
}
protected class MFColor511 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f});
  }
}
protected class MFColor512 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,1f});
  }
}
protected class MFString513 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"zBlueSpiralBkg2.gif"});
  }
}
protected class MFFloat514 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation515 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,1.25600004196167f,1f,0f,0f,2.51200008392334f,1f,0f,0f,3.7679998874664307f,1f,0f,0f,5.02400016784668f,1f,0f,0f,6.28000020980835f});
  }
}
protected class MFFloat516 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation517 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,1.25600004196167f,0f,1f,0f,2.51200008392334f,0f,1f,0f,3.7679998874664307f,0f,1f,0f,5.02400016784668f,0f,1f,0f,6.28000020980835f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation519 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.25600004196167f,0f,0f,1f,2.51200008392334f,0f,0f,1f,3.7679998874664307f,0f,0f,1f,5.02400016784668f,0f,0f,1f,6.28000020980835f});
  }
}
protected class MFFloat520 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,0.8999999761581421f,1f});
  }
}
protected class MFRotation521 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0.699999988079071f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0.5f,-0.4000000059604645f,-1f,0f,0.699999988079071f,-0.4000000059604645f,-1f,0f,0.4000000059604645f,0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat522 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.699999988079071f,0.800000011920929f,1f});
  }
}
protected class MFRotation523 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,0.10000000149011612f,0f,0f,-1f,0.2199999988079071f,0f,0.5f,-1f,0.27000001072883606f,0f,0f,-1f,0.10000000149011612f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation525 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05000000074505806f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat526 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.8500000238418579f,1f});
  }
}
protected class MFRotation527 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,0f,0f,-1f,1.659999966621399f,-0.25f,0f,-1f,1.7599999904632568f,0f,0f,-1f,1.25600004196167f,0f,0f,-1f,0.05000000074505806f,1f,0f,0f,0f});
  }
}
protected class MFFloat528 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.15000000596046448f,0.30000001192092896f,0.5f,0.699999988079071f,0.8999999761581421f,1f});
  }
}
protected class MFRotation529 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.550000011920929f,-1f,-0.25f,0f,2.549999952316284f,-1f,-0.25f,0f,2.549999952316284f,-1f,-0.25f,0f,2.549999952316284f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat530 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.6499999761581421f,0.75f,0.8500000238418579f,1f});
  }
}
protected class MFRotation531 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,-0.550000011920929f,0f,0f,1f,0f,0f,1f,0f,1.5499999523162842f,0f,0f,-1f,1.5499999523162842f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat532 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation533 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,0.009999999776482582f,0.25f,0f,0f,-0.009999999776482582f,0.029999999329447746f,0f,0f,0.009999999776482582f,0.05000000074505806f,0f,0f,0.009999999776482582f,0.009999999776482582f,0f,0f,1f,0f});
  }
}
protected class MFFloat534 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.8500000238418579f,1f});
  }
}
protected class MFRotation535 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.25f,0f,1f,1.7599999904632568f,0f,0f,1f,1.659999966621399f,0.25f,0f,1f,1.7599999904632568f,0f,0f,1f,1.25600004196167f,0f,0f,1f,0.05000000074505806f,0.25f,0f,1f,1.7599999904632568f});
  }
}
protected class MFFloat536 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.041669998317956924f,0.125f,0.16670000553131104f,0.20829999446868896f,0.25f,0.29170000553131104f,0.375f,0.45829999446868896f,0.5f,0.541700005531311f,0.583299994468689f,0.625f,0.708299994468689f,0.75f,0.791700005531311f,0.875f,0.916700005531311f,1f});
  }
}
protected class MFVec3f537 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.009279999881982803f,0f,0f,-0.0038580000400543213f,0f,0f,-0.008847000077366829f,0f,0f,-0.01486000046133995f,0f,0f,-0.026410000398755074f,0f,0f,-0.039340000599622726f,0f,0f,-0.050200000405311584f,0f,0f,-0.07468999922275543f,0f,0f,-0.027319999411702156f,0f,0f,-0.01607999950647354f,0f,0f,-0.011289999820291996f,0f,0f,-0.0058189998380839825f,0f,0f,-0.0020039998926222324f,0f,0f,-0.0025790000800043344f,0f,0f,-0.014299999922513962f,0f,0f,-0.03799000009894371f,0f,0f,-0.05648000165820122f,0f,0f,-0.04500000178813934f,0f,0f,-0.009279999881982803f,0f});
  }
}
protected class MFFloat538 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation539 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat540 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation541 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8730000257492065f,0.06094000115990639f,0.48399999737739563f,0.2865000069141388f,0.9962999820709229f,-0.010569999925792217f,0.08481000363826752f,0.24879999458789825f,0.9965000152587891f,0.01590999960899353f,-0.08222000300884247f,0.38359999656677246f,-0.7017999887466431f,-0.03223000094294548f,-0.7117000222206116f,0.12890000641345978f,-1f,0f,0f,0.551800012588501f,-0.996399998664856f,0.02230999991297722f,0.08169999718666077f,0.535099983215332f,-0.98089998960495f,0.04912000149488449f,0.18809999525547028f,0.5203999876976013f,-0.8730000257492065f,0.06094000115990639f,0.48399999737739563f,0.2865000069141388f});
  }
}
protected class MFFloat542 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20829999446868896f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation543 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.32260000705718994f,1f,0f,0f,0.15559999644756317f,1f,0f,0f,0.08677999675273895f,1f,0f,0f,0.8751000165939331f,1f,0f,0f,1.13100004196167f,1f,0f,0f,0.09961000084877014f,1f,0f,0f,0.39419999718666077f,1f,0f,0f,0.32260000705718994f});
  }
}
protected class MFFloat544 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.375f,0.666700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation545 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06710000336170197f,-1f,0f,0f,0.2152000069618225f,-1f,0f,0f,0.31839999556541443f,-1f,0f,0f,0.4717000126838684f,-1f,0f,0f,0.29120001196861267f,1f,0f,0f,0.22220000624656677f,-1f,0f,0f,0.06710000336170197f});
  }
}
protected class MFFloat546 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.375f,0.45829999446868896f,0.5f,0.666700005531311f,0.75f,0.7799999713897705f,0.916700005531311f,1f});
  }
}
protected class MFRotation547 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.353300005197525f,-1f,0f,0f,0.10719999670982361f,1f,0f,0f,0.4000000059604645f,1f,0f,0f,0.12700000405311584f,-1f,0f,0f,0.017999999225139618f,-1f,0f,0f,0.057999998331069946f,-1f,0f,0f,0.23999999463558197f,-1f,0f,0f,0.3499999940395355f,-1f,0f,0f,0.33000001311302185f,0f,0f,1f,0f});
  }
}
protected class MFFloat548 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.30000001192092896f,1f});
  }
}
protected class MFRotation549 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat550 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation551 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,-0.20000000298023224f,0f,0f,1f,0f});
  }
}
protected class MFFloat552 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.800000011920929f,1f});
  }
}
protected class MFRotation553 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.30000001192092896f,-1f,0f,0f,0.15000000596046448f,1f,0f,0f,0.30000001192092896f,0f,0f,1f,0f,-1f,0f,0f,0.30000001192092896f});
  }
}
protected class MFFloat554 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.29170000553131104f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation555 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831000208854675f,0.035110000520944595f,0.8116000294685364f,0.14810000360012054f,-0.9950000047683716f,0.02295999974012375f,0.0967399999499321f,0.4683000147342682f,-1f,0.0019000000320374966f,0.007960000075399876f,0.4731999933719635f,-0.9980000257492065f,-0.015799999237060547f,-0.06102000176906586f,0.5078999996185303f,-0.991100013256073f,-0.03540999814867973f,-0.12860000133514404f,0.5418999791145325f,-0.913100004196167f,-0.0624300017952919f,-0.40299999713897705f,0.3361000120639801f,-0.43059998750686646f,-0.07962000370025635f,-0.8989999890327454f,0.07038000226020813f,1f,0f,0f,0.257099986076355f,0.9890999794006348f,-0.028049999848008156f,0.1444000005722046f,0.3878999948501587f,-0.5831000208854675f,0.035110000520944595f,0.8116000294685364f,0.14810000360012054f});
  }
}
protected class MFFloat556 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.29170000553131104f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation557 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.8572999835014343f,1f,0f,0f,0.8925999999046326f,1f,0f,0f,0.535099983215332f,1f,0f,0f,0.17560000717639923f,1f,0f,0f,0.11940000206232071f,1f,0f,0f,0.31529998779296875f,1f,0f,0f,0.0935399979352951f,1f,0f,0f,0.0855799987912178f,1f,0f,0f,0.2475000023841858f,1f,0f,0f,0.8572999835014343f});
  }
}
protected class MFFloat558 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22499999403953552f,0.25f,0.3499999940395355f,0.44999998807907104f,0.8500000238418579f,0.9100000262260437f});
  }
}
protected class MFRotation559 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.10000000149011612f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0.10000000149011612f,0f,0f,1f,0f,1f,0f,0f,0.10000000149011612f,1f,0f,0f,0.25f,-1f,0f,0f,0.10000000149011612f});
  }
}
protected class MFFloat560 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2199999988079071f,1f});
  }
}
protected class MFRotation561 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,-0.20000000298023224f,0f,0f,1f,0f,1f,0f,0f,-0.20000000298023224f});
  }
}
protected class MFFloat562 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.800000011920929f,1f});
  }
}
protected class MFRotation563 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.15000000596046448f,0f,0f,1f,0f,1f,0f,0f,0.30000001192092896f,-1f,0f,0f,0.30000001192092896f,-1f,0f,0f,0.15000000596046448f});
  }
}
protected class MFFloat564 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20829999446868896f,0.375f,0.75f,0.833299994468689f,1f});
  }
}
protected class MFRotation565 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.08259999752044678f,-0.01971999928355217f,-0.5974000096321106f,0.8016999959945679f,0.08230999857187271f,0.009296000003814697f,-0.9648000001907349f,0.26269999146461487f,0.17339999973773956f,-0.012380000203847885f,0.9549000263214111f,-0.29679998755455017f,0.0873199999332428f,-0.008124999701976776f,0.9690999984741211f,-0.24629999697208405f,0.15800000727176666f,0f,1f,0f,0.08259999752044678f});
  }
}
protected class MFFloat566 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.41670000553131104f,0.5f,0.583299994468689f,0.666700005531311f,0.75f,0.833299994468689f,0.916700005531311f,1f});
  }
}
protected class MFRotation567 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.08640000224113464f,0f,1f,0f,0.18250000476837158f,0f,1f,0f,0.15049999952316284f,0f,1f,0f,0.10530000180006027f,0f,1f,0f,0.04391000047326088f,0f,-1f,0f,0.031190000474452972f,0f,-1f,0f,0.0793600007891655f,0f,-1f,0f,0.1615999937057495f,0f,-1f,0f,0.1550000011920929f,0f,-1f,0f,0.08641999959945679f});
  }
}
protected class MFFloat568 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation569 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0.4000000059604645f,0.11999999731779099f,-1f,0f,0.4000000059604645f,0.1860000044107437f,1f,0f,0.10000000149011612f,0.335999995470047f,1f,0f,0.4000000059604645f,0.11999999731779099f});
  }
}
protected class MFFloat570 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation571 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06599999964237213f,-1f,0f,0f,0.4880000054836273f,-1f,0f,0f,0.01769999973475933f,-1f,0f,0f,0.06598780304193497f});
  }
}
protected class MFFloat572 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation573 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.460999995470047f,-0.3301999866962433f,-0.9275000095367432f,0.17550000548362732f,0.5388000011444092f,0.03277739882469177f,-0.99931401014328f,-0.01721850037574768f,0.4920330047607422f,0f,-1f,0f,0.4611000120639801f});
  }
}
protected class MFFloat574 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation575 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,-1f,0.09200000017881393f,1f,0f,-0.20000000298023224f,0.3197000026702881f,-1f,0f,-0.5f,0.15639999508857727f,-1f,0f,-1f,0.09200000017881393f});
  }
}
protected class MFFloat576 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation577 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.4115000069141388f,-1f,0f,0f,0.0925000011920929f,-1f,0f,0f,0.5725679993629456f,-1f,0f,0f,0.4115079939365387f});
  }
}
protected class MFFloat578 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation579 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129000067710876f,0.47589999437332153f,-0.33570000529289246f,0.13459999859333038f,0.15330000221729279f,-0.9878000020980835f,0.02582000009715557f,0.3901999890804291f,-0.5701000094413757f,0.7603999972343445f,-0.3109999895095825f,0.3659999966621399f,-0.8129000067710876f,0.47589999437332153f,-0.33570000529289246f,0.13459999859333038f});
  }
}
protected class MFFloat580 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.25f,1.600000023841858f,0.75f});
  }
}
protected class MFFloat581 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.5700000524520874f});
  }
}
protected class MFColor582 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0.10000000149011612f,0f,0f,0.10000000149011612f,0f});
  }
}
protected class MFColor583 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,0.10000000149011612f});
  }
}
protected class MFString584 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
}
