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
public class Jin20fSegmented implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Jin20fSegmented().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Jin20fSegmented.new.java.x3d");
    model.toFileJSON("../data/Jin20fSegmented.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("JinScaledV2L1LOA4MinimumSkeleton20f.x3d")))
      .setScene(new Scene()
        .addComments("https://www.web3d.org/documents/specifications/19774/V2.0/index.html")
        .addComments("0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.")
        .addChild(new WorldInfo().setTitle("20f Jin v2 loa4 Level 1, Joints, Segments, Sites"))
        .addChild(new Transform().setDEF("ContainerScene000")
          .addChild(new Shape().setDEF("AxisLinesShape")
            .addComments("Red +X, Green +Y, Blue +Z")
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setColor(new Color().setColor(new MFColor2().getArray()))
              .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray())))))
        .addChild(new HAnimHumanoid().setName("JinLOA4S").setDEF("hanim_JinLOA4S").setLoa(4).setVersion("2.0")
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_JinLOA4S").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new double[] {0,0.77,0}).setUlimit(new MFFloat4().getArray()).setLlimit(new MFFloat5().getArray()).setContainerFieldOverride("skeleton"))
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setDEF("Humanoid000")
                .addChild(new Shape().setUSE("AxisLinesShape"))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new double[] {0,0.826,0.02}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new HAnimSite("hanim_pelvis").setName("l_iliocristale").setDEF("hanim_l_iliocristale_pt").setTranslation(new double[] {0.13,0.92,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 33 hanim_l_iliocristale_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt328().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA9().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString11().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_iliocristale").setDEF("hanim_r_iliocristale_pt").setTranslation(new double[] {-0.13,0.92,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 36 hanim_r_iliocristale_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3212().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA13().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString15().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_trochanterion").setDEF("hanim_l_trochanterion_pt").setTranslation(new double[] {0.14,0.8,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 42 hanim_l_trochanterion_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3216().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA17().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString19().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_trochanterion").setDEF("hanim_r_trochanterion_pt").setTranslation(new double[] {-0.14,0.8,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 46 hanim_r_trochanterion_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3220().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA21().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString23().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_asis").setDEF("hanim_l_asis_pt").setTranslation(new double[] {0.1,0.86,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 32 hanim_l_asis_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3224().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA25().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString27().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_asis").setDEF("hanim_r_asis_pt").setTranslation(new double[] {-0.1,0.86,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 35 hanim_r_asis_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3228().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA29().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString31().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_psis").setDEF("hanim_l_psis_pt").setTranslation(new double[] {0.05,0.84,-0.11})
                  .addChild(new TouchSensor().setDescription("HAnimSite 34 hanim_l_psis_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3232().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA33().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString35().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_psis").setDEF("hanim_r_psis_pt").setTranslation(new double[] {-0.05,0.84,-0.11})
                  .addChild(new TouchSensor().setDescription("HAnimSite 37 hanim_r_psis_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3236().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA37().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString39().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("crotch").setDEF("hanim_crotch_pt").setTranslation(new double[] {0,0.703,0})
                  .addChild(new TouchSensor().setDescription("HAnimSite 38 hanim_crotch_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA41().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString43().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("buttocks_standing_wall_contact_point").setDEF("hanim_buttocks_standing_wall_contact_point_pt").setTranslation(new double[] {0,0.8,-0.15})
                  .addChild(new TouchSensor().setDescription("HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3244().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA45().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString47().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3248().getArray())
                    .setColor(new ColorRGBA().setColor(new MFColorRGBA49().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray())))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new double[] {0.095,0.8266,-0.0183}).setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_knee_crease").setDEF("hanim_l_knee_crease_pt").setTranslation(new double[] {0.09,0.41,-0.056})
                    .addChild(new TouchSensor().setDescription("HAnimSite 90 hanim_l_knee_crease_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3253().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA54().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f55().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString56().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_medial_epicondyle").setDEF("hanim_l_femoral_medial_epicondyle_pt").setTranslation(new double[] {0.039,0.41,-0.01})
                    .addChild(new TouchSensor().setDescription("HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA58().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString60().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_lateral_epicondyle").setDEF("hanim_l_femoral_lateral_epicondyle_pt").setTranslation(new double[] {0.127,0.41,-0.01})
                    .addChild(new TouchSensor().setDescription("HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3261().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA62().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f63().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString64().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_suprapatella").setDEF("hanim_l_suprapatella_pt").setTranslation(new double[] {0.085,0.41,0.042})
                    .addChild(new TouchSensor().setDescription("HAnimSite 41 hanim_l_suprapatella_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3265().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA66().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f67().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString68().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA70().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray())))))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new double[] {0.0926,0.4088,-0.01944}).setUlimit(new MFFloat72().getArray()).setLlimit(new MFFloat73().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_tibiale").setDEF("hanim_l_tibiale_pt").setTranslation(new double[] {0.09,0.31,0.038})
                      .addChild(new TouchSensor().setDescription("HAnimSite 47 hanim_l_tibiale_pt"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3274().getArray()).setCreaseAngle(0.5).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA75().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString77().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_medial_malleolus").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new double[] {0.061,0.095,-0.02})
                      .addChild(new TouchSensor().setDescription("HAnimSite 48 hanim_l_medial_malleolus_pt"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3278().getArray()).setCreaseAngle(0.5).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA79().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString81().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_lateral_malleolus").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new double[] {0.12,0.095,-0.02})
                      .addChild(new TouchSensor().setDescription("HAnimSite 49 hanim_l_lateral_malleolus_pt"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3282().getArray()).setCreaseAngle(0.5).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA83().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString85().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3286().getArray())
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA87().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new double[] {0.0888,0.09545,-0.01045}).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new HAnimSite("hanim_l_talus").setName("l_sphyrion").setDEF("hanim_l_sphyrion_pt").setTranslation(new double[] {0.054,0.065,-0.02})
                        .addChild(new TouchSensor().setDescription("HAnimSite 50 hanim_l_sphyrion_pt"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3291().getArray()).setCreaseAngle(0.5).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA92().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f93().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString94().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new HAnimSite("hanim_l_talus").setName("l_calcaneus_posterior").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new double[] {0.09,0.03,-0.06})
                        .addChild(new TouchSensor().setDescription("HAnimSite 58 hanim_l_calcaneus_posterior_pt"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3295().getArray()).setCreaseAngle(0.5).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA96().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString98().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA100().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new double[] {0.0783,0.0369,0.0049}).setUlimit(new MFFloat102().getArray()).setLlimit(new MFFloat103().getArray())
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName("l_navicular").setDEF("hanim_l_navicular")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32104().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA105().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new double[] {0.0674,0.0321,0.0184}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA110().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f111().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new double[] {0.0646,0.02324,0.0442}).setUlimit(new MFFloat112().getArray()).setLlimit(new MFFloat113().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32114().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA115().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new double[] {0.0621,0.01442,0.0936}).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1")
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setName("l_metatarsal_phalanx_1").setDEF("hanim_l_metatarsal_phalanx_1_pt").setTranslation(new double[] {0.062,0.012,0.1})
                                .addChild(new TouchSensor().setDescription("HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32119().getArray()).setCreaseAngle(0.5).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA120().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f121().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString122().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32123().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA124().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName("l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setCenter(new double[] {0.062,0.012,0.115}).setUlimit(new MFFloat126().getArray()).setLlimit(new MFFloat127().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_interphalangeal_1").setName("l_tarsal_distal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1")
                                .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_1").setName("l_tarsal_distal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1_tip").setTranslation(new double[] {0.062,0.012,0.134})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32128().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA129().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString131().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32132().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA133().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray())))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new double[] {0.0814,0.0335,0.02143}).setUlimit(new MFFloat135().getArray()).setLlimit(new MFFloat136().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA138().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f139().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new double[] {0.0802,0.0261,0.0411}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32142().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA143().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new double[] {0.0825,0.01497,0.09783}).setUlimit(new MFFloat145().getArray()).setLlimit(new MFFloat146().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32147().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA148().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new double[] {0.0843,0.01265,0.114}).setUlimit(new MFFloat150().getArray()).setLlimit(new MFFloat151().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32152().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA153().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new double[] {0.0843,0.00982,0.123435}).setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2")
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_2").setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2_tip").setTranslation(new double[] {0.08,0.016,0.14})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32157().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA158().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f159().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString160().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA162().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f163().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new double[] {0.09297,0.0334,0.01982}).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32166().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA167().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new double[] {0.09459,0.0261,0.0394}).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA172().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new double[] {0.0965,0.01505,0.0954}).setUlimit(new MFFloat174().getArray()).setLlimit(new MFFloat175().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32176().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA177().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new double[] {0.09886,0.01192,0.11047}).setUlimit(new MFFloat179().getArray()).setLlimit(new MFFloat180().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32181().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA182().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f183().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new double[] {0.1004,0.00983,0.1197}).setUlimit(new MFFloat184().getArray()).setLlimit(new MFFloat185().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_3")
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_3").setName("l_tarsal_distal_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_3_tip").setTranslation(new double[] {0.1,0.016,0.14})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32186().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA187().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString189().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32190().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA191().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray())))))))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new double[] {0.0891,0.05798,-0.0259}).setUlimit(new MFFloat193().getArray()).setLlimit(new MFFloat194().getArray())
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName("l_calcaneus").setDEF("hanim_l_calcaneus")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32195().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA196().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new double[] {0.11063,0.03528,0.0021}).setUlimit(new MFFloat198().getArray()).setLlimit(new MFFloat199().getArray())
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName("l_cuboid").setDEF("hanim_l_cuboid")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32200().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA201().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new double[] {0.10649,0.02454,0.03843}).setUlimit(new MFFloat203().getArray()).setLlimit(new MFFloat204().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32205().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA206().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f207().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new double[] {0.109867,0.01435,0.09117}).setUlimit(new MFFloat208().getArray()).setLlimit(new MFFloat209().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32210().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA211().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new double[] {0.11416,0.01224,0.10631}).setUlimit(new MFFloat213().getArray()).setLlimit(new MFFloat214().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA216().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f217().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new double[] {0.11567,0.00936,0.11369}).setUlimit(new MFFloat218().getArray()).setLlimit(new MFFloat219().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_4")
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_4").setName("l_tarsal_distal_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_4_tip").setTranslation(new double[] {0.115,0.016,0.13})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32220().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA221().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString223().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32224().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA225().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray())))))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new double[] {0.1208,0.02094,0.03474}).setUlimit(new MFFloat227().getArray()).setLlimit(new MFFloat228().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32229().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA230().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f231().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new double[] {0.124065,0.01367,0.08656}).setUlimit(new MFFloat232().getArray()).setLlimit(new MFFloat233().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32234().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA235().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new double[] {0.12638,0.01086,0.09414}).setUlimit(new MFFloat237().getArray()).setLlimit(new MFFloat238().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5")
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_5").setName("l_metatarsal_phalanx_5").setDEF("hanim_l_metatarsal_phalanx_5_pt").setTranslation(new double[] {0.12,0.02,0.04})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32239().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA240().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f241().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString242().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32243().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA244().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new double[] {0.12728,0.00856,0.10188}).setUlimit(new MFFloat246().getArray()).setLlimit(new MFFloat247().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_5").setName("l_tarsal_distal_phalanx_5").setDEF("hanim_l_tarsal_distal_phalanx_5")
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_5").setName("l_tarsal_distal_phalanx_5").setDEF("hanim_l_tarsal_distal_phalanx_5_tip").setTranslation(new double[] {0.125,0.016,0.115})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32248().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA249().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString251().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32252().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA253().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new double[] {-0.09466,0.82665,-0.01835}).setUlimit(new MFFloat255().getArray()).setLlimit(new MFFloat256().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_knee_crease").setDEF("hanim_r_knee_crease_pt").setTranslation(new double[] {-0.09,0.41,-0.056})
                    .addChild(new TouchSensor().setDescription("HAnimSite 91 hanim_r_knee_crease_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32257().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA258().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f259().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString260().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_medial_epicondyle").setDEF("hanim_r_femoral_medial_epicondyle_pt").setTranslation(new double[] {-0.039,0.41,-0.01})
                    .addChild(new TouchSensor().setDescription("HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32261().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA262().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString264().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_lateral_epicondyle").setDEF("hanim_r_femoral_lateral_epicondyle_pt").setTranslation(new double[] {-0.127,0.41,-0.01})
                    .addChild(new TouchSensor().setDescription("HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32265().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA266().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f267().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString268().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_suprapatella").setDEF("hanim_r_suprapatella_pt").setTranslation(new double[] {-0.085,0.41,0.042})
                    .addChild(new TouchSensor().setDescription("HAnimSite 45 hanim_r_suprapatella_pt"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32269().getArray()).setCreaseAngle(0.5).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA270().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f271().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString272().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA274().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray())))))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new double[] {-0.0926,0.408825,-0.01944}).setUlimit(new MFFloat276().getArray()).setLlimit(new MFFloat277().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_tibiale").setDEF("hanim_r_tibiale_pt").setTranslation(new double[] {-0.09,0.31,0.038})
                      .addChild(new TouchSensor().setDescription("HAnimSite 51 hanim_r_tibiale_pt"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32278().getArray()).setCreaseAngle(0.5).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA279().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString281().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_medial_malleolus").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new double[] {-0.061,0.095,-0.02})
                      .addChild(new TouchSensor().setDescription("HAnimSite 52 hanim_r_medial_malleolus_pt"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32282().getArray()).setCreaseAngle(0.5).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA283().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString285().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_lateral_malleolus").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new double[] {-0.12,0.095,-0.02})
                      .addChild(new TouchSensor().setDescription("HAnimSite 53 hanim_r_lateral_malleolus_pt"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32286().getArray()).setCreaseAngle(0.5).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA287().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString289().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32290().getArray())
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA291().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new double[] {-0.08845,0.09544,-0.01045}).setUlimit(new MFFloat293().getArray()).setLlimit(new MFFloat294().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new HAnimSite("hanim_r_talus").setName("r_sphyrion").setDEF("hanim_r_sphyrion_pt").setTranslation(new double[] {-0.054,0.065,-0.02})
                        .addChild(new TouchSensor().setDescription("HAnimSite 54 hanim_r_sphyrion_pt"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32295().getArray()).setCreaseAngle(0.5).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA296().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f297().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString298().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new HAnimSite("hanim_r_talus").setName("r_calcaneus_posterior").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new double[] {-0.09,0.03,-0.06})
                        .addChild(new TouchSensor().setDescription("HAnimSite 62 hanim_r_calcaneus_posterior_pt"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32299().getArray()).setCreaseAngle(0.5).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA300().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f301().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString302().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32303().getArray())
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA304().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new double[] {-0.07794,0.0369,0.00486}).setUlimit(new MFFloat306().getArray()).setLlimit(new MFFloat307().getArray())
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName("r_navicular").setDEF("hanim_r_navicular")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32308().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA309().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new double[] {-0.06698,0.032107,0.01839}).setUlimit(new MFFloat311().getArray()).setLlimit(new MFFloat312().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA314().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f315().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new double[] {-0.064,0.02324,0.04419}).setUlimit(new MFFloat316().getArray()).setLlimit(new MFFloat317().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32318().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA319().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new double[] {-0.06176,0.014425,0.09362}).setUlimit(new MFFloat321().getArray()).setLlimit(new MFFloat322().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setName("r_metatarsal_phalanx_1").setDEF("hanim_r_metatarsal_phalanx_1_pt").setTranslation(new double[] {-0.062,0.012,0.1})
                                .addChild(new TouchSensor().setDescription("HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32323().getArray()).setCreaseAngle(0.5).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA324().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f325().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString326().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32327().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA328().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setCenter(new double[] {-0.06174,0.0121,0.1153}).setUlimit(new MFFloat330().getArray()).setLlimit(new MFFloat331().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1")
                                .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_1").setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1_tip").setTranslation(new double[] {-0.06,0.012,0.14})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32332().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA333().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f334().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString335().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32336().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA337().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray())))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new double[] {-0.081,0.0335,0.02142}).setUlimit(new MFFloat339().getArray()).setLlimit(new MFFloat340().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32341().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA342().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f343().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new double[] {-0.07983,0.0261,0.04106}).setUlimit(new MFFloat344().getArray()).setLlimit(new MFFloat345().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32346().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA347().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new double[] {-0.0821,0.01497,0.09783}).setUlimit(new MFFloat349().getArray()).setLlimit(new MFFloat350().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32351().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA352().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new double[] {-0.0839,0.012647,0.114}).setUlimit(new MFFloat354().getArray()).setLlimit(new MFFloat355().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32356().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA357().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f358().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new double[] {-0.0839,0.009825,0.123435}).setUlimit(new MFFloat359().getArray()).setLlimit(new MFFloat360().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_2").setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2_tip").setTranslation(new double[] {-0.08,0.016,0.14})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32361().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA362().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f363().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString364().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32365().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA366().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new double[] {-0.09261,0.03339,0.01982}).setUlimit(new MFFloat368().getArray()).setLlimit(new MFFloat369().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32370().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA371().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f372().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new double[] {-0.09423,0.0261,0.0394}).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32375().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA376().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new double[] {-0.0961,0.01505,0.09542}).setUlimit(new MFFloat378().getArray()).setLlimit(new MFFloat379().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32380().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA381().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f382().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new double[] {-0.0985,0.01192,0.11047}).setUlimit(new MFFloat383().getArray()).setLlimit(new MFFloat384().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32385().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA386().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f387().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new double[] {-0.100035,0.00982,0.1197}).setUlimit(new MFFloat388().getArray()).setLlimit(new MFFloat389().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3")
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_3").setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3_tip").setTranslation(new double[] {-0.1,0.016,0.14})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32390().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA391().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString393().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32394().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA395().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray())))))))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new double[] {-0.088717,0.05798,-0.025965}).setUlimit(new MFFloat397().getArray()).setLlimit(new MFFloat398().getArray())
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32399().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA400().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f401().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new double[] {-0.11027,0.03528,0.0021}).setUlimit(new MFFloat402().getArray()).setLlimit(new MFFloat403().getArray())
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName("r_cuboid").setDEF("hanim_r_cuboid")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32404().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA405().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f406().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new double[] {-0.10613,0.02454,0.03843}).setUlimit(new MFFloat407().getArray()).setLlimit(new MFFloat408().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32409().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA410().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f411().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new double[] {-0.1095,0.01435,0.09117}).setUlimit(new MFFloat412().getArray()).setLlimit(new MFFloat413().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32414().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA415().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new double[] {-0.11378,0.01224,0.1063}).setUlimit(new MFFloat417().getArray()).setLlimit(new MFFloat418().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32419().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA420().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f421().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new double[] {-0.1153,0.00937,0.11369}).setUlimit(new MFFloat422().getArray()).setLlimit(new MFFloat423().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4")
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_4").setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4_tip").setTranslation(new double[] {-0.115,0.016,0.13})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32424().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA425().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f426().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString427().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32428().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA429().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f430().getArray())))))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new double[] {-0.12044,0.020945,0.03474}).setUlimit(new MFFloat431().getArray()).setLlimit(new MFFloat432().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32433().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA434().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f435().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new double[] {-0.12368,0.01367,0.08656}).setUlimit(new MFFloat436().getArray()).setLlimit(new MFFloat437().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32438().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA439().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new double[] {-0.126,0.01086,0.09414}).setUlimit(new MFFloat441().getArray()).setLlimit(new MFFloat442().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_5").setName("r_metatarsal_phalanx_5").setDEF("hanim_r_metatarsal_phalanx_5_pt").setTranslation(new double[] {-0.12,0.02,0.04})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32443().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA444().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f445().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString446().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32447().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA448().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new double[] {-0.1269,0.00856,0.10188}).setUlimit(new MFFloat450().getArray()).setLlimit(new MFFloat451().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5")
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_5").setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5_tip").setTranslation(new double[] {-0.125,0.016,0.115})
                                    .addChild(new TouchSensor().setDescription("HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32452().getArray()).setCreaseAngle(0.5).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA453().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f454().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString455().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32456().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA457().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray())))))))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new double[] {0,0.9254,-0.01376}).setUlimit(new MFFloat459().getArray()).setLlimit(new MFFloat460().getArray())
              .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                .addChild(new HAnimSite("hanim_l5").setName("spine_1_middle_back").setDEF("hanim_spine_1_middle_back_pt").setTranslation(new double[] {0,1,-0.1})
                  .addChild(new TouchSensor().setDescription("HAnimSite 24 hanim_spine_1_middle_back_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32461().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA462().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f463().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString464().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("spine_2_lower_back").setDEF("hanim_spine_2_lower_back_pt").setTranslation(new double[] {0,0.95,-0.1})
                  .addChild(new TouchSensor().setDescription("HAnimSite 25 hanim_spine_2_lower_back_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32465().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA466().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString468().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_anterior").setDEF("hanim_waist_preferred_anterior_pt").setTranslation(new double[] {0,0.9,0.1})
                  .addChild(new TouchSensor().setDescription("HAnimSite 26 hanim_waist_preferred_anterior_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32469().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA470().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f471().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString472().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_posterior").setDEF("hanim_waist_preferred_posterior_pt").setTranslation(new double[] {0,0.9,-0.1})
                  .addChild(new TouchSensor().setDescription("HAnimSite 27 hanim_waist_preferred_posterior_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32473().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA474().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f475().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString476().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("navel").setDEF("hanim_navel_pt").setTranslation(new double[] {0,0.9,-0.1})
                  .addChild(new TouchSensor().setDescription("HAnimSite 84 hanim_navel_pt"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32477().getArray()).setCreaseAngle(0.5).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA478().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f479().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString480().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32481().getArray())
                    .setColor(new ColorRGBA().setColor(new MFColorRGBA482().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f483().getArray())))))
              .addChild(new HAnimJoint("hanim_vl5").setName("vl4").setDEF("hanim_vl4").setCenter(new double[] {0,0.9497,-0.01376}).setUlimit(new MFFloat484().getArray()).setLlimit(new MFFloat485().getArray())
                .addChild(new HAnimSegment("hanim_vl4").setName("l4").setDEF("hanim_l4")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32486().getArray())
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA487().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray())))))
                .addChild(new HAnimJoint("hanim_vl4").setName("vl3").setDEF("hanim_vl3").setCenter(new double[] {0,0.9659,-0.01376}).setUlimit(new MFFloat489().getArray()).setLlimit(new MFFloat490().getArray())
                  .addChild(new HAnimSegment("hanim_vl3").setName("l3").setDEF("hanim_l3")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32491().getArray())
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA492().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f493().getArray())))))
                  .addChild(new HAnimJoint("hanim_vl3").setName("vl2").setDEF("hanim_vl2").setCenter(new double[] {0,0.98235,-0.01376}).setUlimit(new MFFloat494().getArray()).setLlimit(new MFFloat495().getArray())
                    .addChild(new HAnimSegment("hanim_vl2").setName("l2").setDEF("hanim_l2")
                      .addChild(new HAnimSite("hanim_l2").setName("l_rib10").setDEF("hanim_l_rib10_pt").setTranslation(new double[] {0.09,1,0.04})
                        .addChild(new TouchSensor().setDescription("HAnimSite 28 hanim_l_rib10_pt"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32496().getArray()).setCreaseAngle(0.5).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA497().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f498().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString499().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new HAnimSite("hanim_l2").setName("r_rib10").setDEF("hanim_r_rib10_pt").setTranslation(new double[] {-0.09,1,0.04})
                        .addChild(new TouchSensor().setDescription("HAnimSite 30 hanim_r_rib10_pt"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32500().getArray()).setCreaseAngle(0.5).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA501().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString503().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32504().getArray())
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA505().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray())))))
                    .addChild(new HAnimJoint("hanim_vl2").setName("vl1").setDEF("hanim_vl1").setCenter(new double[] {0,0.99967,-0.01376}).setUlimit(new MFFloat507().getArray()).setLlimit(new MFFloat508().getArray())
                      .addChild(new HAnimSegment("hanim_vl1").setName("l1").setDEF("hanim_l1")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32509().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA510().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f511().getArray())))))
                      .addChild(new HAnimJoint("hanim_vl1").setName("vt12").setDEF("hanim_vt12").setCenter(new double[] {0,1.0231,-0.01376}).setUlimit(new MFFloat512().getArray()).setLlimit(new MFFloat513().getArray())
                        .addChild(new HAnimSegment("hanim_vt12").setName("t12").setDEF("hanim_t12")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32514().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA515().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f516().getArray())))))
                        .addChild(new HAnimJoint("hanim_vt12").setName("vt11").setDEF("hanim_vt11").setCenter(new double[] {0,1.0467,-0.01376}).setUlimit(new MFFloat517().getArray()).setLlimit(new MFFloat518().getArray())
                          .addChild(new HAnimSegment("hanim_vt11").setName("t11").setDEF("hanim_t11")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32519().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA520().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray())))))
                          .addChild(new HAnimJoint("hanim_vt11").setName("vt10").setDEF("hanim_vt10").setCenter(new double[] {0,1.0638,-0.01378}).setUlimit(new MFFloat522().getArray()).setLlimit(new MFFloat523().getArray())
                            .addChild(new HAnimSegment("hanim_vt10").setName("t10").setDEF("hanim_t10")
                              .addChild(new HAnimSite("hanim_t10").setName("substernale").setDEF("hanim_substernale_pt").setTranslation(new double[] {0,1.08,0.076})
                                .addChild(new TouchSensor().setDescription("HAnimSite 13 hanim_substernale_pt"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32524().getArray()).setCreaseAngle(0.5).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA525().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f526().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString527().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                              .addChild(new HAnimSite("hanim_t10").setName("mesosternale").setDEF("hanim_mesosternale_pt").setTranslation(new double[] {0,1.15,0.076})
                                .addChild(new TouchSensor().setDescription("HAnimSite 88 hanim_mesosternale_pt"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32528().getArray()).setCreaseAngle(0.5).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA529().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f530().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString531().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32532().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA533().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f534().getArray())))))
                            .addChild(new HAnimJoint("hanim_vt10").setName("vt9").setDEF("hanim_vt9").setCenter(new double[] {0,1.0784,-0.01376}).setUlimit(new MFFloat535().getArray()).setLlimit(new MFFloat536().getArray())
                              .addChild(new HAnimSegment("hanim_vt9").setName("t9").setDEF("hanim_t9")
                                .addChild(new HAnimSite("hanim_t9").setName("l_thelion").setDEF("hanim_l_thelion_pt").setTranslation(new double[] {0.07,1.12,0.09})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 29 hanim_l_thelion_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32537().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA538().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f539().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString540().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new HAnimSite("hanim_t9").setName("r_thelion").setDEF("hanim_r_thelion_pt").setTranslation(new double[] {-0.07,1.12,0.09})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 31 hanim_r_thelion_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32541().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA542().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f543().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString544().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new HAnimSite("hanim_t9").setName("rear_center_midsagittal_plane").setDEF("hanim_rear_center_midsagittal_plane_pt").setTranslation(new double[] {0,1.1,-0.1})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 92 hanim_rear_center_midsagittal_plane_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32545().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA546().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f547().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString548().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new HAnimSite("hanim_t9").setName("l_chest_midsagittal_plane").setDEF("hanim_l_chest_midsagittal_plane_pt").setTranslation(new double[] {0.13,1.12,0})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 94 hanim_l_chest_midsagittal_plane_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32549().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA550().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString552().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new HAnimSite("hanim_t9").setName("r_chest_midsagittal_plane").setDEF("hanim_r_chest_midsagittal_plane_pt").setTranslation(new double[] {-0.13,1.12,0})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 95 hanim_r_chest_midsagittal_plane_pt"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32553().getArray()).setCreaseAngle(0.5).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA554().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f555().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString556().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32557().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA558().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f559().getArray())))))
                              .addChild(new HAnimJoint("hanim_vt9").setName("vt8").setDEF("hanim_vt8").setCenter(new double[] {0,1.093,-0.01376}).setUlimit(new MFFloat560().getArray()).setLlimit(new MFFloat561().getArray())
                                .addChild(new HAnimSegment("hanim_vt8").setName("t8").setDEF("hanim_t8")
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32562().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA563().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f564().getArray())))))
                                .addChild(new HAnimJoint("hanim_vt8").setName("vt7").setDEF("hanim_vt7").setCenter(new double[] {0,1.1088,-0.01376}).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                  .addChild(new HAnimSegment("hanim_vt7").setName("t7").setDEF("hanim_t7")
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32567().getArray())
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA568().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray())))))
                                  .addChild(new HAnimJoint("hanim_vt7").setName("vt6").setDEF("hanim_vt6").setCenter(new double[] {0,1.1216,-0.01376}).setUlimit(new MFFloat570().getArray()).setLlimit(new MFFloat571().getArray())
                                    .addChild(new HAnimSegment("hanim_vt6").setName("t6").setDEF("hanim_t6")
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32572().getArray())
                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA573().getArray()))
                                          .setCoord(new Coordinate().setPoint(new MFVec3f574().getArray())))))
                                    .addChild(new HAnimJoint("hanim_vt6").setName("vt5").setDEF("hanim_vt5").setCenter(new double[] {0,1.137,-0.01376}).setUlimit(new MFFloat575().getArray()).setLlimit(new MFFloat576().getArray())
                                      .addChild(new HAnimSegment("hanim_vt5").setName("t5").setDEF("hanim_t5")
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32577().getArray())
                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA578().getArray()))
                                            .setCoord(new Coordinate().setPoint(new MFVec3f579().getArray())))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName("vt4").setDEF("hanim_vt4").setCenter(new double[] {0,1.1524,-0.01376}).setUlimit(new MFFloat580().getArray()).setLlimit(new MFFloat581().getArray())
                                        .addChild(new HAnimSegment("hanim_vt4").setName("t4").setDEF("hanim_t4")
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32582().getArray())
                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA583().getArray()))
                                              .setCoord(new Coordinate().setPoint(new MFVec3f584().getArray())))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName("vt3").setDEF("hanim_vt3").setCenter(new double[] {0,1.1709,-0.01376}).setUlimit(new MFFloat585().getArray()).setLlimit(new MFFloat586().getArray())
                                          .addChild(new HAnimSegment("hanim_vt3").setName("t3").setDEF("hanim_t3")
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32587().getArray())
                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA588().getArray()))
                                                .setCoord(new Coordinate().setPoint(new MFVec3f589().getArray())))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName("vt2").setDEF("hanim_vt2").setCenter(new double[] {0,1.1956,-0.01378}).setUlimit(new MFFloat590().getArray()).setLlimit(new MFFloat591().getArray())
                                            .addChild(new HAnimSegment("hanim_vt2").setName("t2").setDEF("hanim_t2")
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32592().getArray())
                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA593().getArray()))
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f594().getArray())))))
                                            .addChild(new HAnimJoint("hanim_vt2").setName("vt1").setDEF("hanim_vt1").setCenter(new double[] {0,1.22,-0.0138}).setUlimit(new MFFloat595().getArray()).setLlimit(new MFFloat596().getArray())
                                              .addChild(new HAnimSegment("hanim_vt1").setName("t1").setDEF("hanim_t1")
                                                .addChild(new HAnimSite("hanim_t1").setName("suprasternale").setDEF("hanim_suprasternale_pt").setTranslation(new double[] {0,1.22,0.08})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite 12 hanim_suprasternale_pt"))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32597().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA598().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f599().getArray()))))
                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString600().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                .addChild(new HAnimSite("hanim_t1").setName("cervicale").setDEF("hanim_cervicale_pt").setTranslation(new double[] {0,1.22,-0.08})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite 10 hanim_cervicale_pt"))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32601().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA602().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f603().getArray()))))
                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString604().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32605().getArray())
                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA606().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f607().getArray())))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("vc7").setDEF("hanim_vc7").setCenter(new double[] {0,1.2453,-0.01506}).setUlimit(new MFFloat608().getArray()).setLlimit(new MFFloat609().getArray())
                                                .addChild(new HAnimSegment("hanim_vc7").setName("c7").setDEF("hanim_c7")
                                                  .addChild(new HAnimSite("hanim_c7").setName("l_neck_base").setDEF("hanim_l_neck_base_pt").setTranslation(new double[] {0.06,1.26,0})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 82 hanim_l_neck_base_pt"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32610().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA611().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f612().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString613().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                  .addChild(new HAnimSite("hanim_c7").setName("r_neck_base").setDEF("hanim_r_neck_base_pt").setTranslation(new double[] {-0.06,1.26,0})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 83 hanim_r_neck_base_pt"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32614().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA615().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f616().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString617().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32618().getArray())
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA619().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f620().getArray())))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName("vc6").setDEF("hanim_vc6").setCenter(new double[] {0,1.2575,-0.01506}).setUlimit(new MFFloat621().getArray()).setLlimit(new MFFloat622().getArray())
                                                  .addChild(new HAnimSegment("hanim_vc6").setName("c6").setDEF("hanim_c6")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32623().getArray())
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA624().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f625().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName("vc5").setDEF("hanim_vc5").setCenter(new double[] {0,1.2699,-0.01506}).setUlimit(new MFFloat626().getArray()).setLlimit(new MFFloat627().getArray())
                                                    .addChild(new HAnimSegment("hanim_vc5").setName("c5").setDEF("hanim_c5")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32628().getArray())
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA629().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f630().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName("vc4").setDEF("hanim_vc4").setCenter(new double[] {0,1.28227,-0.01506}).setUlimit(new MFFloat631().getArray()).setLlimit(new MFFloat632().getArray())
                                                      .addChild(new HAnimSegment("hanim_vc4").setName("c4").setDEF("hanim_c4")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32633().getArray())
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA634().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f635().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName("vc3").setDEF("hanim_vc3").setCenter(new double[] {0,1.2951,-0.01506}).setUlimit(new MFFloat636().getArray()).setLlimit(new MFFloat637().getArray())
                                                        .addChild(new HAnimSegment("hanim_vc3").setName("c3").setDEF("hanim_c3")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32638().getArray())
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA639().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f640().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName("vc2").setDEF("hanim_vc2").setCenter(new double[] {0,1.307,-0.015}).setUlimit(new MFFloat641().getArray()).setLlimit(new MFFloat642().getArray())
                                                          .addChild(new HAnimSegment("hanim_vc2").setName("c2").setDEF("hanim_c2")
                                                            .addChild(new HAnimSite("hanim_c2").setName("adams_apple").setDEF("hanim_adams_apple_pt").setTranslation(new double[] {0,1.29,0.04})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite 11 hanim_adams_apple_pt"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32643().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA644().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f645().getArray()))))
                                                              .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString646().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035))))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32647().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA648().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f649().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName("vc1").setDEF("hanim_vc1").setCenter(new double[] {0,1.3185,-0.0151}).setUlimit(new MFFloat650().getArray()).setLlimit(new MFFloat651().getArray())
                                                            .addChild(new HAnimSegment("hanim_vc1").setName("c1").setDEF("hanim_c1")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32652().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA653().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f654().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName("skullbase").setDEF("hanim_skullbase").setCenter(new double[] {0,1.3126,-0.0154}).setUlimit(new MFFloat655().getArray()).setLlimit(new MFFloat656().getArray())
                                                              .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                                                                .addChild(new HAnimSite("hanim_skull").setName("skull_vertex").setDEF("hanim_skull_vertex_pt").setTranslation(new double[] {0,1.612,-0.03})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 0 hanim_skull_vertex_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32657().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA658().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f659().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString660().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("glabella").setDEF("hanim_glabella_pt").setTranslation(new double[] {0,1.454,0.128})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 1 hanim_glabella_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32661().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA662().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f663().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString664().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("sellion").setDEF("hanim_sellion_pt").setTranslation(new double[] {0,1.4,0.12})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 2 hanim_sellion_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32665().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA666().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f667().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString668().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_infraorbitale").setDEF("hanim_l_infraorbitale_pt").setTranslation(new double[] {0.039,1.38,0.09})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 3 hanim_l_infraorbitale_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32669().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA670().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f671().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString672().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_tragion").setDEF("hanim_l_tragion_pt").setTranslation(new double[] {0.1,1.38,0.0282})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 4 hanim_l_tragion_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32673().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA674().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f675().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString676().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_infraorbitale").setDEF("hanim_r_infraorbitale_pt").setTranslation(new double[] {-0.039,1.38,0.09})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 6 hanim_r_infraorbitale_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32677().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA678().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f679().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString680().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_tragion").setDEF("hanim_r_tragion_pt").setTranslation(new double[] {-0.1,1.38,0.0282})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 7 hanim_r_tragion_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32681().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA682().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f683().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString684().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("nuchale").setDEF("hanim_nuchale_pt").setTranslation(new double[] {0.0039,1.35,-0.16})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 81 hanim_nuchale_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32685().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA686().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f687().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString688().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("opisthocranion").setDEF("hanim_opisthocranion_pt").setTranslation(new double[] {0.0039,1.4588,-0.18})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 89 hanim_opisthocranion_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32689().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA690().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f691().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString692().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_ectocanthus").setDEF("hanim_l_ectocanthus_pt").setTranslation(new double[] {0.086,1.399,0.074})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 85 hanim_l_ectocanthus_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32693().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA694().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f695().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString696().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_ectocanthus").setDEF("hanim_r_ectocanthus_pt").setTranslation(new double[] {-0.086,1.399,0.074})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 86 hanim_r_ectocanthus_pt"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32697().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA698().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f699().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString700().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32701().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA702().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f703().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new double[] {0.0505,1.42425,0.03294}).setUlimit(new MFFloat704().getArray()).setLlimit(new MFFloat705().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_eyelid_joint").setName("l_eyelid").setDEF("hanim_l_eyelid")
                                                                  .addChild(new HAnimSite("hanim_l_eyelid").setName("l_eyelid_tip").setDEF("hanim_l_eyelid_tip").setTranslation(new double[] {0,2.64,0})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_eyelid_tip hanim_l_eyelid_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32706().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA707().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f708().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString709().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32710().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA711().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f712().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new double[] {-0.0505,1.42425,0.03294}).setUlimit(new MFFloat713().getArray()).setLlimit(new MFFloat714().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_eyelid_joint").setName("r_eyelid").setDEF("hanim_r_eyelid")
                                                                  .addChild(new HAnimSite("hanim_r_eyelid").setName("r_eyelid_tip").setDEF("hanim_r_eyelid_tip").setTranslation(new double[] {0,2.68,0})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_eyelid_tip hanim_r_eyelid_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32715().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA716().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f717().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString718().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32719().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA720().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f721().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new double[] {0.048127,1.4049,0.08305}).setUlimit(new MFFloat722().getArray()).setLlimit(new MFFloat723().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_eyeball_joint").setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                  .addChild(new HAnimSite("hanim_l_eyeball").setName("l_eyeball_tip").setDEF("hanim_l_eyeball_tip").setTranslation(new double[] {0,2.72,0})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_eyeball_tip hanim_l_eyeball_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32724().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA725().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f726().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString727().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32728().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA729().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f730().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new double[] {-0.04813,1.4049,0.08305}).setUlimit(new MFFloat731().getArray()).setLlimit(new MFFloat732().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_eyeball_joint").setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                  .addChild(new HAnimSite("hanim_r_eyeball").setName("r_eyeball_tip").setDEF("hanim_r_eyeball_tip").setTranslation(new double[] {0,2.76,0})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_eyeball_tip hanim_r_eyeball_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32733().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA734().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f735().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString736().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32737().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA738().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f739().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new double[] {0.02175,1.4139,0.1069}).setUlimit(new MFFloat740().getArray()).setLlimit(new MFFloat741().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_eyebrow_joint").setName("l_eyebrow").setDEF("hanim_l_eyebrow")
                                                                  .addChild(new HAnimSite("hanim_l_eyebrow").setName("l_eyebrow_tip").setDEF("hanim_l_eyebrow_tip").setTranslation(new double[] {0,2.8,0})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32742().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA743().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f744().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString745().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32746().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA747().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f748().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new double[] {-0.02175,1.4139,0.10694}).setUlimit(new MFFloat749().getArray()).setLlimit(new MFFloat750().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_eyebrow_joint").setName("r_eyebrow").setDEF("hanim_r_eyebrow")
                                                                  .addChild(new HAnimSite("hanim_r_eyebrow").setName("r_eyebrow_tip").setDEF("hanim_r_eyebrow_tip").setTranslation(new double[] {0,2.84,0})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32751().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA752().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f753().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString754().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32755().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA756().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f757().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new double[] {0,1.3128,0.01538}).setUlimit(new MFFloat758().getArray()).setLlimit(new MFFloat759().getArray())
                                                                .addChild(new HAnimSegment("hanim_temporomandibular").setName("jaw").setDEF("hanim_jaw")
                                                                  .addChild(new HAnimSite("hanim_jaw").setName("l_gonion").setDEF("hanim_l_gonion_pt").setTranslation(new double[] {0.068,1.346,0.033})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 5 hanim_l_gonion_pt"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32760().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA761().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f762().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString763().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName("r_gonion").setDEF("hanim_r_gonion_pt").setTranslation(new double[] {-0.068,1.346,0.033})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 8 hanim_r_gonion_pt"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32764().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA765().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f766().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString767().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName("supramenton").setDEF("hanim_supramenton_pt").setTranslation(new double[] {0,1.32,0.086})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 9 hanim_supramenton_pt"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32768().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA769().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f770().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString771().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName("menton").setDEF("hanim_menton_pt").setTranslation(new double[] {0,1.3,0.08})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 87 hanim_menton_pt"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32772().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA773().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f774().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString775().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32776().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA777().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f778().getArray()))))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new double[] {0.03847,1.2087,-0.01378}).setUlimit(new MFFloat779().getArray()).setLlimit(new MFFloat780().getArray())
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName("l_clavicale").setDEF("hanim_l_clavicale_pt").setTranslation(new double[] {0.03,1.2,0.04})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale hanim_l_clavicale_pt"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32781().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA782().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f783().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString784().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32785().getArray())
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA786().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f787().getArray())))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new double[] {0.12294,1.191825,-0.0129}).setUlimit(new MFFloat788().getArray()).setLlimit(new MFFloat789().getArray())
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName("l_acromion").setDEF("hanim_l_acromion_pt").setTranslation(new double[] {0.15,1.222,-0.02})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 15 hanim_l_acromion_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32790().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA791().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f792().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString793().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName("l_axilla_proximal").setDEF("hanim_l_axilla_proximal_pt").setTranslation(new double[] {0.15,1.16,0.04})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 16 hanim_l_axilla_proximal_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32794().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA795().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f796().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString797().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName("l_axilla_distal").setDEF("hanim_l_axilla_distal_pt").setTranslation(new double[] {0.17,1.14,0})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 17 hanim_l_axilla_distal_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32798().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA799().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f800().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString801().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName("l_axilla_posterior_folds").setDEF("hanim_l_axilla_posterior_folds_pt").setTranslation(new double[] {0.15,1.145,-0.04})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 18 hanim_l_axilla_posterior_folds_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32802().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA803().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f804().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString805().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32806().getArray())
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA807().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f808().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new double[] {0.16506,1.17855,-0.00327}).setUlimit(new MFFloat809().getArray()).setLlimit(new MFFloat810().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_humeral_lateral_epicondyle").setDEF("hanim_l_humeral_lateral_epicondyle_pt").setTranslation(new double[] {0.2,0.95,-0.03})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32811().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA812().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f813().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString814().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_humeral_medial_epicondyle").setDEF("hanim_l_humeral_medial_epicondyle_pt").setTranslation(new double[] {0.18,0.93,-0.03})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32815().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA816().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f817().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString818().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_radiale").setDEF("hanim_l_radiale_pt").setTranslation(new double[] {0.2,0.91,-0.03})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 69 hanim_l_radiale_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32819().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA820().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f821().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString822().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_bideltoid").setDEF("hanim_l_bideltoid_pt").setTranslation(new double[] {0.225,1.185,0})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 96 hanim_l_bideltoid_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32823().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA824().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f825().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString826().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32827().getArray())
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA828().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f829().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new double[] {0.18209,0.9288,-0.00563}).setUlimit(new MFFloat830().getArray()).setLlimit(new MFFloat831().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_radial_styloid").setDEF("hanim_l_radial_styloid_pt").setTranslation(new double[] {0.18,0.725,0.025})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 71 hanim_l_radial_styloid_pt"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32832().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA833().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f834().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString835().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_olecranon").setDEF("hanim_l_olecranon_pt").setTranslation(new double[] {0.2,0.92,-0.03})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 65 hanim_l_olecranon_pt"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32836().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA837().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f838().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString839().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035))))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32840().getArray())
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA841().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f842().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new double[] {0.1819,0.72427,-0.005}).setUlimit(new MFFloat843().getArray()).setLlimit(new MFFloat844().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                                                          .addChild(new HAnimSite("hanim_l_carpal").setName("l_ulnar_styloid").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new double[] {0.2,0.725,0})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite 70 hanim_l_ulnar_styloid_pt"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32845().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA846().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f847().getArray()))))
                                                            .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString848().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32849().getArray())
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA850().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f851().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new double[] {0.1813,0.706,0.0193}).setUlimit(new MFFloat852().getArray()).setLlimit(new MFFloat853().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName("l_trapezium").setDEF("hanim_l_trapezium")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32854().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA855().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f856().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new double[] {0.1805,0.69255,0.026}).setUlimit(new MFFloat857().getArray()).setLlimit(new MFFloat858().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_1").setName("l_metacarpal_phalanx_2").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new double[] {0.2,0.665,0.012})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32859().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA860().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f861().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString862().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32863().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA864().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f865().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new double[] {0.181,0.6727,0.03577}).setUlimit(new MFFloat866().getArray()).setLlimit(new MFFloat867().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32868().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA869().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f870().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new double[] {0.1826,0.654,0.04966}).setUlimit(new MFFloat871().getArray()).setLlimit(new MFFloat872().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_1").setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1_tip").setTranslation(new double[] {0.18,0.64,0.06})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32873().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA874().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f875().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString876().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32877().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA878().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f879().getArray())))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new double[] {0.18128,0.70695,0.00842}).setUlimit(new MFFloat880().getArray()).setLlimit(new MFFloat881().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32882().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA883().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f884().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new double[] {0.18128,0.6876,0.0098}).setUlimit(new MFFloat885().getArray()).setLlimit(new MFFloat886().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32887().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA888().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f889().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new double[] {0.1837,0.6372,0.01507}).setUlimit(new MFFloat890().getArray()).setLlimit(new MFFloat891().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32892().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA893().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f894().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new double[] {0.18171,0.6068,0.01418}).setUlimit(new MFFloat895().getArray()).setLlimit(new MFFloat896().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32897().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA898().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f899().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new double[] {0.18067,0.5816,0.01338}).setUlimit(new MFFloat900().getArray()).setLlimit(new MFFloat901().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_2").setName("l_dactylion").setDEF("hanim_l_dactylion_pt").setTranslation(new double[] {0.17,0.558,0.017})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 57 hanim_l_dactylion_pt"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32902().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA903().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f904().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString905().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_2").setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2_tip").setTranslation(new double[] {0.172,0.558,0.017})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32906().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA907().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f908().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString909().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32910().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA911().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f912().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new double[] {0.18108,0.708525,-0.0048}).setUlimit(new MFFloat913().getArray()).setLlimit(new MFFloat914().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName("l_capitate").setDEF("hanim_l_capitate")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32915().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA916().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f917().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new double[] {0.18108,0.6858,-0.00625}).setUlimit(new MFFloat918().getArray()).setLlimit(new MFFloat919().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_3").setName("l_metacarpal_phalanx_3").setDEF("hanim_l_metacarpal_phalanx_3_pt").setTranslation(new double[] {0.2,0.665,-0.039})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32920().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA921().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f922().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString923().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32924().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA925().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f926().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new double[] {0.18369,0.6349,-0.0039}).setUlimit(new MFFloat927().getArray()).setLlimit(new MFFloat928().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32929().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA930().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f931().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new double[] {0.18171,0.6032,-0.0035}).setUlimit(new MFFloat932().getArray()).setLlimit(new MFFloat933().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32934().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA935().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f936().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new double[] {0.1807,0.5753,-0.0037}).setUlimit(new MFFloat937().getArray()).setLlimit(new MFFloat938().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3")
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_3").setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3_tip").setTranslation(new double[] {0.172,0.555,-0.006})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32939().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA940().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f941().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString942().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32943().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA944().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f945().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new double[] {0.18108,0.70582,-0.02574}).setUlimit(new MFFloat946().getArray()).setLlimit(new MFFloat947().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName("l_hamate").setDEF("hanim_l_hamate")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32948().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA949().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f950().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new double[] {0.1811,0.68625,-0.0199}).setUlimit(new MFFloat951().getArray()).setLlimit(new MFFloat952().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32953().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA954().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f955().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new double[] {0.18369,0.63405,-0.02144}).setUlimit(new MFFloat956().getArray()).setLlimit(new MFFloat957().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32958().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA959().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f960().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new double[] {0.1817,0.6066,-0.02064}).setUlimit(new MFFloat961().getArray()).setLlimit(new MFFloat962().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32963().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA964().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f965().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new double[] {0.18067,0.580725,-0.01977}).setUlimit(new MFFloat966().getArray()).setLlimit(new MFFloat967().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4")
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_4").setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4_tip").setTranslation(new double[] {0.172,0.559,-0.024})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32968().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA969().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f970().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString971().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32972().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA973().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f974().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new double[] {0.18164,0.68827,-0.03278}).setUlimit(new MFFloat975().getArray()).setLlimit(new MFFloat976().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                            .addChild(new HAnimSite("hanim_l_metacarpal_5").setName("l_metacarpal_phalanx_5").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new double[] {0.2,0.665,-0.036})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32977().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA978().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f979().getArray()))))
                                                              .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString980().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035))))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32981().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA982().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f983().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new double[] {0.1833,0.6381,-0.037}).setUlimit(new MFFloat984().getArray()).setLlimit(new MFFloat985().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32986().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA987().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f988().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new double[] {0.18166,0.621,-0.03715}).setUlimit(new MFFloat989().getArray()).setLlimit(new MFFloat990().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32991().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA992().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f993().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new double[] {0.1808,0.6023,-0.0369}).setUlimit(new MFFloat994().getArray()).setLlimit(new MFFloat995().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5")
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_5").setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5_tip").setTranslation(new double[] {0.172,0.58,-0.039})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32996().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA997().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f998().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString999().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321000().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1001().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1002().getArray()))))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new double[] {-0.03847,1.2087,-0.0138}).setUlimit(new MFFloat1003().getArray()).setLlimit(new MFFloat1004().getArray())
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName("r_clavicale").setDEF("hanim_r_clavicale_pt").setTranslation(new double[] {-0.03,1.2,0.04})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale hanim_r_clavicale_pt"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321005().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1006().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1007().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString1008().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321009().getArray())
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1010().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1011().getArray())))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new double[] {-0.1229,1.19182,-0.0129}).setUlimit(new MFFloat1012().getArray()).setLlimit(new MFFloat1013().getArray())
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName("r_acromion").setDEF("hanim_r_acromion_pt").setTranslation(new double[] {-0.15,1.222,-0.02})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 20 hanim_r_acromion_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321014().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1015().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1016().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString1017().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName("r_axilla_proximal").setDEF("hanim_r_axilla_proximal_pt").setTranslation(new double[] {-0.15,1.16,0.04})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 21 hanim_r_axilla_proximal_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321018().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1019().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1020().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString1021().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName("r_axilla_distal").setDEF("hanim_r_axilla_distal_pt").setTranslation(new double[] {-0.17,1.14,0})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 22 hanim_r_axilla_distal_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321022().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1023().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1024().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString1025().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName("r_axilla_posterior_folds").setDEF("hanim_r_axilla_posterior_folds_pt").setTranslation(new double[] {-0.15,1.145,-0.04})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite 23 hanim_r_axilla_posterior_folds_pt"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321026().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1027().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1028().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString1029().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt321030().getArray())
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1031().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1032().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new double[] {-0.1647,1.17855,-0.00327}).setUlimit(new MFFloat1033().getArray()).setLlimit(new MFFloat1034().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_humeral_lateral_epicondyle").setDEF("hanim_r_humeral_lateral_epicondyle_pt").setTranslation(new double[] {-0.2,0.95,-0.03})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321035().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA1036().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f1037().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString1038().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_humeral_medial_epicondyle").setDEF("hanim_r_humeral_medial_epicondyle_pt").setTranslation(new double[] {-0.18,0.93,-0.03})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321039().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA1040().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f1041().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString1042().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_radiale").setDEF("hanim_r_radiale_pt").setTranslation(new double[] {-0.2,0.91,-0.03})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 72 hanim_r_radiale_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321043().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA1044().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f1045().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString1046().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_bideltoid").setDEF("hanim_r_bideltoid_pt").setTranslation(new double[] {-0.225,1.185,0})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 97 hanim_r_bideltoid_pt"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321047().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA1048().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f1049().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString1050().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035))))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt321051().getArray())
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1052().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1053().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new double[] {-0.1817,0.9288,-0.00564}).setUlimit(new MFFloat1054().getArray()).setLlimit(new MFFloat1055().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_radial_styloid").setDEF("hanim_r_radial_styloid_pt").setTranslation(new double[] {-0.18,0.725,0.025})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 74 hanim_r_radial_styloid_pt"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321056().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA1057().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f1058().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString1059().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_olecranon").setDEF("hanim_r_olecranon_pt").setTranslation(new double[] {-0.2,0.92,-0.03})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 68 hanim_r_olecranon_pt"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321060().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA1061().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f1062().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString1063().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035))))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt321064().getArray())
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA1065().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f1066().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new double[] {-0.1816,0.7242,-0.005}).setUlimit(new MFFloat1067().getArray()).setLlimit(new MFFloat1068().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setName("r_carpal").setDEF("hanim_r_carpal")
                                                          .addChild(new HAnimSite("hanim_r_carpal").setName("r_ulnar_styloid").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new double[] {-0.2,0.725,0})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite 73 hanim_r_ulnar_styloid_pt"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321069().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA1070().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f1071().getArray()))))
                                                            .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString1072().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt321073().getArray())
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA1074().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f1075().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new double[] {-0.18097,0.70605,0.0193}).setUlimit(new MFFloat1076().getArray()).setLlimit(new MFFloat1077().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName("r_trapezium").setDEF("hanim_r_trapezium")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt321078().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA1079().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f1080().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new double[] {-0.18,0.69255,0.02598}).setUlimit(new MFFloat1081().getArray()).setLlimit(new MFFloat1082().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_1").setName("r_metacarpal_phalanx_2").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new double[] {-0.2,0.665,0.012})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321083().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1084().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1085().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString1086().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt321087().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA1088().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f1089().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new double[] {-0.18065,0.67275,0.03577}).setUlimit(new MFFloat1090().getArray()).setLlimit(new MFFloat1091().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt321092().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1093().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1094().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new double[] {-0.18227,0.654,0.0496}).setUlimit(new MFFloat1095().getArray()).setLlimit(new MFFloat1096().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1")
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_1").setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1_tip").setTranslation(new double[] {-0.18,0.64,0.06})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321097().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1098().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1099().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString1100().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321101().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1102().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1103().getArray())))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new double[] {-0.18097,0.70695,0.0084}).setUlimit(new MFFloat1104().getArray()).setLlimit(new MFFloat1105().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt321106().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA1107().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f1108().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new double[] {-0.1809,0.6876,0.0097}).setUlimit(new MFFloat1109().getArray()).setLlimit(new MFFloat1110().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt321111().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA1112().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f1113().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new double[] {-0.18335,0.6372,0.01507}).setUlimit(new MFFloat1114().getArray()).setLlimit(new MFFloat1115().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt321116().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1117().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1118().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new double[] {-0.1813,0.6068,0.01418}).setUlimit(new MFFloat1119().getArray()).setLlimit(new MFFloat1120().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321121().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1122().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1123().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new double[] {-0.1803,0.5816,0.01338}).setUlimit(new MFFloat1124().getArray()).setLlimit(new MFFloat1125().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2")
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_2").setName("r_dactylion").setDEF("hanim_r_dactylion_pt").setTranslation(new double[] {-0.17,0.558,0.017})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 61 hanim_r_dactylion_pt"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321126().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1127().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1128().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString1129().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_2").setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2_tip").setTranslation(new double[] {-0.172,0.558,0.017})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321130().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1131().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1132().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString1133().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt321134().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1135().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1136().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new double[] {-0.18072,0.708525,-0.004797}).setUlimit(new MFFloat1137().getArray()).setLlimit(new MFFloat1138().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName("r_capitate").setDEF("hanim_r_capitate")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt321139().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA1140().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f1141().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new double[] {-0.18072,0.6858,-0.00625}).setUlimit(new MFFloat1142().getArray()).setLlimit(new MFFloat1143().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_3").setName("r_metacarpal_phalanx_3").setDEF("hanim_r_metacarpal_phalanx_3_pt").setTranslation(new double[] {-0.2,0.665,0.016})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321144().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1145().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1146().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString1147().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt321148().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA1149().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f1150().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new double[] {-0.1833,0.63495,-0.0039}).setUlimit(new MFFloat1151().getArray()).setLlimit(new MFFloat1152().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt321153().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1154().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1155().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new double[] {-0.1813,0.6032,-0.0035}).setUlimit(new MFFloat1156().getArray()).setLlimit(new MFFloat1157().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321158().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1159().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1160().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new double[] {-0.18029,0.5753,-0.00375}).setUlimit(new MFFloat1161().getArray()).setLlimit(new MFFloat1162().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3")
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_3").setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3_tip").setTranslation(new double[] {-0.17,0.555,-0.006})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321163().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1164().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1165().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString1166().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt321167().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1168().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1169().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new double[] {-0.18072,0.70583,-0.02574}).setUlimit(new MFFloat1170().getArray()).setLlimit(new MFFloat1171().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName("r_hamate").setDEF("hanim_r_hamate")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt321172().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA1173().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f1174().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new double[] {-0.18072,0.68625,-0.01992}).setUlimit(new MFFloat1175().getArray()).setLlimit(new MFFloat1176().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt321177().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA1178().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f1179().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new double[] {-0.1833,0.63405,-0.02144}).setUlimit(new MFFloat1180().getArray()).setLlimit(new MFFloat1181().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt321182().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1183().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1184().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new double[] {-0.1813,0.6066,-0.02064}).setUlimit(new MFFloat1185().getArray()).setLlimit(new MFFloat1186().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321187().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1188().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1189().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new double[] {-0.18029,0.5807,-0.01978}).setUlimit(new MFFloat1190().getArray()).setLlimit(new MFFloat1191().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4")
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_4").setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4_tip").setTranslation(new double[] {-0.172,0.559,-0.024})
                                                                      .addChild(new TouchSensor().setDescription("HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321192().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA1193().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f1194().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString1195().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt321196().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1197().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1198().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new double[] {-0.18126,0.68827,-0.03278}).setUlimit(new MFFloat1199().getArray()).setLlimit(new MFFloat1200().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                            .addChild(new HAnimSite("hanim_r_metacarpal_5").setName("r_metacarpal_phalanx_5").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new double[] {-0.2,0.665,-0.036})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321201().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA1202().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f1203().getArray()))))
                                                              .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString1204().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035))))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt321205().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA1206().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f1207().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new double[] {-0.18297,0.6381,-0.0371}).setUlimit(new MFFloat1208().getArray()).setLlimit(new MFFloat1209().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt321210().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA1211().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f1212().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new double[] {-0.1813,0.621,-0.03715}).setUlimit(new MFFloat1213().getArray()).setLlimit(new MFFloat1214().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt321215().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA1216().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f1217().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new double[] {-0.18045,0.602325,-0.03697}).setUlimit(new MFFloat1218().getArray()).setLlimit(new MFFloat1219().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5")
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_5").setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5_tip").setTranslation(new double[] {-0.172,0.58,-0.039})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1})))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321220().getArray()).setCreaseAngle(0.5).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA1221().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f1222().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString1223().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt321224().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA1225().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f1226().getArray())))))))))))))))))))))))))))))))))
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new Background().setDEF("Background1").setGroundColor(new MFColor1227().getArray()).setSkyColor(new MFColor1228().getArray()))
        .addChild(new DirectionalLight().setGlobal(true))
        .addChild(new Viewpoint().setCenterOfRotation(new double[] {0,1,0}).setDescription("JinLOA4").setPosition(new double[] {0,1,3}))
        .addChild(new Transform().setDEF("Landmark000")
          .addComments("Another Parent Scene 0 0 0 landmark")
          .addChild(new Shape().setDEF("HAnim000Landmark")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0,1,0}).setEmissiveColor(new double[] {0,1,0})))
            .setGeometry(new Sphere().setRadius(0.01)))))      ;
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,0,0.6,0,0,0,1});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA9 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"33"});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA13 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"36"});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA17 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"42"});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA21 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"46"});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA25 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"32"});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA29 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"35"});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA33 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString35 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"34"});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA37 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"37"});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA41 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString43 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"38"});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA45 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString47 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"93"});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA49 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.826,0.02,0,0.77,0});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA54 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f55 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString56 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"90"});
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA58 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString60 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"40"});
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA62 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f63 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString64 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"39"});
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA66 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f67 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString68 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"41"});
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA70 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.095,0.8266,-0.0183,0,0.826,0.02});
  }
}
private class MFFloat72 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA75 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString77 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"47"});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA79 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString81 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"48"});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA83 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString85 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"49"});
  }
}
private class MFInt3286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA87 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183});
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA92 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f93 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString94 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"50"});
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA96 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f97 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString98 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"58"});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA100 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944});
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA105 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045});
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA110 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f111 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0674,0.0321,0.0184,0.0783,0.0369,0.0049});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA115 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0646,0.02324,0.0442,0.0674,0.0321,0.0184});
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA120 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f121 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString122 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"55"});
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA124 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0621,0.01442,0.0936,0.0646,0.02324,0.0442});
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA129 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString131 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"111"});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA133 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.062,0.012,0.115,0.0621,0.01442,0.0936});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA138 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f139 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0814,0.0335,0.02143,0.0783,0.0369,0.0049});
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA143 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f144 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0802,0.0261,0.0411,0.0814,0.0335,0.02143});
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA148 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0825,0.01497,0.09783,0.0802,0.0261,0.0411});
  }
}
private class MFFloat150 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA153 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0843,0.01265,0.114,0.0825,0.01497,0.09783});
  }
}
private class MFFloat155 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA158 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f159 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString160 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"112"});
  }
}
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA162 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f163 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0843,0.00982,0.123435,0.0843,0.01265,0.114});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat165 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA167 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f168 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.09297,0.0334,0.01982,0.0783,0.0369,0.0049});
  }
}
private class MFFloat169 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA172 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f173 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.09459,0.0261,0.0394,0.09297,0.0334,0.01982});
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32176 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA177 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0965,0.01505,0.0954,0.09459,0.0261,0.0394});
  }
}
private class MFFloat179 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA182 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f183 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.09886,0.01192,0.11047,0.0965,0.01505,0.0954});
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat185 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA187 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString189 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"113"});
  }
}
private class MFInt32190 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA191 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f192 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1004,0.00983,0.1197,0.09886,0.01192,0.11047});
  }
}
private class MFFloat193 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA196 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045});
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32200 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA201 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259});
  }
}
private class MFFloat203 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA206 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f207 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.10649,0.02454,0.03843,0.11063,0.03528,0.0021});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat209 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA211 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.109867,0.01435,0.09117,0.10649,0.02454,0.03843});
  }
}
private class MFFloat213 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA216 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f217 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.11416,0.01224,0.10631,0.109867,0.01435,0.09117});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA221 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString223 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"114"});
  }
}
private class MFInt32224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA225 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.11567,0.00936,0.11369,0.11416,0.01224,0.10631});
  }
}
private class MFFloat227 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA230 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f231 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1208,0.02094,0.03474,0.11063,0.03528,0.0021});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat233 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA235 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.124065,0.01367,0.08656,0.1208,0.02094,0.03474});
  }
}
private class MFFloat237 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA240 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f241 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString242 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"56"});
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA244 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.12638,0.01086,0.09414,0.124065,0.01367,0.08656});
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA249 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString251 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"115"});
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA253 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.12728,0.00856,0.10188,0.12638,0.01086,0.09414});
  }
}
private class MFFloat255 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA258 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f259 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString260 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"91"});
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA262 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f263 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString264 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"44"});
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA266 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f267 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString268 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"43"});
  }
}
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA270 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f271 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString272 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"45"});
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA274 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f275 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.09466,0.82665,-0.01835,0,0.826,0.02});
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat277 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA279 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString281 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"51"});
  }
}
private class MFInt32282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA283 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString285 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"52"});
  }
}
private class MFInt32286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA287 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString289 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"53"});
  }
}
private class MFInt32290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA291 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835});
  }
}
private class MFFloat293 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat294 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA296 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f297 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString298 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"54"});
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA300 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f301 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString302 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"62"});
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA304 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f305 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944});
  }
}
private class MFFloat306 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat307 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32308 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA309 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045});
  }
}
private class MFFloat311 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA314 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f315 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486});
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat317 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA319 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f320 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839});
  }
}
private class MFFloat321 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat322 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA324 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f325 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString326 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"59"});
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA328 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f329 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419});
  }
}
private class MFFloat330 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat331 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32332 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA333 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f334 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString335 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"116"});
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA337 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362});
  }
}
private class MFFloat339 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32341 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA342 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f343 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486});
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat345 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32346 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA347 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f348 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142});
  }
}
private class MFFloat349 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA352 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f353 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106});
  }
}
private class MFFloat354 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat355 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32356 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA357 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f358 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783});
  }
}
private class MFFloat359 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat360 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32361 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA362 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f363 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString364 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"117"});
  }
}
private class MFInt32365 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA366 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f367 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114});
  }
}
private class MFFloat368 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat369 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA371 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f372 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486});
  }
}
private class MFFloat373 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA376 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f377 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982});
  }
}
private class MFFloat378 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat379 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32380 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA381 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f382 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394});
  }
}
private class MFFloat383 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat384 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32385 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA386 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f387 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542});
  }
}
private class MFFloat388 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat389 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32390 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA391 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f392 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString393 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"118"});
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA395 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f396 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047});
  }
}
private class MFFloat397 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat398 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32399 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA400 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f401 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045});
  }
}
private class MFFloat402 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat403 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32404 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA405 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f406 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965});
  }
}
private class MFFloat407 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat408 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32409 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA410 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f411 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021});
  }
}
private class MFFloat412 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat413 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32414 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA415 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f416 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843});
  }
}
private class MFFloat417 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat418 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32419 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA420 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f421 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117});
  }
}
private class MFFloat422 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat423 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32424 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA425 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f426 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString427 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"119"});
  }
}
private class MFInt32428 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA429 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f430 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063});
  }
}
private class MFFloat431 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32433 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA434 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f435 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021});
  }
}
private class MFFloat436 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat437 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32438 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA439 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f440 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474});
  }
}
private class MFFloat441 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat442 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32443 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA444 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f445 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString446 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"60"});
  }
}
private class MFInt32447 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA448 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f449 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656});
  }
}
private class MFFloat450 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat451 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32452 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA453 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f454 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString455 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"120"});
  }
}
private class MFInt32456 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA457 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f458 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414});
  }
}
private class MFFloat459 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat460 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32461 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA462 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f463 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString464 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"24"});
  }
}
private class MFInt32465 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA466 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f467 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString468 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"25"});
  }
}
private class MFInt32469 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA470 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f471 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString472 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"26"});
  }
}
private class MFInt32473 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA474 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f475 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString476 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"27"});
  }
}
private class MFInt32477 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA478 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f479 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString480 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"84"});
  }
}
private class MFInt32481 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA482 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f483 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9254,-0.01376,0,0.77,0});
  }
}
private class MFFloat484 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat485 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32486 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA487 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f488 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9497,-0.01376,0,0.9254,-0.01376});
  }
}
private class MFFloat489 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat490 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32491 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA492 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f493 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9659,-0.01376,0,0.9497,-0.01376});
  }
}
private class MFFloat494 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat495 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32496 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA497 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f498 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString499 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"28"});
  }
}
private class MFInt32500 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA501 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f502 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString503 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"30"});
  }
}
private class MFInt32504 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA505 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f506 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.98235,-0.01376,0,0.9659,-0.01376});
  }
}
private class MFFloat507 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat508 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32509 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA510 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f511 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.99967,-0.01376,0,0.98235,-0.01376});
  }
}
private class MFFloat512 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat513 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32514 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA515 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f516 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.0231,-0.01376,0,0.99967,-0.01376});
  }
}
private class MFFloat517 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat518 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32519 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA520 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f521 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.0467,-0.01376,0,1.0231,-0.01376});
  }
}
private class MFFloat522 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat523 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32524 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA525 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f526 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString527 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"13"});
  }
}
private class MFInt32528 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA529 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f530 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString531 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"88"});
  }
}
private class MFInt32532 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA533 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f534 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.0638,-0.01378,0,1.0467,-0.01376});
  }
}
private class MFFloat535 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA538 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f539 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString540 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"29"});
  }
}
private class MFInt32541 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA542 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f543 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString544 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31"});
  }
}
private class MFInt32545 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA546 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f547 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString548 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"92"});
  }
}
private class MFInt32549 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA550 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f551 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString552 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"94"});
  }
}
private class MFInt32553 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA554 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f555 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString556 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"95"});
  }
}
private class MFInt32557 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA558 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f559 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.0784,-0.01376,0,1.0638,-0.01378});
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat561 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32562 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA563 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f564 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.093,-0.01376,0,1.0784,-0.01376});
  }
}
private class MFFloat565 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat566 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32567 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA568 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f569 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.1088,-0.01376,0,1.093,-0.01376});
  }
}
private class MFFloat570 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat571 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32572 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA573 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f574 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.1216,-0.01376,0,1.1088,-0.01376});
  }
}
private class MFFloat575 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat576 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32577 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA578 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f579 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.137,-0.01376,0,1.1216,-0.01376});
  }
}
private class MFFloat580 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat581 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32582 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA583 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f584 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.1524,-0.01376,0,1.137,-0.01376});
  }
}
private class MFFloat585 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat586 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32587 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA588 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f589 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.1709,-0.01376,0,1.1524,-0.01376});
  }
}
private class MFFloat590 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat591 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32592 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA593 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f594 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.1956,-0.01378,0,1.1709,-0.01376});
  }
}
private class MFFloat595 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat596 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32597 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA598 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f599 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString600 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"12"});
  }
}
private class MFInt32601 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA602 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f603 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString604 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10"});
  }
}
private class MFInt32605 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA606 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f607 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.22,-0.0138,0,1.1956,-0.01378});
  }
}
private class MFFloat608 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat609 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32610 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA611 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f612 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString613 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"82"});
  }
}
private class MFInt32614 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA615 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f616 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString617 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"83"});
  }
}
private class MFInt32618 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA619 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f620 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.2453,-0.01506,0,1.22,-0.0138});
  }
}
private class MFFloat621 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat622 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32623 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA624 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f625 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.2575,-0.01506,0,1.2453,-0.01506});
  }
}
private class MFFloat626 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat627 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32628 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA629 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f630 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.2699,-0.01506,0,1.2575,-0.01506});
  }
}
private class MFFloat631 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat632 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32633 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA634 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f635 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.28227,-0.01506,0,1.2699,-0.01506});
  }
}
private class MFFloat636 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat637 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32638 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA639 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f640 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.2951,-0.01506,0,1.28227,-0.01506});
  }
}
private class MFFloat641 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat642 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32643 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA644 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f645 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString646 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"11"});
  }
}
private class MFInt32647 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA648 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f649 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.307,-0.015,0,1.2951,-0.01506});
  }
}
private class MFFloat650 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat651 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32652 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA653 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f654 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.3185,-0.0151,0,1.307,-0.015});
  }
}
private class MFFloat655 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat656 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32657 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA658 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f659 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString660 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"0"});
  }
}
private class MFInt32661 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA662 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f663 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString664 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1"});
  }
}
private class MFInt32665 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA666 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f667 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString668 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2"});
  }
}
private class MFInt32669 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA670 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f671 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString672 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"3"});
  }
}
private class MFInt32673 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA674 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f675 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString676 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"4"});
  }
}
private class MFInt32677 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA678 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f679 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString680 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"6"});
  }
}
private class MFInt32681 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA682 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f683 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString684 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"7"});
  }
}
private class MFInt32685 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA686 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f687 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString688 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"81"});
  }
}
private class MFInt32689 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA690 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f691 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString692 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"89"});
  }
}
private class MFInt32693 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA694 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f695 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString696 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"85"});
  }
}
private class MFInt32697 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA698 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f699 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString700 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"86"});
  }
}
private class MFInt32701 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA702 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f703 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.3126,-0.0154,0,1.3185,-0.0151});
  }
}
private class MFFloat704 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat705 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32706 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA707 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f708 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString709 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_eyelid_tip"});
  }
}
private class MFInt32710 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA711 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f712 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0505,1.42425,0.03294,0,1.3126,-0.0154});
  }
}
private class MFFloat713 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat714 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32715 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA716 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f717 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString718 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_eyelid_tip"});
  }
}
private class MFInt32719 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA720 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f721 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0505,1.42425,0.03294,0,1.3126,-0.0154});
  }
}
private class MFFloat722 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat723 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32724 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA725 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f726 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString727 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_eyeball_tip"});
  }
}
private class MFInt32728 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA729 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f730 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.048127,1.4049,0.08305,0,1.3126,-0.0154});
  }
}
private class MFFloat731 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat732 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32733 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA734 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f735 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString736 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_eyeball_tip"});
  }
}
private class MFInt32737 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA738 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f739 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.04813,1.4049,0.08305,0,1.3126,-0.0154});
  }
}
private class MFFloat740 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat741 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32742 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA743 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f744 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString745 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_eyebrow_tip"});
  }
}
private class MFInt32746 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA747 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f748 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.02175,1.4139,0.1069,0,1.3126,-0.0154});
  }
}
private class MFFloat749 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat750 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32751 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA752 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f753 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString754 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_eyebrow_tip"});
  }
}
private class MFInt32755 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA756 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f757 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.02175,1.4139,0.10694,0,1.3126,-0.0154});
  }
}
private class MFFloat758 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat759 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32760 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA761 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f762 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString763 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"5"});
  }
}
private class MFInt32764 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA765 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f766 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString767 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"8"});
  }
}
private class MFInt32768 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA769 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f770 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString771 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"9"});
  }
}
private class MFInt32772 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA773 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f774 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString775 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"87"});
  }
}
private class MFInt32776 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA777 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f778 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.3128,0.01538,0,1.3126,-0.0154});
  }
}
private class MFFloat779 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat780 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32781 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA782 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f783 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString784 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_clavicale"});
  }
}
private class MFInt32785 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA786 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f787 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.03847,1.2087,-0.01378,0,1.22,-0.0138});
  }
}
private class MFFloat788 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat789 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32790 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA791 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f792 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString793 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"15"});
  }
}
private class MFInt32794 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA795 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f796 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString797 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"16"});
  }
}
private class MFInt32798 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA799 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f800 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString801 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"17"});
  }
}
private class MFInt32802 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA803 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f804 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString805 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"18"});
  }
}
private class MFInt32806 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA807 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f808 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378});
  }
}
private class MFFloat809 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat810 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32811 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA812 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f813 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString814 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"63"});
  }
}
private class MFInt32815 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA816 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f817 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString818 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"64"});
  }
}
private class MFInt32819 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA820 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f821 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString822 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"69"});
  }
}
private class MFInt32823 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA824 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f825 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString826 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"96"});
  }
}
private class MFInt32827 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA828 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f829 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129});
  }
}
private class MFFloat830 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat831 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32832 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA833 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f834 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString835 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"71"});
  }
}
private class MFInt32836 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA837 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f838 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString839 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"65"});
  }
}
private class MFInt32840 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA841 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f842 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327});
  }
}
private class MFFloat843 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat844 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32845 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA846 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f847 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString848 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"70"});
  }
}
private class MFInt32849 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA850 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f851 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563});
  }
}
private class MFFloat852 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat853 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32854 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA855 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f856 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1813,0.706,0.0193,0.1819,0.72427,-0.005});
  }
}
private class MFFloat857 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat858 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32859 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA860 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f861 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString862 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"75"});
  }
}
private class MFInt32863 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA864 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f865 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1805,0.69255,0.026,0.1813,0.706,0.0193});
  }
}
private class MFFloat866 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat867 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32868 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA869 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f870 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.181,0.6727,0.03577,0.1805,0.69255,0.026});
  }
}
private class MFFloat871 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat872 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32873 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA874 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f875 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString876 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"101"});
  }
}
private class MFInt32877 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA878 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f879 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1826,0.654,0.04966,0.181,0.6727,0.03577});
  }
}
private class MFFloat880 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat881 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32882 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA883 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f884 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18128,0.70695,0.00842,0.1819,0.72427,-0.005});
  }
}
private class MFFloat885 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat886 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32887 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA888 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f889 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18128,0.6876,0.0098,0.18128,0.70695,0.00842});
  }
}
private class MFFloat890 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat891 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32892 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA893 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f894 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1837,0.6372,0.01507,0.18128,0.6876,0.0098});
  }
}
private class MFFloat895 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat896 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32897 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA898 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f899 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18171,0.6068,0.01418,0.1837,0.6372,0.01507});
  }
}
private class MFFloat900 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat901 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32902 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA903 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f904 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString905 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"57"});
  }
}
private class MFInt32906 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA907 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f908 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString909 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"102"});
  }
}
private class MFInt32910 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA911 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f912 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18067,0.5816,0.01338,0.18171,0.6068,0.01418});
  }
}
private class MFFloat913 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat914 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32915 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA916 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f917 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005});
  }
}
private class MFFloat918 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat919 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32920 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA921 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f922 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString923 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"76"});
  }
}
private class MFInt32924 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA925 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f926 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048});
  }
}
private class MFFloat927 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat928 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32929 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA930 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f931 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625});
  }
}
private class MFFloat932 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat933 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32934 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA935 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f936 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039});
  }
}
private class MFFloat937 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat938 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32939 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA940 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f941 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString942 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"103"});
  }
}
private class MFInt32943 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA944 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f945 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035});
  }
}
private class MFFloat946 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat947 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32948 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA949 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f950 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005});
  }
}
private class MFFloat951 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat952 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32953 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA954 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f955 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574});
  }
}
private class MFFloat956 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat957 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32958 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA959 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f960 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199});
  }
}
private class MFFloat961 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat962 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32963 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA964 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f965 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144});
  }
}
private class MFFloat966 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat967 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32968 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA969 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f970 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString971 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"104"});
  }
}
private class MFInt32972 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA973 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f974 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064});
  }
}
private class MFFloat975 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat976 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32977 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA978 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f979 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString980 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"77"});
  }
}
private class MFInt32981 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA982 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f983 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005});
  }
}
private class MFFloat984 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat985 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32986 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA987 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f988 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278});
  }
}
private class MFFloat989 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat990 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32991 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA992 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f993 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.18166,0.621,-0.03715,0.1833,0.6381,-0.037});
  }
}
private class MFFloat994 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat995 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32996 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA997 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f998 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString999 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"105"});
  }
}
private class MFInt321000 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1001 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1002 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715});
  }
}
private class MFFloat1003 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1004 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321005 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1006 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1007 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1008 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_clavicale"});
  }
}
private class MFInt321009 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1010 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1011 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.03847,1.2087,-0.0138,0,1.22,-0.0138});
  }
}
private class MFFloat1012 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1013 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321014 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1015 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1016 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1017 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"20"});
  }
}
private class MFInt321018 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1019 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1020 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1021 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"21"});
  }
}
private class MFInt321022 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1023 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1024 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1025 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"22"});
  }
}
private class MFInt321026 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1027 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1028 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1029 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"23"});
  }
}
private class MFInt321030 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1031 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1032 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138});
  }
}
private class MFFloat1033 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1034 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321035 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1036 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1037 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1038 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"66"});
  }
}
private class MFInt321039 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1040 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1041 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1042 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"67"});
  }
}
private class MFInt321043 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1044 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1045 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1046 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"72"});
  }
}
private class MFInt321047 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1048 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1049 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1050 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"97"});
  }
}
private class MFInt321051 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1052 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1053 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129});
  }
}
private class MFFloat1054 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1055 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321056 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1057 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1058 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1059 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"74"});
  }
}
private class MFInt321060 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1061 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1062 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1063 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"68"});
  }
}
private class MFInt321064 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1065 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1066 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327});
  }
}
private class MFFloat1067 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1068 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321069 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1070 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1071 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1072 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"73"});
  }
}
private class MFInt321073 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1074 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1075 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564});
  }
}
private class MFFloat1076 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1077 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321078 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1079 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1080 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005});
  }
}
private class MFFloat1081 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1082 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321083 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1084 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1085 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1086 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"78"});
  }
}
private class MFInt321087 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1088 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1089 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193});
  }
}
private class MFFloat1090 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1091 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321092 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1093 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1094 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598});
  }
}
private class MFFloat1095 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1096 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321097 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1098 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1099 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1100 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"106"});
  }
}
private class MFInt321101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1102 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1103 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577});
  }
}
private class MFFloat1104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1107 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1108 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005});
  }
}
private class MFFloat1109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1112 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1113 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084});
  }
}
private class MFFloat1114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1117 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097});
  }
}
private class MFFloat1119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1122 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1123 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507});
  }
}
private class MFFloat1124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1127 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1129 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"61"});
  }
}
private class MFInt321130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1131 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1132 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1133 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"107"});
  }
}
private class MFInt321134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1135 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418});
  }
}
private class MFFloat1137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1138 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1140 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1141 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005});
  }
}
private class MFFloat1142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1145 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1147 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"79"});
  }
}
private class MFInt321148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1149 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797});
  }
}
private class MFFloat1151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1154 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1155 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625});
  }
}
private class MFFloat1156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1157 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321158 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1159 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1160 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039});
  }
}
private class MFFloat1161 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1164 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1165 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1166 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"108"});
  }
}
private class MFInt321167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1168 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1169 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035});
  }
}
private class MFFloat1170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1171 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1173 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005});
  }
}
private class MFFloat1175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1178 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1179 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574});
  }
}
private class MFFloat1180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1181 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321182 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1183 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992});
  }
}
private class MFFloat1185 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1188 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1189 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144});
  }
}
private class MFFloat1190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1191 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1193 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1195 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"109"});
  }
}
private class MFInt321196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1197 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064});
  }
}
private class MFFloat1199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1202 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1203 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1204 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"80"});
  }
}
private class MFInt321205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1206 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1207 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005});
  }
}
private class MFFloat1208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1209 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1211 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278});
  }
}
private class MFFloat1213 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1216 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1217 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371});
  }
}
private class MFFloat1218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat1219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt321220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA1221 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f1222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
  }
}
private class MFString1223 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"110"});
  }
}
private class MFInt321224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA1225 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,1});
  }
}
private class MFVec3f1226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715});
  }
}
private class MFColor1227 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.5,0.5,0.5});
  }
}
private class MFColor1228 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.4,0.4,0.4});
  }
}
}
