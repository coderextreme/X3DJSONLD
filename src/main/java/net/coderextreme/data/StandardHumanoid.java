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
public class StandardHumanoid implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(false);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new StandardHumanoid().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/StandardHumanoid.new.java.x3d");
    model.toFileJSON("../data/StandardHumanoid.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("StandardHumanoid.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("14 Jan 2023"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("9 November 2020"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Transform()
          .addComments(new CommentsBlock("DEF for markerfor XYZ axes"))
          .addChild(new Shape().setDEF("AxisLinesShape")
            .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
              .setColor(new Color().setColor(new MFColor3().getArray())))))
        .addChild(new Group()
          .addComments(new CommentsBlock("DEFS for markers of skeleton joints, segments, and sites"))
          .addChild(new Transform()
            .addChild(new Transform().setTranslation(new double[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.02f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new double[] {0f,0f,0f})))))
            .addChild(new Transform().setTranslation(new double[] {0f,2.05f,0f})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new double[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimSiteShape")
                .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {1f,1f,1f}).setTransparency(1f)))))))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setPosition(new double[] {0f,1f,3f}).setCenterOfRotation(new double[] {0f,1f,0f}).setDescription("default"))
        .addChild(new HAnimHumanoid().setName("HAnim").setDEF("hanim_HAnim").setInfo(new MFString10().getArray()).setVersion("2.0")
          .addComments(new CommentsBlock("<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"))
          .addComments(new CommentsBlock("</LOD>"))
          .addSkin(((Shape)new Shape().setDEF("SkinShape").setContainerFieldOverride("skin"))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray().append(new MFInt3212().getArray()).append(new MFInt3213().getArray()).append(new MFInt3214().getArray())).setCreaseAngle(3.1f)
              .setCoord(new Coordinate().setDEF("TheSkinCoord").setPoint(new MFVec3f15().getArray().append(new MFVec3f16().getArray())))
              .setColor(new Color().setColor(new MFColor17().getArray().append(new MFColor18().getArray()).append(new MFColor19().getArray()))))
            .setAppearance(new Appearance().setDEF("SkinAppearance")
              .setTexture(new ImageTexture().setDEF("zBlueSpiralBkg2").setDescription("Blue Spiral Pattern").setUrl(new MFString20().getArray()))
              .setMaterial(new Material().setDEF("SkinMaterial").setAmbientIntensity(0.6f).setDiffuseColor(new double[] {1f,1f,1f}).setShininess(0.6f).setTransparency(1f))))
          .setSkinCoord(((Coordinate)new Coordinate().setContainerFieldOverride("skinCoord")).setUSE("TheSkinCoord"))
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_HAnim").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new double[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray()).setContainerFieldOverride("skeleton"))
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new double[] {0f,0.824f,0.0277f})
                .addChild(new Transform()
                  .addComments(new CommentsBlock("Empty Transform"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                  .addComments(new CommentsBlock("from humanoid_root to sacroiliac vertices 2"))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                  .addComments(new CommentsBlock("from humanoid_root to vl5 vertices 2"))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new double[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new double[] {0f,0.9149f,0.0016f})
                  .addChild(new Transform()
                    .addComments(new CommentsBlock("Empty Transform"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                    .addComments(new CommentsBlock("from sacroiliac to l_hip vertices 2"))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_pelvis").setName("buttocks_standing_wall_contact_point").setDEF("hanim_buttocks_standing_wall_contact_point")
                  .addChild(new TouchSensor().setDescription("HAnimSite 93 buttocks_standing_wall_contact_point"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString31().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("crotch").setDEF("hanim_crotch").setTranslation(new double[] {0.0034f,0.8266f,0.0257f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 38 crotch"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString32().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_asis").setDEF("hanim_l_asis").setTranslation(new double[] {0.0925f,0.9983f,0.1052f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 32 l_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString33().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_iliocristale").setDEF("hanim_l_iliocristale").setTranslation(new double[] {0.1612f,1.0537f,0.0008f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 33 l_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString34().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_psis").setDEF("hanim_l_psis").setTranslation(new double[] {0.0774f,1.019f,-0.1151f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 34 l_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString35().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_trochanterion").setDEF("hanim_l_trochanterion").setTranslation(new double[] {0.1677f,0.8336f,0.0303f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 42 l_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString36().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_asis").setDEF("hanim_r_asis").setTranslation(new double[] {-0.0887f,1.0021f,0.1112f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 35 r_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString37().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_iliocristale").setDEF("hanim_r_iliocristale").setTranslation(new double[] {-0.1525f,1.0628f,0.0035f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 36 r_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString38().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_psis").setDEF("hanim_r_psis").setTranslation(new double[] {-0.0716f,1.019f,-0.1138f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 37 r_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString39().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_trochanterion").setDEF("hanim_r_trochanterion").setTranslation(new double[] {-0.1689f,0.8419f,0.0352f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 46 r_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString40().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                    .addComments(new CommentsBlock("from sacroiliac to r_hip vertices 2"))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new double[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new double[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))
                      .addComments(new CommentsBlock("from l_hip to l_knee vertices 2"))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_lateral_epicondyles").setDEF("hanim_l_femoral_lateral_epicondyles").setTranslation(new double[] {0.1598f,0.4967f,0.0297f})
                    .addChild(new TouchSensor().setDescription("HAnimSite 40 l_femoral_lateral_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString47().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_medial_epicondyles").setDEF("hanim_l_femoral_medial_epicondyles").setTranslation(new double[] {0.0398f,0.4946f,0.0303f})
                    .addChild(new TouchSensor().setDescription("HAnimSite 39 l_femoral_medial_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString48().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_knee_crease").setDEF("hanim_l_knee_crease").setTranslation(new double[] {0.0993f,0.4881f,-0.0309f})
                    .addChild(new TouchSensor().setDescription("HAnimSite 90 l_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString49().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_suprapatella").setDEF("hanim_l_suprapatella")
                    .addChild(new TouchSensor().setDescription("HAnimSite 41 l_suprapatella"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString50().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f)))))))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new double[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new double[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                        .addComments(new CommentsBlock("from l_knee to l_talocrural vertices 2"))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_lateral_malleolus").setDEF("hanim_l_lateral_malleolus").setTranslation(new double[] {0.1308f,0.0597f,-0.1032f})
                      .addChild(new TouchSensor().setDescription("HAnimSite 49 l_lateral_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString55().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_medial_malleolus").setDEF("hanim_l_medial_malleolus").setTranslation(new double[] {0.089f,0.0716f,-0.0881f})
                      .addChild(new TouchSensor().setDescription("HAnimSite 48 l_medial_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString56().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_tibiale").setDEF("hanim_l_tibiale")
                      .addChild(new TouchSensor().setDescription("HAnimSite 47 l_tibiale"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString57().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f)))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new double[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setScale(new double[] {0.15f,0.15f,0.15f}).setTranslation(new double[] {0.08f,0.06f,-0.025f}).setRotation(new double[] {1f,0f,0f,-1.57f})
                        .addComments(new CommentsBlock("Transform left foot"))
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform left foot"))
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3260().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))
                          .addComments(new CommentsBlock("from l_talocrural to l_talocalcaneonavicular vertices 2"))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimSite("hanim_l_talus").setName("l_calcaneus_posterior").setDEF("hanim_l_calcaneus_posterior").setTranslation(new double[] {0.0974f,0.0259f,-0.1171f})
                        .addChild(new TouchSensor().setDescription("HAnimSite 58 l_calcaneus_posterior"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString62().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                      .addChild(new HAnimSite("hanim_l_talus").setName("l_sphyrion").setDEF("hanim_l_sphyrion").setTranslation(new double[] {0.089f,0.0575f,-0.0943f})
                        .addChild(new TouchSensor().setDescription("HAnimSite 50 l_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString63().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3264().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                          .addComments(new CommentsBlock("from l_talocrural to l_calcaneocuboid vertices 2"))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new double[] {0.0781f,0.0283f,-0.097f}).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName("l_navicular").setDEF("hanim_l_navicular")
                        .addChild(new Transform().setTranslation(new double[] {0.0781f,0.0283f,-0.097f})
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3268().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3270().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3272().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f73().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new double[] {0.0672f,0.0235f,-0.0835f}).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1")
                          .addChild(new Transform().setTranslation(new double[] {0.0672f,0.0235f,-0.0835f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3276().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new double[] {0.0644f,0.0147f,-0.0577f}).setUlimit(new MFFloat78().getArray()).setLlimit(new MFFloat79().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1")
                            .addChild(new Transform().setTranslation(new double[] {0.0644f,0.0147f,-0.0577f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3280().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f81().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new double[] {0.0619f,0.0059f,-0.0083f}).setUlimit(new MFFloat82().getArray()).setLlimit(new MFFloat83().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new double[] {0.0619f,0.0059f,-0.0083f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3284().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f85().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setName("l_metatarsal_phalanx_1").setDEF("hanim_l_metatarsal_phalanx_1")
                                .addChild(new TouchSensor().setDescription("HAnimSite 55 l_metatarsal_phalanx_1"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString86().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName("l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new double[] {0.0812f,0.025f,-0.0805f}).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2")
                          .addChild(new Transform().setTranslation(new double[] {0.0812f,0.025f,-0.0805f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new double[] {0.08f,0.0175f,-0.0608f}).setUlimit(new MFFloat93().getArray()).setLlimit(new MFFloat94().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                            .addChild(new Transform().setTranslation(new double[] {0.08f,0.0175f,-0.0608f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new double[] {0.0824f,0.0064f,-0.004f}).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new double[] {0.0824f,0.0064f,-0.004f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new double[] {0.0841f,0.0041f,0.0121f}).setUlimit(new MFFloat101().getArray()).setLlimit(new MFFloat102().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new double[] {0.0841f,0.0041f,0.0121f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new double[] {0.0841f,0.0013f,0.0216f}).setUlimit(new MFFloat105().getArray()).setLlimit(new MFFloat106().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new double[] {0.0928f,0.0248f,-0.0821f}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3")
                          .addChild(new Transform().setTranslation(new double[] {0.0928f,0.0248f,-0.0821f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new double[] {0.0944f,0.0175f,-0.0625f}).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3")
                            .addChild(new Transform().setTranslation(new double[] {0.0944f,0.0175f,-0.0625f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32113().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new double[] {0.0963f,0.0065f,-0.0065f}).setUlimit(new MFFloat115().getArray()).setLlimit(new MFFloat116().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new double[] {0.0963f,0.0065f,-0.0065f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32117().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new double[] {0.0987f,0.0034f,0.0086f}).setUlimit(new MFFloat119().getArray()).setLlimit(new MFFloat120().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new double[] {0.0987f,0.0034f,0.0086f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new double[] {0.1002f,0.0013f,0.0178f}).setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new double[] {0.0889f,0.0494f,-0.1278f}).setUlimit(new MFFloat125().getArray()).setLlimit(new MFFloat126().getArray())
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName("l_calcaneus").setDEF("hanim_l_calcaneus")
                        .addChild(new Transform().setTranslation(new double[] {0.0889f,0.0494f,-0.1278f})
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))
                            .addComments(new CommentsBlock("from l_calcaneocuboid to l_transversetarsal vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new double[] {0.1105f,0.0267f,-0.0998f}).setUlimit(new MFFloat129().getArray()).setLlimit(new MFFloat130().getArray())
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName("l_cuboid").setDEF("hanim_l_cuboid")
                          .addChild(new Transform().setTranslation(new double[] {0.1105f,0.0267f,-0.0998f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray()))
                              .addComments(new CommentsBlock("from l_transversetarsal to l_tarsometatarsal_4 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32133().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))
                              .addComments(new CommentsBlock("from l_transversetarsal to l_tarsometatarsal_5 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new double[] {0.1063f,0.016f,-0.0634f}).setUlimit(new MFFloat135().getArray()).setLlimit(new MFFloat136().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4")
                            .addChild(new Transform().setTranslation(new double[] {0.1063f,0.016f,-0.0634f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new double[] {0.1097f,0.0058f,-0.0107f}).setUlimit(new MFFloat139().getArray()).setLlimit(new MFFloat140().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new double[] {0.1097f,0.0058f,-0.0107f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32141().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new double[] {0.114f,0.0037f,0.0044f}).setUlimit(new MFFloat143().getArray()).setLlimit(new MFFloat144().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new double[] {0.114f,0.0037f,0.0044f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new double[] {0.1155f,0.0008f,0.0118f}).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new double[] {0.1206f,0.0124f,-0.0671f}).setUlimit(new MFFloat149().getArray()).setLlimit(new MFFloat150().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5")
                            .addChild(new Transform().setTranslation(new double[] {0.1206f,0.0124f,-0.0671f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new double[] {0.1239f,0.0051f,-0.0153f}).setUlimit(new MFFloat153().getArray()).setLlimit(new MFFloat154().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new double[] {0.1239f,0.0051f,-0.0153f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32155().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f156().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_5").setName("l_metatarsal_phalanx_5").setDEF("hanim_l_metatarsal_phalanx_5")
                                .addChild(new TouchSensor().setDescription("HAnimSite 56 l_metatarsal_phalanx_5"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString157().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new double[] {0.1262f,0.0023f,-0.0077f}).setUlimit(new MFFloat158().getArray()).setLlimit(new MFFloat159().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new double[] {0.1262f,0.0023f,-0.0077f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32160().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new double[] {0.1271f,0f,0f}).setUlimit(new MFFloat162().getArray()).setLlimit(new MFFloat163().getArray()))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new double[] {-0.095f,0.9171f,0.0029f}).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new double[] {-0.095f,0.9171f,0.0029f})
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32166().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray()))
                      .addComments(new CommentsBlock("from r_hip to r_knee vertices 2"))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_lateral_epicondyles").setDEF("hanim_r_femoral_lateral_epicondyles").setTranslation(new double[] {-0.1421f,0.4992f,0.031f})
                    .addChild(new TouchSensor().setDescription("HAnimSite 44 r_femoral_lateral_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString168().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_medial_epicondyles").setDEF("hanim_r_femoral_medial_epicondyles").setTranslation(new double[] {-0.0221f,0.5014f,0.0289f})
                    .addChild(new TouchSensor().setDescription("HAnimSite 43 r_femoral_medial_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString169().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_knee_crease").setDEF("hanim_r_knee_crease").setTranslation(new double[] {-0.0825f,0.4932f,-0.0326f})
                    .addChild(new TouchSensor().setDescription("HAnimSite 91 r_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString170().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_suprapatella").setDEF("hanim_r_suprapatella")
                    .addChild(new TouchSensor().setDescription("HAnimSite 45 r_suprapatella"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString171().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035f)))))))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new double[] {-0.0867f,0.4913f,0.0318f}).setUlimit(new MFFloat172().getArray()).setLlimit(new MFFloat173().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new double[] {-0.0867f,0.4913f,0.0318f})
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32174().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f175().getArray()))
                        .addComments(new CommentsBlock("from r_knee to r_talocrural vertices 2"))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_lateral_malleolus").setDEF("hanim_r_lateral_malleolus").setTranslation(new double[] {-0.1006f,0.0658f,-0.1075f})
                      .addChild(new TouchSensor().setDescription("HAnimSite 53 r_lateral_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString176().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_medial_malleolus").setDEF("hanim_r_medial_malleolus").setTranslation(new double[] {-0.0591f,0.076f,-0.0928f})
                      .addChild(new TouchSensor().setDescription("HAnimSite 52 r_medial_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString177().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_tibiale").setDEF("hanim_r_tibiale")
                      .addChild(new TouchSensor().setDescription("HAnimSite 51 r_tibiale"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString178().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035f)))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new double[] {-0.0801f,0.0712f,-0.0766f}).setUlimit(new MFFloat179().getArray()).setLlimit(new MFFloat180().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setScale(new double[] {0.15f,0.15f,0.15f}).setTranslation(new double[] {-0.05f,0.06f,-0.025f}).setRotation(new double[] {1f,0f,0f,-1.57f})
                        .addComments(new CommentsBlock("Transform right foot"))
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform right foot"))
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32181().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))
                          .addComments(new CommentsBlock("from r_talocrural to r_talocalcaneonavicular vertices 2"))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimSite("hanim_r_talus").setName("r_calcaneus_posterior").setDEF("hanim_r_calcaneus_posterior").setTranslation(new double[] {-0.0692f,0.0297f,-0.1221f})
                        .addChild(new TouchSensor().setDescription("HAnimSite 62 r_calcaneus_posterior"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString183().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                      .addChild(new HAnimSite("hanim_r_talus").setName("r_sphyrion").setDEF("hanim_r_sphyrion").setTranslation(new double[] {-0.0603f,0.061f,-0.1002f})
                        .addChild(new TouchSensor().setDescription("HAnimSite 54 r_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString184().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))
                          .addComments(new CommentsBlock("from r_talocrural to r_calcaneocuboid vertices 2"))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new double[] {-0.0781f,0.0283f,-0.097f}).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName("r_navicular").setDEF("hanim_r_navicular")
                        .addChild(new Transform().setTranslation(new double[] {-0.0781f,0.0283f,-0.097f})
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32191().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new double[] {-0.0672f,0.0235f,-0.0835f}).setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                          .addChild(new Transform().setTranslation(new double[] {-0.0672f,0.0235f,-0.0835f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new double[] {-0.0644f,0.0147f,-0.0577f}).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                            .addChild(new Transform().setTranslation(new double[] {-0.0644f,0.0147f,-0.0577f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new double[] {-0.0619f,0.0059f,-0.0083f}).setUlimit(new MFFloat203().getArray()).setLlimit(new MFFloat204().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new double[] {-0.0619f,0.0059f,-0.0083f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32205().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setName("r_metatarsal_phalanx_1").setDEF("hanim_r_metatarsal_phalanx_1")
                                .addChild(new TouchSensor().setDescription("HAnimSite 59 r_metatarsal_phalanx_1"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString207().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setUlimit(new MFFloat208().getArray()).setLlimit(new MFFloat209().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new double[] {-0.0812f,0.025f,-0.0805f}).setUlimit(new MFFloat210().getArray()).setLlimit(new MFFloat211().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                          .addChild(new Transform().setTranslation(new double[] {-0.0812f,0.025f,-0.0805f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32212().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f213().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new double[] {-0.08f,0.0175f,-0.0608f}).setUlimit(new MFFloat214().getArray()).setLlimit(new MFFloat215().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                            .addChild(new Transform().setTranslation(new double[] {-0.08f,0.0175f,-0.0608f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32216().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f217().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new double[] {-0.0823f,0.0064f,-0.004f}).setUlimit(new MFFloat218().getArray()).setLlimit(new MFFloat219().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new double[] {-0.0823f,0.0064f,-0.004f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32220().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new double[] {-0.0841f,0.0041f,0.0121f}).setUlimit(new MFFloat222().getArray()).setLlimit(new MFFloat223().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new double[] {-0.0841f,0.0041f,0.0121f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32224().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f225().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new double[] {-0.0841f,0.0013f,0.0216f}).setUlimit(new MFFloat226().getArray()).setLlimit(new MFFloat227().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new double[] {-0.0928f,0.0248f,-0.0821f}).setUlimit(new MFFloat228().getArray()).setLlimit(new MFFloat229().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                          .addChild(new Transform().setTranslation(new double[] {-0.0928f,0.0248f,-0.0821f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32230().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f231().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new double[] {-0.0944f,0.0175f,-0.0625f}).setUlimit(new MFFloat232().getArray()).setLlimit(new MFFloat233().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                            .addChild(new Transform().setTranslation(new double[] {-0.0944f,0.0175f,-0.0625f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32234().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f235().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new double[] {-0.0963f,0.0065f,-0.0065f}).setUlimit(new MFFloat236().getArray()).setLlimit(new MFFloat237().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new double[] {-0.0963f,0.0065f,-0.0065f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32238().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new double[] {-0.0987f,0.0034f,0.0086f}).setUlimit(new MFFloat240().getArray()).setLlimit(new MFFloat241().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new double[] {-0.0987f,0.0034f,0.0086f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32242().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f243().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new double[] {-0.1002f,0.0013f,0.0178f}).setUlimit(new MFFloat244().getArray()).setLlimit(new MFFloat245().getArray())))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new double[] {-0.0889f,0.0494f,-0.1278f}).setUlimit(new MFFloat246().getArray()).setLlimit(new MFFloat247().getArray())
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                        .addChild(new Transform().setTranslation(new double[] {-0.0889f,0.0494f,-0.1278f})
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32248().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f249().getArray()))
                            .addComments(new CommentsBlock("from r_calcaneocuboid to r_transversetarsal vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new double[] {-0.1105f,0.0267f,-0.0998f}).setUlimit(new MFFloat250().getArray()).setLlimit(new MFFloat251().getArray())
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName("r_cuboid").setDEF("hanim_r_cuboid")
                          .addChild(new Transform().setTranslation(new double[] {-0.1105f,0.0267f,-0.0998f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32252().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f253().getArray()))
                              .addComments(new CommentsBlock("from r_transversetarsal to r_tarsometatarsal_4 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32254().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f255().getArray()))
                              .addComments(new CommentsBlock("from r_transversetarsal to r_tarsometatarsal_5 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new double[] {-0.1063f,0.016f,-0.0634f}).setUlimit(new MFFloat256().getArray()).setLlimit(new MFFloat257().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                            .addChild(new Transform().setTranslation(new double[] {-0.1063f,0.016f,-0.0634f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32258().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f259().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new double[] {-0.1097f,0.0058f,-0.0107f}).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new double[] {-0.1097f,0.0058f,-0.0107f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32262().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new double[] {-0.114f,0.0037f,0.0044f}).setUlimit(new MFFloat264().getArray()).setLlimit(new MFFloat265().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new double[] {-0.114f,0.0037f,0.0044f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32266().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f267().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new double[] {-0.1155f,0.0008f,0.0118f}).setUlimit(new MFFloat268().getArray()).setLlimit(new MFFloat269().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new double[] {-0.1206f,0.0124f,-0.0671f}).setUlimit(new MFFloat270().getArray()).setLlimit(new MFFloat271().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                            .addChild(new Transform().setTranslation(new double[] {-0.1206f,0.0124f,-0.0671f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32272().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f273().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new double[] {-0.1239f,0.0051f,-0.0153f}).setUlimit(new MFFloat274().getArray()).setLlimit(new MFFloat275().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new double[] {-0.1239f,0.0051f,-0.0153f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32276().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f277().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_5").setName("r_metatarsal_phalanx_5").setDEF("hanim_r_metatarsal_phalanx_5")
                                .addChild(new TouchSensor().setDescription("HAnimSite 60 r_metatarsal_phalanx_5"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString278().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new double[] {-0.1262f,0.0023f,-0.0077f}).setUlimit(new MFFloat279().getArray()).setLlimit(new MFFloat280().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new double[] {-0.1262f,0.0023f,-0.0077f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new double[] {-0.1271f,0f,0f}).setUlimit(new MFFloat283().getArray()).setLlimit(new MFFloat284().getArray())))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new double[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat285().getArray()).setLlimit(new MFFloat286().getArray())
              .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                .addChild(new Transform().setTranslation(new double[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Transform()
                    .addComments(new CommentsBlock("Empty Transform"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                    .addComments(new CommentsBlock("from vl5 to vl4 vertices 2"))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_l5").setName("navel").setDEF("hanim_navel").setTranslation(new double[] {0.0069f,1.0966f,0.1017f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 84 navel"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString289().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_anterior").setDEF("hanim_waist_preferred_anterior")
                  .addChild(new TouchSensor().setDescription("HAnimSite 26 waist_preferred_anterior"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString290().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_posterior").setDEF("hanim_waist_preferred_posterior").setTranslation(new double[] {0.29f,1.0915f,-0.1091f})
                  .addChild(new TouchSensor().setDescription("HAnimSite 27 waist_preferred_posterior"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString291().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035f)))))))
              .addChild(new HAnimJoint("hanim_vl5").setName("vl4").setDEF("hanim_vl4").setCenter(new double[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat292().getArray()).setLlimit(new MFFloat293().getArray())
                .addChild(new HAnimSegment("hanim_vl4").setName("l4").setDEF("hanim_l4")
                  .addChild(new Transform().setTranslation(new double[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32294().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f295().getArray()))
                      .addComments(new CommentsBlock("from vl4 to vl3 vertices 2"))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimJoint("hanim_vl4").setName("vl3").setDEF("hanim_vl3").setCenter(new double[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat296().getArray()).setLlimit(new MFFloat297().getArray())
                  .addChild(new HAnimSegment("hanim_vl3").setName("l3").setDEF("hanim_l3")
                    .addChild(new Transform().setTranslation(new double[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32298().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray()))
                        .addComments(new CommentsBlock("from vl3 to vl2 vertices 2"))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint("hanim_vl3").setName("vl2").setDEF("hanim_vl2").setCenter(new double[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat300().getArray()).setLlimit(new MFFloat301().getArray())
                    .addChild(new HAnimSegment("hanim_vl2").setName("l2").setDEF("hanim_l2")
                      .addChild(new Transform().setTranslation(new double[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform"))
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32302().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f303().getArray()))
                          .addComments(new CommentsBlock("from vl2 to vl1 vertices 2"))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimSite("hanim_l2").setName("l_rib10").setDEF("hanim_l_rib10").setTranslation(new double[] {0.0871f,1.1925f,0.0992f})
                        .addChild(new TouchSensor().setDescription("HAnimSite 28 l_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString304().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                      .addChild(new HAnimSite("hanim_l2").setName("r_rib10").setDEF("hanim_r_rib10").setTranslation(new double[] {-0.0711f,1.1941f,0.1016f})
                        .addChild(new TouchSensor().setDescription("HAnimSite 30 r_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString305().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                      .addChild(new HAnimSite("hanim_l2").setName("spine_2_middle_back").setDEF("hanim_spine_2_middle_back")
                        .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString306().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035f)))))))
                    .addChild(new HAnimJoint("hanim_vl2").setName("vl1").setDEF("hanim_vl1").setCenter(new double[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat307().getArray()).setLlimit(new MFFloat308().getArray())
                      .addChild(new HAnimSegment("hanim_vl1").setName("l1").setDEF("hanim_l1")
                        .addChild(new Transform().setTranslation(new double[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32309().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))
                            .addComments(new CommentsBlock("from vl1 to vt12 vertices 2"))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_vl1").setName("vt12").setDEF("hanim_vt12").setCenter(new double[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat311().getArray()).setLlimit(new MFFloat312().getArray())
                        .addChild(new HAnimSegment("hanim_vt12").setName("t12").setDEF("hanim_t12")
                          .addChild(new Transform().setTranslation(new double[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))
                              .addComments(new CommentsBlock("from vt12 to vt11 vertices 2"))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_vt12").setName("vt11").setDEF("hanim_vt11").setCenter(new double[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat315().getArray()).setLlimit(new MFFloat316().getArray())
                          .addChild(new HAnimSegment("hanim_vt11").setName("t11").setDEF("hanim_t11")
                            .addChild(new Transform().setTranslation(new double[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32317().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))
                                .addComments(new CommentsBlock("from vt11 to vt10 vertices 2"))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_vt11").setName("vt10").setDEF("hanim_vt10").setCenter(new double[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat319().getArray()).setLlimit(new MFFloat320().getArray())
                            .addChild(new HAnimSegment("hanim_vt10").setName("t10").setDEF("hanim_t10")
                              .addChild(new Transform().setTranslation(new double[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32321().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray()))
                                  .addComments(new CommentsBlock("from vt10 to vt9 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_t10").setName("substernale").setDEF("hanim_substernale").setTranslation(new double[] {0.0085f,1.2995f,0.1147f})
                                .addChild(new TouchSensor().setDescription("HAnimSite 13 substernale"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                .addChild(new Billboard()
                                  .addChild(new Shape()
                                    .setGeometry(new Text().setString(new MFString323().getArray())
                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                            .addChild(new HAnimJoint("hanim_vt10").setName("vt9").setDEF("hanim_vt9").setCenter(new double[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat324().getArray()).setLlimit(new MFFloat325().getArray())
                              .addChild(new HAnimSegment("hanim_vt9").setName("t9").setDEF("hanim_t9")
                                .addChild(new Transform().setTranslation(new double[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32326().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f327().getArray()))
                                    .addComments(new CommentsBlock("from vt9 to vt8 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_t9").setName("l_thelion").setDEF("hanim_l_thelion").setTranslation(new double[] {0.0918f,1.3382f,0.1192f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 29 l_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                  .addChild(new Billboard()
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString328().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                .addChild(new HAnimSite("hanim_t9").setName("r_thelion").setDEF("hanim_r_thelion").setTranslation(new double[] {-0.0736f,1.3385f,0.1217f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite 31 r_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                  .addChild(new Billboard()
                                    .addChild(new Shape()
                                      .setGeometry(new Text().setString(new MFString329().getArray())
                                        .setFontStyle(new FontStyle().setSize(0.035f)))))))
                              .addChild(new HAnimJoint("hanim_vt9").setName("vt8").setDEF("hanim_vt8").setCenter(new double[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat330().getArray()).setLlimit(new MFFloat331().getArray())
                                .addChild(new HAnimSegment("hanim_vt8").setName("t8").setDEF("hanim_t8")
                                  .addChild(new Transform().setTranslation(new double[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Transform()
                                      .addComments(new CommentsBlock("Empty Transform"))
                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32332().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f333().getArray()))
                                      .addComments(new CommentsBlock("from vt8 to vt7 vertices 2"))
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimJoint("hanim_vt8").setName("vt7").setDEF("hanim_vt7").setCenter(new double[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat334().getArray()).setLlimit(new MFFloat335().getArray())
                                  .addChild(new HAnimSegment("hanim_vt7").setName("t7").setDEF("hanim_t7")
                                    .addChild(new Transform().setTranslation(new double[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Transform()
                                        .addComments(new CommentsBlock("Empty Transform"))
                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32336().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f337().getArray()))
                                        .addComments(new CommentsBlock("from vt7 to vt6 vertices 2"))
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                  .addChild(new HAnimJoint("hanim_vt7").setName("vt6").setDEF("hanim_vt6").setCenter(new double[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat338().getArray()).setLlimit(new MFFloat339().getArray())
                                    .addChild(new HAnimSegment("hanim_vt6").setName("t6").setDEF("hanim_t6")
                                      .addChild(new Transform().setTranslation(new double[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Transform()
                                          .addComments(new CommentsBlock("Empty Transform"))
                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32340().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))
                                          .addComments(new CommentsBlock("from vt6 to vt5 vertices 2"))
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                      .addChild(new HAnimSite("hanim_t6").setName("l_chest_midsagittal_plane").setDEF("hanim_l_chest_midsagittal_plane")
                                        .addChild(new TouchSensor().setDescription("HAnimSite 94 l_chest_midsagittal_plane"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString342().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                                      .addChild(new HAnimSite("hanim_t6").setName("mesosternale").setDEF("hanim_mesosternale")
                                        .addChild(new TouchSensor().setDescription("HAnimSite 88 mesosternale"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString343().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                                      .addChild(new HAnimSite("hanim_t6").setName("r_chest_midsagittal_plane").setDEF("hanim_r_chest_midsagittal_plane")
                                        .addChild(new TouchSensor().setDescription("HAnimSite 95 r_chest_midsagittal_plane"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString344().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                                      .addChild(new HAnimSite("hanim_t6").setName("rear_center_midsagittal_plane").setDEF("hanim_rear_center_midsagittal_plane")
                                        .addChild(new TouchSensor().setDescription("HAnimSite 92 rear_center_midsagittal_plane"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                        .addChild(new Billboard()
                                          .addChild(new Shape()
                                            .setGeometry(new Text().setString(new MFString345().getArray())
                                              .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                    .addChild(new HAnimJoint("hanim_vt6").setName("vt5").setDEF("hanim_vt5").setCenter(new double[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat346().getArray()).setLlimit(new MFFloat347().getArray())
                                      .addChild(new HAnimSegment("hanim_vt5").setName("t5").setDEF("hanim_t5")
                                        .addChild(new Transform().setTranslation(new double[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Transform()
                                            .addComments(new CommentsBlock("Empty Transform"))
                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32348().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f349().getArray()))
                                            .addComments(new CommentsBlock("from vt5 to vt4 vertices 2"))
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                        .addChild(new HAnimSite("hanim_t5").setName("spine_1_middle_back").setDEF("hanim_spine_1_middle_back")
                                          .addChild(new TouchSensor().setDescription("HAnimSite 24 spine_1_middle_back"))
                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                          .addChild(new Billboard()
                                            .addChild(new Shape()
                                              .setGeometry(new Text().setString(new MFString350().getArray())
                                                .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName("vt4").setDEF("hanim_vt4").setCenter(new double[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat351().getArray()).setLlimit(new MFFloat352().getArray())
                                        .addChild(new HAnimSegment("hanim_vt4").setName("t4").setDEF("hanim_t4")
                                          .addChild(new Transform().setTranslation(new double[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Transform()
                                              .addComments(new CommentsBlock("Empty Transform"))
                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32353().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))
                                              .addComments(new CommentsBlock("from vt4 to vt3 vertices 2"))
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName("vt3").setDEF("hanim_vt3").setCenter(new double[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat355().getArray()).setLlimit(new MFFloat356().getArray())
                                          .addChild(new HAnimSegment("hanim_vt3").setName("t3").setDEF("hanim_t3")
                                            .addChild(new Transform().setTranslation(new double[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Transform()
                                                .addComments(new CommentsBlock("Empty Transform"))
                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32357().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f358().getArray()))
                                                .addComments(new CommentsBlock("from vt3 to vt2 vertices 2"))
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName("vt2").setDEF("hanim_vt2").setCenter(new double[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat359().getArray()).setLlimit(new MFFloat360().getArray())
                                            .addChild(new HAnimSegment("hanim_vt2").setName("t2").setDEF("hanim_t2")
                                              .addChild(new Transform().setTranslation(new double[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Transform()
                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32361().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f362().getArray()))
                                                  .addComments(new CommentsBlock("from vt2 to vt1 vertices 2"))
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                            .addChild(new HAnimJoint("hanim_vt2").setName("vt1").setDEF("hanim_vt1").setCenter(new double[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat363().getArray()).setLlimit(new MFFloat364().getArray())
                                              .addChild(new HAnimSegment("hanim_vt1").setName("t1").setDEF("hanim_t1")
                                                .addChild(new Transform().setTranslation(new double[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Transform()
                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32365().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f366().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to vc7 vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite("hanim_t1").setName("cervicale").setDEF("hanim_cervicale").setTranslation(new double[] {0.0064f,1.52f,-0.0815f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite 10 cervicale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                  .addChild(new Billboard()
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString367().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                .addChild(new HAnimSite("hanim_t1").setName("suprasternale").setDEF("hanim_suprasternale").setTranslation(new double[] {0.0084f,1.4714f,0.0551f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite 12 suprasternale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                  .addChild(new Billboard()
                                                    .addChild(new Shape()
                                                      .setGeometry(new Text().setString(new MFString368().getArray())
                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32369().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f370().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to l_sternoclavicular vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32371().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f372().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to r_sternoclavicular vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("vc7").setDEF("hanim_vc7").setCenter(new double[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                                                .addChild(new HAnimSegment("hanim_vc7").setName("c7").setDEF("hanim_c7")
                                                  .addChild(new Transform().setTranslation(new double[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32375().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))
                                                      .addComments(new CommentsBlock("from vc7 to vc6 vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimSite("hanim_c7").setName("l_neck_base").setDEF("hanim_l_neck_base").setTranslation(new double[] {0.0646f,1.5141f,-0.038f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 82 l_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString377().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_c7").setName("r_neck_base").setDEF("hanim_r_neck_base").setTranslation(new double[] {-0.0419f,1.5149f,-0.022f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 83 r_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString378().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName("vc6").setDEF("hanim_vc6").setCenter(new double[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat379().getArray()).setLlimit(new MFFloat380().getArray())
                                                  .addChild(new HAnimSegment("hanim_vc6").setName("c6").setDEF("hanim_c6")
                                                    .addChild(new Transform().setTranslation(new double[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32381().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f382().getArray()))
                                                        .addComments(new CommentsBlock("from vc6 to vc5 vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName("vc5").setDEF("hanim_vc5").setCenter(new double[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat383().getArray()).setLlimit(new MFFloat384().getArray())
                                                    .addChild(new HAnimSegment("hanim_vc5").setName("c5").setDEF("hanim_c5")
                                                      .addChild(new Transform().setTranslation(new double[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32385().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f386().getArray()))
                                                          .addComments(new CommentsBlock("from vc5 to vc4 vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName("vc4").setDEF("hanim_vc4").setCenter(new double[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat387().getArray()).setLlimit(new MFFloat388().getArray())
                                                      .addChild(new HAnimSegment("hanim_vc4").setName("c4").setDEF("hanim_c4")
                                                        .addChild(new Transform().setTranslation(new double[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32389().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f390().getArray()))
                                                            .addComments(new CommentsBlock("from vc4 to vc3 vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName("vc3").setDEF("hanim_vc3").setCenter(new double[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat391().getArray()).setLlimit(new MFFloat392().getArray())
                                                        .addChild(new HAnimSegment("hanim_vc3").setName("c3").setDEF("hanim_c3")
                                                          .addChild(new Transform().setTranslation(new double[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Transform()
                                                              .addComments(new CommentsBlock("Empty Transform"))
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32393().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f394().getArray()))
                                                              .addComments(new CommentsBlock("from vc3 to vc2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName("vc2").setDEF("hanim_vc2").setCenter(new double[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat395().getArray()).setLlimit(new MFFloat396().getArray())
                                                          .addChild(new HAnimSegment("hanim_vc2").setName("c2").setDEF("hanim_c2")
                                                            .addChild(new Transform().setTranslation(new double[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32397().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))
                                                                .addComments(new CommentsBlock("from vc2 to vc1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_c2").setName("adams_apple").setDEF("hanim_adams_apple")
                                                              .addChild(new TouchSensor().setDescription("HAnimSite 11 adams_apple"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                              .addChild(new Billboard()
                                                                .addChild(new Shape()
                                                                  .setGeometry(new Text().setString(new MFString399().getArray())
                                                                    .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName("vc1").setDEF("hanim_vc1").setCenter(new double[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat400().getArray()).setLlimit(new MFFloat401().getArray())
                                                            .addChild(new HAnimSegment("hanim_vc1").setName("c1").setDEF("hanim_c1")
                                                              .addChild(new Transform().setTranslation(new double[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32402().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f403().getArray()))
                                                                  .addComments(new CommentsBlock("from vc1 to skullbase vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName("skullbase").setDEF("hanim_skullbase").setCenter(new double[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat404().getArray()).setLlimit(new MFFloat405().getArray())
                                                              .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                                                                .addChild(new Transform().setTranslation(new double[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32406().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyelid_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("glabella").setDEF("hanim_glabella")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 1 glabella"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString408().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_ectocanthus").setDEF("hanim_l_ectocanthus")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 85 l_ectocanthus"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString409().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_infraorbitale").setDEF("hanim_l_infraorbitale").setTranslation(new double[] {0.0341f,1.6171f,0.0752f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 3 l_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString410().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_tragion").setDEF("hanim_l_tragion").setTranslation(new double[] {0.0739f,1.6348f,0.0282f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 4 l_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString411().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("nuchale").setDEF("hanim_nuchale").setTranslation(new double[] {0.0039f,1.5972f,-0.0796f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 81 nuchale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString412().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("opisthocranion").setDEF("hanim_opisthocranion")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 89 opisthocranion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString413().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_ectocanthus").setDEF("hanim_r_ectocanthus")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 86 r_ectocanthus"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString414().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_infraorbitale").setDEF("hanim_r_infraorbitale").setTranslation(new double[] {-0.0237f,1.6171f,0.0752f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 6 r_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString415().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_tragion").setDEF("hanim_r_tragion").setTranslation(new double[] {-0.0646f,1.6347f,0.0302f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 7 r_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString416().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("sellion").setDEF("hanim_sellion").setTranslation(new double[] {0.0058f,1.6316f,0.0852f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 2 sellion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString417().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("skull_vertex").setDEF("hanim_skull_vertex").setTranslation(new double[] {0.005f,1.7504f,0.0055f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite 0 skull_vertex"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                  .addChild(new Billboard()
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new Text().setString(new MFString418().getArray())
                                                                        .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32419().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f420().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyelid_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32421().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyeball_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32423().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f424().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyeball_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32425().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f426().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyebrow_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32427().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyebrow_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32429().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f430().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to temporomandibular vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new double[] {0.0503f,1.4157f,-0.0689f}).setUlimit(new MFFloat431().getArray()).setLlimit(new MFFloat432().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new double[] {-0.0507f,1.4157f,-0.0689f}).setUlimit(new MFFloat433().getArray()).setLlimit(new MFFloat434().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new double[] {0.0479f,1.3963f,-0.0188f}).setUlimit(new MFFloat435().getArray()).setLlimit(new MFFloat436().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new double[] {-0.0483f,1.3963f,-0.0188f}).setUlimit(new MFFloat437().getArray()).setLlimit(new MFFloat438().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new double[] {0.0216f,1.4053f,0.0051f}).setUlimit(new MFFloat439().getArray()).setLlimit(new MFFloat440().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new double[] {-0.0219f,1.4053f,0.0051f}).setUlimit(new MFFloat441().getArray()).setLlimit(new MFFloat442().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new double[] {-0.0002f,1.3043f,-0.0865f}).setUlimit(new MFFloat443().getArray()).setLlimit(new MFFloat444().getArray()))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new double[] {0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat445().getArray()).setLlimit(new MFFloat446().getArray())
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addChild(new Transform().setTranslation(new double[] {0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32447().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f448().getArray()))
                                                      .addComments(new CommentsBlock("from l_sternoclavicular to l_acromioclavicular vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName("l_acromion").setDEF("hanim_l_acromion").setTranslation(new double[] {0.2032f,1.476f,-0.049f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 15 l_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString449().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName("l_axilla_distal").setDEF("hanim_l_axilla_distal").setTranslation(new double[] {0.1706f,1.4072f,-0.0875f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 17 l_axilla_distal"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString450().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName("l_axilla_posterior_folds").setDEF("hanim_l_axilla_posterior_folds")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 18 l_axilla_posterior_folds"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString451().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName("l_axilla_proximal").setDEF("hanim_l_axilla_proximal").setTranslation(new double[] {0.1777f,1.4065f,-0.0075f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 16 l_axilla_proximal"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString452().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setName("l_clavicale").setDEF("hanim_l_clavicale").setTranslation(new double[] {0.0271f,1.4943f,0.0394f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 14 l_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString453().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new double[] {0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat454().getArray()).setLlimit(new MFFloat455().getArray())
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addChild(new Transform().setTranslation(new double[] {0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32456().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f457().getArray()))
                                                        .addComments(new CommentsBlock("from l_acromioclavicular to l_shoulder vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new double[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat458().getArray()).setLlimit(new MFFloat459().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addChild(new Transform().setTranslation(new double[] {0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32460().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f461().getArray()))
                                                          .addComments(new CommentsBlock("from l_shoulder to l_elbow vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_bideltoid").setDEF("hanim_l_bideltoid")
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 96 l_bideltoid"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString462().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_humeral_lateral_epicondyles").setDEF("hanim_l_humeral_lateral_epicondyles").setTranslation(new double[] {0.228f,1.1482f,-0.11f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 63 l_humeral_lateral_epicondyles"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString463().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new double[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat464().getArray()).setLlimit(new MFFloat465().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addChild(new Transform().setTranslation(new double[] {0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32466().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray()))
                                                            .addComments(new CommentsBlock("from l_elbow to l_radiocarpal vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_humeral_medial_epicondyles").setDEF("hanim_l_humeral_medial_epicondyles").setTranslation(new double[] {0.1735f,1.1272f,-0.1113f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 64 l_humeral_medial_epicondyles"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString468().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_olecranon").setDEF("hanim_l_olecranon").setTranslation(new double[] {-0.1962f,1.1375f,-0.1123f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 65 l_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString469().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_radial_styloid").setDEF("hanim_l_radial_styloid").setTranslation(new double[] {0.1901f,0.8645f,-0.0415f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 71 l_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString470().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_radiale").setDEF("hanim_l_radiale").setTranslation(new double[] {0.2182f,1.1212f,-0.1167f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 69 l_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString471().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new double[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat472().getArray()).setLlimit(new MFFloat473().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                                                          .addChild(new Transform().setScale(new double[] {0.2f,0.2f,0.2f}).setTranslation(new double[] {0.2f,0.85f,-0.05f}).setRotation(new double[] {0f,0f,1f,-3.14f})
                                                            .addComments(new CommentsBlock("Transform left hand"))
                                                            .addChild(new Transform().setRotation(new double[] {0f,1f,0f,-1.57f})
                                                              .addComments(new CommentsBlock("Transform left hand"))
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32474().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f475().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_1 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setName("l_ulnar_styloid").setDEF("hanim_l_ulnar_styloid").setTranslation(new double[] {-0.2142f,0.8529f,-0.0648f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite 70 l_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Billboard()
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString476().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32477().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f478().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32479().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_3 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32481().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_4_5 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new double[] {0.1811f,0.6975f,-0.0826f}).setUlimit(new MFFloat483().getArray()).setLlimit(new MFFloat484().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName("l_trapezium").setDEF("hanim_l_trapezium")
                                                            .addChild(new Transform().setTranslation(new double[] {0.1811f,0.6975f,-0.0826f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32485().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f486().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new double[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat487().getArray()).setLlimit(new MFFloat488().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1924f,0.8472f,-0.0534f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32489().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new double[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat491().getArray()).setLlimit(new MFFloat492().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1951f,0.8226f,0.0246f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32493().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new double[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat495().getArray()).setLlimit(new MFFloat496().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new double[] {0.1811f,0.6984f,-0.0935f}).setUlimit(new MFFloat497().getArray()).setLlimit(new MFFloat498().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                                                            .addChild(new Transform().setTranslation(new double[] {0.1811f,0.6984f,-0.0935f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32499().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new double[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat501().getArray()).setLlimit(new MFFloat502().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1983f,0.8024f,-0.028f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32503().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_2").setName("l_metacarpal_phalanx_2").setDEF("hanim_l_metacarpal_phalanx_2").setTranslation(new double[] {0.2009f,0.8139f,-0.0237f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 75 l_metacarpal_phalanx_2"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString505().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new double[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat506().getArray()).setLlimit(new MFFloat507().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1983f,0.7815f,-0.028f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32508().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f509().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new double[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat510().getArray()).setLlimit(new MFFloat511().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.2017f,0.7363f,-0.0248f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32512().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f513().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new double[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat514().getArray()).setLlimit(new MFFloat515().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new double[] {0.1809f,0.7f,-0.1067f}).setUlimit(new MFFloat516().getArray()).setLlimit(new MFFloat517().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName("l_capitate").setDEF("hanim_l_capitate")
                                                            .addChild(new Transform().setTranslation(new double[] {0.1809f,0.7f,-0.1067f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32518().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f519().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new double[] {0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat520().getArray()).setLlimit(new MFFloat521().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1987f,0.8029f,-0.053f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32522().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f523().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_3").setName("l_metacarpal_phalanx_3").setDEF("hanim_l_metacarpal_phalanx_3")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 76 l_metacarpal_phalanx_3"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString524().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new double[] {0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat525().getArray()).setLlimit(new MFFloat526().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1987f,0.7818f,-0.053f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32527().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f528().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new double[] {0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat529().getArray()).setLlimit(new MFFloat530().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.2013f,0.7273f,-0.0503f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32531().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f532().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new double[] {0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat533().getArray()).setLlimit(new MFFloat534().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new double[] {0.1809f,0.6973f,-0.1276f}).setUlimit(new MFFloat535().getArray()).setLlimit(new MFFloat536().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName("l_hamate").setDEF("hanim_l_hamate")
                                                            .addChild(new Transform().setTranslation(new double[] {0.1809f,0.6973f,-0.1276f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32537().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f538().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32539().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f540().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new double[] {0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat541().getArray()).setLlimit(new MFFloat542().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1956f,0.8019f,-0.0794f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32543().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f544().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new double[] {0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat545().getArray()).setLlimit(new MFFloat546().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1956f,0.7815f,-0.0794f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32547().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f548().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new double[] {0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat549().getArray()).setLlimit(new MFFloat550().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1973f,0.7287f,-0.0777f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32551().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f552().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new double[] {0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat553().getArray()).setLlimit(new MFFloat554().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new double[] {0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat555().getArray()).setLlimit(new MFFloat556().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1925f,0.8066f,-0.1036f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32557().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f558().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpal_5").setName("l_metacarpal_phalanx_5").setDEF("hanim_l_metacarpal_phalanx_5").setTranslation(new double[] {0.1929f,0.786f,-0.1122f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 77 l_metacarpal_phalanx_5"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString559().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new double[] {0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat560().getArray()).setLlimit(new MFFloat561().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1925f,0.7866f,-0.1036f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32562().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f563().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new double[] {0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat564().getArray()).setLlimit(new MFFloat565().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1938f,0.7452f,-0.1024f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32566().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f567().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new double[] {0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat568().getArray()).setLlimit(new MFFloat569().getArray())))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new double[] {-0.0694f,1.46f,-0.033f}).setUlimit(new MFFloat570().getArray()).setLlimit(new MFFloat571().getArray())
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addChild(new Transform().setTranslation(new double[] {-0.0694f,1.46f,-0.033f})
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32572().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f573().getArray()))
                                                      .addComments(new CommentsBlock("from r_sternoclavicular to r_acromioclavicular vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName("r_acromion").setDEF("hanim_r_acromion").setTranslation(new double[] {-0.1905f,1.4791f,-0.0431f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 20 r_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString574().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName("r_axilla_distal").setDEF("hanim_r_axilla_distal").setTranslation(new double[] {-0.1603f,1.4098f,-0.0826f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 22 r_axilla_distal"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString575().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName("r_axilla_posterior_folds").setDEF("hanim_r_axilla_posterior_folds")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 23 r_axilla_posterior_folds"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString576().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName("r_axilla_proximal").setDEF("hanim_r_axilla_proximal").setTranslation(new double[] {-0.1626f,1.4072f,-0.0031f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 21 r_axilla_proximal"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString577().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setName("r_clavicale").setDEF("hanim_r_clavicale").setTranslation(new double[] {-0.0115f,1.4943f,0.04f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite 19 r_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                    .addChild(new Billboard()
                                                      .addChild(new Shape()
                                                        .setGeometry(new Text().setString(new MFString578().getArray())
                                                          .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new double[] {-0.0836f,1.4281f,-0.0401f}).setUlimit(new MFFloat579().getArray()).setLlimit(new MFFloat580().getArray())
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addChild(new Transform().setTranslation(new double[] {-0.0836f,1.4281f,-0.0401f})
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32581().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f582().getArray()))
                                                        .addComments(new CommentsBlock("from r_acromioclavicular to r_shoulder vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new double[] {-0.1907f,1.4407f,-0.0325f}).setUlimit(new MFFloat583().getArray()).setLlimit(new MFFloat584().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addChild(new Transform().setTranslation(new double[] {-0.1907f,1.4407f,-0.0325f})
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32585().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f586().getArray()))
                                                          .addComments(new CommentsBlock("from r_shoulder to r_elbow vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_bideltoid").setDEF("hanim_r_bideltoid")
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 97 r_bideltoid"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString587().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_humeral_lateral_epicondyles").setDEF("hanim_r_humeral_lateral_epicondyles").setTranslation(new double[] {-0.2224f,1.1517f,-0.1033f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite 66 r_humeral_lateral_epicondyles"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                        .addChild(new Billboard()
                                                          .addChild(new Shape()
                                                            .setGeometry(new Text().setString(new MFString588().getArray())
                                                              .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new double[] {-0.1949f,1.1388f,-0.062f}).setUlimit(new MFFloat589().getArray()).setLlimit(new MFFloat590().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addChild(new Transform().setTranslation(new double[] {-0.1949f,1.1388f,-0.062f})
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32591().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f592().getArray()))
                                                            .addComments(new CommentsBlock("from r_elbow to r_radiocarpal vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_humeral_medial_epicondyles").setDEF("hanim_r_humeral_medial_epicondyles").setTranslation(new double[] {-0.168f,1.1298f,-0.1062f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 67 r_humeral_medial_epicondyles"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString593().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_olecranon").setDEF("hanim_r_olecranon").setTranslation(new double[] {-0.1907f,1.1405f,-0.1065f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 68 r_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString594().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_radial_styloid").setDEF("hanim_r_radial_styloid").setTranslation(new double[] {-0.1884f,0.8676f,-0.036f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 74 r_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString595().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_radiale").setDEF("hanim_r_radiale").setTranslation(new double[] {-0.213f,1.1305f,-0.1091f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite 72 r_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                          .addChild(new Billboard()
                                                            .addChild(new Shape()
                                                              .setGeometry(new Text().setString(new MFString596().getArray())
                                                                .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new double[] {-0.1959f,0.8694f,-0.0521f}).setUlimit(new MFFloat597().getArray()).setLlimit(new MFFloat598().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setName("r_carpal").setDEF("hanim_r_carpal")
                                                          .addChild(new Transform().setScale(new double[] {0.2f,0.2f,0.2f}).setTranslation(new double[] {-0.2f,0.85f,-0.05f}).setRotation(new double[] {0f,0f,1f,-3.14f})
                                                            .addComments(new CommentsBlock("Transform right hand"))
                                                            .addChild(new Transform().setRotation(new double[] {0f,1f,0f,1.57f})
                                                              .addComments(new CommentsBlock("Transform right hand"))
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32599().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f600().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_1 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setName("r_ulnar_styloid").setDEF("hanim_r_ulnar_styloid").setTranslation(new double[] {-0.2117f,0.8562f,-0.0584f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite 73 r_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Billboard()
                                                              .addChild(new Shape()
                                                                .setGeometry(new Text().setString(new MFString601().getArray())
                                                                  .setFontStyle(new FontStyle().setSize(0.035f))))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32602().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f603().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32604().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f605().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_3 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32606().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f607().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_4_5 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new double[] {-0.1811f,0.6975f,-0.0826f}).setUlimit(new MFFloat608().getArray()).setLlimit(new MFFloat609().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName("r_trapezium").setDEF("hanim_r_trapezium")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1811f,0.6975f,-0.0826f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32610().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f611().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new double[] {-0.1899f,0.8502f,-0.0473f}).setUlimit(new MFFloat612().getArray()).setLlimit(new MFFloat613().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1899f,0.8502f,-0.0473f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32614().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f615().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new double[] {-0.1874f,0.8256f,0.0306f}).setUlimit(new MFFloat616().getArray()).setLlimit(new MFFloat617().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1874f,0.8256f,0.0306f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32618().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f619().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new double[] {-0.1864f,0.819f,0.0506f}).setUlimit(new MFFloat620().getArray()).setLlimit(new MFFloat621().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new double[] {-0.1811f,0.6984f,-0.0935f}).setUlimit(new MFFloat622().getArray()).setLlimit(new MFFloat623().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1811f,0.6984f,-0.0935f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32624().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f625().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new double[] {-0.1961f,0.8055f,-0.0218f}).setUlimit(new MFFloat626().getArray()).setLlimit(new MFFloat627().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1961f,0.8055f,-0.0218f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32628().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f629().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_2").setName("r_metacarpal_phalanx_2").setDEF("hanim_r_metacarpal_phalanx_2").setTranslation(new double[] {-0.1977f,0.8169f,-0.0177f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 78 r_metacarpal_phalanx_2"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString630().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new double[] {-0.1961f,0.7846f,-0.0218f}).setUlimit(new MFFloat631().getArray()).setLlimit(new MFFloat632().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1961f,0.7846f,-0.0218f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32633().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f634().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new double[] {-0.1954f,0.7393f,-0.0185f}).setUlimit(new MFFloat635().getArray()).setLlimit(new MFFloat636().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1954f,0.7393f,-0.0185f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32637().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f638().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new double[] {-0.1945f,0.7169f,-0.0173f}).setUlimit(new MFFloat639().getArray()).setLlimit(new MFFloat640().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new double[] {-0.1809f,0.7f,-0.1067f}).setUlimit(new MFFloat641().getArray()).setLlimit(new MFFloat642().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName("r_capitate").setDEF("hanim_r_capitate")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1809f,0.7f,-0.1067f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32643().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f644().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new double[] {-0.1972f,0.806f,-0.0468f}).setUlimit(new MFFloat645().getArray()).setLlimit(new MFFloat646().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1972f,0.806f,-0.0468f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32647().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f648().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_3").setName("r_metacarpal_phalanx_3").setDEF("hanim_r_metacarpal_phalanx_3")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 79 r_metacarpal_phalanx_3"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString649().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new double[] {-0.1972f,0.7849f,-0.0468f}).setUlimit(new MFFloat650().getArray()).setLlimit(new MFFloat651().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1972f,0.7849f,-0.0468f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32652().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f653().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new double[] {-0.195f,0.7304f,-0.0441f}).setUlimit(new MFFloat654().getArray()).setLlimit(new MFFloat655().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.195f,0.7304f,-0.0441f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32656().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f657().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new double[] {-0.1939f,0.7042f,-0.0432f}).setUlimit(new MFFloat658().getArray()).setLlimit(new MFFloat659().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new double[] {-0.1809f,0.6973f,-0.1276f}).setUlimit(new MFFloat660().getArray()).setLlimit(new MFFloat661().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName("r_hamate").setDEF("hanim_r_hamate")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1809f,0.6973f,-0.1276f})
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32662().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f663().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32664().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f665().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new double[] {-0.1951f,0.8049f,-0.0732f}).setUlimit(new MFFloat666().getArray()).setLlimit(new MFFloat667().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1951f,0.8049f,-0.0732f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32668().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f669().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new double[] {-0.1951f,0.7845f,-0.0732f}).setUlimit(new MFFloat670().getArray()).setLlimit(new MFFloat671().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1951f,0.7845f,-0.0732f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32672().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f673().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new double[] {-0.192f,0.7318f,-0.0716f}).setUlimit(new MFFloat674().getArray()).setLlimit(new MFFloat675().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.192f,0.7318f,-0.0716f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32676().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f677().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new double[] {-0.1908f,0.7077f,-0.0706f}).setUlimit(new MFFloat678().getArray()).setLlimit(new MFFloat679().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new double[] {-0.1926f,0.8096f,-0.0975f}).setUlimit(new MFFloat680().getArray()).setLlimit(new MFFloat681().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1926f,0.8096f,-0.0975f})
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32682().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f683().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpal_5").setName("r_metacarpal_phalanx_5").setDEF("hanim_r_metacarpal_phalanx_5").setTranslation(new double[] {-0.1929f,0.789f,-0.1064f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite 80 r_metacarpal_phalanx_5"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                .addChild(new Billboard()
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new Text().setString(new MFString684().getArray())
                                                                      .setFontStyle(new FontStyle().setSize(0.035f)))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new double[] {-0.1926f,0.7896f,-0.0975f}).setUlimit(new MFFloat685().getArray()).setLlimit(new MFFloat686().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1926f,0.7896f,-0.0975f})
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32687().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f688().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new double[] {-0.1902f,0.7483f,-0.0963f}).setUlimit(new MFFloat689().getArray()).setLlimit(new MFFloat690().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1902f,0.7483f,-0.0963f})
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32691().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f692().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new double[] {-0.1908f,0.754f,-0.096f}).setUlimit(new MFFloat693().getArray()).setLlimit(new MFFloat694().getArray())))))))))))))))))))))))))))))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_humanoid_root"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_sacroiliac"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_calcaneocuboid"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_transversetarsal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_calcaneocuboid"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_transversetarsal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt12"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt11"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt10"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt9"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt8"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt7"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt6"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc7"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc6"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_skullbase"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_eyelid_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_eyelid_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_eyeball_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_eyeball_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_eyebrow_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_eyebrow_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_temporomandibular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_sternoclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_acromioclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_sternoclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_acromioclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_sacrum"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_pelvis"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_navicular"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuneiform_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuneiform_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuneiform_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_calcaneus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuboid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_navicular"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_calcaneus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuboid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t12"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t11"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t10"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t9"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t8"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t7"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t6"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c7"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c6"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_skull"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_clavicle"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_scapula"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_trapezium"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_trapezoid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_capitate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_hamate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_clavicle"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_scapula"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_trapezium"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_trapezoid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_capitate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_hamate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_buttocks_standing_wall_contact_point"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_crotch"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_asis"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_iliocristale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_psis"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_trochanterion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_asis"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_iliocristale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_psis"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_trochanterion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_femoral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_femoral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_knee_crease"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_suprapatella"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_lateral_malleolus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_medial_malleolus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tibiale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_calcaneus_posterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_sphyrion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metatarsal_phalanx_1"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metatarsal_phalanx_5"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_femoral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_femoral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_knee_crease"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_suprapatella"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_lateral_malleolus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_medial_malleolus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tibiale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_calcaneus_posterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_sphyrion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metatarsal_phalanx_1"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metatarsal_phalanx_5"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_navel"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_waist_preferred_anterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_waist_preferred_posterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_rib10"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_rib10"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_spine_2_middle_back"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_substernale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_thelion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_thelion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_chest_midsagittal_plane"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_mesosternale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_chest_midsagittal_plane"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_rear_center_midsagittal_plane"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_spine_1_middle_back"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_cervicale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_suprasternale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_neck_base"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_neck_base"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_adams_apple"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_glabella"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_ectocanthus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_infraorbitale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tragion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_nuchale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_opisthocranion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_ectocanthus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_infraorbitale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tragion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_sellion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_skull_vertex"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_acromion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_distal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_posterior_folds"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_proximal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_clavicale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_bideltoid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_humeral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_humeral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_olecranon"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_radial_styloid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_radiale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_ulnar_styloid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metacarpal_phalanx_2"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metacarpal_phalanx_3"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metacarpal_phalanx_5"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_acromion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_distal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_posterior_folds"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_proximal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_clavicale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_bideltoid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_humeral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_humeral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_olecranon"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_radial_styloid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_radiale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_ulnar_styloid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metacarpal_phalanx_2"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metacarpal_phalanx_3"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metacarpal_phalanx_5"))));
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0f,0f,0.1f,0f,0f,0f,0.1f,0f,0f,0f,0.1f});
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1f,1f,0f,0f,1f,1f,0f,0f});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05f,0f,0f,0.05f,0f,0f});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA8 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1f,1f,0f,1f,1f,1f,0f,0.1f,1f,1f,0f,1f,1f,1f,0f,0.1f,1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0f,0.875f,0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.87f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.235f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
private class MFColor17 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f});
  }
}
private class MFColor18 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f});
  }
}
private class MFColor19 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,1f});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"93"});
  }
}
private class MFString32 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"38"});
  }
}
private class MFString33 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"32"});
  }
}
private class MFString34 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"33"});
  }
}
private class MFString35 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"34"});
  }
}
private class MFString36 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"42"});
  }
}
private class MFString37 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"35"});
  }
}
private class MFString38 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"36"});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"37"});
  }
}
private class MFString40 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"46"});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,0.9149f,0.0016f,-0.095f,0.9171f,0.0029f});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
  }
}
private class MFString47 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"40"});
  }
}
private class MFString48 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"39"});
  }
}
private class MFString49 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"90"});
  }
}
private class MFString50 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"41"});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
  }
}
private class MFString55 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"49"});
  }
}
private class MFString56 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"48"});
  }
}
private class MFString57 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"47"});
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1101f,0.0656f,-0.0736f,0.0781f,0.0283f,-0.097f});
  }
}
private class MFString62 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"58"});
  }
}
private class MFString63 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"50"});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1101f,0.0656f,-0.0736f,0.0889f,0.0494f,-0.1278f});
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f69 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0781f,0.0283f,-0.097f,0.0672f,0.0235f,-0.0835f});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0781f,0.0283f,-0.097f,0.0812f,0.025f,-0.0805f});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f73 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0781f,0.0283f,-0.097f,0.0928f,0.0248f,-0.0821f});
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0672f,0.0235f,-0.0835f,0.0644f,0.0147f,-0.0577f});
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f81 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0644f,0.0147f,-0.0577f,0.0619f,0.0059f,-0.0083f});
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f85 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0619f,0.0059f,-0.0083f,0.0619f,0.0059f,-0.0083f});
  }
}
private class MFString86 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"55"});
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
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0812f,0.025f,-0.0805f,0.08f,0.0175f,-0.0608f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.08f,0.0175f,-0.0608f,0.0824f,0.0064f,-0.004f});
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0824f,0.0064f,-0.004f,0.0841f,0.0041f,0.0121f});
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0841f,0.0041f,0.0121f,0.0841f,0.0013f,0.0216f});
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
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0928f,0.0248f,-0.0821f,0.0944f,0.0175f,-0.0625f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0944f,0.0175f,-0.0625f,0.0963f,0.0065f,-0.0065f});
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0963f,0.0065f,-0.0065f,0.0987f,0.0034f,0.0086f});
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0987f,0.0034f,0.0086f,0.1002f,0.0013f,0.0178f});
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0889f,0.0494f,-0.1278f,0.1105f,0.0267f,-0.0998f});
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat130 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f132 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1105f,0.0267f,-0.0998f,0.1063f,0.016f,-0.0634f});
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1105f,0.0267f,-0.0998f,0.1206f,0.0124f,-0.0671f});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1063f,0.016f,-0.0634f,0.1097f,0.0058f,-0.0107f});
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1097f,0.0058f,-0.0107f,0.114f,0.0037f,0.0044f});
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.114f,0.0037f,0.0044f,0.1155f,0.0008f,0.0118f});
  }
}
private class MFFloat147 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat148 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat149 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat150 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1206f,0.0124f,-0.0671f,0.1239f,0.0051f,-0.0153f});
  }
}
private class MFFloat153 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f156 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1239f,0.0051f,-0.0153f,0.1262f,0.0023f,-0.0077f});
  }
}
private class MFString157 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"56"});
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1262f,0.0023f,-0.0077f,0.1271f,0f,0f});
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat163 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat165 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f167 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.095f,0.9171f,0.0029f,-0.0867f,0.4913f,0.0318f});
  }
}
private class MFString168 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"44"});
  }
}
private class MFString169 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"43"});
  }
}
private class MFString170 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"91"});
  }
}
private class MFString171 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"45"});
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat173 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f175 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0867f,0.4913f,0.0318f,-0.0801f,0.0712f,-0.0766f});
  }
}
private class MFString176 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"53"});
  }
}
private class MFString177 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"52"});
  }
}
private class MFString178 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"51"});
  }
}
private class MFFloat179 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0801f,0.0712f,-0.0766f,-0.0781f,0.0283f,-0.097f});
  }
}
private class MFString183 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"62"});
  }
}
private class MFString184 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"54"});
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0801f,0.0712f,-0.0766f,-0.0889f,0.0494f,-0.1278f});
  }
}
private class MFFloat187 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0781f,0.0283f,-0.097f,-0.0672f,0.0235f,-0.0835f});
  }
}
private class MFInt32191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f192 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0781f,0.0283f,-0.097f,-0.0812f,0.025f,-0.0805f});
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0781f,0.0283f,-0.097f,-0.0928f,0.0248f,-0.0821f});
  }
}
private class MFFloat195 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0672f,0.0235f,-0.0835f,-0.0644f,0.0147f,-0.0577f});
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0644f,0.0147f,-0.0577f,-0.0619f,0.0059f,-0.0083f});
  }
}
private class MFFloat203 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0619f,0.0059f,-0.0083f,-0.0619f,0.0059f,-0.0083f});
  }
}
private class MFString207 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"59"});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat209 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f213 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0812f,0.025f,-0.0805f,-0.08f,0.0175f,-0.0608f});
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat215 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f217 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.08f,0.0175f,-0.0608f,-0.0823f,0.0064f,-0.004f});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f221 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0823f,0.0064f,-0.004f,-0.0841f,0.0041f,0.0121f});
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat223 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f225 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0841f,0.0041f,0.0121f,-0.0841f,0.0013f,0.0216f});
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat227 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat229 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f231 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0928f,0.0248f,-0.0821f,-0.0944f,0.0175f,-0.0625f});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat233 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f235 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0944f,0.0175f,-0.0625f,-0.0963f,0.0065f,-0.0065f});
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat237 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0963f,0.0065f,-0.0065f,-0.0987f,0.0034f,0.0086f});
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat241 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f243 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0987f,0.0034f,0.0086f,-0.1002f,0.0013f,0.0178f});
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat245 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f249 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0889f,0.0494f,-0.1278f,-0.1105f,0.0267f,-0.0998f});
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat251 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f253 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1105f,0.0267f,-0.0998f,-0.1063f,0.016f,-0.0634f});
  }
}
private class MFInt32254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f255 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1105f,0.0267f,-0.0998f,-0.1206f,0.0124f,-0.0671f});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat257 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f259 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1063f,0.016f,-0.0634f,-0.1097f,0.0058f,-0.0107f});
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat261 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f263 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1097f,0.0058f,-0.0107f,-0.114f,0.0037f,0.0044f});
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat265 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f267 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.114f,0.0037f,0.0044f,-0.1155f,0.0008f,0.0118f});
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat269 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat271 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f273 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1206f,0.0124f,-0.0671f,-0.1239f,0.0051f,-0.0153f});
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat275 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f277 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1239f,0.0051f,-0.0153f,-0.1262f,0.0023f,-0.0077f});
  }
}
private class MFString278 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"60"});
  }
}
private class MFFloat279 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1262f,0.0023f,-0.0077f,-0.1271f,0f,0f});
  }
}
private class MFFloat283 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat285 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
private class MFString289 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"84"});
  }
}
private class MFString290 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"26"});
  }
}
private class MFString291 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"27"});
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat293 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f295 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat297 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f299 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat301 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32302 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f303 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
private class MFString304 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"28"});
  }
}
private class MFString305 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"30"});
  }
}
private class MFString306 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {""});
  }
}
private class MFFloat307 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
  }
}
private class MFFloat311 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
  }
}
private class MFFloat315 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
  }
}
private class MFFloat319 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
private class MFString323 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"13"});
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat325 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f327 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
private class MFString328 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"29"});
  }
}
private class MFString329 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31"});
  }
}
private class MFFloat330 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat331 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32332 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f333 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
  }
}
private class MFFloat334 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat335 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f337 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
  }
}
private class MFFloat338 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat339 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32340 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f341 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
  }
}
private class MFString342 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"94"});
  }
}
private class MFString343 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"88"});
  }
}
private class MFString344 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"95"});
  }
}
private class MFString345 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"92"});
  }
}
private class MFFloat346 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat347 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32348 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f349 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
private class MFString350 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"24"});
  }
}
private class MFFloat351 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat352 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32353 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f354 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
  }
}
private class MFFloat355 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat356 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f358 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
private class MFFloat359 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat360 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32361 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f362 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
private class MFFloat363 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat364 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32365 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f366 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
private class MFString367 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10"});
  }
}
private class MFString368 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"12"});
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f370 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
private class MFInt32371 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f372 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0065f,1.4951f,-0.0387f,-0.0694f,1.46f,-0.033f});
  }
}
private class MFFloat373 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f376 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
private class MFString377 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"82"});
  }
}
private class MFString378 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"83"});
  }
}
private class MFFloat379 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat380 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32381 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f382 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
private class MFFloat383 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat384 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32385 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f386 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
private class MFFloat387 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat388 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32389 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f390 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
  }
}
private class MFFloat391 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat392 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32393 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f394 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
  }
}
private class MFFloat395 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat396 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32397 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f398 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
private class MFString399 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"11"});
  }
}
private class MFFloat400 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat401 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32402 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f403 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
private class MFFloat404 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat405 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32406 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f407 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,0.0503f,1.4157f,-0.0689f});
  }
}
private class MFString408 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1"});
  }
}
private class MFString409 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"85"});
  }
}
private class MFString410 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"3"});
  }
}
private class MFString411 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"4"});
  }
}
private class MFString412 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"81"});
  }
}
private class MFString413 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"89"});
  }
}
private class MFString414 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"86"});
  }
}
private class MFString415 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"6"});
  }
}
private class MFString416 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"7"});
  }
}
private class MFString417 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2"});
  }
}
private class MFString418 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"0"});
  }
}
private class MFInt32419 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f420 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,-0.0507f,1.4157f,-0.0689f});
  }
}
private class MFInt32421 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f422 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,0.0479f,1.3963f,-0.0188f});
  }
}
private class MFInt32423 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f424 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,-0.0483f,1.3963f,-0.0188f});
  }
}
private class MFInt32425 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f426 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,0.0216f,1.4053f,0.0051f});
  }
}
private class MFInt32427 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f428 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,-0.0219f,1.4053f,0.0051f});
  }
}
private class MFInt32429 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f430 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044f,1.6209f,0.0236f,-0.0002f,1.3043f,-0.0865f});
  }
}
private class MFFloat431 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat433 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat434 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat435 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat436 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat437 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat438 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat439 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat441 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat442 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat443 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat444 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat445 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat446 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32447 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f448 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
private class MFString449 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"15"});
  }
}
private class MFString450 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"17"});
  }
}
private class MFString451 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"18"});
  }
}
private class MFString452 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"16"});
  }
}
private class MFString453 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"14"});
  }
}
private class MFFloat454 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat455 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32456 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f457 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
private class MFFloat458 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat459 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32460 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f461 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
private class MFString462 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"96"});
  }
}
private class MFString463 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"63"});
  }
}
private class MFFloat464 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat465 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32466 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f467 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
private class MFString468 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"64"});
  }
}
private class MFString469 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"65"});
  }
}
private class MFString470 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"71"});
  }
}
private class MFString471 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"69"});
  }
}
private class MFFloat472 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat473 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32474 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f475 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984f,0.8663f,-0.0583f,0.1811f,0.6975f,-0.0826f});
  }
}
private class MFString476 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"70"});
  }
}
private class MFInt32477 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f478 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984f,0.8663f,-0.0583f,0.1811f,0.6984f,-0.0935f});
  }
}
private class MFInt32479 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f480 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984f,0.8663f,-0.0583f,0.1809f,0.7f,-0.1067f});
  }
}
private class MFInt32481 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f482 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984f,0.8663f,-0.0583f,0.1809f,0.6973f,-0.1276f});
  }
}
private class MFFloat483 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat484 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32485 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f486 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1811f,0.6975f,-0.0826f,0.1924f,0.8472f,-0.0534f});
  }
}
private class MFFloat487 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat488 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32489 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f490 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
private class MFFloat491 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat492 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32493 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f494 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
private class MFFloat495 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat496 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat497 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat498 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32499 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f500 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1811f,0.6984f,-0.0935f,0.1983f,0.8024f,-0.028f});
  }
}
private class MFFloat501 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat502 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32503 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f504 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
private class MFString505 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"75"});
  }
}
private class MFFloat506 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat507 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32508 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f509 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
  }
}
private class MFFloat510 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat511 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32512 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f513 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
private class MFFloat514 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat515 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat516 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat517 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32518 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f519 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1809f,0.7f,-0.1067f,0.1987f,0.8029f,-0.053f});
  }
}
private class MFFloat520 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat521 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32522 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f523 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
  }
}
private class MFString524 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"76"});
  }
}
private class MFFloat525 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat526 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32527 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f528 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
  }
}
private class MFFloat529 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat530 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32531 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f532 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
  }
}
private class MFFloat533 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat534 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat535 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f538 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1809f,0.6973f,-0.1276f,0.1956f,0.8019f,-0.0794f});
  }
}
private class MFInt32539 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f540 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1809f,0.6973f,-0.1276f,0.1925f,0.8066f,-0.1036f});
  }
}
private class MFFloat541 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat542 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32543 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f544 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
  }
}
private class MFFloat545 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat546 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32547 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f548 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
private class MFFloat549 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat550 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32551 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f552 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
  }
}
private class MFFloat553 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat554 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat555 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat556 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32557 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f558 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
private class MFString559 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"77"});
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat561 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32562 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f563 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
private class MFFloat564 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat565 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32566 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f567 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
private class MFFloat568 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat569 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat570 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat571 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32572 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f573 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0694f,1.46f,-0.033f,-0.0836f,1.4281f,-0.0401f});
  }
}
private class MFString574 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"20"});
  }
}
private class MFString575 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"22"});
  }
}
private class MFString576 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"23"});
  }
}
private class MFString577 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"21"});
  }
}
private class MFString578 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"19"});
  }
}
private class MFFloat579 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat580 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32581 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f582 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0836f,1.4281f,-0.0401f,-0.1907f,1.4407f,-0.0325f});
  }
}
private class MFFloat583 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat584 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32585 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f586 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1907f,1.4407f,-0.0325f,-0.1949f,1.1388f,-0.062f});
  }
}
private class MFString587 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"97"});
  }
}
private class MFString588 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"66"});
  }
}
private class MFFloat589 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat590 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32591 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f592 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1949f,1.1388f,-0.062f,-0.1959f,0.8694f,-0.0521f});
  }
}
private class MFString593 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"67"});
  }
}
private class MFString594 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"68"});
  }
}
private class MFString595 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"74"});
  }
}
private class MFString596 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"72"});
  }
}
private class MFFloat597 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat598 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32599 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f600 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959f,0.8694f,-0.0521f,-0.1811f,0.6975f,-0.0826f});
  }
}
private class MFString601 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"73"});
  }
}
private class MFInt32602 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f603 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959f,0.8694f,-0.0521f,-0.1811f,0.6984f,-0.0935f});
  }
}
private class MFInt32604 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f605 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959f,0.8694f,-0.0521f,-0.1809f,0.7f,-0.1067f});
  }
}
private class MFInt32606 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f607 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959f,0.8694f,-0.0521f,-0.1809f,0.6973f,-0.1276f});
  }
}
private class MFFloat608 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat609 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32610 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f611 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1811f,0.6975f,-0.0826f,-0.1899f,0.8502f,-0.0473f});
  }
}
private class MFFloat612 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat613 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32614 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f615 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1899f,0.8502f,-0.0473f,-0.1874f,0.8256f,0.0306f});
  }
}
private class MFFloat616 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat617 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32618 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f619 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1874f,0.8256f,0.0306f,-0.1864f,0.819f,0.0506f});
  }
}
private class MFFloat620 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat621 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat622 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat623 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32624 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f625 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1811f,0.6984f,-0.0935f,-0.1961f,0.8055f,-0.0218f});
  }
}
private class MFFloat626 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat627 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32628 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f629 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1961f,0.8055f,-0.0218f,-0.1961f,0.7846f,-0.0218f});
  }
}
private class MFString630 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"78"});
  }
}
private class MFFloat631 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat632 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32633 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f634 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1961f,0.7846f,-0.0218f,-0.1954f,0.7393f,-0.0185f});
  }
}
private class MFFloat635 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat636 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32637 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f638 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1954f,0.7393f,-0.0185f,-0.1945f,0.7169f,-0.0173f});
  }
}
private class MFFloat639 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat640 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat641 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat642 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32643 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f644 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1809f,0.7f,-0.1067f,-0.1972f,0.806f,-0.0468f});
  }
}
private class MFFloat645 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat646 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32647 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f648 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1972f,0.806f,-0.0468f,-0.1972f,0.7849f,-0.0468f});
  }
}
private class MFString649 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"79"});
  }
}
private class MFFloat650 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat651 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32652 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f653 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1972f,0.7849f,-0.0468f,-0.195f,0.7304f,-0.0441f});
  }
}
private class MFFloat654 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat655 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32656 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f657 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.195f,0.7304f,-0.0441f,-0.1939f,0.7042f,-0.0432f});
  }
}
private class MFFloat658 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat659 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat660 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat661 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32662 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f663 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1809f,0.6973f,-0.1276f,-0.1951f,0.8049f,-0.0732f});
  }
}
private class MFInt32664 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f665 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1809f,0.6973f,-0.1276f,-0.1926f,0.8096f,-0.0975f});
  }
}
private class MFFloat666 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat667 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32668 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f669 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1951f,0.8049f,-0.0732f,-0.1951f,0.7845f,-0.0732f});
  }
}
private class MFFloat670 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat671 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32672 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f673 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1951f,0.7845f,-0.0732f,-0.192f,0.7318f,-0.0716f});
  }
}
private class MFFloat674 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat675 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32676 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f677 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.192f,0.7318f,-0.0716f,-0.1908f,0.7077f,-0.0706f});
  }
}
private class MFFloat678 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat679 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat680 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat681 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32682 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f683 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1926f,0.8096f,-0.0975f,-0.1926f,0.7896f,-0.0975f});
  }
}
private class MFString684 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"80"});
  }
}
private class MFFloat685 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat686 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32687 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f688 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1926f,0.7896f,-0.0975f,-0.1902f,0.7483f,-0.0963f});
  }
}
private class MFFloat689 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat690 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32691 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f692 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1902f,0.7483f,-0.0963f,-0.1908f,0.754f,-0.096f});
  }
}
private class MFFloat693 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat694 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
}
