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
import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;
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
    model.toFileJSON("../data/Jin20fSegmented.new.java.x3dj");
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
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("JinScaledV2L1LOA4MinimumSkeleton20f.x3d"))))
      .setScene(new Scene()
        .addComments(new CommentsBlock("https://www.web3d.org/documents/specifications/19774/V2.0/index.html"))
        .addComments(new CommentsBlock("0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule."))
        .addChild(new WorldInfo().setTitle(new SFString("20f Jin v2 loa4 Level 1, Joints, Segments, Sites")))
        .addChild(new Transform().setDEF(new SFString("ContainerScene000"))
          .addChild(new Shape().setDEF(new SFString("AxisLinesShape"))
            .addComments(new CommentsBlock("Red +X, Green +Y, Blue +Z"))
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setColor(new Color().setColor(new MFColor2().getArray()))
              .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray())))))
        .addChild(new HAnimHumanoid().setName(new SFString("JinLOA4S")).setDEF(new SFString("hanim_JinLOA4S")).setLoa(4).setVersion(new SFString("2.0"))
          .addSkeleton(new HAnimJoint("hanim_JinLOA4S").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setCenter(new float[] {0f ,0.77f ,0f })
            .addChild(new HAnimSegment("hanim_humanoid_root").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum"))
              .addChild(new Transform().setDEF(new SFString("Humanoid000"))
                .addChild(new Shape().setUSE(new SFString("AxisLinesShape")))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("hanim_sacroiliac")).setCenter(new float[] {0f ,0.826f ,0.02f })
              .addChild(new HAnimSegment("hanim_sacroiliac").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis"))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_iliocristale")).setDEF(new SFString("hanim_l_iliocristale_pt")).setTranslation(new float[] {0.13f ,0.92f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 33 hanim_l_iliocristale_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt324().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA5().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString7().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_iliocristale")).setDEF(new SFString("hanim_r_iliocristale_pt")).setTranslation(new float[] {-0.13f ,0.92f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 36 hanim_r_iliocristale_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt328().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA9().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString11().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_trochanterion")).setDEF(new SFString("hanim_l_trochanterion_pt")).setTranslation(new float[] {0.14f ,0.8f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 42 hanim_l_trochanterion_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3212().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA13().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString15().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_trochanterion")).setDEF(new SFString("hanim_r_trochanterion_pt")).setTranslation(new float[] {-0.14f ,0.8f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 46 hanim_r_trochanterion_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3216().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA17().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString19().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_asis")).setDEF(new SFString("hanim_l_asis_pt")).setTranslation(new float[] {0.1f ,0.86f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 32 hanim_l_asis_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3220().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA21().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString23().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_asis")).setDEF(new SFString("hanim_r_asis_pt")).setTranslation(new float[] {-0.1f ,0.86f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 35 hanim_r_asis_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3224().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA25().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString27().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_psis")).setDEF(new SFString("hanim_l_psis_pt")).setTranslation(new float[] {0.05f ,0.84f ,-0.11f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 34 hanim_l_psis_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3228().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA29().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString31().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_psis")).setDEF(new SFString("hanim_r_psis_pt")).setTranslation(new float[] {-0.05f ,0.84f ,-0.11f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 37 hanim_r_psis_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3232().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA33().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString35().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("crotch")).setDEF(new SFString("hanim_crotch_pt")).setTranslation(new float[] {0f ,0.703f ,0f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 38 hanim_crotch_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3236().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA37().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString39().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("buttocks_standing_wall_contact_point")).setDEF(new SFString("hanim_buttocks_standing_wall_contact_point_pt")).setTranslation(new float[] {0f ,0.8f ,-0.15f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA41().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString43().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3244().getArray())
                    .setColor(new ColorRGBA().setColor(new MFColorRGBA45().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray())))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("l_hip")).setDEF(new SFString("hanim_l_hip")).setCenter(new float[] {0.095f ,0.8266f ,-0.0183f })
                .addChild(new HAnimSegment("hanim_l_hip").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh"))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_knee_crease")).setDEF(new SFString("hanim_l_knee_crease_pt")).setTranslation(new float[] {0.09f ,0.41f ,-0.056f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 90 hanim_l_knee_crease_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3247().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA48().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString50().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_femoral_medial_epicondyle")).setDEF(new SFString("hanim_l_femoral_medial_epicondyle_pt")).setTranslation(new float[] {0.039f ,0.41f ,-0.01f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA52().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString54().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_femoral_lateral_epicondyle")).setDEF(new SFString("hanim_l_femoral_lateral_epicondyle_pt")).setTranslation(new float[] {0.127f ,0.41f ,-0.01f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3255().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA56().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString58().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_suprapatella")).setDEF(new SFString("hanim_l_suprapatella_pt")).setTranslation(new float[] {0.085f ,0.41f ,0.042f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 41 hanim_l_suprapatella_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3259().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA60().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString62().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3263().getArray())
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA64().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray())))))
                .addChild(new HAnimJoint("hanim_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("hanim_l_knee")).setCenter(new float[] {0.0926f ,0.4088f ,-0.01944f })
                  .addChild(new HAnimSegment("hanim_l_knee").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf"))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_tibiale")).setDEF(new SFString("hanim_l_tibiale_pt")).setTranslation(new float[] {0.09f ,0.31f ,0.038f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 47 hanim_l_tibiale_pt")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3266().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA67().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString69().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_medial_malleolus")).setDEF(new SFString("hanim_l_medial_malleolus_pt")).setTranslation(new float[] {0.061f ,0.095f ,-0.02f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 48 hanim_l_medial_malleolus_pt")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3270().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA71().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString73().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_lateral_malleolus")).setDEF(new SFString("hanim_l_lateral_malleolus_pt")).setTranslation(new float[] {0.12f ,0.095f ,-0.02f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 49 hanim_l_lateral_malleolus_pt")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3274().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA75().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString77().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3278().getArray())
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA79().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("hanim_l_talocrural")).setCenter(new float[] {0.0888f ,0.09545f ,-0.01045f })
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus"))
                      .addChild(new HAnimSite("hanim_l_talus").setName(new SFString("l_sphyrion")).setDEF(new SFString("hanim_l_sphyrion_pt")).setTranslation(new float[] {0.054f ,0.065f ,-0.02f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 50 hanim_l_sphyrion_pt")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA82().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString84().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_l_talus").setName(new SFString("l_calcaneus_posterior")).setDEF(new SFString("hanim_l_calcaneus_posterior_pt")).setTranslation(new float[] {0.09f ,0.03f ,-0.06f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 58 hanim_l_calcaneus_posterior_pt")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3285().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA86().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f87().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString88().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA90().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f91().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_talocalcaneonavicular")).setDEF(new SFString("hanim_l_talocalcaneonavicular")).setCenter(new float[] {0.0783f ,0.0369f ,0.0049f })
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName(new SFString("l_navicular")).setDEF(new SFString("hanim_l_navicular"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3292().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA93().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_1")).setDEF(new SFString("hanim_l_cuneonavicular_1")).setCenter(new float[] {0.0674f ,0.0321f ,0.0184f })
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName(new SFString("l_cuneiform_1")).setDEF(new SFString("hanim_l_cuneiform_1"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA96().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName(new SFString("l_tarsometatarsal_1")).setDEF(new SFString("hanim_l_tarsometatarsal_1")).setCenter(new float[] {0.0646f ,0.02324f ,0.0442f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsal_1")).setDEF(new SFString("hanim_l_metatarsal_1"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3298().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA99().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsophalangeal_1")).setDEF(new SFString("hanim_l_metatarsophalangeal_1")).setCenter(new float[] {0.0621f ,0.01442f ,0.0936f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_1"))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("l_metatarsal_phalanx_1")).setDEF(new SFString("hanim_l_metatarsal_phalanx_1_pt")).setTranslation(new float[] {0.062f ,0.012f ,0.1f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32101().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA102().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f103().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString104().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA106().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_l_tarsal_interphalangeal_1")).setCenter(new float[] {0.062f ,0.012f ,0.115f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_interphalangeal_1").setName(new SFString("l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_1"))
                                .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_1").setName(new SFString("l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_1_tip")).setTranslation(new float[] {0.062f ,0.012f ,0.134f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32108().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA109().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString111().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32112().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA113().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray())))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_2")).setDEF(new SFString("hanim_l_cuneonavicular_2")).setCenter(new float[] {0.0814f ,0.0335f ,0.02143f })
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName(new SFString("l_cuneiform_2")).setDEF(new SFString("hanim_l_cuneiform_2"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA116().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f117().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName(new SFString("l_tarsometatarsal_2")).setDEF(new SFString("hanim_l_tarsometatarsal_2")).setCenter(new float[] {0.0802f ,0.0261f ,0.0411f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("hanim_l_metatarsal_2"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32118().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA119().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("hanim_l_metatarsophalangeal_2")).setCenter(new float[] {0.0825f ,0.01497f ,0.09783f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA122().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f123().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {0.0843f ,0.01265f ,0.114f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_2"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32124().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA125().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_2")).setCenter(new float[] {0.0843f ,0.00982f ,0.123435f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setName(new SFString("l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_2"))
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_2").setName(new SFString("l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_2_tip")).setTranslation(new float[] {0.08f ,0.016f ,0.14f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32127().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA128().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f129().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString130().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA132().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f133().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_3")).setDEF(new SFString("hanim_l_cuneonavicular_3")).setCenter(new float[] {0.09297f ,0.0334f ,0.01982f })
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName(new SFString("l_cuneiform_3")).setDEF(new SFString("hanim_l_cuneiform_3"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32134().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA135().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName(new SFString("l_tarsometatarsal_3")).setDEF(new SFString("hanim_l_tarsometatarsal_3")).setCenter(new float[] {0.09459f ,0.0261f ,0.0394f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsal_3")).setDEF(new SFString("hanim_l_metatarsal_3"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA138().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f139().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsophalangeal_3")).setDEF(new SFString("hanim_l_metatarsophalangeal_3")).setCenter(new float[] {0.0965f ,0.01505f ,0.0954f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_3"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32140().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA141().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {0.09886f ,0.01192f ,0.11047f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_3"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA144().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f145().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_3")).setCenter(new float[] {0.1004f ,0.00983f ,0.1197f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_3").setName(new SFString("l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_3"))
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_3").setName(new SFString("l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_3_tip")).setTranslation(new float[] {0.1f ,0.016f ,0.14f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32146().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA147().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f148().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString149().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32150().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA151().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray())))))))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_calcaneocuboid")).setDEF(new SFString("hanim_l_calcaneocuboid")).setCenter(new float[] {0.0891f ,0.05798f ,-0.0259f })
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName(new SFString("l_calcaneus")).setDEF(new SFString("hanim_l_calcaneus"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA154().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName(new SFString("l_transversetarsal")).setDEF(new SFString("hanim_l_transversetarsal")).setCenter(new float[] {0.11063f ,0.03528f ,0.0021f })
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName(new SFString("l_cuboid")).setDEF(new SFString("hanim_l_cuboid"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32156().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA157().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_4")).setDEF(new SFString("hanim_l_tarsometatarsal_4")).setCenter(new float[] {0.10649f ,0.02454f ,0.03843f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsal_4")).setDEF(new SFString("hanim_l_metatarsal_4"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32159().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA160().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsophalangeal_4")).setDEF(new SFString("hanim_l_metatarsophalangeal_4")).setCenter(new float[] {0.109867f ,0.01435f ,0.09117f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_4"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32162().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA163().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {0.11416f ,0.01224f ,0.10631f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_4"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA166().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_4")).setCenter(new float[] {0.11567f ,0.00936f ,0.11369f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_4").setName(new SFString("l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_4"))
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_4").setName(new SFString("l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_4_tip")).setTranslation(new float[] {0.115f ,0.016f ,0.13f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32168().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA169().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString171().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32172().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA173().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray())))))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_5")).setDEF(new SFString("hanim_l_tarsometatarsal_5")).setCenter(new float[] {0.1208f ,0.02094f ,0.03474f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsal_5")).setDEF(new SFString("hanim_l_metatarsal_5"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA176().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f177().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsophalangeal_5")).setDEF(new SFString("hanim_l_metatarsophalangeal_5")).setCenter(new float[] {0.124065f ,0.01367f ,0.08656f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_5"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32178().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA179().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {0.12638f ,0.01086f ,0.09414f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_5"))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_5").setName(new SFString("l_metatarsal_phalanx_5")).setDEF(new SFString("hanim_l_metatarsal_phalanx_5_pt")).setTranslation(new float[] {0.12f ,0.02f ,0.04f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32181().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA182().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f183().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString184().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA186().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f187().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_5")).setCenter(new float[] {0.12728f ,0.00856f ,0.10188f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_5").setName(new SFString("l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_5"))
                                  .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_5").setName(new SFString("l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_5_tip")).setTranslation(new float[] {0.125f ,0.016f ,0.115f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32188().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA189().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString191().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32192().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA193().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("r_hip")).setDEF(new SFString("hanim_r_hip")).setCenter(new float[] {-0.09466f ,0.82665f ,-0.01835f })
                .addChild(new HAnimSegment("hanim_r_hip").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh"))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_knee_crease")).setDEF(new SFString("hanim_r_knee_crease_pt")).setTranslation(new float[] {-0.09f ,0.41f ,-0.056f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 91 hanim_r_knee_crease_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32195().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA196().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString198().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_femoral_medial_epicondyle")).setDEF(new SFString("hanim_r_femoral_medial_epicondyle_pt")).setTranslation(new float[] {-0.039f ,0.41f ,-0.01f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32199().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA200().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f201().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString202().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_femoral_lateral_epicondyle")).setDEF(new SFString("hanim_r_femoral_lateral_epicondyle_pt")).setTranslation(new float[] {-0.127f ,0.41f ,-0.01f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32203().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA204().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f205().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString206().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_suprapatella")).setDEF(new SFString("hanim_r_suprapatella_pt")).setTranslation(new float[] {-0.085f ,0.41f ,0.042f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 45 hanim_r_suprapatella_pt")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32207().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA208().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))))
                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString210().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA212().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f213().getArray())))))
                .addChild(new HAnimJoint("hanim_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("hanim_r_knee")).setCenter(new float[] {-0.0926f ,0.408825f ,-0.01944f })
                  .addChild(new HAnimSegment("hanim_r_knee").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf"))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_tibiale")).setDEF(new SFString("hanim_r_tibiale_pt")).setTranslation(new float[] {-0.09f ,0.31f ,0.038f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 51 hanim_r_tibiale_pt")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32214().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA215().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString217().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_medial_malleolus")).setDEF(new SFString("hanim_r_medial_malleolus_pt")).setTranslation(new float[] {-0.061f ,0.095f ,-0.02f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 52 hanim_r_medial_malleolus_pt")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32218().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA219().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString221().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_lateral_malleolus")).setDEF(new SFString("hanim_r_lateral_malleolus_pt")).setTranslation(new float[] {-0.12f ,0.095f ,-0.02f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 53 hanim_r_lateral_malleolus_pt")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32222().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA223().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))))
                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString225().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32226().getArray())
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA227().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setCenter(new float[] {-0.08845f ,0.09544f ,-0.01045f })
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus"))
                      .addChild(new HAnimSite("hanim_r_talus").setName(new SFString("r_sphyrion")).setDEF(new SFString("hanim_r_sphyrion_pt")).setTranslation(new float[] {-0.054f ,0.065f ,-0.02f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 54 hanim_r_sphyrion_pt")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32229().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA230().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f231().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString232().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_r_talus").setName(new SFString("r_calcaneus_posterior")).setDEF(new SFString("hanim_r_calcaneus_posterior_pt")).setTranslation(new float[] {-0.09f ,0.03f ,-0.06f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 62 hanim_r_calcaneus_posterior_pt")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32233().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA234().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f235().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString236().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32237().getArray())
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA238().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_talocalcaneonavicular")).setDEF(new SFString("hanim_r_talocalcaneonavicular")).setCenter(new float[] {-0.07794f ,0.0369f ,0.00486f })
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32240().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA241().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_1")).setDEF(new SFString("hanim_r_cuneonavicular_1")).setCenter(new float[] {-0.06698f ,0.032107f ,0.01839f })
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32243().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA244().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName(new SFString("r_tarsometatarsal_1")).setDEF(new SFString("hanim_r_tarsometatarsal_1")).setCenter(new float[] {-0.064f ,0.02324f ,0.04419f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32246().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA247().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsophalangeal_1")).setDEF(new SFString("hanim_r_metatarsophalangeal_1")).setCenter(new float[] {-0.06176f ,0.014425f ,0.09362f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1"))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("r_metatarsal_phalanx_1")).setDEF(new SFString("hanim_r_metatarsal_phalanx_1_pt")).setTranslation(new float[] {-0.062f ,0.012f ,0.1f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32249().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA250().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString252().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA254().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f255().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_r_tarsal_interphalangeal_1")).setCenter(new float[] {-0.06174f ,0.0121f ,0.1153f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_interphalangeal_1").setName(new SFString("r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1"))
                                .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_1").setName(new SFString("r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1_tip")).setTranslation(new float[] {-0.06f ,0.012f ,0.14f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32256().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA257().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString259().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32260().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA261().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray())))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_2")).setDEF(new SFString("hanim_r_cuneonavicular_2")).setCenter(new float[] {-0.081f ,0.0335f ,0.02142f })
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA264().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f265().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("hanim_r_tarsometatarsal_2")).setCenter(new float[] {-0.07983f ,0.0261f ,0.04106f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32266().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA267().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("hanim_r_metatarsophalangeal_2")).setCenter(new float[] {-0.0821f ,0.01497f ,0.09783f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA270().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f271().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {-0.0839f ,0.012647f ,0.114f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32272().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA273().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-0.0839f ,0.009825f ,0.123435f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2"))
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2_tip")).setTranslation(new float[] {-0.08f ,0.016f ,0.14f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32275().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA276().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f277().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString278().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA280().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_3")).setDEF(new SFString("hanim_r_cuneonavicular_3")).setCenter(new float[] {-0.09261f ,0.03339f ,0.01982f })
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32282().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA283().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName(new SFString("r_tarsometatarsal_3")).setDEF(new SFString("hanim_r_tarsometatarsal_3")).setCenter(new float[] {-0.09423f ,0.0261f ,0.0394f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA286().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsophalangeal_3")).setDEF(new SFString("hanim_r_metatarsophalangeal_3")).setCenter(new float[] {-0.0961f ,0.01505f ,0.09542f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32288().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA289().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {-0.0985f ,0.01192f ,0.11047f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA292().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_3")).setCenter(new float[] {-0.100035f ,0.00982f ,0.1197f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_3").setName(new SFString("r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3"))
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_3").setName(new SFString("r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3_tip")).setTranslation(new float[] {-0.1f ,0.016f ,0.14f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32294().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA295().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString297().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32298().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA299().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray())))))))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_calcaneocuboid")).setDEF(new SFString("hanim_r_calcaneocuboid")).setCenter(new float[] {-0.088717f ,0.05798f ,-0.025965f })
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA302().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f303().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName(new SFString("r_transversetarsal")).setDEF(new SFString("hanim_r_transversetarsal")).setCenter(new float[] {-0.11027f ,0.03528f ,0.0021f })
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32304().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA305().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_4")).setDEF(new SFString("hanim_r_tarsometatarsal_4")).setCenter(new float[] {-0.10613f ,0.02454f ,0.03843f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32307().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA308().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f309().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsophalangeal_4")).setDEF(new SFString("hanim_r_metatarsophalangeal_4")).setCenter(new float[] {-0.1095f ,0.01435f ,0.09117f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32310().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA311().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {-0.11378f ,0.01224f ,0.1063f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA314().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f315().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_4")).setCenter(new float[] {-0.1153f ,0.00937f ,0.11369f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_4").setName(new SFString("r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4"))
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_4").setName(new SFString("r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4_tip")).setTranslation(new float[] {-0.115f ,0.016f ,0.13f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32316().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA317().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString319().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32320().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA321().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray())))))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_5")).setDEF(new SFString("hanim_r_tarsometatarsal_5")).setCenter(new float[] {-0.12044f ,0.020945f ,0.03474f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32323().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA324().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f325().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsophalangeal_5")).setDEF(new SFString("hanim_r_metatarsophalangeal_5")).setCenter(new float[] {-0.12368f ,0.01367f ,0.08656f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32326().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA327().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f328().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {-0.126f ,0.01086f ,0.09414f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5"))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_5").setName(new SFString("r_metatarsal_phalanx_5")).setDEF(new SFString("hanim_r_metatarsal_phalanx_5_pt")).setTranslation(new float[] {-0.12f ,0.02f ,0.04f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32329().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA330().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f331().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString332().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32333().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA334().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_5")).setCenter(new float[] {-0.1269f ,0.00856f ,0.10188f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_5").setName(new SFString("r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5"))
                                  .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_5").setName(new SFString("r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5_tip")).setTranslation(new float[] {-0.125f ,0.016f ,0.115f })
                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32336().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA337().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray()))))
                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                      .addChild(new Shape()
                                        .setGeometry(new Text().setString(new MFString339().getArray())
                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32340().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA341().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray())))))))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("vl5")).setDEF(new SFString("hanim_vl5")).setCenter(new float[] {0f ,0.9254f ,-0.01376f })
              .addChild(new HAnimSegment("hanim_vl5").setName(new SFString("l5")).setDEF(new SFString("hanim_l5"))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("spine_1_middle_back")).setDEF(new SFString("hanim_spine_1_middle_back_pt")).setTranslation(new float[] {0f ,1f ,-0.1f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 24 hanim_spine_1_middle_back_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32343().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA344().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f345().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString346().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("spine_2_lower_back")).setDEF(new SFString("hanim_spine_2_lower_back_pt")).setTranslation(new float[] {0f ,0.95f ,-0.1f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 25 hanim_spine_2_lower_back_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32347().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA348().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f349().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString350().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("waist_preferred_anterior")).setDEF(new SFString("hanim_waist_preferred_anterior_pt")).setTranslation(new float[] {0f ,0.9f ,0.1f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 26 hanim_waist_preferred_anterior_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32351().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA352().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString354().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("waist_preferred_posterior")).setDEF(new SFString("hanim_waist_preferred_posterior_pt")).setTranslation(new float[] {0f ,0.9f ,-0.1f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 27 hanim_waist_preferred_posterior_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32355().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA356().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f357().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString358().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("navel")).setDEF(new SFString("hanim_navel_pt")).setTranslation(new float[] {0f ,0.9f ,-0.1f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 84 hanim_navel_pt")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32359().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA360().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray()))))
                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString362().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32363().getArray())
                    .setColor(new ColorRGBA().setColor(new MFColorRGBA364().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray())))))
              .addChild(new HAnimJoint("hanim_vl5").setName(new SFString("vl4")).setDEF(new SFString("hanim_vl4")).setCenter(new float[] {0f ,0.9497f ,-0.01376f })
                .addChild(new HAnimSegment("hanim_vl4").setName(new SFString("l4")).setDEF(new SFString("hanim_l4"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32366().getArray())
                      .setColor(new ColorRGBA().setColor(new MFColorRGBA367().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray())))))
                .addChild(new HAnimJoint("hanim_vl4").setName(new SFString("vl3")).setDEF(new SFString("hanim_vl3")).setCenter(new float[] {0f ,0.9659f ,-0.01376f })
                  .addChild(new HAnimSegment("hanim_vl3").setName(new SFString("l3")).setDEF(new SFString("hanim_l3"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32369().getArray())
                        .setColor(new ColorRGBA().setColor(new MFColorRGBA370().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray())))))
                  .addChild(new HAnimJoint("hanim_vl3").setName(new SFString("vl2")).setDEF(new SFString("hanim_vl2")).setCenter(new float[] {0f ,0.98235f ,-0.01376f })
                    .addChild(new HAnimSegment("hanim_vl2").setName(new SFString("l2")).setDEF(new SFString("hanim_l2"))
                      .addChild(new HAnimSite("hanim_l2").setName(new SFString("l_rib10")).setDEF(new SFString("hanim_l_rib10_pt")).setTranslation(new float[] {0.09f ,1f ,0.04f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 28 hanim_l_rib10_pt")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32372().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA373().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f374().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString375().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_l2").setName(new SFString("r_rib10")).setDEF(new SFString("hanim_r_rib10_pt")).setTranslation(new float[] {-0.09f ,1f ,0.04f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 30 hanim_r_rib10_pt")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32376().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA377().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f378().getArray()))))
                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString379().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32380().getArray())
                          .setColor(new ColorRGBA().setColor(new MFColorRGBA381().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f382().getArray())))))
                    .addChild(new HAnimJoint("hanim_vl2").setName(new SFString("vl1")).setDEF(new SFString("hanim_vl1")).setCenter(new float[] {0f ,0.99967f ,-0.01376f })
                      .addChild(new HAnimSegment("hanim_vl1").setName(new SFString("l1")).setDEF(new SFString("hanim_l1"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32383().getArray())
                            .setColor(new ColorRGBA().setColor(new MFColorRGBA384().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f385().getArray())))))
                      .addChild(new HAnimJoint("hanim_vl1").setName(new SFString("vt12")).setDEF(new SFString("hanim_vt12")).setCenter(new float[] {0f ,1.0231f ,-0.01376f })
                        .addChild(new HAnimSegment("hanim_vt12").setName(new SFString("t12")).setDEF(new SFString("hanim_t12"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32386().getArray())
                              .setColor(new ColorRGBA().setColor(new MFColorRGBA387().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f388().getArray())))))
                        .addChild(new HAnimJoint("hanim_vt12").setName(new SFString("vt11")).setDEF(new SFString("hanim_vt11")).setCenter(new float[] {0f ,1.0467f ,-0.01376f })
                          .addChild(new HAnimSegment("hanim_vt11").setName(new SFString("t11")).setDEF(new SFString("hanim_t11"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32389().getArray())
                                .setColor(new ColorRGBA().setColor(new MFColorRGBA390().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f391().getArray())))))
                          .addChild(new HAnimJoint("hanim_vt11").setName(new SFString("vt10")).setDEF(new SFString("hanim_vt10")).setCenter(new float[] {0f ,1.0638f ,-0.01378f })
                            .addChild(new HAnimSegment("hanim_vt10").setName(new SFString("t10")).setDEF(new SFString("hanim_t10"))
                              .addChild(new HAnimSite("hanim_t10").setName(new SFString("substernale")).setDEF(new SFString("hanim_substernale_pt")).setTranslation(new float[] {0f ,1.08f ,0.076f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 13 hanim_substernale_pt")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32392().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA393().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f394().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString395().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                              .addChild(new HAnimSite("hanim_t10").setName(new SFString("mesosternale")).setDEF(new SFString("hanim_mesosternale_pt")).setTranslation(new float[] {0f ,1.15f ,0.076f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 88 hanim_mesosternale_pt")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32396().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA397().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))))
                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString399().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32400().getArray())
                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA401().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray())))))
                            .addChild(new HAnimJoint("hanim_vt10").setName(new SFString("vt9")).setDEF(new SFString("hanim_vt9")).setCenter(new float[] {0f ,1.0784f ,-0.01376f })
                              .addChild(new HAnimSegment("hanim_vt9").setName(new SFString("t9")).setDEF(new SFString("hanim_t9"))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("l_thelion")).setDEF(new SFString("hanim_l_thelion_pt")).setTranslation(new float[] {0.07f ,1.12f ,0.09f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 29 hanim_l_thelion_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32403().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA404().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f405().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString406().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("r_thelion")).setDEF(new SFString("hanim_r_thelion_pt")).setTranslation(new float[] {-0.07f ,1.12f ,0.09f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 31 hanim_r_thelion_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32407().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA408().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f409().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString410().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("rear_center_midsagittal_plane")).setDEF(new SFString("hanim_rear_center_midsagittal_plane_pt")).setTranslation(new float[] {0f ,1.1f ,-0.1f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 92 hanim_rear_center_midsagittal_plane_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32411().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA412().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString414().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("l_chest_midsagittal_plane")).setDEF(new SFString("hanim_l_chest_midsagittal_plane_pt")).setTranslation(new float[] {0.13f ,1.12f ,0f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 94 hanim_l_chest_midsagittal_plane_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32415().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA416().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f417().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString418().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("r_chest_midsagittal_plane")).setDEF(new SFString("hanim_r_chest_midsagittal_plane_pt")).setTranslation(new float[] {-0.13f ,1.12f ,0f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 95 hanim_r_chest_midsagittal_plane_pt")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32419().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA420().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f421().getArray()))))
                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString422().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32423().getArray())
                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA424().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray())))))
                              .addChild(new HAnimJoint("hanim_vt9").setName(new SFString("vt8")).setDEF(new SFString("hanim_vt8")).setCenter(new float[] {0f ,1.093f ,-0.01376f })
                                .addChild(new HAnimSegment("hanim_vt8").setName(new SFString("t8")).setDEF(new SFString("hanim_t8"))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32426().getArray())
                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA427().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray())))))
                                .addChild(new HAnimJoint("hanim_vt8").setName(new SFString("vt7")).setDEF(new SFString("hanim_vt7")).setCenter(new float[] {0f ,1.1088f ,-0.01376f })
                                  .addChild(new HAnimSegment("hanim_vt7").setName(new SFString("t7")).setDEF(new SFString("hanim_t7"))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32429().getArray())
                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA430().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray())))))
                                  .addChild(new HAnimJoint("hanim_vt7").setName(new SFString("vt6")).setDEF(new SFString("hanim_vt6")).setCenter(new float[] {0f ,1.1216f ,-0.01376f })
                                    .addChild(new HAnimSegment("hanim_vt6").setName(new SFString("t6")).setDEF(new SFString("hanim_t6"))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32432().getArray())
                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA433().getArray()))
                                          .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray())))))
                                    .addChild(new HAnimJoint("hanim_vt6").setName(new SFString("vt5")).setDEF(new SFString("hanim_vt5")).setCenter(new float[] {0f ,1.137f ,-0.01376f })
                                      .addChild(new HAnimSegment("hanim_vt5").setName(new SFString("t5")).setDEF(new SFString("hanim_t5"))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32435().getArray())
                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA436().getArray()))
                                            .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray())))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName(new SFString("vt4")).setDEF(new SFString("hanim_vt4")).setCenter(new float[] {0f ,1.1524f ,-0.01376f })
                                        .addChild(new HAnimSegment("hanim_vt4").setName(new SFString("t4")).setDEF(new SFString("hanim_t4"))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32438().getArray())
                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA439().getArray()))
                                              .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray())))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName(new SFString("vt3")).setDEF(new SFString("hanim_vt3")).setCenter(new float[] {0f ,1.1709f ,-0.01376f })
                                          .addChild(new HAnimSegment("hanim_vt3").setName(new SFString("t3")).setDEF(new SFString("hanim_t3"))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32441().getArray())
                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA442().getArray()))
                                                .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray())))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName(new SFString("vt2")).setDEF(new SFString("hanim_vt2")).setCenter(new float[] {0f ,1.1956f ,-0.01378f })
                                            .addChild(new HAnimSegment("hanim_vt2").setName(new SFString("t2")).setDEF(new SFString("hanim_t2"))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32444().getArray())
                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA445().getArray()))
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray())))))
                                            .addChild(new HAnimJoint("hanim_vt2").setName(new SFString("vt1")).setDEF(new SFString("hanim_vt1")).setCenter(new float[] {0f ,1.22f ,-0.0138f })
                                              .addChild(new HAnimSegment("hanim_vt1").setName(new SFString("t1")).setDEF(new SFString("hanim_t1"))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("suprasternale")).setDEF(new SFString("hanim_suprasternale_pt")).setTranslation(new float[] {0f ,1.22f ,0.08f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 12 hanim_suprasternale_pt")))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32447().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA448().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray()))))
                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString450().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("cervicale")).setDEF(new SFString("hanim_cervicale_pt")).setTranslation(new float[] {0f ,1.22f ,-0.08f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 10 hanim_cervicale_pt")))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32451().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA452().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f453().getArray()))))
                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString454().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32455().getArray())
                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA456().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f457().getArray())))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("vc7")).setDEF(new SFString("hanim_vc7")).setCenter(new float[] {0f ,1.2453f ,-0.01506f })
                                                .addChild(new HAnimSegment("hanim_vc7").setName(new SFString("c7")).setDEF(new SFString("hanim_c7"))
                                                  .addChild(new HAnimSite("hanim_c7").setName(new SFString("l_neck_base")).setDEF(new SFString("hanim_l_neck_base_pt")).setTranslation(new float[] {0.06f ,1.26f ,0f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 82 hanim_l_neck_base_pt")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32458().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA459().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f460().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString461().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_c7").setName(new SFString("r_neck_base")).setDEF(new SFString("hanim_r_neck_base_pt")).setTranslation(new float[] {-0.06f ,1.26f ,0f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 83 hanim_r_neck_base_pt")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32462().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA463().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString465().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32466().getArray())
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA467().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f468().getArray())))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("vc6")).setDEF(new SFString("hanim_vc6")).setCenter(new float[] {0f ,1.2575f ,-0.01506f })
                                                  .addChild(new HAnimSegment("hanim_vc6").setName(new SFString("c6")).setDEF(new SFString("hanim_c6"))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32469().getArray())
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA470().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f471().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName(new SFString("vc5")).setDEF(new SFString("hanim_vc5")).setCenter(new float[] {0f ,1.2699f ,-0.01506f })
                                                    .addChild(new HAnimSegment("hanim_vc5").setName(new SFString("c5")).setDEF(new SFString("hanim_c5"))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32472().getArray())
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA473().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f474().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName(new SFString("vc4")).setDEF(new SFString("hanim_vc4")).setCenter(new float[] {0f ,1.28227f ,-0.01506f })
                                                      .addChild(new HAnimSegment("hanim_vc4").setName(new SFString("c4")).setDEF(new SFString("hanim_c4"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32475().getArray())
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA476().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f477().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName(new SFString("vc3")).setDEF(new SFString("hanim_vc3")).setCenter(new float[] {0f ,1.2951f ,-0.01506f })
                                                        .addChild(new HAnimSegment("hanim_vc3").setName(new SFString("c3")).setDEF(new SFString("hanim_c3"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32478().getArray())
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA479().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName(new SFString("vc2")).setDEF(new SFString("hanim_vc2")).setCenter(new float[] {0f ,1.307f ,-0.015f })
                                                          .addChild(new HAnimSegment("hanim_vc2").setName(new SFString("c2")).setDEF(new SFString("hanim_c2"))
                                                            .addChild(new HAnimSite("hanim_c2").setName(new SFString("adams_apple")).setDEF(new SFString("hanim_adams_apple_pt")).setTranslation(new float[] {0f ,1.29f ,0.04f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 11 hanim_adams_apple_pt")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32481().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA482().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f483().getArray()))))
                                                              .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString484().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32485().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA486().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f487().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName(new SFString("vc1")).setDEF(new SFString("hanim_vc1")).setCenter(new float[] {0f ,1.3185f ,-0.0151f })
                                                            .addChild(new HAnimSegment("hanim_vc1").setName(new SFString("c1")).setDEF(new SFString("hanim_c1"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32488().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA489().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName(new SFString("skullbase")).setDEF(new SFString("hanim_skullbase")).setCenter(new float[] {0f ,1.3126f ,-0.0154f })
                                                              .addChild(new HAnimSegment("hanim_skullbase").setName(new SFString("skull")).setDEF(new SFString("hanim_skull"))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("skull_vertex")).setDEF(new SFString("hanim_skull_vertex_pt")).setTranslation(new float[] {0f ,1.612f ,-0.03f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 0 hanim_skull_vertex_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32491().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA492().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f493().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString494().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("glabella")).setDEF(new SFString("hanim_glabella_pt")).setTranslation(new float[] {0f ,1.454f ,0.128f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 1 hanim_glabella_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32495().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA496().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f497().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString498().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("sellion")).setDEF(new SFString("hanim_sellion_pt")).setTranslation(new float[] {0f ,1.4f ,0.12f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 2 hanim_sellion_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32499().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA500().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f501().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString502().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_infraorbitale")).setDEF(new SFString("hanim_l_infraorbitale_pt")).setTranslation(new float[] {0.039f ,1.38f ,0.09f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 3 hanim_l_infraorbitale_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32503().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA504().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f505().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString506().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_tragion")).setDEF(new SFString("hanim_l_tragion_pt")).setTranslation(new float[] {0.1f ,1.38f ,0.0282f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 4 hanim_l_tragion_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32507().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA508().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f509().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString510().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_infraorbitale")).setDEF(new SFString("hanim_r_infraorbitale_pt")).setTranslation(new float[] {-0.039f ,1.38f ,0.09f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 6 hanim_r_infraorbitale_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32511().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA512().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f513().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString514().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_tragion")).setDEF(new SFString("hanim_r_tragion_pt")).setTranslation(new float[] {-0.1f ,1.38f ,0.0282f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 7 hanim_r_tragion_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32515().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA516().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f517().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString518().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("nuchale")).setDEF(new SFString("hanim_nuchale_pt")).setTranslation(new float[] {0.0039f ,1.35f ,-0.16f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 81 hanim_nuchale_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32519().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA520().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString522().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("opisthocranion")).setDEF(new SFString("hanim_opisthocranion_pt")).setTranslation(new float[] {0.0039f ,1.4588f ,-0.18f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 89 hanim_opisthocranion_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32523().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA524().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f525().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString526().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_ectocanthus")).setDEF(new SFString("hanim_l_ectocanthus_pt")).setTranslation(new float[] {0.086f ,1.399f ,0.074f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 85 hanim_l_ectocanthus_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32527().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA528().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f529().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString530().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_ectocanthus")).setDEF(new SFString("hanim_r_ectocanthus_pt")).setTranslation(new float[] {-0.086f ,1.399f ,0.074f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 86 hanim_r_ectocanthus_pt")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32531().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA532().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f533().getArray()))))
                                                                  .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString534().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32535().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA536().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f537().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyelid_joint")).setDEF(new SFString("hanim_l_eyelid_joint")).setCenter(new float[] {0.0505f ,1.42425f ,0.03294f })
                                                                .addChild(new HAnimSegment("hanim_l_eyelid_joint").setName(new SFString("l_eyelid")).setDEF(new SFString("hanim_l_eyelid"))
                                                                  .addChild(new HAnimSite("hanim_l_eyelid").setName(new SFString("l_eyelid_tip")).setDEF(new SFString("hanim_l_eyelid_tip")).setTranslation(new float[] {0f ,2.64f ,0f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_eyelid_tip hanim_l_eyelid_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32538().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA539().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f540().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString541().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32542().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA543().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f544().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyelid_joint")).setDEF(new SFString("hanim_r_eyelid_joint")).setCenter(new float[] {-0.0505f ,1.42425f ,0.03294f })
                                                                .addChild(new HAnimSegment("hanim_r_eyelid_joint").setName(new SFString("r_eyelid")).setDEF(new SFString("hanim_r_eyelid"))
                                                                  .addChild(new HAnimSite("hanim_r_eyelid").setName(new SFString("r_eyelid_tip")).setDEF(new SFString("hanim_r_eyelid_tip")).setTranslation(new float[] {0f ,2.68f ,0f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_eyelid_tip hanim_r_eyelid_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32545().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA546().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f547().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString548().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32549().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA550().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyeball_joint")).setDEF(new SFString("hanim_l_eyeball_joint")).setCenter(new float[] {0.048127f ,1.4049f ,0.08305f })
                                                                .addChild(new HAnimSegment("hanim_l_eyeball_joint").setName(new SFString("l_eyeball")).setDEF(new SFString("hanim_l_eyeball"))
                                                                  .addChild(new HAnimSite("hanim_l_eyeball").setName(new SFString("l_eyeball_tip")).setDEF(new SFString("hanim_l_eyeball_tip")).setTranslation(new float[] {0f ,2.72f ,0f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_eyeball_tip hanim_l_eyeball_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32552().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA553().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f554().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString555().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32556().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA557().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f558().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyeball_joint")).setDEF(new SFString("hanim_r_eyeball_joint")).setCenter(new float[] {-0.04813f ,1.4049f ,0.08305f })
                                                                .addChild(new HAnimSegment("hanim_r_eyeball_joint").setName(new SFString("r_eyeball")).setDEF(new SFString("hanim_r_eyeball"))
                                                                  .addChild(new HAnimSite("hanim_r_eyeball").setName(new SFString("r_eyeball_tip")).setDEF(new SFString("hanim_r_eyeball_tip")).setTranslation(new float[] {0f ,2.76f ,0f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_eyeball_tip hanim_r_eyeball_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32559().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA560().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f561().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString562().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32563().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA564().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f565().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyebrow_joint")).setDEF(new SFString("hanim_l_eyebrow_joint")).setCenter(new float[] {0.02175f ,1.4139f ,0.1069f })
                                                                .addChild(new HAnimSegment("hanim_l_eyebrow_joint").setName(new SFString("l_eyebrow")).setDEF(new SFString("hanim_l_eyebrow"))
                                                                  .addChild(new HAnimSite("hanim_l_eyebrow").setName(new SFString("l_eyebrow_tip")).setDEF(new SFString("hanim_l_eyebrow_tip")).setTranslation(new float[] {0f ,2.8f ,0f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32566().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA567().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f568().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString569().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32570().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA571().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyebrow_joint")).setDEF(new SFString("hanim_r_eyebrow_joint")).setCenter(new float[] {-0.02175f ,1.4139f ,0.10694f })
                                                                .addChild(new HAnimSegment("hanim_r_eyebrow_joint").setName(new SFString("r_eyebrow")).setDEF(new SFString("hanim_r_eyebrow"))
                                                                  .addChild(new HAnimSite("hanim_r_eyebrow").setName(new SFString("r_eyebrow_tip")).setDEF(new SFString("hanim_r_eyebrow_tip")).setTranslation(new float[] {0f ,2.84f ,0f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32573().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA574().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f575().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString576().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32577().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA578().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f579().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("temporomandibular")).setDEF(new SFString("hanim_temporomandibular")).setCenter(new float[] {0f ,1.3128f ,0.01538f })
                                                                .addChild(new HAnimSegment("hanim_temporomandibular").setName(new SFString("jaw")).setDEF(new SFString("hanim_jaw"))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName(new SFString("l_gonion")).setDEF(new SFString("hanim_l_gonion_pt")).setTranslation(new float[] {0.068f ,1.346f ,0.033f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 5 hanim_l_gonion_pt")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32580().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA581().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f582().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString583().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName(new SFString("r_gonion")).setDEF(new SFString("hanim_r_gonion_pt")).setTranslation(new float[] {-0.068f ,1.346f ,0.033f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 8 hanim_r_gonion_pt")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32584().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA585().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f586().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString587().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName(new SFString("supramenton")).setDEF(new SFString("hanim_supramenton_pt")).setTranslation(new float[] {0f ,1.32f ,0.086f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 9 hanim_supramenton_pt")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32588().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA589().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f590().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString591().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setName(new SFString("menton")).setDEF(new SFString("hanim_menton_pt")).setTranslation(new float[] {0f ,1.3f ,0.08f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 87 hanim_menton_pt")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32592().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA593().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f594().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString595().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32596().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA597().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f598().getArray()))))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("l_sternoclavicular")).setDEF(new SFString("hanim_l_sternoclavicular")).setCenter(new float[] {0.03847f ,1.2087f ,-0.01378f })
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName(new SFString("l_clavicle")).setDEF(new SFString("hanim_l_clavicle"))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName(new SFString("l_clavicale")).setDEF(new SFString("hanim_l_clavicale_pt")).setTranslation(new float[] {0.03f ,1.2f ,0.04f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_clavicale hanim_l_clavicale_pt")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32599().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA600().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f601().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString602().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32603().getArray())
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA604().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f605().getArray())))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName(new SFString("l_acromioclavicular")).setDEF(new SFString("hanim_l_acromioclavicular")).setCenter(new float[] {0.12294f ,1.191825f ,-0.0129f })
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName(new SFString("l_scapula")).setDEF(new SFString("hanim_l_scapula"))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName(new SFString("l_acromion")).setDEF(new SFString("hanim_l_acromion_pt")).setTranslation(new float[] {0.15f ,1.222f ,-0.02f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 15 hanim_l_acromion_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32606().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA607().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f608().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString609().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName(new SFString("l_axilla_proximal")).setDEF(new SFString("hanim_l_axilla_proximal_pt")).setTranslation(new float[] {0.15f ,1.16f ,0.04f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 16 hanim_l_axilla_proximal_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32610().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA611().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f612().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString613().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName(new SFString("l_axilla_distal")).setDEF(new SFString("hanim_l_axilla_distal_pt")).setTranslation(new float[] {0.17f ,1.14f ,0f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 17 hanim_l_axilla_distal_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32614().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA615().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f616().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString617().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName(new SFString("l_axilla_posterior_folds")).setDEF(new SFString("hanim_l_axilla_posterior_folds_pt")).setTranslation(new float[] {0.15f ,1.145f ,-0.04f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 18 hanim_l_axilla_posterior_folds_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32618().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA619().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f620().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString621().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32622().getArray())
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA623().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f624().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName(new SFString("l_shoulder")).setDEF(new SFString("hanim_l_shoulder")).setCenter(new float[] {0.16506f ,1.17855f ,-0.00327f })
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm"))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_humeral_lateral_epicondyle")).setDEF(new SFString("hanim_l_humeral_lateral_epicondyle_pt")).setTranslation(new float[] {0.2f ,0.95f ,-0.03f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32625().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA626().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f627().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString628().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_humeral_medial_epicondyle")).setDEF(new SFString("hanim_l_humeral_medial_epicondyle_pt")).setTranslation(new float[] {0.18f ,0.93f ,-0.03f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32629().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA630().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f631().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString632().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_radiale")).setDEF(new SFString("hanim_l_radiale_pt")).setTranslation(new float[] {0.2f ,0.91f ,-0.03f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 69 hanim_l_radiale_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32633().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA634().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f635().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString636().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_bideltoid")).setDEF(new SFString("hanim_l_bideltoid_pt")).setTranslation(new float[] {0.225f ,1.185f ,0f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 96 hanim_l_bideltoid_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32637().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA638().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f639().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString640().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32641().getArray())
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA642().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f643().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("hanim_l_elbow")).setCenter(new float[] {0.18209f ,0.9288f ,-0.00563f })
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm"))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_radial_styloid")).setDEF(new SFString("hanim_l_radial_styloid_pt")).setTranslation(new float[] {0.18f ,0.725f ,0.025f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 71 hanim_l_radial_styloid_pt")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32644().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA645().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f646().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString647().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_olecranon")).setDEF(new SFString("hanim_l_olecranon_pt")).setTranslation(new float[] {0.2f ,0.92f ,-0.03f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 65 hanim_l_olecranon_pt")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32648().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA649().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f650().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString651().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32652().getArray())
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA653().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f654().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("hanim_l_radiocarpal")).setCenter(new float[] {0.1819f ,0.72427f ,-0.005f })
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal"))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setName(new SFString("l_ulnar_styloid")).setDEF(new SFString("hanim_l_ulnar_styloid_pt")).setTranslation(new float[] {0.2f ,0.725f ,0f })
                                                            .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 70 hanim_l_ulnar_styloid_pt")))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32655().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA656().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f657().getArray()))))
                                                            .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString658().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32659().getArray())
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA660().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f661().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_1")).setDEF(new SFString("hanim_l_midcarpal_1")).setCenter(new float[] {0.1813f ,0.706f ,0.0193f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName(new SFString("l_trapezium")).setDEF(new SFString("hanim_l_trapezium"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32662().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA663().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f664().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName(new SFString("l_carpometacarpal_1")).setDEF(new SFString("hanim_l_carpometacarpal_1")).setCenter(new float[] {0.1805f ,0.69255f ,0.026f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("hanim_l_metacarpal_1"))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_1").setName(new SFString("l_metacarpal_phalanx_2")).setDEF(new SFString("hanim_l_metacarpal_phalanx_2_pt")).setTranslation(new float[] {0.2f ,0.665f ,0.012f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32665().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA666().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f667().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString668().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32669().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA670().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f671().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpophalangeal_1")).setDEF(new SFString("hanim_l_metacarpophalangeal_1")).setCenter(new float[] {0.181f ,0.6727f ,0.03577f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_1"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32672().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA673().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f674().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_interphalangeal_1")).setDEF(new SFString("hanim_l_carpal_interphalangeal_1")).setCenter(new float[] {0.1826f ,0.654f ,0.04966f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setName(new SFString("l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_1"))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_1").setName(new SFString("l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_1_tip")).setTranslation(new float[] {0.18f ,0.64f ,0.06f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32675().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA676().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f677().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString678().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32679().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA680().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f681().getArray())))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_2")).setDEF(new SFString("hanim_l_midcarpal_2")).setCenter(new float[] {0.18128f ,0.70695f ,0.00842f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName(new SFString("l_trapezoid")).setDEF(new SFString("hanim_l_trapezoid"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32682().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA683().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f684().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName(new SFString("l_carpometacarpal_2")).setDEF(new SFString("hanim_l_carpometacarpal_2")).setCenter(new float[] {0.18128f ,0.6876f ,0.0098f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("hanim_l_metacarpal_2"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32685().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA686().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f687().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpophalangeal_2")).setDEF(new SFString("hanim_l_metacarpophalangeal_2")).setCenter(new float[] {0.1837f ,0.6372f ,0.01507f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_2"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32688().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA689().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f690().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_2")).setCenter(new float[] {0.18171f ,0.6068f ,0.01418f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_2"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32691().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA692().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f693().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_2")).setCenter(new float[] {0.18067f ,0.5816f ,0.01338f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setName(new SFString("l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_2"))
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_2").setName(new SFString("l_dactylion")).setDEF(new SFString("hanim_l_dactylion_pt")).setTranslation(new float[] {0.17f ,0.558f ,0.017f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 57 hanim_l_dactylion_pt")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32694().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA695().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f696().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString697().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_2").setName(new SFString("l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_2_tip")).setTranslation(new float[] {0.172f ,0.558f ,0.017f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32698().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA699().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f700().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString701().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32702().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA703().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f704().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_3")).setDEF(new SFString("hanim_l_midcarpal_3")).setCenter(new float[] {0.18108f ,0.708525f ,-0.0048f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName(new SFString("l_capitate")).setDEF(new SFString("hanim_l_capitate"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32705().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA706().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f707().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName(new SFString("l_carpometacarpal_3")).setDEF(new SFString("hanim_l_carpometacarpal_3")).setCenter(new float[] {0.18108f ,0.6858f ,-0.00625f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("hanim_l_metacarpal_3"))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_3").setName(new SFString("l_metacarpal_phalanx_3")).setDEF(new SFString("hanim_l_metacarpal_phalanx_3_pt")).setTranslation(new float[] {0.2f ,0.665f ,-0.039f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32708().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA709().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f710().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString711().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32712().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA713().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f714().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpophalangeal_3")).setDEF(new SFString("hanim_l_metacarpophalangeal_3")).setCenter(new float[] {0.18369f ,0.6349f ,-0.0039f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_3"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32715().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA716().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f717().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_3")).setCenter(new float[] {0.18171f ,0.6032f ,-0.0035f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_3"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32718().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA719().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f720().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_3")).setCenter(new float[] {0.1807f ,0.5753f ,-0.0037f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setName(new SFString("l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_3"))
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_3").setName(new SFString("l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_3_tip")).setTranslation(new float[] {0.172f ,0.555f ,-0.006f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32721().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA722().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f723().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString724().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32725().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA726().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f727().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_4_5")).setDEF(new SFString("hanim_l_midcarpal_4_5")).setCenter(new float[] {0.18108f ,0.70582f ,-0.02574f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName(new SFString("l_hamate")).setDEF(new SFString("hanim_l_hamate"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32728().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA729().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f730().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName(new SFString("l_carpometacarpal_4")).setDEF(new SFString("hanim_l_carpometacarpal_4")).setCenter(new float[] {0.1811f ,0.68625f ,-0.0199f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("hanim_l_metacarpal_4"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32731().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA732().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f733().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpophalangeal_4")).setDEF(new SFString("hanim_l_metacarpophalangeal_4")).setCenter(new float[] {0.18369f ,0.63405f ,-0.02144f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_4"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32734().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA735().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f736().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.1817f ,0.6066f ,-0.02064f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_4"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32737().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA738().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f739().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.18067f ,0.580725f ,-0.01977f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setName(new SFString("l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_4"))
                                                                    .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_4").setName(new SFString("l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_4_tip")).setTranslation(new float[] {0.172f ,0.559f ,-0.024f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32740().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA741().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f742().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString743().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32744().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA745().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f746().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_carpometacarpal_5")).setDEF(new SFString("hanim_l_carpometacarpal_5")).setCenter(new float[] {0.18164f ,0.68827f ,-0.03278f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("hanim_l_metacarpal_5"))
                                                            .addChild(new HAnimSite("hanim_l_metacarpal_5").setName(new SFString("l_metacarpal_phalanx_5")).setDEF(new SFString("hanim_l_metacarpal_phalanx_5_pt")).setTranslation(new float[] {0.2f ,0.665f ,-0.036f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32747().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA748().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f749().getArray()))))
                                                              .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString750().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32751().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA752().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f753().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpophalangeal_5")).setDEF(new SFString("hanim_l_metacarpophalangeal_5")).setCenter(new float[] {0.1833f ,0.6381f ,-0.037f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_5"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32754().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA755().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f756().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.18166f ,0.621f ,-0.03715f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_5"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32757().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA758().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f759().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.1808f ,0.6023f ,-0.0369f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setName(new SFString("l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_5"))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_5").setName(new SFString("l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_5_tip")).setTranslation(new float[] {0.172f ,0.58f ,-0.039f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32760().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA761().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f762().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString763().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32764().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA765().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f766().getArray()))))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("r_sternoclavicular")).setDEF(new SFString("hanim_r_sternoclavicular")).setCenter(new float[] {-0.03847f ,1.2087f ,-0.0138f })
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName(new SFString("r_clavicle")).setDEF(new SFString("hanim_r_clavicle"))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName(new SFString("r_clavicale")).setDEF(new SFString("hanim_r_clavicale_pt")).setTranslation(new float[] {-0.03f ,1.2f ,0.04f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_clavicale hanim_r_clavicale_pt")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32767().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA768().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f769().getArray()))))
                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString770().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32771().getArray())
                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA772().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f773().getArray())))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName(new SFString("r_acromioclavicular")).setDEF(new SFString("hanim_r_acromioclavicular")).setCenter(new float[] {-0.1229f ,1.19182f ,-0.0129f })
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName(new SFString("r_scapula")).setDEF(new SFString("hanim_r_scapula"))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName(new SFString("r_acromion")).setDEF(new SFString("hanim_r_acromion_pt")).setTranslation(new float[] {-0.15f ,1.222f ,-0.02f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 20 hanim_r_acromion_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32774().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA775().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f776().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString777().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName(new SFString("r_axilla_proximal")).setDEF(new SFString("hanim_r_axilla_proximal_pt")).setTranslation(new float[] {-0.15f ,1.16f ,0.04f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 21 hanim_r_axilla_proximal_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32778().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA779().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f780().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString781().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName(new SFString("r_axilla_distal")).setDEF(new SFString("hanim_r_axilla_distal_pt")).setTranslation(new float[] {-0.17f ,1.14f ,0f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 22 hanim_r_axilla_distal_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32782().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA783().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f784().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString785().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName(new SFString("r_axilla_posterior_folds")).setDEF(new SFString("hanim_r_axilla_posterior_folds_pt")).setTranslation(new float[] {-0.15f ,1.145f ,-0.04f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 23 hanim_r_axilla_posterior_folds_pt")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32786().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA787().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f788().getArray()))))
                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                        .addChild(new Shape()
                                                          .setGeometry(new Text().setString(new MFString789().getArray())
                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32790().getArray())
                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA791().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f792().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName(new SFString("r_shoulder")).setDEF(new SFString("hanim_r_shoulder")).setCenter(new float[] {-0.1647f ,1.17855f ,-0.00327f })
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm"))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_humeral_lateral_epicondyle")).setDEF(new SFString("hanim_r_humeral_lateral_epicondyle_pt")).setTranslation(new float[] {-0.2f ,0.95f ,-0.03f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32793().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA794().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f795().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString796().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_humeral_medial_epicondyle")).setDEF(new SFString("hanim_r_humeral_medial_epicondyle_pt")).setTranslation(new float[] {-0.18f ,0.93f ,-0.03f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32797().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA798().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f799().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString800().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_radiale")).setDEF(new SFString("hanim_r_radiale_pt")).setTranslation(new float[] {-0.2f ,0.91f ,-0.03f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 72 hanim_r_radiale_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32801().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA802().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f803().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString804().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_bideltoid")).setDEF(new SFString("hanim_r_bideltoid_pt")).setTranslation(new float[] {-0.225f ,1.185f ,0f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 97 hanim_r_bideltoid_pt")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32805().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA806().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f807().getArray()))))
                                                        .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString808().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32809().getArray())
                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA810().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f811().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("hanim_r_elbow")).setCenter(new float[] {-0.1817f ,0.9288f ,-0.00564f })
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm"))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_radial_styloid")).setDEF(new SFString("hanim_r_radial_styloid_pt")).setTranslation(new float[] {-0.18f ,0.725f ,0.025f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 74 hanim_r_radial_styloid_pt")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32812().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA813().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f814().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString815().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_olecranon")).setDEF(new SFString("hanim_r_olecranon_pt")).setTranslation(new float[] {-0.2f ,0.92f ,-0.03f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 68 hanim_r_olecranon_pt")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32816().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA817().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f818().getArray()))))
                                                          .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString819().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32820().getArray())
                                                            .setColor(new ColorRGBA().setColor(new MFColorRGBA821().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f822().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("hanim_r_radiocarpal")).setCenter(new float[] {-0.1816f ,0.7242f ,-0.005f })
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal"))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setName(new SFString("r_ulnar_styloid")).setDEF(new SFString("hanim_r_ulnar_styloid_pt")).setTranslation(new float[] {-0.2f ,0.725f ,0f })
                                                            .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 73 hanim_r_ulnar_styloid_pt")))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32823().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA824().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f825().getArray()))))
                                                            .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString826().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32827().getArray())
                                                              .setColor(new ColorRGBA().setColor(new MFColorRGBA828().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f829().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_1")).setDEF(new SFString("hanim_r_midcarpal_1")).setCenter(new float[] {-0.18097f ,0.70605f ,0.0193f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32830().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA831().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f832().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("hanim_r_carpometacarpal_1")).setCenter(new float[] {-0.18f ,0.69255f ,0.02598f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1"))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_1").setName(new SFString("r_metacarpal_phalanx_2")).setDEF(new SFString("hanim_r_metacarpal_phalanx_2_pt")).setTranslation(new float[] {-0.2f ,0.665f ,0.012f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32833().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA834().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f835().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString836().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32837().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA838().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f839().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("hanim_r_metacarpophalangeal_1")).setCenter(new float[] {-0.18065f ,0.67275f ,0.03577f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32840().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA841().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f842().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("hanim_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.18227f ,0.654f ,0.0496f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1"))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1_tip")).setTranslation(new float[] {-0.18f ,0.64f ,0.06f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32843().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA844().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f845().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString846().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32847().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA848().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f849().getArray())))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_2")).setDEF(new SFString("hanim_r_midcarpal_2")).setCenter(new float[] {-0.18097f ,0.70695f ,0.0084f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32850().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA851().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f852().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("hanim_r_carpometacarpal_2")).setCenter(new float[] {-0.1809f ,0.6876f ,0.0097f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32853().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA854().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f855().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("hanim_r_metacarpophalangeal_2")).setCenter(new float[] {-0.18335f ,0.6372f ,0.01507f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32856().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA857().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f858().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.1813f ,0.6068f ,0.01418f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32859().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA860().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f861().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.1803f ,0.5816f ,0.01338f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2"))
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_2").setName(new SFString("r_dactylion")).setDEF(new SFString("hanim_r_dactylion_pt")).setTranslation(new float[] {-0.17f ,0.558f ,0.017f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 61 hanim_r_dactylion_pt")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32862().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA863().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f864().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString865().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2_tip")).setTranslation(new float[] {-0.172f ,0.558f ,0.017f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32866().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA867().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f868().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString869().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32870().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA871().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f872().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_3")).setDEF(new SFString("hanim_r_midcarpal_3")).setCenter(new float[] {-0.18072f ,0.708525f ,-0.004797f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32873().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA874().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f875().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("hanim_r_carpometacarpal_3")).setCenter(new float[] {-0.18072f ,0.6858f ,-0.00625f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3"))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_3").setName(new SFString("r_metacarpal_phalanx_3")).setDEF(new SFString("hanim_r_metacarpal_phalanx_3_pt")).setTranslation(new float[] {-0.2f ,0.665f ,0.016f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32876().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA877().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f878().getArray()))))
                                                                .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString879().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32880().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA881().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f882().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("hanim_r_metacarpophalangeal_3")).setCenter(new float[] {-0.1833f ,0.63495f ,-0.0039f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32883().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA884().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f885().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.1813f ,0.6032f ,-0.0035f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32886().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA887().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f888().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.18029f ,0.5753f ,-0.00375f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3"))
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3_tip")).setTranslation(new float[] {-0.17f ,0.555f ,-0.006f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32889().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA890().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f891().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString892().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32893().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA894().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f895().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_4_5")).setDEF(new SFString("hanim_r_midcarpal_4_5")).setCenter(new float[] {-0.18072f ,0.70583f ,-0.02574f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32896().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA897().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f898().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("hanim_r_carpometacarpal_4")).setCenter(new float[] {-0.18072f ,0.68625f ,-0.01992f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32899().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA900().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f901().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("hanim_r_metacarpophalangeal_4")).setCenter(new float[] {-0.1833f ,0.63405f ,-0.02144f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32902().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA903().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f904().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {-0.1813f ,0.6066f ,-0.02064f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32905().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA906().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f907().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {-0.18029f ,0.5807f ,-0.01978f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4"))
                                                                    .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4_tip")).setTranslation(new float[] {-0.172f ,0.559f ,-0.024f })
                                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip")))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32908().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                          .setColor(new ColorRGBA().setColor(new MFColorRGBA909().getArray()))
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f910().getArray()))))
                                                                      .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                        .addChild(new Shape()
                                                                          .setGeometry(new Text().setString(new MFString911().getArray())
                                                                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32912().getArray())
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA913().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f914().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("hanim_r_carpometacarpal_5")).setCenter(new float[] {-0.18126f ,0.68827f ,-0.03278f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5"))
                                                            .addChild(new HAnimSite("hanim_r_metacarpal_5").setName(new SFString("r_metacarpal_phalanx_5")).setDEF(new SFString("hanim_r_metacarpal_phalanx_5_pt")).setTranslation(new float[] {-0.2f ,0.665f ,-0.036f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32915().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA916().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f917().getArray()))))
                                                              .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString918().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32919().getArray())
                                                                .setColor(new ColorRGBA().setColor(new MFColorRGBA920().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f921().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("hanim_r_metacarpophalangeal_5")).setCenter(new float[] {-0.18297f ,0.6381f ,-0.0371f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32922().getArray())
                                                                  .setColor(new ColorRGBA().setColor(new MFColorRGBA923().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f924().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {-0.1813f ,0.621f ,-0.03715f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32925().getArray())
                                                                    .setColor(new ColorRGBA().setColor(new MFColorRGBA926().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f927().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {-0.18045f ,0.602325f ,-0.03697f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5"))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5_tip")).setTranslation(new float[] {-0.172f ,0.58f ,-0.039f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32928().getArray()).setCreaseAngle(0.5f ).setSolid(false)
                                                                        .setColor(new ColorRGBA().setColor(new MFColorRGBA929().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f930().getArray()))))
                                                                    .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new Text().setString(new MFString931().getArray())
                                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32932().getArray())
                                                                      .setColor(new ColorRGBA().setColor(new MFColorRGBA933().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f934().getArray())))))))))))))))))))))))))))))))))
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new Background().setDEF(new SFString("Background1")).setGroundColor(new MFColor935().getArray()).setSkyColor(new MFColor936().getArray()))
        .addChild(new DirectionalLight().setGlobal(true))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,1f ,0f }).setDescription(new SFString("JinLOA4")).setPosition(new float[] {0f ,1f ,3f }))
        .addChild(new Transform().setDEF(new SFString("Landmark000"))
          .addComments(new CommentsBlock("Another Parent Scene 0 0 0 landmark"))
          .addChild(new Shape().setDEF(new SFString("HAnim000Landmark"))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f }).setEmissiveColor(new float[] {0f ,1f ,0f })))
            .setGeometry(new Sphere().setRadius(0.01f )))));
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
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0.6f ,0f ,0f ,0f ,1f });
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0.1f ,0f ,0f ,0f ,0.1f ,0f ,0f ,0f ,0.1f });
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"33"});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA9 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"36"});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA13 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"42"});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA17 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"46"});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA21 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"32"});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA25 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"35"});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA29 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"34"});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA33 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString35 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"37"});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA37 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"38"});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA41 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString43 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"93"});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA45 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.826f ,0.02f ,0f ,0.77f ,0f });
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA48 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString50 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"90"});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA52 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString54 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"40"});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA56 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString58 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"39"});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA60 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString62 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"41"});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA64 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.095f ,0.8266f ,-0.0183f ,0f ,0.826f ,0.02f });
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA67 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString69 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"47"});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA71 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString73 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"48"});
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA75 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString77 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"49"});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA79 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0926f ,0.4088f ,-0.01944f ,0.095f ,0.8266f ,-0.0183f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA82 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString84 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"50"});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA86 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f87 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString88 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"58"});
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA90 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f91 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0888f ,0.09545f ,-0.01045f ,0.0926f ,0.4088f ,-0.01944f });
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA93 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0783f ,0.0369f ,0.0049f ,0.0888f ,0.09545f ,-0.01045f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA96 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f97 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0674f ,0.0321f ,0.0184f ,0.0783f ,0.0369f ,0.0049f });
  }
}
private class MFInt3298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA99 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0646f ,0.02324f ,0.0442f ,0.0674f ,0.0321f ,0.0184f });
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA102 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f103 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString104 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"55"});
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA106 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f107 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0621f ,0.01442f ,0.0936f ,0.0646f ,0.02324f ,0.0442f });
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA109 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString111 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"111"});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA113 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.062f ,0.012f ,0.115f ,0.0621f ,0.01442f ,0.0936f });
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA116 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f117 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0814f ,0.0335f ,0.02143f ,0.0783f ,0.0369f ,0.0049f });
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA119 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0802f ,0.0261f ,0.0411f ,0.0814f ,0.0335f ,0.02143f });
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA122 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f123 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0825f ,0.01497f ,0.09783f ,0.0802f ,0.0261f ,0.0411f });
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA125 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0843f ,0.01265f ,0.114f ,0.0825f ,0.01497f ,0.09783f });
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA128 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f129 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString130 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"112"});
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA132 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f133 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0843f ,0.00982f ,0.123435f ,0.0843f ,0.01265f ,0.114f });
  }
}
private class MFInt32134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA135 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.09297f ,0.0334f ,0.01982f ,0.0783f ,0.0369f ,0.0049f });
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA138 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f139 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.09459f ,0.0261f ,0.0394f ,0.09297f ,0.0334f ,0.01982f });
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA141 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0965f ,0.01505f ,0.0954f ,0.09459f ,0.0261f ,0.0394f });
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA144 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f145 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.09886f ,0.01192f ,0.11047f ,0.0965f ,0.01505f ,0.0954f });
  }
}
private class MFInt32146 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA147 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString149 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"113"});
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA151 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1004f ,0.00983f ,0.1197f ,0.09886f ,0.01192f ,0.11047f });
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA154 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f155 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0891f ,0.05798f ,-0.0259f ,0.0888f ,0.09545f ,-0.01045f });
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA157 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11063f ,0.03528f ,0.0021f ,0.0891f ,0.05798f ,-0.0259f });
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA160 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.10649f ,0.02454f ,0.03843f ,0.11063f ,0.03528f ,0.0021f });
  }
}
private class MFInt32162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA163 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.109867f ,0.01435f ,0.09117f ,0.10649f ,0.02454f ,0.03843f });
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA166 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f167 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11416f ,0.01224f ,0.10631f ,0.109867f ,0.01435f ,0.09117f });
  }
}
private class MFInt32168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA169 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString171 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"114"});
  }
}
private class MFInt32172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA173 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11567f ,0.00936f ,0.11369f ,0.11416f ,0.01224f ,0.10631f });
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA176 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f177 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1208f ,0.02094f ,0.03474f ,0.11063f ,0.03528f ,0.0021f });
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA179 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f180 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.124065f ,0.01367f ,0.08656f ,0.1208f ,0.02094f ,0.03474f });
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA182 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f183 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString184 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"56"});
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA186 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f187 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.12638f ,0.01086f ,0.09414f ,0.124065f ,0.01367f ,0.08656f });
  }
}
private class MFInt32188 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA189 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString191 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"115"});
  }
}
private class MFInt32192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA193 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.12728f ,0.00856f ,0.10188f ,0.12638f ,0.01086f ,0.09414f });
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA196 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString198 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"91"});
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA200 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f201 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString202 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"44"});
  }
}
private class MFInt32203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA204 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f205 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString206 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"43"});
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA208 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f209 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString210 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"45"});
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA212 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f213 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09466f ,0.82665f ,-0.01835f ,0f ,0.826f ,0.02f });
  }
}
private class MFInt32214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA215 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f216 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString217 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"51"});
  }
}
private class MFInt32218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA219 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString221 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"52"});
  }
}
private class MFInt32222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA223 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString225 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"53"});
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA227 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f228 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0926f ,0.408825f ,-0.01944f ,-0.09466f ,0.82665f ,-0.01835f });
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA230 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f231 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString232 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"54"});
  }
}
private class MFInt32233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA234 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f235 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString236 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"62"});
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA238 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.08845f ,0.09544f ,-0.01045f ,-0.0926f ,0.408825f ,-0.01944f });
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA241 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.07794f ,0.0369f ,0.00486f ,-0.08845f ,0.09544f ,-0.01045f });
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA244 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.06698f ,0.032107f ,0.01839f ,-0.07794f ,0.0369f ,0.00486f });
  }
}
private class MFInt32246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA247 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f248 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.064f ,0.02324f ,0.04419f ,-0.06698f ,0.032107f ,0.01839f });
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA250 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f251 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString252 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"59"});
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA254 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f255 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.06176f ,0.014425f ,0.09362f ,-0.064f ,0.02324f ,0.04419f });
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA257 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString259 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"116"});
  }
}
private class MFInt32260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA261 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.06174f ,0.0121f ,0.1153f ,-0.06176f ,0.014425f ,0.09362f });
  }
}
private class MFInt32263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA264 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f265 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.081f ,0.0335f ,0.02142f ,-0.07794f ,0.0369f ,0.00486f });
  }
}
private class MFInt32266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA267 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.07983f ,0.0261f ,0.04106f ,-0.081f ,0.0335f ,0.02142f });
  }
}
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA270 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f271 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0821f ,0.01497f ,0.09783f ,-0.07983f ,0.0261f ,0.04106f });
  }
}
private class MFInt32272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA273 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0839f ,0.012647f ,0.114f ,-0.0821f ,0.01497f ,0.09783f });
  }
}
private class MFInt32275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA276 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f277 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString278 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"117"});
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA280 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f281 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0839f ,0.009825f ,0.123435f ,-0.0839f ,0.012647f ,0.114f });
  }
}
private class MFInt32282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA283 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09261f ,0.03339f ,0.01982f ,-0.07794f ,0.0369f ,0.00486f });
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA286 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f287 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09423f ,0.0261f ,0.0394f ,-0.09261f ,0.03339f ,0.01982f });
  }
}
private class MFInt32288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA289 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f ,0.01505f ,0.09542f ,-0.09423f ,0.0261f ,0.0394f });
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA292 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f293 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0985f ,0.01192f ,0.11047f ,-0.0961f ,0.01505f ,0.09542f });
  }
}
private class MFInt32294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA295 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString297 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"118"});
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA299 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f300 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.100035f ,0.00982f ,0.1197f ,-0.0985f ,0.01192f ,0.11047f });
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA302 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f303 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.088717f ,0.05798f ,-0.025965f ,-0.08845f ,0.09544f ,-0.01045f });
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA305 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f306 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.11027f ,0.03528f ,0.0021f ,-0.088717f ,0.05798f ,-0.025965f });
  }
}
private class MFInt32307 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA308 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f309 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10613f ,0.02454f ,0.03843f ,-0.11027f ,0.03528f ,0.0021f });
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA311 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f312 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1095f ,0.01435f ,0.09117f ,-0.10613f ,0.02454f ,0.03843f });
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA314 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f315 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.11378f ,0.01224f ,0.1063f ,-0.1095f ,0.01435f ,0.09117f });
  }
}
private class MFInt32316 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA317 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString319 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"119"});
  }
}
private class MFInt32320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA321 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1153f ,0.00937f ,0.11369f ,-0.11378f ,0.01224f ,0.1063f });
  }
}
private class MFInt32323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA324 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f325 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.12044f ,0.020945f ,0.03474f ,-0.11027f ,0.03528f ,0.0021f });
  }
}
private class MFInt32326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA327 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f328 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.12368f ,0.01367f ,0.08656f ,-0.12044f ,0.020945f ,0.03474f });
  }
}
private class MFInt32329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA330 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f331 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString332 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"60"});
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA334 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f335 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.126f ,0.01086f ,0.09414f ,-0.12368f ,0.01367f ,0.08656f });
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA337 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString339 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"120"});
  }
}
private class MFInt32340 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA341 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f342 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1269f ,0.00856f ,0.10188f ,-0.126f ,0.01086f ,0.09414f });
  }
}
private class MFInt32343 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA344 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f345 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString346 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"24"});
  }
}
private class MFInt32347 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA348 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f349 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString350 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"25"});
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA352 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f353 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString354 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"26"});
  }
}
private class MFInt32355 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA356 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f357 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString358 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"27"});
  }
}
private class MFInt32359 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA360 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f361 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString362 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"84"});
  }
}
private class MFInt32363 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA364 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f365 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9254f ,-0.01376f ,0f ,0.77f ,0f });
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA367 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f368 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9497f ,-0.01376f ,0f ,0.9254f ,-0.01376f });
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA370 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f371 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9659f ,-0.01376f ,0f ,0.9497f ,-0.01376f });
  }
}
private class MFInt32372 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA373 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f374 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString375 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"28"});
  }
}
private class MFInt32376 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA377 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f378 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString379 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"30"});
  }
}
private class MFInt32380 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA381 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f382 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.98235f ,-0.01376f ,0f ,0.9659f ,-0.01376f });
  }
}
private class MFInt32383 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA384 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f385 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.99967f ,-0.01376f ,0f ,0.98235f ,-0.01376f });
  }
}
private class MFInt32386 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA387 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f388 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.0231f ,-0.01376f ,0f ,0.99967f ,-0.01376f });
  }
}
private class MFInt32389 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA390 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f391 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.0467f ,-0.01376f ,0f ,1.0231f ,-0.01376f });
  }
}
private class MFInt32392 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA393 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f394 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString395 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"13"});
  }
}
private class MFInt32396 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA397 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f398 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString399 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"88"});
  }
}
private class MFInt32400 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA401 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f402 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.0638f ,-0.01378f ,0f ,1.0467f ,-0.01376f });
  }
}
private class MFInt32403 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA404 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f405 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString406 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"29"});
  }
}
private class MFInt32407 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA408 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f409 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString410 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31"});
  }
}
private class MFInt32411 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA412 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f413 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString414 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"92"});
  }
}
private class MFInt32415 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA416 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f417 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString418 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"94"});
  }
}
private class MFInt32419 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA420 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f421 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString422 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"95"});
  }
}
private class MFInt32423 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA424 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f425 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.0784f ,-0.01376f ,0f ,1.0638f ,-0.01378f });
  }
}
private class MFInt32426 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA427 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f428 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.093f ,-0.01376f ,0f ,1.0784f ,-0.01376f });
  }
}
private class MFInt32429 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA430 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f431 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1088f ,-0.01376f ,0f ,1.093f ,-0.01376f });
  }
}
private class MFInt32432 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA433 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f434 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1216f ,-0.01376f ,0f ,1.1088f ,-0.01376f });
  }
}
private class MFInt32435 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA436 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f437 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.137f ,-0.01376f ,0f ,1.1216f ,-0.01376f });
  }
}
private class MFInt32438 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA439 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f440 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1524f ,-0.01376f ,0f ,1.137f ,-0.01376f });
  }
}
private class MFInt32441 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA442 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f443 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1709f ,-0.01376f ,0f ,1.1524f ,-0.01376f });
  }
}
private class MFInt32444 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA445 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f446 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1956f ,-0.01378f ,0f ,1.1709f ,-0.01376f });
  }
}
private class MFInt32447 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA448 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f449 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString450 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"12"});
  }
}
private class MFInt32451 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA452 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f453 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString454 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10"});
  }
}
private class MFInt32455 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA456 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f457 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.22f ,-0.0138f ,0f ,1.1956f ,-0.01378f });
  }
}
private class MFInt32458 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA459 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f460 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString461 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"82"});
  }
}
private class MFInt32462 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA463 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f464 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString465 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"83"});
  }
}
private class MFInt32466 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA467 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f468 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2453f ,-0.01506f ,0f ,1.22f ,-0.0138f });
  }
}
private class MFInt32469 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA470 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f471 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2575f ,-0.01506f ,0f ,1.2453f ,-0.01506f });
  }
}
private class MFInt32472 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA473 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f474 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2699f ,-0.01506f ,0f ,1.2575f ,-0.01506f });
  }
}
private class MFInt32475 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA476 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f477 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.28227f ,-0.01506f ,0f ,1.2699f ,-0.01506f });
  }
}
private class MFInt32478 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA479 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f480 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2951f ,-0.01506f ,0f ,1.28227f ,-0.01506f });
  }
}
private class MFInt32481 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA482 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f483 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString484 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"11"});
  }
}
private class MFInt32485 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA486 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f487 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.307f ,-0.015f ,0f ,1.2951f ,-0.01506f });
  }
}
private class MFInt32488 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA489 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f490 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.3185f ,-0.0151f ,0f ,1.307f ,-0.015f });
  }
}
private class MFInt32491 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA492 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f493 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString494 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"0"});
  }
}
private class MFInt32495 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA496 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f497 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString498 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1"});
  }
}
private class MFInt32499 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA500 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f501 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString502 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2"});
  }
}
private class MFInt32503 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA504 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f505 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString506 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"3"});
  }
}
private class MFInt32507 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA508 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f509 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString510 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"4"});
  }
}
private class MFInt32511 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA512 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f513 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString514 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"6"});
  }
}
private class MFInt32515 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA516 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f517 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString518 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"7"});
  }
}
private class MFInt32519 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA520 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f521 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString522 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"81"});
  }
}
private class MFInt32523 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA524 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f525 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString526 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"89"});
  }
}
private class MFInt32527 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA528 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f529 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString530 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"85"});
  }
}
private class MFInt32531 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA532 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f533 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString534 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"86"});
  }
}
private class MFInt32535 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA536 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f537 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.3126f ,-0.0154f ,0f ,1.3185f ,-0.0151f });
  }
}
private class MFInt32538 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA539 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f540 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString541 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_eyelid_tip"});
  }
}
private class MFInt32542 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA543 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f544 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0505f ,1.42425f ,0.03294f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32545 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA546 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f547 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString548 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_eyelid_tip"});
  }
}
private class MFInt32549 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA550 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f551 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0505f ,1.42425f ,0.03294f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32552 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA553 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f554 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString555 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_eyeball_tip"});
  }
}
private class MFInt32556 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA557 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f558 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.048127f ,1.4049f ,0.08305f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32559 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA560 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f561 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString562 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_eyeball_tip"});
  }
}
private class MFInt32563 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA564 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f565 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.04813f ,1.4049f ,0.08305f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32566 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA567 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f568 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString569 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_eyebrow_tip"});
  }
}
private class MFInt32570 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA571 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f572 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.02175f ,1.4139f ,0.1069f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32573 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA574 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f575 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString576 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_eyebrow_tip"});
  }
}
private class MFInt32577 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA578 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f579 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.02175f ,1.4139f ,0.10694f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32580 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA581 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f582 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString583 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"5"});
  }
}
private class MFInt32584 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA585 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f586 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString587 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"8"});
  }
}
private class MFInt32588 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA589 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f590 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString591 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"9"});
  }
}
private class MFInt32592 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA593 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f594 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString595 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"87"});
  }
}
private class MFInt32596 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA597 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f598 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.3128f ,0.01538f ,0f ,1.3126f ,-0.0154f });
  }
}
private class MFInt32599 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA600 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f601 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString602 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"l_clavicale"});
  }
}
private class MFInt32603 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA604 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f605 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.03847f ,1.2087f ,-0.01378f ,0f ,1.22f ,-0.0138f });
  }
}
private class MFInt32606 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA607 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f608 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString609 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"15"});
  }
}
private class MFInt32610 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA611 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f612 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString613 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"16"});
  }
}
private class MFInt32614 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA615 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f616 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString617 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"17"});
  }
}
private class MFInt32618 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA619 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f620 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString621 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"18"});
  }
}
private class MFInt32622 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA623 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f624 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.12294f ,1.191825f ,-0.0129f ,0.03847f ,1.2087f ,-0.01378f });
  }
}
private class MFInt32625 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA626 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f627 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString628 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"63"});
  }
}
private class MFInt32629 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA630 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f631 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString632 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"64"});
  }
}
private class MFInt32633 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA634 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f635 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString636 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"69"});
  }
}
private class MFInt32637 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA638 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f639 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString640 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"96"});
  }
}
private class MFInt32641 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA642 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f643 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.16506f ,1.17855f ,-0.00327f ,0.12294f ,1.191825f ,-0.0129f });
  }
}
private class MFInt32644 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA645 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f646 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString647 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"71"});
  }
}
private class MFInt32648 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA649 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f650 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString651 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"65"});
  }
}
private class MFInt32652 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA653 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f654 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18209f ,0.9288f ,-0.00563f ,0.16506f ,1.17855f ,-0.00327f });
  }
}
private class MFInt32655 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA656 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f657 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString658 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"70"});
  }
}
private class MFInt32659 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA660 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f661 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1819f ,0.72427f ,-0.005f ,0.18209f ,0.9288f ,-0.00563f });
  }
}
private class MFInt32662 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA663 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f664 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1813f ,0.706f ,0.0193f ,0.1819f ,0.72427f ,-0.005f });
  }
}
private class MFInt32665 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA666 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f667 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString668 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"75"});
  }
}
private class MFInt32669 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA670 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f671 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1805f ,0.69255f ,0.026f ,0.1813f ,0.706f ,0.0193f });
  }
}
private class MFInt32672 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA673 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f674 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.181f ,0.6727f ,0.03577f ,0.1805f ,0.69255f ,0.026f });
  }
}
private class MFInt32675 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA676 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f677 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString678 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"101"});
  }
}
private class MFInt32679 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA680 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f681 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1826f ,0.654f ,0.04966f ,0.181f ,0.6727f ,0.03577f });
  }
}
private class MFInt32682 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA683 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f684 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18128f ,0.70695f ,0.00842f ,0.1819f ,0.72427f ,-0.005f });
  }
}
private class MFInt32685 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA686 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f687 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18128f ,0.6876f ,0.0098f ,0.18128f ,0.70695f ,0.00842f });
  }
}
private class MFInt32688 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA689 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f690 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1837f ,0.6372f ,0.01507f ,0.18128f ,0.6876f ,0.0098f });
  }
}
private class MFInt32691 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA692 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f693 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18171f ,0.6068f ,0.01418f ,0.1837f ,0.6372f ,0.01507f });
  }
}
private class MFInt32694 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA695 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f696 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString697 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"57"});
  }
}
private class MFInt32698 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA699 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f700 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString701 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"102"});
  }
}
private class MFInt32702 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA703 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f704 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18067f ,0.5816f ,0.01338f ,0.18171f ,0.6068f ,0.01418f });
  }
}
private class MFInt32705 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA706 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f707 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18108f ,0.708525f ,-0.0048f ,0.1819f ,0.72427f ,-0.005f });
  }
}
private class MFInt32708 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA709 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f710 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString711 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"76"});
  }
}
private class MFInt32712 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA713 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f714 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18108f ,0.6858f ,-0.00625f ,0.18108f ,0.708525f ,-0.0048f });
  }
}
private class MFInt32715 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA716 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f717 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18369f ,0.6349f ,-0.0039f ,0.18108f ,0.6858f ,-0.00625f });
  }
}
private class MFInt32718 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA719 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f720 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18171f ,0.6032f ,-0.0035f ,0.18369f ,0.6349f ,-0.0039f });
  }
}
private class MFInt32721 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA722 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f723 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString724 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"103"});
  }
}
private class MFInt32725 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA726 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f727 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1807f ,0.5753f ,-0.0037f ,0.18171f ,0.6032f ,-0.0035f });
  }
}
private class MFInt32728 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA729 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f730 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18108f ,0.70582f ,-0.02574f ,0.1819f ,0.72427f ,-0.005f });
  }
}
private class MFInt32731 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA732 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f733 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1811f ,0.68625f ,-0.0199f ,0.18108f ,0.70582f ,-0.02574f });
  }
}
private class MFInt32734 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA735 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f736 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18369f ,0.63405f ,-0.02144f ,0.1811f ,0.68625f ,-0.0199f });
  }
}
private class MFInt32737 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA738 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f739 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1817f ,0.6066f ,-0.02064f ,0.18369f ,0.63405f ,-0.02144f });
  }
}
private class MFInt32740 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA741 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f742 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString743 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"104"});
  }
}
private class MFInt32744 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA745 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f746 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18067f ,0.580725f ,-0.01977f ,0.1817f ,0.6066f ,-0.02064f });
  }
}
private class MFInt32747 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA748 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f749 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString750 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"77"});
  }
}
private class MFInt32751 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA752 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f753 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18164f ,0.68827f ,-0.03278f ,0.1819f ,0.72427f ,-0.005f });
  }
}
private class MFInt32754 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA755 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f756 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1833f ,0.6381f ,-0.037f ,0.18164f ,0.68827f ,-0.03278f });
  }
}
private class MFInt32757 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA758 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f759 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18166f ,0.621f ,-0.03715f ,0.1833f ,0.6381f ,-0.037f });
  }
}
private class MFInt32760 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA761 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f762 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString763 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"105"});
  }
}
private class MFInt32764 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA765 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f766 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1808f ,0.6023f ,-0.0369f ,0.18166f ,0.621f ,-0.03715f });
  }
}
private class MFInt32767 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA768 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f769 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString770 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r_clavicale"});
  }
}
private class MFInt32771 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA772 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f773 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03847f ,1.2087f ,-0.0138f ,0f ,1.22f ,-0.0138f });
  }
}
private class MFInt32774 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA775 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f776 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString777 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"20"});
  }
}
private class MFInt32778 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA779 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f780 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString781 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"21"});
  }
}
private class MFInt32782 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA783 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f784 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString785 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"22"});
  }
}
private class MFInt32786 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA787 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f788 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString789 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"23"});
  }
}
private class MFInt32790 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA791 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f792 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1229f ,1.19182f ,-0.0129f ,-0.03847f ,1.2087f ,-0.0138f });
  }
}
private class MFInt32793 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA794 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f795 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString796 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"66"});
  }
}
private class MFInt32797 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA798 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f799 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString800 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"67"});
  }
}
private class MFInt32801 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA802 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f803 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString804 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"72"});
  }
}
private class MFInt32805 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA806 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f807 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString808 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"97"});
  }
}
private class MFInt32809 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA810 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f811 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1647f ,1.17855f ,-0.00327f ,-0.1229f ,1.19182f ,-0.0129f });
  }
}
private class MFInt32812 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA813 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f814 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString815 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"74"});
  }
}
private class MFInt32816 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA817 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f818 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString819 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"68"});
  }
}
private class MFInt32820 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA821 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f822 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1817f ,0.9288f ,-0.00564f ,-0.1647f ,1.17855f ,-0.00327f });
  }
}
private class MFInt32823 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA824 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f825 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString826 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"73"});
  }
}
private class MFInt32827 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA828 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f829 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1816f ,0.7242f ,-0.005f ,-0.1817f ,0.9288f ,-0.00564f });
  }
}
private class MFInt32830 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA831 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f832 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18097f ,0.70605f ,0.0193f ,-0.1816f ,0.7242f ,-0.005f });
  }
}
private class MFInt32833 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA834 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f835 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString836 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"78"});
  }
}
private class MFInt32837 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA838 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f839 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18f ,0.69255f ,0.02598f ,-0.18097f ,0.70605f ,0.0193f });
  }
}
private class MFInt32840 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA841 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f842 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18065f ,0.67275f ,0.03577f ,-0.18f ,0.69255f ,0.02598f });
  }
}
private class MFInt32843 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA844 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f845 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString846 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"106"});
  }
}
private class MFInt32847 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA848 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f849 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18227f ,0.654f ,0.0496f ,-0.18065f ,0.67275f ,0.03577f });
  }
}
private class MFInt32850 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA851 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f852 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18097f ,0.70695f ,0.0084f ,-0.1816f ,0.7242f ,-0.005f });
  }
}
private class MFInt32853 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA854 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f855 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1809f ,0.6876f ,0.0097f ,-0.18097f ,0.70695f ,0.0084f });
  }
}
private class MFInt32856 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA857 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f858 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18335f ,0.6372f ,0.01507f ,-0.1809f ,0.6876f ,0.0097f });
  }
}
private class MFInt32859 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA860 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f861 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1813f ,0.6068f ,0.01418f ,-0.18335f ,0.6372f ,0.01507f });
  }
}
private class MFInt32862 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA863 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f864 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString865 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"61"});
  }
}
private class MFInt32866 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA867 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f868 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString869 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"107"});
  }
}
private class MFInt32870 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA871 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f872 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1803f ,0.5816f ,0.01338f ,-0.1813f ,0.6068f ,0.01418f });
  }
}
private class MFInt32873 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA874 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f875 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18072f ,0.708525f ,-0.004797f ,-0.1816f ,0.7242f ,-0.005f });
  }
}
private class MFInt32876 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA877 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f878 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString879 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"79"});
  }
}
private class MFInt32880 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA881 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f882 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18072f ,0.6858f ,-0.00625f ,-0.18072f ,0.708525f ,-0.004797f });
  }
}
private class MFInt32883 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA884 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f885 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1833f ,0.63495f ,-0.0039f ,-0.18072f ,0.6858f ,-0.00625f });
  }
}
private class MFInt32886 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA887 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f888 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1813f ,0.6032f ,-0.0035f ,-0.1833f ,0.63495f ,-0.0039f });
  }
}
private class MFInt32889 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA890 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f891 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString892 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"108"});
  }
}
private class MFInt32893 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA894 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f895 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18029f ,0.5753f ,-0.00375f ,-0.1813f ,0.6032f ,-0.0035f });
  }
}
private class MFInt32896 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA897 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f898 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18072f ,0.70583f ,-0.02574f ,-0.1816f ,0.7242f ,-0.005f });
  }
}
private class MFInt32899 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA900 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f901 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18072f ,0.68625f ,-0.01992f ,-0.18072f ,0.70583f ,-0.02574f });
  }
}
private class MFInt32902 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA903 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f904 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1833f ,0.63405f ,-0.02144f ,-0.18072f ,0.68625f ,-0.01992f });
  }
}
private class MFInt32905 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA906 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f907 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1813f ,0.6066f ,-0.02064f ,-0.1833f ,0.63405f ,-0.02144f });
  }
}
private class MFInt32908 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA909 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f910 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString911 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"109"});
  }
}
private class MFInt32912 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA913 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f914 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18029f ,0.5807f ,-0.01978f ,-0.1813f ,0.6066f ,-0.02064f });
  }
}
private class MFInt32915 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA916 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f917 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString918 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"80"});
  }
}
private class MFInt32919 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA920 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f921 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18126f ,0.68827f ,-0.03278f ,-0.1816f ,0.7242f ,-0.005f });
  }
}
private class MFInt32922 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA923 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f924 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18297f ,0.6381f ,-0.0371f ,-0.18126f ,0.68827f ,-0.03278f });
  }
}
private class MFInt32925 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA926 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f927 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1813f ,0.621f ,-0.03715f ,-0.18297f ,0.6381f ,-0.0371f });
  }
}
private class MFInt32928 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA929 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f930 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString931 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"110"});
  }
}
private class MFInt32932 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA933 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec3f934 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18045f ,0.602325f ,-0.03697f ,-0.1813f ,0.621f ,-0.03715f });
  }
}
private class MFColor935 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.5f ,0.5f ,0.5f });
  }
}
private class MFColor936 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.4f ,0.4f ,0.4f });
  }
}
}
