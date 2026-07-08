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
public class StandardHumanoid implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new StandardHumanoid().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/StandardHumanoid.new.java.x3d");
    model.toFileJSON("../data/StandardHumanoid.new.java.x3dj");
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
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("StandardHumanoid.x3d")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("An attempt at a standard LOA-4 skeleton")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("h2.pl")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("14 Jan 2023")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("9 November 2020")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new Transform()
          .addComments(new CommentsBlock("DEF for markerfor XYZ axes"))
          .addChild(new Shape().setDEF(new SFString("AxisLinesShape"))
            .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
              .setColor(new Color().setColor(new MFColor3().getArray())))))
        .addChild(new Group()
          .addComments(new CommentsBlock("DEFS for markers of skeleton joints, segments, and sites"))
          .addChild(new Transform()
            .addChild(new Transform().setTranslation(new float[] {0f ,2.1f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimJointShape"))
                .setGeometry(new Sphere().setRadius(0.02f ))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF(new SFString("HAnimJointMaterial")).setDiffuseColor(new float[] {0f ,0f ,0f })))))
            .addChild(new Transform().setTranslation(new float[] {0f ,2.05f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimSegmentLine"))
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF(new SFString("HAnimSegmentLineColorRGBA")).setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new float[] {0f ,2.1f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimSiteShape"))
                .setGeometry(new IndexedFaceSet().setDEF(new SFString("DiamondIFS")).setCreaseAngle(0.5f ).setSolid(false).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF(new SFString("HAnimSiteColorRGBA")).setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f }).setTransparency(1f )))))))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setPosition(new float[] {0f ,1f ,3f }).setCenterOfRotation(new float[] {0f ,1f ,0f }).setDescription(new SFString("default")))
        .addChild(new HAnimHumanoid().setName(new SFString("HAnim")).setDEF(new SFString("hanim_HAnim")).setInfo(new MFString10().getArray()).setVersion(new SFString("2.0"))
          .addComments(new CommentsBlock("<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"))
          .addComments(new CommentsBlock("</LOD>"))
          .addSkin(new Shape().setDEF(new SFString("SkinShape"))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray().append(new MFInt3212().getArray()).append(new MFInt3213().getArray()).append(new MFInt3214().getArray())).setCreaseAngle(3.1f )
              .setCoord(new Coordinate().setDEF(new SFString("TheSkinCoord")).setPoint(new MFVec3f15().getArray().append(new MFVec3f16().getArray())))
              .setColor(new Color().setColor(new MFColor17().getArray().append(new MFColor18().getArray()).append(new MFColor19().getArray()))))
            .setAppearance(new Appearance().setDEF(new SFString("SkinAppearance"))
              .setTexture(new ImageTexture().setDEF(new SFString("zBlueSpiralBkg2")).setDescription(new SFString("Blue Spiral Pattern")).setUrl(new MFString20().getArray()))
              .setMaterial(new Material().setDEF(new SFString("SkinMaterial")).setAmbientIntensity(0.6f ).setDiffuseColor(new float[] {1f ,1f ,1f }).setShininess(0.6f ).setTransparency(1f ))))
          .setSkinCoord(new Coordinate().setUSE(new SFString("TheSkinCoord")))
          .addSkeleton(new HAnimJoint("hanim_HAnim").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setCenter(new float[] {0f ,0.824f ,0.0277f })
            .addChild(new HAnimSegment("hanim_humanoid_root").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f ,0.824f ,0.0277f })
                .addChild(new Transform()
                  .addComments(new CommentsBlock("Empty Transform"))
                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))
                  .addComments(new CommentsBlock("from humanoid_root to sacroiliac vertices 2"))
                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                  .addComments(new CommentsBlock("from humanoid_root to vl5 vertices 2"))
                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("hanim_sacroiliac")).setCenter(new float[] {0f ,0.9149f ,0.0016f })
              .addChild(new HAnimSegment("hanim_sacroiliac").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                  .addChild(new Transform()
                    .addComments(new CommentsBlock("Empty Transform"))
                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                    .addComments(new CommentsBlock("from sacroiliac to l_hip vertices 2"))
                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("buttocks_standing_wall_contact_point")).setDEF(new SFString("hanim_buttocks_standing_wall_contact_point"))
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 93 buttocks_standing_wall_contact_point")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString27().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("crotch")).setDEF(new SFString("hanim_crotch")).setTranslation(new float[] {0.0034f ,0.8266f ,0.0257f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 38 crotch")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString28().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_asis")).setDEF(new SFString("hanim_l_asis")).setTranslation(new float[] {0.0925f ,0.9983f ,0.1052f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 32 l_asis")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString29().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_iliocristale")).setDEF(new SFString("hanim_l_iliocristale")).setTranslation(new float[] {0.1612f ,1.0537f ,0.0008f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 33 l_iliocristale")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString30().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_psis")).setDEF(new SFString("hanim_l_psis")).setTranslation(new float[] {0.0774f ,1.019f ,-0.1151f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 34 l_psis")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString31().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_trochanterion")).setDEF(new SFString("hanim_l_trochanterion")).setTranslation(new float[] {0.1677f ,0.8336f ,0.0303f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 42 l_trochanterion")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString32().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_asis")).setDEF(new SFString("hanim_r_asis")).setTranslation(new float[] {-0.0887f ,1.0021f ,0.1112f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 35 r_asis")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString33().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_iliocristale")).setDEF(new SFString("hanim_r_iliocristale")).setTranslation(new float[] {-0.1525f ,1.0628f ,0.0035f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 36 r_iliocristale")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString34().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_psis")).setDEF(new SFString("hanim_r_psis")).setTranslation(new float[] {-0.0716f ,1.019f ,-0.1138f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 37 r_psis")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString35().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_trochanterion")).setDEF(new SFString("hanim_r_trochanterion")).setTranslation(new float[] {-0.1689f ,0.8419f ,0.0352f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 46 r_trochanterion")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString36().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3237().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))
                    .addComments(new CommentsBlock("from sacroiliac to r_hip vertices 2"))
                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("l_hip")).setDEF(new SFString("hanim_l_hip")).setCenter(new float[] {0.0961f ,0.9124f ,-0.0001f })
                .addChild(new HAnimSegment("hanim_l_hip").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {0.0961f ,0.9124f ,-0.0001f })
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                      .addComments(new CommentsBlock("from l_hip to l_knee vertices 2"))
                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_femoral_lateral_epicondyles")).setDEF(new SFString("hanim_l_femoral_lateral_epicondyles")).setTranslation(new float[] {0.1598f ,0.4967f ,0.0297f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 40 l_femoral_lateral_epicondyles")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString41().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_femoral_medial_epicondyles")).setDEF(new SFString("hanim_l_femoral_medial_epicondyles")).setTranslation(new float[] {0.0398f ,0.4946f ,0.0303f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 39 l_femoral_medial_epicondyles")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString42().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_knee_crease")).setDEF(new SFString("hanim_l_knee_crease")).setTranslation(new float[] {0.0993f ,0.4881f ,-0.0309f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 90 l_knee_crease")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString43().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_suprapatella")).setDEF(new SFString("hanim_l_suprapatella"))
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 41 l_suprapatella")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString44().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f )))))))
                .addChild(new HAnimJoint("hanim_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("hanim_l_knee")).setCenter(new float[] {0.104f ,0.4867f ,0.0308f })
                  .addChild(new HAnimSegment("hanim_l_knee").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf"))
                    .addChild(new Transform().setTranslation(new float[] {0.104f ,0.4867f ,0.0308f })
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))
                        .addComments(new CommentsBlock("from l_knee to l_talocrural vertices 2"))
                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_lateral_malleolus")).setDEF(new SFString("hanim_l_lateral_malleolus")).setTranslation(new float[] {0.1308f ,0.0597f ,-0.1032f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 49 l_lateral_malleolus")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString47().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_medial_malleolus")).setDEF(new SFString("hanim_l_medial_malleolus")).setTranslation(new float[] {0.089f ,0.0716f ,-0.0881f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 48 l_medial_malleolus")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString48().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_tibiale")).setDEF(new SFString("hanim_l_tibiale"))
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 47 l_tibiale")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString49().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f )))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("hanim_l_talocrural")).setCenter(new float[] {0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus"))
                      .addChild(new Transform().setScale(new float[] {0.15f ,0.15f ,0.15f }).setTranslation(new float[] {0.08f ,0.06f ,-0.025f }).setRotation(new float[] {1f ,0f ,0f ,-1.57f })
                        .addComments(new CommentsBlock("Transform left foot"))
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform left foot"))
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3250().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f51().getArray()))
                          .addComments(new CommentsBlock("from l_talocrural to l_talocalcaneonavicular vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimSite("hanim_l_talus").setName(new SFString("l_calcaneus_posterior")).setDEF(new SFString("hanim_l_calcaneus_posterior")).setTranslation(new float[] {0.0974f ,0.0259f ,-0.1171f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 58 l_calcaneus_posterior")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString52().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_l_talus").setName(new SFString("l_sphyrion")).setDEF(new SFString("hanim_l_sphyrion")).setTranslation(new float[] {0.089f ,0.0575f ,-0.0943f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 50 l_sphyrion")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString53().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3254().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f55().getArray()))
                          .addComments(new CommentsBlock("from l_talocrural to l_calcaneocuboid vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_talocalcaneonavicular")).setDEF(new SFString("hanim_l_talocalcaneonavicular")).setCenter(new float[] {0.0781f ,0.0283f ,-0.097f })
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName(new SFString("l_navicular")).setDEF(new SFString("hanim_l_navicular"))
                        .addChild(new Transform().setTranslation(new float[] {0.0781f ,0.0283f ,-0.097f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3256().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3258().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3260().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_1")).setDEF(new SFString("hanim_l_cuneonavicular_1")).setCenter(new float[] {0.0672f ,0.0235f ,-0.0835f })
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName(new SFString("l_cuneiform_1")).setDEF(new SFString("hanim_l_cuneiform_1"))
                          .addChild(new Transform().setTranslation(new float[] {0.0672f ,0.0235f ,-0.0835f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3262().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f63().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName(new SFString("l_tarsometatarsal_1")).setDEF(new SFString("hanim_l_tarsometatarsal_1")).setCenter(new float[] {0.0644f ,0.0147f ,-0.0577f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsal_1")).setDEF(new SFString("hanim_l_metatarsal_1"))
                            .addChild(new Transform().setTranslation(new float[] {0.0644f ,0.0147f ,-0.0577f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3264().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsophalangeal_1")).setDEF(new SFString("hanim_l_metatarsophalangeal_1")).setCenter(new float[] {0.0619f ,0.0059f ,-0.0083f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_1"))
                              .addChild(new Transform().setTranslation(new float[] {0.0619f ,0.0059f ,-0.0083f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3266().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f67().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("l_metatarsal_phalanx_1")).setDEF(new SFString("hanim_l_metatarsal_phalanx_1"))
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 55 l_metatarsal_phalanx_1")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString68().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_l_tarsal_interphalangeal_1"))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_2")).setDEF(new SFString("hanim_l_cuneonavicular_2")).setCenter(new float[] {0.0812f ,0.025f ,-0.0805f })
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName(new SFString("l_cuneiform_2")).setDEF(new SFString("hanim_l_cuneiform_2"))
                          .addChild(new Transform().setTranslation(new float[] {0.0812f ,0.025f ,-0.0805f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName(new SFString("l_tarsometatarsal_2")).setDEF(new SFString("hanim_l_tarsometatarsal_2")).setCenter(new float[] {0.08f ,0.0175f ,-0.0608f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("hanim_l_metatarsal_2"))
                            .addChild(new Transform().setTranslation(new float[] {0.08f ,0.0175f ,-0.0608f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3271().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("hanim_l_metatarsophalangeal_2")).setCenter(new float[] {0.0824f ,0.0064f ,-0.004f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2"))
                              .addChild(new Transform().setTranslation(new float[] {0.0824f ,0.0064f ,-0.004f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {0.0841f ,0.0041f ,0.0121f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_2"))
                                .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0041f ,0.0121f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_2")).setCenter(new float[] {0.0841f ,0.0013f ,0.0216f }))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_3")).setDEF(new SFString("hanim_l_cuneonavicular_3")).setCenter(new float[] {0.0928f ,0.0248f ,-0.0821f })
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName(new SFString("l_cuneiform_3")).setDEF(new SFString("hanim_l_cuneiform_3"))
                          .addChild(new Transform().setTranslation(new float[] {0.0928f ,0.0248f ,-0.0821f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3277().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName(new SFString("l_tarsometatarsal_3")).setDEF(new SFString("hanim_l_tarsometatarsal_3")).setCenter(new float[] {0.0944f ,0.0175f ,-0.0625f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsal_3")).setDEF(new SFString("hanim_l_metatarsal_3"))
                            .addChild(new Transform().setTranslation(new float[] {0.0944f ,0.0175f ,-0.0625f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsophalangeal_3")).setDEF(new SFString("hanim_l_metatarsophalangeal_3")).setCenter(new float[] {0.0963f ,0.0065f ,-0.0065f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_3"))
                              .addChild(new Transform().setTranslation(new float[] {0.0963f ,0.0065f ,-0.0065f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3281().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {0.0987f ,0.0034f ,0.0086f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_3"))
                                .addChild(new Transform().setTranslation(new float[] {0.0987f ,0.0034f ,0.0086f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_3")).setCenter(new float[] {0.1002f ,0.0013f ,0.0178f })))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_calcaneocuboid")).setDEF(new SFString("hanim_l_calcaneocuboid")).setCenter(new float[] {0.0889f ,0.0494f ,-0.1278f })
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName(new SFString("l_calcaneus")).setDEF(new SFString("hanim_l_calcaneus"))
                        .addChild(new Transform().setTranslation(new float[] {0.0889f ,0.0494f ,-0.1278f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))
                            .addComments(new CommentsBlock("from l_calcaneocuboid to l_transversetarsal vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName(new SFString("l_transversetarsal")).setDEF(new SFString("hanim_l_transversetarsal")).setCenter(new float[] {0.1105f ,0.0267f ,-0.0998f })
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName(new SFString("l_cuboid")).setDEF(new SFString("hanim_l_cuboid"))
                          .addChild(new Transform().setTranslation(new float[] {0.1105f ,0.0267f ,-0.0998f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))
                              .addComments(new CommentsBlock("from l_transversetarsal to l_tarsometatarsal_4 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))
                              .addComments(new CommentsBlock("from l_transversetarsal to l_tarsometatarsal_5 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_4")).setDEF(new SFString("hanim_l_tarsometatarsal_4")).setCenter(new float[] {0.1063f ,0.016f ,-0.0634f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsal_4")).setDEF(new SFString("hanim_l_metatarsal_4"))
                            .addChild(new Transform().setTranslation(new float[] {0.1063f ,0.016f ,-0.0634f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsophalangeal_4")).setDEF(new SFString("hanim_l_metatarsophalangeal_4")).setCenter(new float[] {0.1097f ,0.0058f ,-0.0107f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_4"))
                              .addChild(new Transform().setTranslation(new float[] {0.1097f ,0.0058f ,-0.0107f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {0.114f ,0.0037f ,0.0044f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_4"))
                                .addChild(new Transform().setTranslation(new float[] {0.114f ,0.0037f ,0.0044f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_4")).setCenter(new float[] {0.1155f ,0.0008f ,0.0118f })))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_5")).setDEF(new SFString("hanim_l_tarsometatarsal_5")).setCenter(new float[] {0.1206f ,0.0124f ,-0.0671f })
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsal_5")).setDEF(new SFString("hanim_l_metatarsal_5"))
                            .addChild(new Transform().setTranslation(new float[] {0.1206f ,0.0124f ,-0.0671f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsophalangeal_5")).setDEF(new SFString("hanim_l_metatarsophalangeal_5")).setCenter(new float[] {0.1239f ,0.0051f ,-0.0153f })
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_5"))
                              .addChild(new Transform().setTranslation(new float[] {0.1239f ,0.0051f ,-0.0153f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_5").setName(new SFString("l_metatarsal_phalanx_5")).setDEF(new SFString("hanim_l_metatarsal_phalanx_5"))
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 56 l_metatarsal_phalanx_5")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString101().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {0.1262f ,0.0023f ,-0.0077f })
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_5"))
                                .addChild(new Transform().setTranslation(new float[] {0.1262f ,0.0023f ,-0.0077f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32102().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f103().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_5")).setCenter(new float[] {0.1271f ,0f ,0f }))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("r_hip")).setDEF(new SFString("hanim_r_hip")).setCenter(new float[] {-0.095f ,0.9171f ,0.0029f })
                .addChild(new HAnimSegment("hanim_r_hip").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.9171f ,0.0029f })
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32104().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f105().getArray()))
                      .addComments(new CommentsBlock("from r_hip to r_knee vertices 2"))
                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_femoral_lateral_epicondyles")).setDEF(new SFString("hanim_r_femoral_lateral_epicondyles")).setTranslation(new float[] {-0.1421f ,0.4992f ,0.031f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 44 r_femoral_lateral_epicondyles")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString106().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_femoral_medial_epicondyles")).setDEF(new SFString("hanim_r_femoral_medial_epicondyles")).setTranslation(new float[] {-0.0221f ,0.5014f ,0.0289f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 43 r_femoral_medial_epicondyles")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString107().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_knee_crease")).setDEF(new SFString("hanim_r_knee_crease")).setTranslation(new float[] {-0.0825f ,0.4932f ,-0.0326f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 91 r_knee_crease")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString108().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_suprapatella")).setDEF(new SFString("hanim_r_suprapatella"))
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 45 r_suprapatella")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString109().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f )))))))
                .addChild(new HAnimJoint("hanim_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("hanim_r_knee")).setCenter(new float[] {-0.0867f ,0.4913f ,0.0318f })
                  .addChild(new HAnimSegment("hanim_r_knee").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f ,0.4913f ,0.0318f })
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32110().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f111().getArray()))
                        .addComments(new CommentsBlock("from r_knee to r_talocrural vertices 2"))
                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_lateral_malleolus")).setDEF(new SFString("hanim_r_lateral_malleolus")).setTranslation(new float[] {-0.1006f ,0.0658f ,-0.1075f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 53 r_lateral_malleolus")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString112().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_medial_malleolus")).setDEF(new SFString("hanim_r_medial_malleolus")).setTranslation(new float[] {-0.0591f ,0.076f ,-0.0928f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 52 r_medial_malleolus")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString113().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f ))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_tibiale")).setDEF(new SFString("hanim_r_tibiale"))
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 51 r_tibiale")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString114().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f )))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setCenter(new float[] {-0.0801f ,0.0712f ,-0.0766f })
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus"))
                      .addChild(new Transform().setScale(new float[] {0.15f ,0.15f ,0.15f }).setTranslation(new float[] {-0.05f ,0.06f ,-0.025f }).setRotation(new float[] {1f ,0f ,0f ,-1.57f })
                        .addComments(new CommentsBlock("Transform right foot"))
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform right foot"))
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                          .addComments(new CommentsBlock("from r_talocrural to r_talocalcaneonavicular vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimSite("hanim_r_talus").setName(new SFString("r_calcaneus_posterior")).setDEF(new SFString("hanim_r_calcaneus_posterior")).setTranslation(new float[] {-0.0692f ,0.0297f ,-0.1221f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 62 r_calcaneus_posterior")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString117().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_r_talus").setName(new SFString("r_sphyrion")).setDEF(new SFString("hanim_r_sphyrion")).setTranslation(new float[] {-0.0603f ,0.061f ,-0.1002f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 54 r_sphyrion")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString118().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32119().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))
                          .addComments(new CommentsBlock("from r_talocrural to r_calcaneocuboid vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_talocalcaneonavicular")).setDEF(new SFString("hanim_r_talocalcaneonavicular")).setCenter(new float[] {-0.0781f ,0.0283f ,-0.097f })
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular"))
                        .addChild(new Transform().setTranslation(new float[] {-0.0781f ,0.0283f ,-0.097f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32123().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f124().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_1")).setDEF(new SFString("hanim_r_cuneonavicular_1")).setCenter(new float[] {-0.0672f ,0.0235f ,-0.0835f })
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0672f ,0.0235f ,-0.0835f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName(new SFString("r_tarsometatarsal_1")).setDEF(new SFString("hanim_r_tarsometatarsal_1")).setCenter(new float[] {-0.0644f ,0.0147f ,-0.0577f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1"))
                            .addChild(new Transform().setTranslation(new float[] {-0.0644f ,0.0147f ,-0.0577f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsophalangeal_1")).setDEF(new SFString("hanim_r_metatarsophalangeal_1")).setCenter(new float[] {-0.0619f ,0.0059f ,-0.0083f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0619f ,0.0059f ,-0.0083f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("r_metatarsal_phalanx_1")).setDEF(new SFString("hanim_r_metatarsal_phalanx_1"))
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 59 r_metatarsal_phalanx_1")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString133().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_r_tarsal_interphalangeal_1"))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_2")).setDEF(new SFString("hanim_r_cuneonavicular_2")).setCenter(new float[] {-0.0812f ,0.025f ,-0.0805f })
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0812f ,0.025f ,-0.0805f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32134().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f135().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("hanim_r_tarsometatarsal_2")).setCenter(new float[] {-0.08f ,0.0175f ,-0.0608f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2"))
                            .addChild(new Transform().setTranslation(new float[] {-0.08f ,0.0175f ,-0.0608f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32136().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("hanim_r_metatarsophalangeal_2")).setCenter(new float[] {-0.0823f ,0.0064f ,-0.004f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0823f ,0.0064f ,-0.004f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32138().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f139().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {-0.0841f ,0.0041f ,0.0121f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0041f ,0.0121f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32140().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f141().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-0.0841f ,0.0013f ,0.0216f }))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_3")).setDEF(new SFString("hanim_r_cuneonavicular_3")).setCenter(new float[] {-0.0928f ,0.0248f ,-0.0821f })
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0928f ,0.0248f ,-0.0821f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32142().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName(new SFString("r_tarsometatarsal_3")).setDEF(new SFString("hanim_r_tarsometatarsal_3")).setCenter(new float[] {-0.0944f ,0.0175f ,-0.0625f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3"))
                            .addChild(new Transform().setTranslation(new float[] {-0.0944f ,0.0175f ,-0.0625f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32144().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f145().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsophalangeal_3")).setDEF(new SFString("hanim_r_metatarsophalangeal_3")).setCenter(new float[] {-0.0963f ,0.0065f ,-0.0065f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0963f ,0.0065f ,-0.0065f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32146().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f147().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {-0.0987f ,0.0034f ,0.0086f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0987f ,0.0034f ,0.0086f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32148().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_3")).setCenter(new float[] {-0.1002f ,0.0013f ,0.0178f })))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_calcaneocuboid")).setDEF(new SFString("hanim_r_calcaneocuboid")).setCenter(new float[] {-0.0889f ,0.0494f ,-0.1278f })
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus"))
                        .addChild(new Transform().setTranslation(new float[] {-0.0889f ,0.0494f ,-0.1278f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32150().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f151().getArray()))
                            .addComments(new CommentsBlock("from r_calcaneocuboid to r_transversetarsal vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName(new SFString("r_transversetarsal")).setDEF(new SFString("hanim_r_transversetarsal")).setCenter(new float[] {-0.1105f ,0.0267f ,-0.0998f })
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid"))
                          .addChild(new Transform().setTranslation(new float[] {-0.1105f ,0.0267f ,-0.0998f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32152().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f153().getArray()))
                              .addComments(new CommentsBlock("from r_transversetarsal to r_tarsometatarsal_4 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32154().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray()))
                              .addComments(new CommentsBlock("from r_transversetarsal to r_tarsometatarsal_5 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_4")).setDEF(new SFString("hanim_r_tarsometatarsal_4")).setCenter(new float[] {-0.1063f ,0.016f ,-0.0634f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1063f ,0.016f ,-0.0634f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32156().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f157().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsophalangeal_4")).setDEF(new SFString("hanim_r_metatarsophalangeal_4")).setCenter(new float[] {-0.1097f ,0.0058f ,-0.0107f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4"))
                              .addChild(new Transform().setTranslation(new float[] {-0.1097f ,0.0058f ,-0.0107f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32158().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f159().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {-0.114f ,0.0037f ,0.0044f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4"))
                                .addChild(new Transform().setTranslation(new float[] {-0.114f ,0.0037f ,0.0044f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32160().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_4")).setCenter(new float[] {-0.1155f ,0.0008f ,0.0118f })))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_5")).setDEF(new SFString("hanim_r_tarsometatarsal_5")).setCenter(new float[] {-0.1206f ,0.0124f ,-0.0671f })
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1206f ,0.0124f ,-0.0671f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32162().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f163().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsophalangeal_5")).setDEF(new SFString("hanim_r_metatarsophalangeal_5")).setCenter(new float[] {-0.1239f ,0.0051f ,-0.0153f })
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5"))
                              .addChild(new Transform().setTranslation(new float[] {-0.1239f ,0.0051f ,-0.0153f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32164().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f165().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_5").setName(new SFString("r_metatarsal_phalanx_5")).setDEF(new SFString("hanim_r_metatarsal_phalanx_5"))
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 60 r_metatarsal_phalanx_5")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString166().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {-0.1262f ,0.0023f ,-0.0077f })
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5"))
                                .addChild(new Transform().setTranslation(new float[] {-0.1262f ,0.0023f ,-0.0077f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_5")).setCenter(new float[] {-0.1271f ,0f ,0f })))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("vl5")).setDEF(new SFString("hanim_vl5")).setCenter(new float[] {0.0028f ,1.0568f ,-0.0776f })
              .addChild(new HAnimSegment("hanim_vl5").setName(new SFString("l5")).setDEF(new SFString("hanim_l5"))
                .addChild(new Transform().setTranslation(new float[] {0.0028f ,1.0568f ,-0.0776f })
                  .addChild(new Transform()
                    .addComments(new CommentsBlock("Empty Transform"))
                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32169().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))
                    .addComments(new CommentsBlock("from vl5 to vl4 vertices 2"))
                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("navel")).setDEF(new SFString("hanim_navel")).setTranslation(new float[] {0.0069f ,1.0966f ,0.1017f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 84 navel")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString171().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("waist_preferred_anterior")).setDEF(new SFString("hanim_waist_preferred_anterior"))
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 26 waist_preferred_anterior")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString172().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                .addChild(new HAnimSite("hanim_l5").setName(new SFString("waist_preferred_posterior")).setDEF(new SFString("hanim_waist_preferred_posterior")).setTranslation(new float[] {0.29f ,1.0915f ,-0.1091f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 27 waist_preferred_posterior")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString173().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f )))))))
              .addChild(new HAnimJoint("hanim_vl5").setName(new SFString("vl4")).setDEF(new SFString("hanim_vl4")).setCenter(new float[] {0.0035f ,1.0925f ,-0.0787f })
                .addChild(new HAnimSegment("hanim_vl4").setName(new SFString("l4")).setDEF(new SFString("hanim_l4"))
                  .addChild(new Transform().setTranslation(new float[] {0.0035f ,1.0925f ,-0.0787f })
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32174().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f175().getArray()))
                      .addComments(new CommentsBlock("from vl4 to vl3 vertices 2"))
                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                .addChild(new HAnimJoint("hanim_vl4").setName(new SFString("vl3")).setDEF(new SFString("hanim_vl3")).setCenter(new float[] {0.0041f ,1.1276f ,-0.0796f })
                  .addChild(new HAnimSegment("hanim_vl3").setName(new SFString("l3")).setDEF(new SFString("hanim_l3"))
                    .addChild(new Transform().setTranslation(new float[] {0.0041f ,1.1276f ,-0.0796f })
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32176().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f177().getArray()))
                        .addComments(new CommentsBlock("from vl3 to vl2 vertices 2"))
                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                  .addChild(new HAnimJoint("hanim_vl3").setName(new SFString("vl2")).setDEF(new SFString("hanim_vl2")).setCenter(new float[] {0.0045f ,1.1546f ,-0.08f })
                    .addChild(new HAnimSegment("hanim_vl2").setName(new SFString("l2")).setDEF(new SFString("hanim_l2"))
                      .addChild(new Transform().setTranslation(new float[] {0.0045f ,1.1546f ,-0.08f })
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform"))
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32178().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f179().getArray()))
                          .addComments(new CommentsBlock("from vl2 to vl1 vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimSite("hanim_l2").setName(new SFString("l_rib10")).setDEF(new SFString("hanim_l_rib10")).setTranslation(new float[] {0.0871f ,1.1925f ,0.0992f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 28 l_rib10")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString180().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_l2").setName(new SFString("r_rib10")).setDEF(new SFString("hanim_r_rib10")).setTranslation(new float[] {-0.0711f ,1.1941f ,0.1016f })
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 30 r_rib10")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString181().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                      .addChild(new HAnimSite("hanim_l2").setName(new SFString("spine_2_middle_back")).setDEF(new SFString("hanim_spine_2_middle_back"))
                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite spine_2_middle_back")))
                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString182().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f )))))))
                    .addChild(new HAnimJoint("hanim_vl2").setName(new SFString("vl1")).setDEF(new SFString("hanim_vl1")).setCenter(new float[] {0.0048f ,1.1912f ,-0.0805f })
                      .addChild(new HAnimSegment("hanim_vl1").setName(new SFString("l1")).setDEF(new SFString("hanim_l1"))
                        .addChild(new Transform().setTranslation(new float[] {0.0048f ,1.1912f ,-0.0805f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32183().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray()))
                            .addComments(new CommentsBlock("from vl1 to vt12 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_vl1").setName(new SFString("vt12")).setDEF(new SFString("hanim_vt12")).setCenter(new float[] {0.0051f ,1.2278f ,-0.0808f })
                        .addChild(new HAnimSegment("hanim_vt12").setName(new SFString("t12")).setDEF(new SFString("hanim_t12"))
                          .addChild(new Transform().setTranslation(new float[] {0.0051f ,1.2278f ,-0.0808f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))
                              .addComments(new CommentsBlock("from vt12 to vt11 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_vt12").setName(new SFString("vt11")).setDEF(new SFString("hanim_vt11")).setCenter(new float[] {0.0053f ,1.2679f ,-0.081f })
                          .addChild(new HAnimSegment("hanim_vt11").setName(new SFString("t11")).setDEF(new SFString("hanim_t11"))
                            .addChild(new Transform().setTranslation(new float[] {0.0053f ,1.2679f ,-0.081f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32187().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))
                                .addComments(new CommentsBlock("from vt11 to vt10 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_vt11").setName(new SFString("vt10")).setDEF(new SFString("hanim_vt10")).setCenter(new float[] {0.0056f ,1.2848f ,-0.0822f })
                            .addChild(new HAnimSegment("hanim_vt10").setName(new SFString("t10")).setDEF(new SFString("hanim_t10"))
                              .addChild(new Transform().setTranslation(new float[] {0.0056f ,1.2848f ,-0.0822f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                                  .addComments(new CommentsBlock("from vt10 to vt9 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_t10").setName(new SFString("substernale")).setDEF(new SFString("hanim_substernale")).setTranslation(new float[] {0.0085f ,1.2995f ,0.1147f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 13 substernale")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString191().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                            .addChild(new HAnimJoint("hanim_vt10").setName(new SFString("vt9")).setDEF(new SFString("hanim_vt9")).setCenter(new float[] {0.0057f ,1.3126f ,-0.0838f })
                              .addChild(new HAnimSegment("hanim_vt9").setName(new SFString("t9")).setDEF(new SFString("hanim_t9"))
                                .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3126f ,-0.0838f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32192().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f193().getArray()))
                                    .addComments(new CommentsBlock("from vt9 to vt8 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("l_thelion")).setDEF(new SFString("hanim_l_thelion")).setTranslation(new float[] {0.0918f ,1.3382f ,0.1192f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 29 l_thelion")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                  .addChild(new Billboard()
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString194().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                .addChild(new HAnimSite("hanim_t9").setName(new SFString("r_thelion")).setDEF(new SFString("hanim_r_thelion")).setTranslation(new float[] {-0.0736f ,1.3385f ,0.1217f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 31 r_thelion")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                  .addChild(new Billboard()
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString195().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f )))))))
                              .addChild(new HAnimJoint("hanim_vt9").setName(new SFString("vt8")).setDEF(new SFString("hanim_vt8")).setCenter(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                .addChild(new HAnimSegment("hanim_vt8").setName(new SFString("t8")).setDEF(new SFString("hanim_t8"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                    .addChild(new Transform()
                                      .addComments(new CommentsBlock("Empty Transform"))
                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32196().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))
                                      .addComments(new CommentsBlock("from vt8 to vt7 vertices 2"))
                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                .addChild(new HAnimJoint("hanim_vt8").setName(new SFString("vt7")).setDEF(new SFString("hanim_vt7")).setCenter(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                  .addChild(new HAnimSegment("hanim_vt7").setName(new SFString("t7")).setDEF(new SFString("hanim_t7"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                      .addChild(new Transform()
                                        .addComments(new CommentsBlock("Empty Transform"))
                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32198().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f199().getArray()))
                                        .addComments(new CommentsBlock("from vt7 to vt6 vertices 2"))
                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                  .addChild(new HAnimJoint("hanim_vt7").setName(new SFString("vt6")).setDEF(new SFString("hanim_vt6")).setCenter(new float[] {0.0059f ,1.3866f ,-0.08f })
                                    .addChild(new HAnimSegment("hanim_vt6").setName(new SFString("t6")).setDEF(new SFString("hanim_t6"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f ,1.3866f ,-0.08f })
                                        .addChild(new Transform()
                                          .addComments(new CommentsBlock("Empty Transform"))
                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32200().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f201().getArray()))
                                          .addComments(new CommentsBlock("from vt6 to vt5 vertices 2"))
                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimSite("hanim_t6").setName(new SFString("l_chest_midsagittal_plane")).setDEF(new SFString("hanim_l_chest_midsagittal_plane"))
                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 94 l_chest_midsagittal_plane")))
                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString202().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                      .addChild(new HAnimSite("hanim_t6").setName(new SFString("mesosternale")).setDEF(new SFString("hanim_mesosternale"))
                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 88 mesosternale")))
                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString203().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                      .addChild(new HAnimSite("hanim_t6").setName(new SFString("r_chest_midsagittal_plane")).setDEF(new SFString("hanim_r_chest_midsagittal_plane"))
                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 95 r_chest_midsagittal_plane")))
                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString204().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                      .addChild(new HAnimSite("hanim_t6").setName(new SFString("rear_center_midsagittal_plane")).setDEF(new SFString("hanim_rear_center_midsagittal_plane"))
                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 92 rear_center_midsagittal_plane")))
                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString205().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                    .addChild(new HAnimJoint("hanim_vt6").setName(new SFString("vt5")).setDEF(new SFString("hanim_vt5")).setCenter(new float[] {0.006f ,1.4102f ,-0.0745f })
                                      .addChild(new HAnimSegment("hanim_vt5").setName(new SFString("t5")).setDEF(new SFString("hanim_t5"))
                                        .addChild(new Transform().setTranslation(new float[] {0.006f ,1.4102f ,-0.0745f })
                                          .addChild(new Transform()
                                            .addComments(new CommentsBlock("Empty Transform"))
                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32206().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f207().getArray()))
                                            .addComments(new CommentsBlock("from vt5 to vt4 vertices 2"))
                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimSite("hanim_t5").setName(new SFString("spine_1_middle_back")).setDEF(new SFString("hanim_spine_1_middle_back"))
                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 24 spine_1_middle_back")))
                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                          .addChild(new Billboard()
                                            .addChild(new Shape()
                                              .setGeometry(new Text().setString(new MFString208().getArray())
                                                .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName(new SFString("vt4")).setDEF(new SFString("hanim_vt4")).setCenter(new float[] {0.0061f ,1.432f ,-0.0675f })
                                        .addChild(new HAnimSegment("hanim_vt4").setName(new SFString("t4")).setDEF(new SFString("hanim_t4"))
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f ,1.432f ,-0.0675f })
                                            .addChild(new Transform()
                                              .addComments(new CommentsBlock("Empty Transform"))
                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32209().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))
                                              .addComments(new CommentsBlock("from vt4 to vt3 vertices 2"))
                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName(new SFString("vt3")).setDEF(new SFString("hanim_vt3")).setCenter(new float[] {0.0062f ,1.4583f ,-0.057f })
                                          .addChild(new HAnimSegment("hanim_vt3").setName(new SFString("t3")).setDEF(new SFString("hanim_t3"))
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f ,1.4583f ,-0.057f })
                                              .addChild(new Transform()
                                                .addComments(new CommentsBlock("Empty Transform"))
                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))
                                                .addComments(new CommentsBlock("from vt3 to vt2 vertices 2"))
                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName(new SFString("vt2")).setDEF(new SFString("hanim_vt2")).setCenter(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                            .addChild(new HAnimSegment("hanim_vt2").setName(new SFString("t2")).setDEF(new SFString("hanim_t2"))
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                                .addChild(new Transform()
                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))
                                                  .addComments(new CommentsBlock("from vt2 to vt1 vertices 2"))
                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                            .addChild(new HAnimJoint("hanim_vt2").setName(new SFString("vt1")).setDEF(new SFString("hanim_vt1")).setCenter(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                              .addChild(new HAnimSegment("hanim_vt1").setName(new SFString("t1")).setDEF(new SFString("hanim_t1"))
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                                  .addChild(new Transform()
                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to vc7 vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("cervicale")).setDEF(new SFString("hanim_cervicale")).setTranslation(new float[] {0.0064f ,1.52f ,-0.0815f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 10 cervicale")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                  .addChild(new Billboard()
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString217().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("suprasternale")).setDEF(new SFString("hanim_suprasternale")).setTranslation(new float[] {0.0084f ,1.4714f ,0.0551f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 12 suprasternale")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                  .addChild(new Billboard()
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString218().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32219().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to l_sternoclavicular vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to r_sternoclavicular vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("vc7")).setDEF(new SFString("hanim_vc7")).setCenter(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                .addChild(new HAnimSegment("hanim_vc7").setName(new SFString("c7")).setDEF(new SFString("hanim_c7"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32223().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))
                                                      .addComments(new CommentsBlock("from vc7 to vc6 vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimSite("hanim_c7").setName(new SFString("l_neck_base")).setDEF(new SFString("hanim_l_neck_base")).setTranslation(new float[] {0.0646f ,1.5141f ,-0.038f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 82 l_neck_base")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString225().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_c7").setName(new SFString("r_neck_base")).setDEF(new SFString("hanim_r_neck_base")).setTranslation(new float[] {-0.0419f ,1.5149f ,-0.022f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 83 r_neck_base")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString226().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("vc6")).setDEF(new SFString("hanim_vc6")).setCenter(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                  .addChild(new HAnimSegment("hanim_vc6").setName(new SFString("c6")).setDEF(new SFString("hanim_c6"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32227().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))
                                                        .addComments(new CommentsBlock("from vc6 to vc5 vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName(new SFString("vc5")).setDEF(new SFString("hanim_vc5")).setCenter(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                    .addChild(new HAnimSegment("hanim_vc5").setName(new SFString("c5")).setDEF(new SFString("hanim_c5"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32229().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))
                                                          .addComments(new CommentsBlock("from vc5 to vc4 vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName(new SFString("vc4")).setDEF(new SFString("hanim_vc4")).setCenter(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                      .addChild(new HAnimSegment("hanim_vc4").setName(new SFString("c4")).setDEF(new SFString("hanim_c4"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))
                                                            .addComments(new CommentsBlock("from vc4 to vc3 vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName(new SFString("vc3")).setDEF(new SFString("hanim_vc3")).setCenter(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                        .addChild(new HAnimSegment("hanim_vc3").setName(new SFString("c3")).setDEF(new SFString("hanim_c3"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                            .addChild(new Transform()
                                                              .addComments(new CommentsBlock("Empty Transform"))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32233().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))
                                                              .addComments(new CommentsBlock("from vc3 to vc2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName(new SFString("vc2")).setDEF(new SFString("hanim_vc2")).setCenter(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                          .addChild(new HAnimSegment("hanim_vc2").setName(new SFString("c2")).setDEF(new SFString("hanim_c2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))
                                                                .addComments(new CommentsBlock("from vc2 to vc1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_c2").setName(new SFString("adams_apple")).setDEF(new SFString("hanim_adams_apple"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 11 adams_apple")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                              .addChild(new Billboard()
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString237().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName(new SFString("vc1")).setDEF(new SFString("hanim_vc1")).setCenter(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                            .addChild(new HAnimSegment("hanim_vc1").setName(new SFString("c1")).setDEF(new SFString("hanim_c1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32238().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))
                                                                  .addComments(new CommentsBlock("from vc1 to skullbase vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName(new SFString("skullbase")).setDEF(new SFString("hanim_skullbase")).setCenter(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                              .addChild(new HAnimSegment("hanim_skullbase").setName(new SFString("skull")).setDEF(new SFString("hanim_skull"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32240().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f241().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyelid_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("glabella")).setDEF(new SFString("hanim_glabella"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 1 glabella")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString242().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_ectocanthus")).setDEF(new SFString("hanim_l_ectocanthus"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 85 l_ectocanthus")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString243().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_infraorbitale")).setDEF(new SFString("hanim_l_infraorbitale")).setTranslation(new float[] {0.0341f ,1.6171f ,0.0752f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 3 l_infraorbitale")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString244().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_tragion")).setDEF(new SFString("hanim_l_tragion")).setTranslation(new float[] {0.0739f ,1.6348f ,0.0282f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 4 l_tragion")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString245().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("nuchale")).setDEF(new SFString("hanim_nuchale")).setTranslation(new float[] {0.0039f ,1.5972f ,-0.0796f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 81 nuchale")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString246().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("opisthocranion")).setDEF(new SFString("hanim_opisthocranion"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 89 opisthocranion")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString247().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_ectocanthus")).setDEF(new SFString("hanim_r_ectocanthus"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 86 r_ectocanthus")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString248().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_infraorbitale")).setDEF(new SFString("hanim_r_infraorbitale")).setTranslation(new float[] {-0.0237f ,1.6171f ,0.0752f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 6 r_infraorbitale")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString249().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_tragion")).setDEF(new SFString("hanim_r_tragion")).setTranslation(new float[] {-0.0646f ,1.6347f ,0.0302f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 7 r_tragion")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString250().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("sellion")).setDEF(new SFString("hanim_sellion")).setTranslation(new float[] {0.0058f ,1.6316f ,0.0852f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 2 sellion")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString251().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("skull_vertex")).setDEF(new SFString("hanim_skull_vertex")).setTranslation(new float[] {0.005f ,1.7504f ,0.0055f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 0 skull_vertex")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString252().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyelid_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32255().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f256().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyeball_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyeball_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32259().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyebrow_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyebrow_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to temporomandibular vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyelid_joint")).setDEF(new SFString("hanim_l_eyelid_joint")).setCenter(new float[] {0.0503f ,1.4157f ,-0.0689f }))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyelid_joint")).setDEF(new SFString("hanim_r_eyelid_joint")).setCenter(new float[] {-0.0507f ,1.4157f ,-0.0689f }))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyeball_joint")).setDEF(new SFString("hanim_l_eyeball_joint")).setCenter(new float[] {0.0479f ,1.3963f ,-0.0188f }))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyeball_joint")).setDEF(new SFString("hanim_r_eyeball_joint")).setCenter(new float[] {-0.0483f ,1.3963f ,-0.0188f }))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyebrow_joint")).setDEF(new SFString("hanim_l_eyebrow_joint")).setCenter(new float[] {0.0216f ,1.4053f ,0.0051f }))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyebrow_joint")).setDEF(new SFString("hanim_r_eyebrow_joint")).setCenter(new float[] {-0.0219f ,1.4053f ,0.0051f }))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("temporomandibular")).setDEF(new SFString("hanim_temporomandibular")).setCenter(new float[] {-0.0002f ,1.3043f ,-0.0865f }))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("l_sternoclavicular")).setDEF(new SFString("hanim_l_sternoclavicular")).setCenter(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName(new SFString("l_clavicle")).setDEF(new SFString("hanim_l_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))
                                                      .addComments(new CommentsBlock("from l_sternoclavicular to l_acromioclavicular vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName(new SFString("l_acromion")).setDEF(new SFString("hanim_l_acromion")).setTranslation(new float[] {0.2032f ,1.476f ,-0.049f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 15 l_acromion")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString267().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName(new SFString("l_axilla_distal")).setDEF(new SFString("hanim_l_axilla_distal")).setTranslation(new float[] {0.1706f ,1.4072f ,-0.0875f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 17 l_axilla_distal")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString268().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName(new SFString("l_axilla_posterior_folds")).setDEF(new SFString("hanim_l_axilla_posterior_folds"))
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 18 l_axilla_posterior_folds")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString269().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName(new SFString("l_axilla_proximal")).setDEF(new SFString("hanim_l_axilla_proximal")).setTranslation(new float[] {0.1777f ,1.4065f ,-0.0075f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 16 l_axilla_proximal")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString270().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName(new SFString("l_clavicale")).setDEF(new SFString("hanim_l_clavicale")).setTranslation(new float[] {0.0271f ,1.4943f ,0.0394f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 14 l_clavicale")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString271().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName(new SFString("l_acromioclavicular")).setDEF(new SFString("hanim_l_acromioclavicular")).setCenter(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName(new SFString("l_scapula")).setDEF(new SFString("hanim_l_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32272().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f273().getArray()))
                                                        .addComments(new CommentsBlock("from l_acromioclavicular to l_shoulder vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName(new SFString("l_shoulder")).setDEF(new SFString("hanim_l_shoulder")).setCenter(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32274().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray()))
                                                          .addComments(new CommentsBlock("from l_shoulder to l_elbow vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_bideltoid")).setDEF(new SFString("hanim_l_bideltoid"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 96 l_bideltoid")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString276().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_humeral_lateral_epicondyles")).setDEF(new SFString("hanim_l_humeral_lateral_epicondyles")).setTranslation(new float[] {0.228f ,1.1482f ,-0.11f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 63 l_humeral_lateral_epicondyles")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString277().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("hanim_l_elbow")).setCenter(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32278().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f279().getArray()))
                                                            .addComments(new CommentsBlock("from l_elbow to l_radiocarpal vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_humeral_medial_epicondyles")).setDEF(new SFString("hanim_l_humeral_medial_epicondyles")).setTranslation(new float[] {0.1735f ,1.1272f ,-0.1113f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 64 l_humeral_medial_epicondyles")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString280().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_olecranon")).setDEF(new SFString("hanim_l_olecranon")).setTranslation(new float[] {-0.1962f ,1.1375f ,-0.1123f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 65 l_olecranon")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString281().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_radial_styloid")).setDEF(new SFString("hanim_l_radial_styloid")).setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 71 l_radial_styloid")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString282().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_radiale")).setDEF(new SFString("hanim_l_radiale")).setTranslation(new float[] {0.2182f ,1.1212f ,-0.1167f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 69 l_radiale")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString283().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("hanim_l_radiocarpal")).setCenter(new float[] {0.1984f ,0.8663f ,-0.0583f })
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal"))
                                                          .addChild(new Transform().setScale(new float[] {0.2f ,0.2f ,0.2f }).setTranslation(new float[] {0.2f ,0.85f ,-0.05f }).setRotation(new float[] {0f ,0f ,1f ,-3.14f })
                                                            .addComments(new CommentsBlock("Transform left hand"))
                                                            .addChild(new Transform().setRotation(new float[] {0f ,1f ,0f ,-1.57f })
                                                              .addComments(new CommentsBlock("Transform left hand"))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32284().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f285().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_1 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setName(new SFString("l_ulnar_styloid")).setDEF(new SFString("hanim_l_ulnar_styloid")).setTranslation(new float[] {-0.2142f ,0.8529f ,-0.0648f })
                                                            .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 70 l_ulnar_styloid")))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                            .addChild(new Billboard()
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString286().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_3 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_4_5 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_1")).setDEF(new SFString("hanim_l_midcarpal_1")).setCenter(new float[] {0.1811f ,0.6975f ,-0.0826f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName(new SFString("l_trapezium")).setDEF(new SFString("hanim_l_trapezium"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1811f ,0.6975f ,-0.0826f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName(new SFString("l_carpometacarpal_1")).setDEF(new SFString("hanim_l_carpometacarpal_1")).setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("hanim_l_metacarpal_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32295().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpophalangeal_1")).setDEF(new SFString("hanim_l_metacarpophalangeal_1")).setCenter(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_interphalangeal_1")).setDEF(new SFString("hanim_l_carpal_interphalangeal_1")).setCenter(new float[] {0.1955f ,0.8159f ,0.0464f })))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_2")).setDEF(new SFString("hanim_l_midcarpal_2")).setCenter(new float[] {0.1811f ,0.6984f ,-0.0935f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName(new SFString("l_trapezoid")).setDEF(new SFString("hanim_l_trapezoid"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1811f ,0.6984f ,-0.0935f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32299().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName(new SFString("l_carpometacarpal_2")).setDEF(new SFString("hanim_l_carpometacarpal_2")).setCenter(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("hanim_l_metacarpal_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_2").setName(new SFString("l_metacarpal_phalanx_2")).setDEF(new SFString("hanim_l_metacarpal_phalanx_2")).setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 75 l_metacarpal_phalanx_2")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString303().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpophalangeal_2")).setDEF(new SFString("hanim_l_metacarpophalangeal_2")).setCenter(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32304().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_2")).setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32306().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f307().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_2")).setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f }))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_3")).setDEF(new SFString("hanim_l_midcarpal_3")).setCenter(new float[] {0.1809f ,0.7f ,-0.1067f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName(new SFString("l_capitate")).setDEF(new SFString("hanim_l_capitate"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1809f ,0.7f ,-0.1067f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32308().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f309().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName(new SFString("l_carpometacarpal_3")).setDEF(new SFString("hanim_l_carpometacarpal_3")).setCenter(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("hanim_l_metacarpal_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32310().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_3").setName(new SFString("l_metacarpal_phalanx_3")).setDEF(new SFString("hanim_l_metacarpal_phalanx_3"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 76 l_metacarpal_phalanx_3")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString312().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpophalangeal_3")).setDEF(new SFString("hanim_l_metacarpophalangeal_3")).setCenter(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_3")).setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32315().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f316().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_3")).setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f }))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_4_5")).setDEF(new SFString("hanim_l_midcarpal_4_5")).setCenter(new float[] {0.1809f ,0.6973f ,-0.1276f })
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName(new SFString("l_hamate")).setDEF(new SFString("hanim_l_hamate"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1809f ,0.6973f ,-0.1276f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32317().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32319().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName(new SFString("l_carpometacarpal_4")).setDEF(new SFString("hanim_l_carpometacarpal_4")).setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("hanim_l_metacarpal_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32321().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpophalangeal_4")).setDEF(new SFString("hanim_l_metacarpophalangeal_4")).setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32323().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f324().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32325().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f })))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName(new SFString("l_carpometacarpal_5")).setDEF(new SFString("hanim_l_carpometacarpal_5")).setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("hanim_l_metacarpal_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32327().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f328().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_5").setName(new SFString("l_metacarpal_phalanx_5")).setDEF(new SFString("hanim_l_metacarpal_phalanx_5")).setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 77 l_metacarpal_phalanx_5")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString329().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpophalangeal_5")).setDEF(new SFString("hanim_l_metacarpophalangeal_5")).setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32330().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f331().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32332().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f333().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f })))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("r_sternoclavicular")).setDEF(new SFString("hanim_r_sternoclavicular")).setCenter(new float[] {-0.0694f ,1.46f ,-0.033f })
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName(new SFString("r_clavicle")).setDEF(new SFString("hanim_r_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0694f ,1.46f ,-0.033f })
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32334().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))
                                                      .addComments(new CommentsBlock("from r_sternoclavicular to r_acromioclavicular vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName(new SFString("r_acromion")).setDEF(new SFString("hanim_r_acromion")).setTranslation(new float[] {-0.1905f ,1.4791f ,-0.0431f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 20 r_acromion")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString336().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName(new SFString("r_axilla_distal")).setDEF(new SFString("hanim_r_axilla_distal")).setTranslation(new float[] {-0.1603f ,1.4098f ,-0.0826f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 22 r_axilla_distal")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString337().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName(new SFString("r_axilla_posterior_folds")).setDEF(new SFString("hanim_r_axilla_posterior_folds"))
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 23 r_axilla_posterior_folds")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString338().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName(new SFString("r_axilla_proximal")).setDEF(new SFString("hanim_r_axilla_proximal")).setTranslation(new float[] {-0.1626f ,1.4072f ,-0.0031f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 21 r_axilla_proximal")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString339().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName(new SFString("r_clavicale")).setDEF(new SFString("hanim_r_clavicale")).setTranslation(new float[] {-0.0115f ,1.4943f ,0.04f })
                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 19 r_clavicale")))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString340().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName(new SFString("r_acromioclavicular")).setDEF(new SFString("hanim_r_acromioclavicular")).setCenter(new float[] {-0.0836f ,1.4281f ,-0.0401f })
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName(new SFString("r_scapula")).setDEF(new SFString("hanim_r_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0836f ,1.4281f ,-0.0401f })
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32341().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray()))
                                                        .addComments(new CommentsBlock("from r_acromioclavicular to r_shoulder vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName(new SFString("r_shoulder")).setDEF(new SFString("hanim_r_shoulder")).setCenter(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32343().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray()))
                                                          .addComments(new CommentsBlock("from r_shoulder to r_elbow vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_bideltoid")).setDEF(new SFString("hanim_r_bideltoid"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 97 r_bideltoid")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString345().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_humeral_lateral_epicondyles")).setDEF(new SFString("hanim_r_humeral_lateral_epicondyles")).setTranslation(new float[] {-0.2224f ,1.1517f ,-0.1033f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 66 r_humeral_lateral_epicondyles")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString346().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("hanim_r_elbow")).setCenter(new float[] {-0.1949f ,1.1388f ,-0.062f })
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1949f ,1.1388f ,-0.062f })
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32347().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))
                                                            .addComments(new CommentsBlock("from r_elbow to r_radiocarpal vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_humeral_medial_epicondyles")).setDEF(new SFString("hanim_r_humeral_medial_epicondyles")).setTranslation(new float[] {-0.168f ,1.1298f ,-0.1062f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 67 r_humeral_medial_epicondyles")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString349().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_olecranon")).setDEF(new SFString("hanim_r_olecranon")).setTranslation(new float[] {-0.1907f ,1.1405f ,-0.1065f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 68 r_olecranon")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString350().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_radial_styloid")).setDEF(new SFString("hanim_r_radial_styloid")).setTranslation(new float[] {-0.1884f ,0.8676f ,-0.036f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 74 r_radial_styloid")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString351().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_radiale")).setDEF(new SFString("hanim_r_radiale")).setTranslation(new float[] {-0.213f ,1.1305f ,-0.1091f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 72 r_radiale")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString352().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("hanim_r_radiocarpal")).setCenter(new float[] {-0.1959f ,0.8694f ,-0.0521f })
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal"))
                                                          .addChild(new Transform().setScale(new float[] {0.2f ,0.2f ,0.2f }).setTranslation(new float[] {-0.2f ,0.85f ,-0.05f }).setRotation(new float[] {0f ,0f ,1f ,-3.14f })
                                                            .addComments(new CommentsBlock("Transform right hand"))
                                                            .addChild(new Transform().setRotation(new float[] {0f ,1f ,0f ,1.57f })
                                                              .addComments(new CommentsBlock("Transform right hand"))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32353().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_1 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setName(new SFString("r_ulnar_styloid")).setDEF(new SFString("hanim_r_ulnar_styloid")).setTranslation(new float[] {-0.2117f ,0.8562f ,-0.0584f })
                                                            .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 73 r_ulnar_styloid")))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                            .addChild(new Billboard()
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString355().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035f ))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32356().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f357().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32358().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_3 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32360().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_4_5 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_1")).setDEF(new SFString("hanim_r_midcarpal_1")).setCenter(new float[] {-0.1811f ,0.6975f ,-0.0826f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1811f ,0.6975f ,-0.0826f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32362().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f363().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("hanim_r_carpometacarpal_1")).setCenter(new float[] {-0.1899f ,0.8502f ,-0.0473f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1899f ,0.8502f ,-0.0473f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32364().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("hanim_r_metacarpophalangeal_1")).setCenter(new float[] {-0.1874f ,0.8256f ,0.0306f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1874f ,0.8256f ,0.0306f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32366().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("hanim_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.1864f ,0.819f ,0.0506f })))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_2")).setDEF(new SFString("hanim_r_midcarpal_2")).setCenter(new float[] {-0.1811f ,0.6984f ,-0.0935f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1811f ,0.6984f ,-0.0935f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32368().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f369().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("hanim_r_carpometacarpal_2")).setCenter(new float[] {-0.1961f ,0.8055f ,-0.0218f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1961f ,0.8055f ,-0.0218f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32370().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_2").setName(new SFString("r_metacarpal_phalanx_2")).setDEF(new SFString("hanim_r_metacarpal_phalanx_2")).setTranslation(new float[] {-0.1977f ,0.8169f ,-0.0177f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 78 r_metacarpal_phalanx_2")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString372().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("hanim_r_metacarpophalangeal_2")).setCenter(new float[] {-0.1961f ,0.7846f ,-0.0218f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1961f ,0.7846f ,-0.0218f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32373().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f374().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.1954f ,0.7393f ,-0.0185f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1954f ,0.7393f ,-0.0185f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32375().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.1945f ,0.7169f ,-0.0173f }))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_3")).setDEF(new SFString("hanim_r_midcarpal_3")).setCenter(new float[] {-0.1809f ,0.7f ,-0.1067f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1809f ,0.7f ,-0.1067f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32377().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f378().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("hanim_r_carpometacarpal_3")).setCenter(new float[] {-0.1972f ,0.806f ,-0.0468f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1972f ,0.806f ,-0.0468f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32379().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_3").setName(new SFString("r_metacarpal_phalanx_3")).setDEF(new SFString("hanim_r_metacarpal_phalanx_3"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 79 r_metacarpal_phalanx_3")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString381().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("hanim_r_metacarpophalangeal_3")).setCenter(new float[] {-0.1972f ,0.7849f ,-0.0468f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1972f ,0.7849f ,-0.0468f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32382().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.195f ,0.7304f ,-0.0441f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.195f ,0.7304f ,-0.0441f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32384().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f385().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.1939f ,0.7042f ,-0.0432f }))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_4_5")).setDEF(new SFString("hanim_r_midcarpal_4_5")).setCenter(new float[] {-0.1809f ,0.6973f ,-0.1276f })
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1809f ,0.6973f ,-0.1276f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32386().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f387().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32388().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("hanim_r_carpometacarpal_4")).setCenter(new float[] {-0.1951f ,0.8049f ,-0.0732f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f ,0.8049f ,-0.0732f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32390().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f391().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("hanim_r_metacarpophalangeal_4")).setCenter(new float[] {-0.1951f ,0.7845f ,-0.0732f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1951f ,0.7845f ,-0.0732f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32392().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f393().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {-0.192f ,0.7318f ,-0.0716f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.192f ,0.7318f ,-0.0716f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32394().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {-0.1908f ,0.7077f ,-0.0706f })))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("hanim_r_carpometacarpal_5")).setCenter(new float[] {-0.1926f ,0.8096f ,-0.0975f })
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1926f ,0.8096f ,-0.0975f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32396().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f397().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_5").setName(new SFString("r_metacarpal_phalanx_5")).setDEF(new SFString("hanim_r_metacarpal_phalanx_5")).setTranslation(new float[] {-0.1929f ,0.789f ,-0.1064f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite 80 r_metacarpal_phalanx_5")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString398().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f )))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("hanim_r_metacarpophalangeal_5")).setCenter(new float[] {-0.1926f ,0.7896f ,-0.0975f })
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1926f ,0.7896f ,-0.0975f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32399().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f400().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {-0.1902f ,0.7483f ,-0.0963f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1902f ,0.7483f ,-0.0963f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32401().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {-0.1908f ,0.754f ,-0.096f })))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_humanoid_root")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_sacroiliac")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_hip")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_knee")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_talocrural")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_transversetarsal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_hip")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_knee")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_talocrural")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_transversetarsal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt12")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt11")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt10")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt9")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt8")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt7")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt6")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc7")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc6")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_skullbase")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_eyelid_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_eyelid_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_eyeball_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_eyeball_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_eyebrow_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_eyebrow_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_temporomandibular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_sternoclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_acromioclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_shoulder")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_elbow")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_sternoclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_acromioclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_shoulder")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_elbow")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_5")))));
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
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0.1f ,0f ,0f ,0f ,0.1f ,0f ,0f ,0f ,0.1f });
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0.6f ,0f ,0f ,0f ,1f });
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,0f ,1f ,1f ,0f ,0f });
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,0f ,0f ,0.05f ,0f ,0f });
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA8 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFVec3f15 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.77f ,0f ,0f ,1.665f ,0.09f ,-0.033f ,1.62f ,0.087f ,0.033f ,1.62f ,0.087f ,0f ,1.55f ,0.097f ,-0.077f ,1.64f ,-0.01f ,-0.0527f ,1.58f ,0.015f ,0.077f ,1.64f ,-0.01f ,0.0527f ,1.58f ,0.015f ,0f ,1.625f ,-0.0925f ,-0.03f ,1.46f ,0.035f ,0f ,1.44f ,0.03f ,0.03f ,1.46f ,0.035f ,-0.1135f ,1.318f ,0.095f ,0.1135f ,1.318f ,0.095f ,0f ,1.25f ,0.113f ,-0.087f ,1.19f ,0.09f ,-0.0935f ,1.03f ,0.075f ,0.087f ,1.19f ,0.09f ,0.0935f ,1.03f ,0.075f ,-0.1425f ,1.065f ,0.0033f ,-0.15f ,0.9f ,-0.01f ,0.1425f ,1.065f ,0.0033f ,0.15f ,0.9f ,-0.01f ,0f ,1.53f ,-0.084f ,0.0049f ,1.1908f ,-0.1113f ,-0.0773f ,1.019f ,-0.12f ,0.0773f ,1.019f ,-0.12f ,0.005f ,1.0915f ,-0.1091f ,-0.178f ,1.4825f ,-0.0625f ,-0.17f ,1.38f ,0.007f ,-0.1884f ,0.8676f ,-0.036f ,-0.16f ,1.38f ,-0.127f ,-0.2f ,1.1388f ,-0.08f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.23f ,1.133f ,-0.055f ,-0.1977f ,0.8169f ,-0.0177f ,-0.1941f ,0.6772f ,-0.0423f ,-0.2117f ,0.8562f ,-0.0584f ,-0.1929f ,0.789f ,-0.1064f ,0.175f ,1.4825f ,-0.06f ,0.17f ,1.38f ,0.007f ,0.1901f ,0.8645f ,-0.0415f ,0.16f ,1.38f ,-0.125f ,0.2f ,1.1388f ,-0.08f ,0.165f ,1.1388f ,-0.04f ,0.244f ,1.1388f ,-0.04f ,0.23f ,1.133f ,-0.055f ,0.2009f ,0.8139f ,-0.0237f ,0.2056f ,0.6743f ,-0.0482f ,0.2142f ,0.8529f ,-0.0648f ,0.1929f ,0.786f ,-0.1122f ,-0.1f ,0.4913f ,-0.03f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.165f ,0.01f ,0.12f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.09f ,0.056f ,0.0125f ,-0.115f ,0.02f ,0.122f ,-0.115f ,0.04f ,-0.055f ,-0.11f ,0.011f ,0.19f ,0.0993f ,0.4881f ,-0.0309f ,0.17f ,0.466f ,0f ,0.05f ,0.4867f ,0f ,0.165f ,0.01f ,0.12f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.09f ,0.056f ,0.0125f ,0.115f ,0.02f ,0.122f ,0.115f ,0.04f ,-0.055f ,0.11f ,0.011f ,0.19f ,0f ,0.875f ,0f ,-0.0646f ,1.5149f ,-0.038f ,0.0646f ,1.5149f ,-0.038f ,0f ,1.07225f ,0.09f ,-0.11f ,1.427f ,-0.1375f ,-0.235f ,1.42f ,-0.0625f ,0.11f ,1.427f ,-0.1375f ,0.235f ,1.42f ,-0.0625f ,0f ,1.41f ,-0.145f ,0f ,0.925f ,0.08f ,-0.087f ,1.19f ,-0.09f ,0.087f ,1.19f ,-0.09f ,0.172f ,1.32f ,-0.03f ,-0.172f ,1.32f ,-0.03f ,0.15f ,1.23f ,-0.015f ,-0.15f ,1.23f ,-0.015f ,0.079f ,0.92f ,-0.14f ,0.1f ,0.9f ,0.077f ,-0.079f ,0.92f ,-0.14f ,-0.1f ,0.9f ,0.075f ,0f ,0.87f ,0f ,0.171f ,0.65f ,0f ,0.02f ,0.65f ,0f ,0.1f ,0.65f ,-0.08f ,0.1f ,0.65f ,0.07f ,-0.171f ,0.65f ,0f ,-0.02f ,0.65f ,0f ,-0.1f ,0.65f ,-0.08f ,-0.1f ,0.65f ,0.07f ,0.25f ,1.27f ,-0.04f ,0.17f ,1.27f ,-0.04f ,0.2f ,1.27f ,-0.09f ,0.2f ,1.27f ,0.02f ,0.244f ,1.1388f ,-0.04f ,0.165f ,1.1388f ,-0.04f ,0.2f ,1.1388f ,-0.08f ,0.2f ,1.1388f ,-0.013f ,0.225f ,1f ,-0.01f ,0.225f ,1f ,-0.07f ,0.185f ,1f ,-0.01f ,0.185f ,1f ,-0.07f ,0.2f ,1.1388f ,-0.04f ,0.225f ,0.92f ,-0.04f ,0.175f ,0.92f ,-0.04f ,0.2f ,0.92f ,-0.065f ,0.2f ,0.92f ,-0.015f ,0.225f ,0.89f ,-0.04f ,0.175f ,0.89f ,-0.04f ,0.2f ,0.89f ,-0.065f ,0.2f ,0.89f ,-0.015f ,0.218f ,0.86f ,-0.04f ,0.184f ,0.86f ,-0.04f ,0.2f ,0.87f ,-0.07f ,0.2f ,0.87f ,0f ,0.21f ,0.85f ,0f ,0.1854f ,0.85f ,0f ,0.212f ,0.84f ,-0.015f ,0.183f ,0.84f ,-0.015f ,0.213f ,0.835f ,-0.04f ,0.19f ,0.835f ,-0.04f ,0.211f ,0.835f ,-0.065f ,0.192f ,0.835f ,-0.065f ,0.208f ,0.84f ,-0.085f ,0.19f ,0.84f ,-0.085f ,0.2f ,0.84f ,-0.095f ,0.215f ,0.82f ,0f ,0.193f ,0.815f ,0.005f ,0.198f ,0.8f ,0.012f ,0.21f ,0.82f ,0.03f ,0.19f ,0.82f ,0.03f ,0.2f ,0.835f ,0.039f ,0.212f ,0.8f ,0.05f ,0.188f ,0.8f ,0.05f ,0.2f ,0.807f ,0.057f ,0.2f ,0.793f ,0.035f ,0.2f ,0.774f ,0.076f ,0.212f ,0.78f ,0.07f ,0.188f ,0.78f ,0.07f ,0.2f ,0.785f ,0.075f ,0.2f ,0.77f ,0.062f ,0.215f ,0.793f ,-0.015f ,0.187f ,0.793f ,-0.015f ,0.2f ,0.793f ,-0.005f ,0.215f ,0.788f ,-0.04f ,0.187f ,0.788f ,-0.04f ,0.215f ,0.793f ,-0.065f ,0.187f ,0.793f ,-0.065f ,0.21f ,0.79f ,-0.085f ,0.19f ,0.79f ,-0.085f ,0.2f ,0.79f ,-0.095f ,0.19f ,0.77f ,-0.0275f ,0.19f ,0.77f ,-0.0525f ,0.19f ,0.78f ,-0.0775f ,0.212f ,0.745f ,-0.015f ,0.188f ,0.745f ,-0.02f ,0.2f ,0.745f ,-0.0255f ,0.2f ,0.745f ,-0.0045f ,0.211f ,0.72f ,-0.015f ,0.189f ,0.72f ,-0.015f ,0.2f ,0.72f ,-0.0252f ,0.2f ,0.72f ,-0.0048f ,0.21f ,0.695f ,-0.015f ,0.19f ,0.695f ,-0.015f ,0.2f ,0.695f ,-0.025f ,0.2f ,0.695f ,-0.005f ,0.2f ,0.685f ,-0.015f ,0.215f ,0.74f ,-0.04f ,0.185f ,0.74f ,-0.04f ,0.2f ,0.74f ,-0.055f ,0.2f ,0.74f ,-0.025f ,0.21f ,0.7142f ,-0.04f ,0.19f ,0.7142f ,-0.04f ,0.2f ,0.7142f ,-0.053f ,0.2f ,0.7142f ,-0.027f ,0.21f ,0.68f ,-0.04f ,0.19f ,0.68f ,-0.04f ,0.2f ,0.68f ,-0.05f ,0.2f ,0.68f ,-0.03f ,0.2f ,0.67f ,-0.04f ,0.212f ,0.74f ,-0.065f ,0.188f ,0.74f ,-0.065f ,0.2f ,0.74f ,-0.0756f ,0.2f ,0.74f ,-0.0542f ,0.21f ,0.7177f ,-0.065f ,0.19f ,0.7177f ,-0.065f ,0.2f ,0.7177f ,-0.0751f ,0.2f ,0.7177f ,-0.0549f ,0.21f ,0.695f ,-0.065f ,0.19f ,0.695f ,-0.065f ,0.2f ,0.695f ,-0.075f ,0.2f ,0.695f ,-0.055f ,0.2f ,0.685f ,-0.065f ,0.211f ,0.755f ,-0.085f ,0.189f ,0.755f ,-0.085f ,0.2f ,0.755f ,-0.0952f ,0.2f ,0.755f ,-0.0748f ,0.21f ,0.735f ,-0.085f ,0.19f ,0.735f ,-0.085f ,0.2f ,0.735f ,-0.0951f ,0.2f ,0.735f ,-0.0749f ,0.21f ,0.72f ,-0.085f ,0.19f ,0.72f ,-0.085f ,0.2f ,0.72f ,-0.095f ,0.2f ,0.72f ,-0.075f ,0.2f ,0.71f ,-0.085f ,-0.23f ,1.23f ,-0.04f ,-0.16f ,1.23f ,-0.04f ,-0.2f ,1.235f ,-0.105f ,-0.2f ,1.235f ,0.02f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.2f ,1.1388f ,-0.08f ,-0.2f ,1.1388f ,0.013f ,-0.225f ,1f ,-0.01f ,-0.225f ,1f ,-0.07f ,-0.185f ,1f ,-0.01f ,-0.185f ,1f ,-0.07f ,-0.2f ,1.1388f ,-0.04f ,-0.225f ,0.92f ,-0.04f ,-0.175f ,0.92f ,-0.04f ,-0.2f ,0.92f ,-0.065f ,-0.2f ,0.92f ,-0.015f ,-0.225f ,0.89f ,-0.04f ,-0.175f ,0.89f ,-0.04f ,-0.2f ,0.89f ,-0.065f ,-0.2f ,0.89f ,-0.015f ,-0.218f ,0.86f ,-0.04f ,-0.184f ,0.86f ,-0.04f ,-0.2f ,0.87f ,-0.07f ,-0.2f ,0.87f ,0f ,-0.21f ,0.85f ,0f ,-0.1854f ,0.85f ,0f ,-0.212f ,0.84f ,-0.015f ,-0.183f ,0.84f ,-0.015f ,-0.213f ,0.835f ,-0.04f ,-0.19f ,0.835f ,-0.04f ,-0.211f ,0.835f ,-0.065f ,-0.192f ,0.835f ,-0.065f ,-0.208f ,0.84f ,-0.085f ,-0.19f ,0.84f ,-0.085f ,-0.2f ,0.84f ,-0.095f ,-0.215f ,0.82f ,0f ,-0.193f ,0.815f ,0.005f ,-0.198f ,0.8f ,0.012f ,-0.21f ,0.82f ,0.03f ,-0.19f ,0.82f ,0.03f ,-0.2f ,0.835f ,0.039f ,-0.212f ,0.8f ,0.05f ,-0.188f ,0.8f ,0.05f ,-0.2f ,0.807f ,0.057f ,-0.2f ,0.793f ,0.035f ,-0.2f ,0.774f ,0.076f ,-0.212f ,0.78f ,0.07f ,-0.188f ,0.78f ,0.07f ,-0.2f ,0.785f ,0.075f ,-0.2f ,0.77f ,0.062f ,-0.215f ,0.793f ,-0.015f ,-0.187f ,0.793f ,-0.015f ,-0.2f ,0.793f ,-0.005f ,-0.215f ,0.788f ,-0.04f ,-0.187f ,0.788f ,-0.04f ,-0.215f ,0.793f ,-0.065f ,-0.187f ,0.793f ,-0.065f ,-0.21f ,0.79f ,-0.085f ,-0.19f ,0.79f ,-0.085f ,-0.2f ,0.79f ,-0.095f ,-0.19f ,0.77f ,-0.0275f });
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f ,0.77f ,-0.0525f ,-0.19f ,0.78f ,-0.0775f ,-0.212f ,0.745f ,-0.015f ,-0.188f ,0.745f ,-0.02f ,-0.2f ,0.745f ,-0.0255f ,-0.2f ,0.745f ,-0.0045f ,-0.211f ,0.72f ,-0.015f ,-0.189f ,0.72f ,-0.015f ,-0.2f ,0.72f ,-0.0252f ,-0.2f ,0.72f ,-0.0048f ,-0.21f ,0.695f ,-0.015f ,-0.19f ,0.695f ,-0.015f ,-0.2f ,0.695f ,-0.025f ,-0.2f ,0.695f ,-0.005f ,-0.2f ,0.685f ,-0.015f ,-0.215f ,0.74f ,-0.04f ,-0.185f ,0.74f ,-0.04f ,-0.2f ,0.74f ,-0.055f ,-0.2f ,0.74f ,-0.025f ,-0.21f ,0.7142f ,-0.04f ,-0.19f ,0.7142f ,-0.04f ,-0.2f ,0.7142f ,-0.053f ,-0.2f ,0.7142f ,-0.027f ,-0.21f ,0.68f ,-0.04f ,-0.19f ,0.68f ,-0.04f ,-0.2f ,0.68f ,-0.05f ,-0.2f ,0.68f ,-0.03f ,-0.2f ,0.67f ,-0.04f ,-0.212f ,0.74f ,-0.065f ,-0.188f ,0.74f ,-0.065f ,-0.2f ,0.74f ,-0.0756f ,-0.2f ,0.74f ,-0.0542f ,-0.21f ,0.7177f ,-0.065f ,-0.19f ,0.7177f ,-0.065f ,-0.2f ,0.7177f ,-0.0751f ,-0.2f ,0.7177f ,-0.0549f ,-0.21f ,0.695f ,-0.065f ,-0.19f ,0.695f ,-0.065f ,-0.2f ,0.695f ,-0.075f ,-0.2f ,0.695f ,-0.055f ,-0.2f ,0.685f ,-0.065f ,-0.211f ,0.755f ,-0.085f ,-0.189f ,0.755f ,-0.085f ,-0.2f ,0.755f ,-0.0952f ,-0.2f ,0.755f ,-0.0748f ,-0.21f ,0.735f ,-0.085f ,-0.19f ,0.735f ,-0.085f ,-0.2f ,0.735f ,-0.0951f ,-0.2f ,0.735f ,-0.0749f ,-0.21f ,0.72f ,-0.085f ,-0.19f ,0.72f ,-0.085f ,-0.2f ,0.72f ,-0.095f ,-0.2f ,0.72f ,-0.075f ,-0.2f ,0.71f ,-0.085f ,0.115f ,0.466f ,0.06f ,0.115f ,0.466f ,-0.055f ,0.15f ,0.466f ,0f ,0.05f ,0.466f ,0f ,0.17f ,0.3f ,0f ,0.06f ,0.3f ,0f ,0.1f ,0.3f ,-0.05f ,0.1f ,0.3f ,0.05f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.115f ,0.069f ,-0.045f ,0.117f ,0.0975f ,0.0615f ,0.1375f ,0.006f ,-0.03f ,0.095f ,0.006f ,-0.03f ,0.115f ,0.015f ,-0.045f ,0.115f ,0.06f ,0.1f ,0.115f ,0f ,0.07f ,0.165f ,0f ,0.07f ,0.095f ,0f ,0.07f ,0.115f ,0.04f ,0.13f ,0.125f ,0f ,0.12f ,0.165f ,0f ,0.12f ,0.087f ,0f ,0.122f ,0.09f ,0.012f ,0.188f ,0.11f ,0.011f ,0.19f ,0.128f ,0.011f ,0.185f ,0.142f ,0.011f ,0.178f ,0.154f ,0.01f ,0.168f ,-0.115f ,0.466f ,0.06f ,-0.115f ,0.466f ,-0.055f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.17f ,0.3f ,0f ,-0.06f ,0.3f ,0f ,-0.1f ,0.3f ,-0.05f ,-0.1f ,0.3f ,0.05f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.115f ,0.069f ,-0.045f ,-0.117f ,0.0975f ,0.0615f ,-0.1375f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.115f ,0.06f ,0.1f ,-0.115f ,0f ,0.07f ,-0.165f ,0f ,0.07f ,-0.095f ,0f ,0.07f ,-0.115f ,0.04f ,0.13f ,-0.125f ,0f ,0.12f ,-0.165f ,0f ,0.12f ,-0.087f ,0f ,0.122f ,-0.09f ,0.012f ,0.188f ,-0.11f ,0.011f ,0.19f ,-0.128f ,0.011f ,0.185f ,-0.142f ,0.011f ,0.178f ,-0.154f ,0.01f ,0.168f });
  }
}
private class MFColor17 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f });
  }
}
private class MFColor18 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f });
  }
}
private class MFColor19 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,1f });
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.824f ,0.0277f ,0f ,0.9149f ,0.0016f });
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.824f ,0.0277f ,0.0028f ,1.0568f ,-0.0776f });
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.0961f ,0.9124f ,-0.0001f });
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"93"});
  }
}
private class MFString28 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"38"});
  }
}
private class MFString29 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"32"});
  }
}
private class MFString30 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"33"});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"34"});
  }
}
private class MFString32 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"42"});
  }
}
private class MFString33 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"35"});
  }
}
private class MFString34 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"36"});
  }
}
private class MFString35 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"37"});
  }
}
private class MFString36 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"46"});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.095f ,0.9171f ,0.0029f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f ,0.9124f ,-0.0001f ,0.104f ,0.4867f ,0.0308f });
  }
}
private class MFString41 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"40"});
  }
}
private class MFString42 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"39"});
  }
}
private class MFString43 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"90"});
  }
}
private class MFString44 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"41"});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f ,0.4867f ,0.0308f ,0.1101f ,0.0656f ,-0.0736f });
  }
}
private class MFString47 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"49"});
  }
}
private class MFString48 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"48"});
  }
}
private class MFString49 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"47"});
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f51 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.0781f ,0.0283f ,-0.097f });
  }
}
private class MFString52 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"58"});
  }
}
private class MFString53 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"50"});
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f55 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.0889f ,0.0494f ,-0.1278f });
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0781f ,0.0283f ,-0.097f ,0.0672f ,0.0235f ,-0.0835f });
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0781f ,0.0283f ,-0.097f ,0.0812f ,0.025f ,-0.0805f });
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0781f ,0.0283f ,-0.097f ,0.0928f ,0.0248f ,-0.0821f });
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f63 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0672f ,0.0235f ,-0.0835f ,0.0644f ,0.0147f ,-0.0577f });
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0644f ,0.0147f ,-0.0577f ,0.0619f ,0.0059f ,-0.0083f });
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f67 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0619f ,0.0059f ,-0.0083f ,0.0619f ,0.0059f ,-0.0083f });
  }
}
private class MFString68 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"55"});
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0812f ,0.025f ,-0.0805f ,0.08f ,0.0175f ,-0.0608f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.08f ,0.0175f ,-0.0608f ,0.0824f ,0.0064f ,-0.004f });
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0824f ,0.0064f ,-0.004f ,0.0841f ,0.0041f ,0.0121f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0841f ,0.0041f ,0.0121f ,0.0841f ,0.0013f ,0.0216f });
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f78 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0928f ,0.0248f ,-0.0821f ,0.0944f ,0.0175f ,-0.0625f });
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0944f ,0.0175f ,-0.0625f ,0.0963f ,0.0065f ,-0.0065f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0963f ,0.0065f ,-0.0065f ,0.0987f ,0.0034f ,0.0086f });
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0987f ,0.0034f ,0.0086f ,0.1002f ,0.0013f ,0.0178f });
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0889f ,0.0494f ,-0.1278f ,0.1105f ,0.0267f ,-0.0998f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1105f ,0.0267f ,-0.0998f ,0.1063f ,0.016f ,-0.0634f });
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1105f ,0.0267f ,-0.0998f ,0.1206f ,0.0124f ,-0.0671f });
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1063f ,0.016f ,-0.0634f ,0.1097f ,0.0058f ,-0.0107f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1097f ,0.0058f ,-0.0107f ,0.114f ,0.0037f ,0.0044f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.114f ,0.0037f ,0.0044f ,0.1155f ,0.0008f ,0.0118f });
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1206f ,0.0124f ,-0.0671f ,0.1239f ,0.0051f ,-0.0153f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1239f ,0.0051f ,-0.0153f ,0.1262f ,0.0023f ,-0.0077f });
  }
}
private class MFString101 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"56"});
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f103 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1262f ,0.0023f ,-0.0077f ,0.1271f ,0f ,0f });
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f105 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f ,0.9171f ,0.0029f ,-0.0867f ,0.4913f ,0.0318f });
  }
}
private class MFString106 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"44"});
  }
}
private class MFString107 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"43"});
  }
}
private class MFString108 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"91"});
  }
}
private class MFString109 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"45"});
  }
}
private class MFInt32110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f111 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f ,0.4913f ,0.0318f ,-0.0801f ,0.0712f ,-0.0766f });
  }
}
private class MFString112 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"53"});
  }
}
private class MFString113 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"52"});
  }
}
private class MFString114 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"51"});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f ,0.0712f ,-0.0766f ,-0.0781f ,0.0283f ,-0.097f });
  }
}
private class MFString117 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"62"});
  }
}
private class MFString118 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"54"});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f ,0.0712f ,-0.0766f ,-0.0889f ,0.0494f ,-0.1278f });
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0781f ,0.0283f ,-0.097f ,-0.0672f ,0.0235f ,-0.0835f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0781f ,0.0283f ,-0.097f ,-0.0812f ,0.025f ,-0.0805f });
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0781f ,0.0283f ,-0.097f ,-0.0928f ,0.0248f ,-0.0821f });
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0672f ,0.0235f ,-0.0835f ,-0.0644f ,0.0147f ,-0.0577f });
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0644f ,0.0147f ,-0.0577f ,-0.0619f ,0.0059f ,-0.0083f });
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f132 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0619f ,0.0059f ,-0.0083f ,-0.0619f ,0.0059f ,-0.0083f });
  }
}
private class MFString133 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"59"});
  }
}
private class MFInt32134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f135 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0812f ,0.025f ,-0.0805f ,-0.08f ,0.0175f ,-0.0608f });
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.08f ,0.0175f ,-0.0608f ,-0.0823f ,0.0064f ,-0.004f });
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f139 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0823f ,0.0064f ,-0.004f ,-0.0841f ,0.0041f ,0.0121f });
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f141 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0841f ,0.0041f ,0.0121f ,-0.0841f ,0.0013f ,0.0216f });
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f143 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0928f ,0.0248f ,-0.0821f ,-0.0944f ,0.0175f ,-0.0625f });
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f145 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0944f ,0.0175f ,-0.0625f ,-0.0963f ,0.0065f ,-0.0065f });
  }
}
private class MFInt32146 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f147 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0963f ,0.0065f ,-0.0065f ,-0.0987f ,0.0034f ,0.0086f });
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0987f ,0.0034f ,0.0086f ,-0.1002f ,0.0013f ,0.0178f });
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f151 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0889f ,0.0494f ,-0.1278f ,-0.1105f ,0.0267f ,-0.0998f });
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f153 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1105f ,0.0267f ,-0.0998f ,-0.1063f ,0.016f ,-0.0634f });
  }
}
private class MFInt32154 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f155 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1105f ,0.0267f ,-0.0998f ,-0.1206f ,0.0124f ,-0.0671f });
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f157 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1063f ,0.016f ,-0.0634f ,-0.1097f ,0.0058f ,-0.0107f });
  }
}
private class MFInt32158 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f159 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1097f ,0.0058f ,-0.0107f ,-0.114f ,0.0037f ,0.0044f });
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.114f ,0.0037f ,0.0044f ,-0.1155f ,0.0008f ,0.0118f });
  }
}
private class MFInt32162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f163 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1206f ,0.0124f ,-0.0671f ,-0.1239f ,0.0051f ,-0.0153f });
  }
}
private class MFInt32164 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f165 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1239f ,0.0051f ,-0.0153f ,-0.1262f ,0.0023f ,-0.0077f });
  }
}
private class MFString166 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"60"});
  }
}
private class MFInt32167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f168 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1262f ,0.0023f ,-0.0077f ,-0.1271f ,0f ,0f });
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f ,1.0568f ,-0.0776f ,0.0035f ,1.0925f ,-0.0787f });
  }
}
private class MFString171 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"84"});
  }
}
private class MFString172 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"26"});
  }
}
private class MFString173 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"27"});
  }
}
private class MFInt32174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f175 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f ,1.0925f ,-0.0787f ,0.0041f ,1.1276f ,-0.0796f });
  }
}
private class MFInt32176 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f177 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f ,1.1276f ,-0.0796f ,0.0045f ,1.1546f ,-0.08f });
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f179 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f ,1.1546f ,-0.08f ,0.0048f ,1.1912f ,-0.0805f });
  }
}
private class MFString180 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"28"});
  }
}
private class MFString181 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"30"});
  }
}
private class MFString182 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {""});
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f ,1.1912f ,-0.0805f ,0.0051f ,1.2278f ,-0.0808f });
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f ,1.2278f ,-0.0808f ,0.0053f ,1.2679f ,-0.081f });
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f ,1.2679f ,-0.081f ,0.0056f ,1.2848f ,-0.0822f });
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f ,1.2848f ,-0.0822f ,0.0057f ,1.3126f ,-0.0838f });
  }
}
private class MFString191 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"13"});
  }
}
private class MFInt32192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f193 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3126f ,-0.0838f ,0.0057f ,1.3382f ,-0.0845f });
  }
}
private class MFString194 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"29"});
  }
}
private class MFString195 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31"});
  }
}
private class MFInt32196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3382f ,-0.0845f ,0.0058f ,1.3625f ,-0.0833f });
  }
}
private class MFInt32198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f199 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f ,1.3625f ,-0.0833f ,0.0059f ,1.3866f ,-0.08f });
  }
}
private class MFInt32200 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f201 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f ,1.3866f ,-0.08f ,0.006f ,1.4102f ,-0.0745f });
  }
}
private class MFString202 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"94"});
  }
}
private class MFString203 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"88"});
  }
}
private class MFString204 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"95"});
  }
}
private class MFString205 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"92"});
  }
}
private class MFInt32206 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f207 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f ,1.4102f ,-0.0745f ,0.0061f ,1.432f ,-0.0675f });
  }
}
private class MFString208 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"24"});
  }
}
private class MFInt32209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f210 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f ,1.432f ,-0.0675f ,0.0062f ,1.4583f ,-0.057f });
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f ,1.4583f ,-0.057f ,0.0063f ,1.4761f ,-0.0484f });
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f ,1.4761f ,-0.0484f ,0.0065f ,1.4951f ,-0.0387f });
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f216 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.0066f ,1.5132f ,-0.0301f });
  }
}
private class MFString217 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10"});
  }
}
private class MFString218 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"12"});
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.082f ,1.4488f ,-0.0353f });
  }
}
private class MFInt32221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,-0.0694f ,1.46f ,-0.033f });
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5132f ,-0.0301f ,0.0066f ,1.5357f ,-0.0143f });
  }
}
private class MFString225 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"82"});
  }
}
private class MFString226 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"83"});
  }
}
private class MFInt32227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f228 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5357f ,-0.0143f ,0.0066f ,1.552f ,-0.0082f });
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.552f ,-0.0082f ,0.0066f ,1.5662f ,-0.0084f });
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5662f ,-0.0084f ,0.0066f ,1.58f ,-0.0103f });
  }
}
private class MFInt32233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f234 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.58f ,-0.0103f ,0.0066f ,1.5928f ,-0.0103f });
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5928f ,-0.0103f ,0.0066f ,1.6144f ,-0.0034f });
  }
}
private class MFString237 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"11"});
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.6144f ,-0.0034f ,0.0044f ,1.6209f ,0.0236f });
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f241 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0503f ,1.4157f ,-0.0689f });
  }
}
private class MFString242 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1"});
  }
}
private class MFString243 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"85"});
  }
}
private class MFString244 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"3"});
  }
}
private class MFString245 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"4"});
  }
}
private class MFString246 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"81"});
  }
}
private class MFString247 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"89"});
  }
}
private class MFString248 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"86"});
  }
}
private class MFString249 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"6"});
  }
}
private class MFString250 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"7"});
  }
}
private class MFString251 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2"});
  }
}
private class MFString252 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"0"});
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0507f ,1.4157f ,-0.0689f });
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f256 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0479f ,1.3963f ,-0.0188f });
  }
}
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0483f ,1.3963f ,-0.0188f });
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f260 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0216f ,1.4053f ,0.0051f });
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0219f ,1.4053f ,0.0051f });
  }
}
private class MFInt32263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f264 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0002f ,1.3043f ,-0.0865f });
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.0962f ,1.4269f ,-0.0424f });
  }
}
private class MFString267 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"15"});
  }
}
private class MFString268 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"17"});
  }
}
private class MFString269 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"18"});
  }
}
private class MFString270 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"16"});
  }
}
private class MFString271 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"14"});
  }
}
private class MFInt32272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f273 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f ,1.4269f ,-0.0424f ,0.2029f ,1.4376f ,-0.0387f });
  }
}
private class MFInt32274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f275 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f ,1.4376f ,-0.0387f ,0.2014f ,1.1357f ,-0.0682f });
  }
}
private class MFString276 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"96"});
  }
}
private class MFString277 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"63"});
  }
}
private class MFInt32278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f279 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.1984f ,0.8663f ,-0.0583f });
  }
}
private class MFString280 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"64"});
  }
}
private class MFString281 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"65"});
  }
}
private class MFString282 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"71"});
  }
}
private class MFString283 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"69"});
  }
}
private class MFInt32284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f285 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1811f ,0.6975f ,-0.0826f });
  }
}
private class MFString286 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"70"});
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1811f ,0.6984f ,-0.0935f });
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1809f ,0.7f ,-0.1067f });
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1809f ,0.6973f ,-0.1276f });
  }
}
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1811f ,0.6975f ,-0.0826f ,0.1924f ,0.8472f ,-0.0534f });
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f ,0.8472f ,-0.0534f ,0.1951f ,0.8226f ,0.0246f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f ,0.8226f ,0.0246f ,0.1955f ,0.8159f ,0.0464f });
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f300 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1811f ,0.6984f ,-0.0935f ,0.1983f ,0.8024f ,-0.028f });
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.8024f ,-0.028f ,0.1983f ,0.7815f ,-0.028f });
  }
}
private class MFString303 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"75"});
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f305 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7815f ,-0.028f ,0.2017f ,0.7363f ,-0.0248f });
  }
}
private class MFInt32306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f307 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f ,0.7363f ,-0.0248f ,0.2028f ,0.7139f ,-0.0236f });
  }
}
private class MFInt32308 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f309 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1809f ,0.7f ,-0.1067f ,0.1987f ,0.8029f ,-0.053f });
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f311 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.8029f ,-0.053f ,0.1987f ,0.7818f ,-0.053f });
  }
}
private class MFString312 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"76"});
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.7818f ,-0.053f ,0.2013f ,0.7273f ,-0.0503f });
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f316 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f ,0.7273f ,-0.0503f ,0.2026f ,0.7011f ,-0.0494f });
  }
}
private class MFInt32317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1809f ,0.6973f ,-0.1276f ,0.1956f ,0.8019f ,-0.0794f });
  }
}
private class MFInt32319 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f320 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1809f ,0.6973f ,-0.1276f ,0.1925f ,0.8066f ,-0.1036f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.8019f ,-0.0794f ,0.1956f ,0.7815f ,-0.0794f });
  }
}
private class MFInt32323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f324 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.7815f ,-0.0794f ,0.1973f ,0.7287f ,-0.0777f });
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f ,0.7287f ,-0.0777f ,0.1983f ,0.7045f ,-0.0767f });
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f328 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.8066f ,-0.1036f ,0.1925f ,0.7866f ,-0.1036f });
  }
}
private class MFString329 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"77"});
  }
}
private class MFInt32330 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f331 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.7866f ,-0.1036f ,0.1938f ,0.7452f ,-0.1024f });
  }
}
private class MFInt32332 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f333 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f ,0.7452f ,-0.1024f ,0.1948f ,0.7277f ,-0.1017f });
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f335 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f ,1.46f ,-0.033f ,-0.0836f ,1.4281f ,-0.0401f });
  }
}
private class MFString336 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"20"});
  }
}
private class MFString337 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"22"});
  }
}
private class MFString338 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"23"});
  }
}
private class MFString339 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"21"});
  }
}
private class MFString340 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"19"});
  }
}
private class MFInt32341 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f342 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f ,1.4281f ,-0.0401f ,-0.1907f ,1.4407f ,-0.0325f });
  }
}
private class MFInt32343 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f344 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f ,1.4407f ,-0.0325f ,-0.1949f ,1.1388f ,-0.062f });
  }
}
private class MFString345 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"97"});
  }
}
private class MFString346 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"66"});
  }
}
private class MFInt32347 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f348 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f ,1.1388f ,-0.062f ,-0.1959f ,0.8694f ,-0.0521f });
  }
}
private class MFString349 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"67"});
  }
}
private class MFString350 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"68"});
  }
}
private class MFString351 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"74"});
  }
}
private class MFString352 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"72"});
  }
}
private class MFInt32353 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f354 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-0.1811f ,0.6975f ,-0.0826f });
  }
}
private class MFString355 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"73"});
  }
}
private class MFInt32356 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f357 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-0.1811f ,0.6984f ,-0.0935f });
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f359 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-0.1809f ,0.7f ,-0.1067f });
  }
}
private class MFInt32360 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f361 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-0.1809f ,0.6973f ,-0.1276f });
  }
}
private class MFInt32362 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f363 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1811f ,0.6975f ,-0.0826f ,-0.1899f ,0.8502f ,-0.0473f });
  }
}
private class MFInt32364 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f365 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f ,0.8502f ,-0.0473f ,-0.1874f ,0.8256f ,0.0306f });
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f367 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f ,0.8256f ,0.0306f ,-0.1864f ,0.819f ,0.0506f });
  }
}
private class MFInt32368 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f369 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1811f ,0.6984f ,-0.0935f ,-0.1961f ,0.8055f ,-0.0218f });
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f371 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f ,0.8055f ,-0.0218f ,-0.1961f ,0.7846f ,-0.0218f });
  }
}
private class MFString372 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"78"});
  }
}
private class MFInt32373 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f374 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f ,0.7846f ,-0.0218f ,-0.1954f ,0.7393f ,-0.0185f });
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f376 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f ,0.7393f ,-0.0185f ,-0.1945f ,0.7169f ,-0.0173f });
  }
}
private class MFInt32377 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f378 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1809f ,0.7f ,-0.1067f ,-0.1972f ,0.806f ,-0.0468f });
  }
}
private class MFInt32379 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f380 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f ,0.806f ,-0.0468f ,-0.1972f ,0.7849f ,-0.0468f });
  }
}
private class MFString381 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"79"});
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f383 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f ,0.7849f ,-0.0468f ,-0.195f ,0.7304f ,-0.0441f });
  }
}
private class MFInt32384 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f385 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.195f ,0.7304f ,-0.0441f ,-0.1939f ,0.7042f ,-0.0432f });
  }
}
private class MFInt32386 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f387 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1809f ,0.6973f ,-0.1276f ,-0.1951f ,0.8049f ,-0.0732f });
  }
}
private class MFInt32388 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f389 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1809f ,0.6973f ,-0.1276f ,-0.1926f ,0.8096f ,-0.0975f });
  }
}
private class MFInt32390 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f391 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f ,0.8049f ,-0.0732f ,-0.1951f ,0.7845f ,-0.0732f });
  }
}
private class MFInt32392 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f393 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f ,0.7845f ,-0.0732f ,-0.192f ,0.7318f ,-0.0716f });
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f395 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.192f ,0.7318f ,-0.0716f ,-0.1908f ,0.7077f ,-0.0706f });
  }
}
private class MFInt32396 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f397 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f ,0.8096f ,-0.0975f ,-0.1926f ,0.7896f ,-0.0975f });
  }
}
private class MFString398 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"80"});
  }
}
private class MFInt32399 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f400 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f ,0.7896f ,-0.0975f ,-0.1902f ,0.7483f ,-0.0963f });
  }
}
private class MFInt32401 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f402 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f ,0.7483f ,-0.0963f ,-0.1908f ,0.754f ,-0.096f });
  }
}
}
