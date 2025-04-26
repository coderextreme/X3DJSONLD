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
public class Humanoid1 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Humanoid1().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Humanoid1.new.java.x3d");
    model.toFileJSON("../data/Humanoid1.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("Humanoid1.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("14 Jan 2023"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("9 November 2020"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Transform()
          .addComments("DEF for markerfor XYZ axes")
          .addChild(new Shape().setDEF("AxisLinesShape")
            .addComments("RGB lines showing XYZ axes")
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
              .setColor(new Color().setColor(new MFColor3().getArray())))))
        .addChild(new Group()
          .addComments("DEFS for markers of skeleton joints, segments, and sites")
          .addChild(new Transform()
            .addChild(new Transform().setTranslation(new double[] {0,2.1,0})
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.02))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new double[] {0,0,0})))))
            .addChild(new Transform().setTranslation(new double[] {0,2.05,0})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new double[] {0,2.1,0})
              .addChild(new Shape().setDEF("HAnimSiteShape")
                .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {1,1,1}).setTransparency(1)))))))
        .addChild(new NavigationInfo().setSpeed(1.5))
        .addChild(new Viewpoint().setPosition(new double[] {0,1,3}).setCenterOfRotation(new double[] {0,1,0}).setDescription("default"))
        .addChild(new HAnimHumanoid().setName("HAnim").setDEF("hanim_HAnim").setInfo(new MFString10().getArray()).setVersion("2.0")
          .addComments("<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)")
          .addComments("</LOD>")
          .addSkin(((Shape)new Shape().setDEF("SkinShape").setContainerFieldOverride("skin"))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray().append(new MFInt3212().getArray()).append(new MFInt3213().getArray()).append(new MFInt3214().getArray())).setCreaseAngle(3.1)
              .setCoord(new Coordinate().setDEF("TheSkinCoord").setPoint(new MFVec3f15().getArray().append(new MFVec3f16().getArray())))
              .setColor(new Color().setColor(new MFColor17().getArray().append(new MFColor18().getArray()).append(new MFColor19().getArray()))))
            .setAppearance(new Appearance().setDEF("SkinAppearance")
              .setTexture(new ImageTexture().setDEF("zBlueSpiralBkg2").setDescription("Blue Spiral Pattern").setUrl(new MFString20().getArray()))
              .setMaterial(new Material().setDEF("SkinMaterial").setAmbientIntensity(0.6).setDiffuseColor(new double[] {1,1,1}).setShininess(0.6).setTransparency(1))))
          .setSkinCoord(((Coordinate)new Coordinate().setContainerFieldOverride("skinCoord")).setUSE("TheSkinCoord"))
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_HAnim").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new double[] {0,0.824,0.0277}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray()).setContainerFieldOverride("skeleton"))
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new double[] {0,0.824,0.0277})
                .addChild(new Transform()
                  .addComments("Empty Transform")
                  .addChild(new Shape().setUSE("HAnimJointShape"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                  .addComments("from humanoid_root to sacroiliac vertices 2")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                  .addComments("from humanoid_root to vl5 vertices 2")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new double[] {0,0.9149,0.0016}).setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new double[] {0,0.9149,0.0016})
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                    .addComments("from sacroiliac to l_hip vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_pelvis").setName("buttocks_standing_wall_contact_point").setDEF("hanim_buttocks_standing_wall_contact_point")
                  .addChild(new TouchSensor().setDescription("HAnimSite 93 buttocks_standing_wall_contact_point"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString31().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("crotch").setDEF("hanim_crotch").setTranslation(new double[] {0.0034,0.8266,0.0257})
                  .addChild(new TouchSensor().setDescription("HAnimSite 38 crotch"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString32().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_asis").setDEF("hanim_l_asis").setTranslation(new double[] {0.0925,0.9983,0.1052})
                  .addChild(new TouchSensor().setDescription("HAnimSite 32 l_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString33().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_iliocristale").setDEF("hanim_l_iliocristale").setTranslation(new double[] {0.1612,1.0537,0.0008})
                  .addChild(new TouchSensor().setDescription("HAnimSite 33 l_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString34().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_psis").setDEF("hanim_l_psis").setTranslation(new double[] {0.0774,1.019,-0.1151})
                  .addChild(new TouchSensor().setDescription("HAnimSite 34 l_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString35().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_trochanterion").setDEF("hanim_l_trochanterion").setTranslation(new double[] {0.1677,0.8336,0.0303})
                  .addChild(new TouchSensor().setDescription("HAnimSite 42 l_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString36().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_asis").setDEF("hanim_r_asis").setTranslation(new double[] {-0.0887,1.0021,0.1112})
                  .addChild(new TouchSensor().setDescription("HAnimSite 35 r_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString37().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_iliocristale").setDEF("hanim_r_iliocristale").setTranslation(new double[] {-0.1525,1.0628,0.0035})
                  .addChild(new TouchSensor().setDescription("HAnimSite 36 r_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString38().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_psis").setDEF("hanim_r_psis").setTranslation(new double[] {-0.0716,1.019,-0.1138})
                  .addChild(new TouchSensor().setDescription("HAnimSite 37 r_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString39().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_trochanterion").setDEF("hanim_r_trochanterion").setTranslation(new double[] {-0.1689,0.8419,0.0352})
                  .addChild(new TouchSensor().setDescription("HAnimSite 46 r_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString40().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                    .addComments("from sacroiliac to r_hip vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new double[] {0.0961,0.9124,-0.0001}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new double[] {0.0961,0.9124,-0.0001})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))
                      .addComments("from l_hip to l_knee vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_lateral_epicondyles").setDEF("hanim_l_femoral_lateral_epicondyles").setTranslation(new double[] {0.1598,0.4967,0.0297})
                    .addChild(new TouchSensor().setDescription("HAnimSite 40 l_femoral_lateral_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString47().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_medial_epicondyles").setDEF("hanim_l_femoral_medial_epicondyles").setTranslation(new double[] {0.0398,0.4946,0.0303})
                    .addChild(new TouchSensor().setDescription("HAnimSite 39 l_femoral_medial_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString48().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_knee_crease").setDEF("hanim_l_knee_crease").setTranslation(new double[] {0.0993,0.4881,-0.0309})
                    .addChild(new TouchSensor().setDescription("HAnimSite 90 l_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString49().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_suprapatella").setDEF("hanim_l_suprapatella")
                    .addChild(new TouchSensor().setDescription("HAnimSite 41 l_suprapatella"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString50().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035)))))))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new double[] {0.104,0.4867,0.0308}).setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new double[] {0.104,0.4867,0.0308})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                        .addComments("from l_knee to l_talocrural vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_lateral_malleolus").setDEF("hanim_l_lateral_malleolus").setTranslation(new double[] {0.1308,0.0597,-0.1032})
                      .addChild(new TouchSensor().setDescription("HAnimSite 49 l_lateral_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString55().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_medial_malleolus").setDEF("hanim_l_medial_malleolus").setTranslation(new double[] {0.089,0.0716,-0.0881})
                      .addChild(new TouchSensor().setDescription("HAnimSite 48 l_medial_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString56().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_tibiale").setDEF("hanim_l_tibiale")
                      .addChild(new TouchSensor().setDescription("HAnimSite 47 l_tibiale"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString57().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035)))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new double[] {0.1101,0.0656,-0.0736}).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setScale(new double[] {0.15,0.15,0.15}).setTranslation(new double[] {0.08,0.06,-0.025}).setRotation(new double[] {1,0,0,-1.57})
                        .addComments("Transform left foot")
                        .addChild(new Transform()
                          .addComments("Empty Transform left foot")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3260().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))
                          .addComments("from l_talocrural to l_metatarsophalangeal_2 vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimSite("hanim_l_talus").setName("l_calcaneus_posterior").setDEF("hanim_l_calcaneus_posterior").setTranslation(new double[] {0.0974,0.0259,-0.1171})
                        .addChild(new TouchSensor().setDescription("HAnimSite 58 l_calcaneus_posterior"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString62().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new HAnimSite("hanim_l_talus").setName("l_sphyrion").setDEF("hanim_l_sphyrion").setTranslation(new double[] {0.089,0.0575,-0.0943})
                        .addChild(new TouchSensor().setDescription("HAnimSite 50 l_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString63().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035)))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new double[] {0.0824,0.0064,-0.004}).setUlimit(new MFFloat64().getArray()).setLlimit(new MFFloat65().getArray())))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new double[] {-0.095,0.9171,0.0029}).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new double[] {-0.095,0.9171,0.0029})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3268().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray()))
                      .addComments("from r_hip to r_knee vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_lateral_epicondyles").setDEF("hanim_r_femoral_lateral_epicondyles").setTranslation(new double[] {-0.1421,0.4992,0.031})
                    .addChild(new TouchSensor().setDescription("HAnimSite 44 r_femoral_lateral_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString70().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_medial_epicondyles").setDEF("hanim_r_femoral_medial_epicondyles").setTranslation(new double[] {-0.0221,0.5014,0.0289})
                    .addChild(new TouchSensor().setDescription("HAnimSite 43 r_femoral_medial_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString71().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_knee_crease").setDEF("hanim_r_knee_crease").setTranslation(new double[] {-0.0825,0.4932,-0.0326})
                    .addChild(new TouchSensor().setDescription("HAnimSite 91 r_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString72().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_suprapatella").setDEF("hanim_r_suprapatella")
                    .addChild(new TouchSensor().setDescription("HAnimSite 45 r_suprapatella"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString73().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035)))))))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new double[] {-0.0867,0.4913,0.0318}).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new double[] {-0.0867,0.4913,0.0318})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3276().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                        .addComments("from r_knee to r_talocrural vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_lateral_malleolus").setDEF("hanim_r_lateral_malleolus").setTranslation(new double[] {-0.1006,0.0658,-0.1075})
                      .addChild(new TouchSensor().setDescription("HAnimSite 53 r_lateral_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString78().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_medial_malleolus").setDEF("hanim_r_medial_malleolus").setTranslation(new double[] {-0.0591,0.076,-0.0928})
                      .addChild(new TouchSensor().setDescription("HAnimSite 52 r_medial_malleolus"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString79().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_tibiale").setDEF("hanim_r_tibiale")
                      .addChild(new TouchSensor().setDescription("HAnimSite 51 r_tibiale"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString80().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035)))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new double[] {-0.0801,0.0712,-0.0766}).setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setScale(new double[] {0.15,0.15,0.15}).setTranslation(new double[] {-0.05,0.06,-0.025}).setRotation(new double[] {1,0,0,-1.57})
                        .addComments("Transform right foot")
                        .addChild(new Transform()
                          .addComments("Empty Transform right foot")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                          .addComments("from r_talocrural to r_metatarsophalangeal_2 vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimSite("hanim_r_talus").setName("r_calcaneus_posterior").setDEF("hanim_r_calcaneus_posterior").setTranslation(new double[] {-0.0692,0.0297,-0.1221})
                        .addChild(new TouchSensor().setDescription("HAnimSite 62 r_calcaneus_posterior"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString85().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035))))))
                      .addChild(new HAnimSite("hanim_r_talus").setName("r_sphyrion").setDEF("hanim_r_sphyrion").setTranslation(new double[] {-0.0603,0.061,-0.1002})
                        .addChild(new TouchSensor().setDescription("HAnimSite 54 r_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Billboard()
                          .addChild(new Shape()
                            .setGeometry(new Text().setString(new MFString86().getArray())
                              .setFontStyle(new FontStyle().setSize(0.035)))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new double[] {-0.0823,0.0064,-0.004}).setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new double[] {0.0028,1.0568,-0.0776}).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
              .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                .addChild(new Transform().setTranslation(new double[] {0.0028,1.0568,-0.0776})
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                    .addComments("from vl5 to skullbase vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_l5").setName("adams_apple").setDEF("hanim_adams_apple")
                  .addChild(new TouchSensor().setDescription("HAnimSite 11 adams_apple"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString93().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("cervicale").setDEF("hanim_cervicale").setTranslation(new double[] {0.0064,1.52,-0.0815})
                  .addChild(new TouchSensor().setDescription("HAnimSite 10 cervicale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString94().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_acromion").setDEF("hanim_l_acromion").setTranslation(new double[] {0.2032,1.476,-0.049})
                  .addChild(new TouchSensor().setDescription("HAnimSite 15 l_acromion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString95().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_axilla_distal").setDEF("hanim_l_axilla_distal").setTranslation(new double[] {0.1706,1.4072,-0.0875})
                  .addChild(new TouchSensor().setDescription("HAnimSite 17 l_axilla_distal"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString96().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_axilla_posterior_folds").setDEF("hanim_l_axilla_posterior_folds")
                  .addChild(new TouchSensor().setDescription("HAnimSite 18 l_axilla_posterior_folds"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString97().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_axilla_proximal").setDEF("hanim_l_axilla_proximal").setTranslation(new double[] {0.1777,1.4065,-0.0075})
                  .addChild(new TouchSensor().setDescription("HAnimSite 16 l_axilla_proximal"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString98().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_chest_midsagittal_plane").setDEF("hanim_l_chest_midsagittal_plane")
                  .addChild(new TouchSensor().setDescription("HAnimSite 94 l_chest_midsagittal_plane"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString99().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_clavicale").setDEF("hanim_l_clavicale").setTranslation(new double[] {0.0271,1.4943,0.0394})
                  .addChild(new TouchSensor().setDescription("HAnimSite 14 l_clavicale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString100().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_neck_base").setDEF("hanim_l_neck_base").setTranslation(new double[] {0.0646,1.5141,-0.038})
                  .addChild(new TouchSensor().setDescription("HAnimSite 82 l_neck_base"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString101().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_rib10").setDEF("hanim_l_rib10").setTranslation(new double[] {0.0871,1.1925,0.0992})
                  .addChild(new TouchSensor().setDescription("HAnimSite 28 l_rib10"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString102().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("l_thelion").setDEF("hanim_l_thelion").setTranslation(new double[] {0.0918,1.3382,0.1192})
                  .addChild(new TouchSensor().setDescription("HAnimSite 29 l_thelion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString103().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("mesosternale").setDEF("hanim_mesosternale")
                  .addChild(new TouchSensor().setDescription("HAnimSite 88 mesosternale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString104().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("navel").setDEF("hanim_navel").setTranslation(new double[] {0.0069,1.0966,0.1017})
                  .addChild(new TouchSensor().setDescription("HAnimSite 84 navel"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString105().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_acromion").setDEF("hanim_r_acromion").setTranslation(new double[] {-0.1905,1.4791,-0.0431})
                  .addChild(new TouchSensor().setDescription("HAnimSite 20 r_acromion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString106().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_axilla_distal").setDEF("hanim_r_axilla_distal").setTranslation(new double[] {-0.1603,1.4098,-0.0826})
                  .addChild(new TouchSensor().setDescription("HAnimSite 22 r_axilla_distal"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString107().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_axilla_posterior_folds").setDEF("hanim_r_axilla_posterior_folds")
                  .addChild(new TouchSensor().setDescription("HAnimSite 23 r_axilla_posterior_folds"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString108().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_axilla_proximal").setDEF("hanim_r_axilla_proximal").setTranslation(new double[] {-0.1626,1.4072,-0.0031})
                  .addChild(new TouchSensor().setDescription("HAnimSite 21 r_axilla_proximal"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString109().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_chest_midsagittal_plane").setDEF("hanim_r_chest_midsagittal_plane")
                  .addChild(new TouchSensor().setDescription("HAnimSite 95 r_chest_midsagittal_plane"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString110().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_clavicale").setDEF("hanim_r_clavicale").setTranslation(new double[] {-0.0115,1.4943,0.04})
                  .addChild(new TouchSensor().setDescription("HAnimSite 19 r_clavicale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString111().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_neck_base").setDEF("hanim_r_neck_base").setTranslation(new double[] {-0.0419,1.5149,-0.022})
                  .addChild(new TouchSensor().setDescription("HAnimSite 83 r_neck_base"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString112().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_rib10").setDEF("hanim_r_rib10").setTranslation(new double[] {-0.0711,1.1941,0.1016})
                  .addChild(new TouchSensor().setDescription("HAnimSite 30 r_rib10"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString113().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("r_thelion").setDEF("hanim_r_thelion").setTranslation(new double[] {-0.0736,1.3385,0.1217})
                  .addChild(new TouchSensor().setDescription("HAnimSite 31 r_thelion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString114().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("rear_center_midsagittal_plane").setDEF("hanim_rear_center_midsagittal_plane")
                  .addChild(new TouchSensor().setDescription("HAnimSite 92 rear_center_midsagittal_plane"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString115().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("spine_1_middle_back").setDEF("hanim_spine_1_middle_back")
                  .addChild(new TouchSensor().setDescription("HAnimSite 24 spine_1_middle_back"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString116().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("spine_2_middle_back").setDEF("hanim_spine_2_middle_back")
                  .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString117().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("substernale").setDEF("hanim_substernale").setTranslation(new double[] {0.0085,1.2995,0.1147})
                  .addChild(new TouchSensor().setDescription("HAnimSite 13 substernale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString118().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("suprasternale").setDEF("hanim_suprasternale").setTranslation(new double[] {0.0084,1.4714,0.0551})
                  .addChild(new TouchSensor().setDescription("HAnimSite 12 suprasternale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString119().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_anterior").setDEF("hanim_waist_preferred_anterior")
                  .addChild(new TouchSensor().setDescription("HAnimSite 26 waist_preferred_anterior"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString120().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_posterior").setDEF("hanim_waist_preferred_posterior").setTranslation(new double[] {0.29,1.0915,-0.1091})
                  .addChild(new TouchSensor().setDescription("HAnimSite 27 waist_preferred_posterior"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString121().getArray())
                        .setFontStyle(new FontStyle().setSize(0.035))))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32122().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f123().getArray()))
                    .addComments("from vl5 to l_shoulder vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32124().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray()))
                    .addComments("from vl5 to r_shoulder vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimJoint("hanim_vl5").setName("skullbase").setDEF("hanim_skullbase").setCenter(new double[] {0.0044,1.6209,0.0236}).setUlimit(new MFFloat126().getArray()).setLlimit(new MFFloat127().getArray()))
              .addChild(new HAnimJoint("hanim_vl5").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new double[] {0.2029,1.4376,-0.0387}).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray())
                .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new Transform().setTranslation(new double[] {0.2029,1.4376,-0.0387})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32130().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f131().getArray()))
                      .addComments("from l_shoulder to l_elbow vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_l_upperarm").setName("l_bideltoid").setDEF("hanim_l_bideltoid")
                    .addChild(new TouchSensor().setDescription("HAnimSite 96 l_bideltoid"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString132().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_l_upperarm").setName("l_humeral_lateral_epicondyles").setDEF("hanim_l_humeral_lateral_epicondyles").setTranslation(new double[] {0.228,1.1482,-0.11})
                    .addChild(new TouchSensor().setDescription("HAnimSite 63 l_humeral_lateral_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString133().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035)))))))
                .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new double[] {0.2014,1.1357,-0.0682}).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray())
                  .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new Transform().setTranslation(new double[] {0.2014,1.1357,-0.0682})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32136().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))
                        .addComments("from l_elbow to l_radiocarpal vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_l_forearm").setName("l_humeral_medial_epicondyles").setDEF("hanim_l_humeral_medial_epicondyles").setTranslation(new double[] {0.1735,1.1272,-0.1113})
                      .addChild(new TouchSensor().setDescription("HAnimSite 64 l_humeral_medial_epicondyles"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString138().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_forearm").setName("l_olecranon").setDEF("hanim_l_olecranon").setTranslation(new double[] {-0.1962,1.1375,-0.1123})
                      .addChild(new TouchSensor().setDescription("HAnimSite 65 l_olecranon"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString139().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_forearm").setName("l_radial_styloid").setDEF("hanim_l_radial_styloid").setTranslation(new double[] {0.1901,0.8645,-0.0415})
                      .addChild(new TouchSensor().setDescription("HAnimSite 71 l_radial_styloid"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString140().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_l_forearm").setName("l_radiale").setDEF("hanim_l_radiale").setTranslation(new double[] {0.2182,1.1212,-0.1167})
                      .addChild(new TouchSensor().setDescription("HAnimSite 69 l_radiale"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString141().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035)))))))
                  .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new double[] {0.1984,0.8663,-0.0583}).setUlimit(new MFFloat142().getArray()).setLlimit(new MFFloat143().getArray()))))
              .addChild(new HAnimJoint("hanim_vl5").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new double[] {-0.1907,1.4407,-0.0325}).setUlimit(new MFFloat144().getArray()).setLlimit(new MFFloat145().getArray())
                .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new Transform().setTranslation(new double[] {-0.1907,1.4407,-0.0325})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32146().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f147().getArray()))
                      .addComments("from r_shoulder to r_elbow vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_r_upperarm").setName("r_bideltoid").setDEF("hanim_r_bideltoid")
                    .addChild(new TouchSensor().setDescription("HAnimSite 97 r_bideltoid"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString148().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035))))))
                  .addChild(new HAnimSite("hanim_r_upperarm").setName("r_humeral_lateral_epicondyles").setDEF("hanim_r_humeral_lateral_epicondyles").setTranslation(new double[] {-0.2224,1.1517,-0.1033})
                    .addChild(new TouchSensor().setDescription("HAnimSite 66 r_humeral_lateral_epicondyles"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                    .addChild(new Billboard()
                      .addChild(new Shape()
                        .setGeometry(new Text().setString(new MFString149().getArray())
                          .setFontStyle(new FontStyle().setSize(0.035)))))))
                .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new double[] {-0.1949,1.1388,-0.062}).setUlimit(new MFFloat150().getArray()).setLlimit(new MFFloat151().getArray())
                  .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new Transform().setTranslation(new double[] {-0.1949,1.1388,-0.062})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32152().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f153().getArray()))
                        .addComments("from r_elbow to r_radiocarpal vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_r_forearm").setName("r_humeral_medial_epicondyles").setDEF("hanim_r_humeral_medial_epicondyles").setTranslation(new double[] {-0.168,1.1298,-0.1062})
                      .addChild(new TouchSensor().setDescription("HAnimSite 67 r_humeral_medial_epicondyles"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString154().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_forearm").setName("r_olecranon").setDEF("hanim_r_olecranon").setTranslation(new double[] {-0.1907,1.1405,-0.1065})
                      .addChild(new TouchSensor().setDescription("HAnimSite 68 r_olecranon"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString155().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_forearm").setName("r_radial_styloid").setDEF("hanim_r_radial_styloid").setTranslation(new double[] {-0.1884,0.8676,-0.036})
                      .addChild(new TouchSensor().setDescription("HAnimSite 74 r_radial_styloid"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString156().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035))))))
                    .addChild(new HAnimSite("hanim_r_forearm").setName("r_radiale").setDEF("hanim_r_radiale").setTranslation(new double[] {-0.213,1.1305,-0.1091})
                      .addChild(new TouchSensor().setDescription("HAnimSite 72 r_radiale"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))
                      .addChild(new Billboard()
                        .addChild(new Shape()
                          .setGeometry(new Text().setString(new MFString157().getArray())
                            .setFontStyle(new FontStyle().setSize(0.035)))))))
                  .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new double[] {-0.1959,0.8694,-0.0521}).setUlimit(new MFFloat158().getArray()).setLlimit(new MFFloat159().getArray()))))))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_humanoid_root"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_sacroiliac"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_skullbase"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_radiocarpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_sacrum"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_pelvis"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_forearm"))
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
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_femoral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_femoral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_knee_crease"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_suprapatella"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_lateral_malleolus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_medial_malleolus"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tibiale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_calcaneus_posterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_sphyrion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_adams_apple"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_cervicale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_acromion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_distal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_posterior_folds"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_proximal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_chest_midsagittal_plane"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_clavicale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_neck_base"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_rib10"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_thelion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_mesosternale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_navel"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_acromion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_distal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_posterior_folds"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_proximal"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_chest_midsagittal_plane"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_clavicale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_neck_base"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_rib10"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_thelion"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_rear_center_midsagittal_plane"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_spine_1_middle_back"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_spine_2_middle_back"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_substernale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_suprasternale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_waist_preferred_anterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_waist_preferred_posterior"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_bideltoid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_humeral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_humeral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_olecranon"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_radial_styloid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_radiale"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_bideltoid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_humeral_lateral_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_humeral_medial_epicondyles"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_olecranon"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_radial_styloid"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_radiale"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,0,0.6,0,0,0,1});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,0,1,1,0,0});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05,0,0,0.05,0,0});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA8 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
  }
}
private class MFColor17 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1});
  }
}
private class MFColor18 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0});
  }
}
private class MFColor19 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.824,0.0277,0,0.9149,0.0016});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.824,0.0277,0.0028,1.0568,-0.0776});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9149,0.0016,0.0961,0.9124,-0.0001});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9149,0.0016,-0.095,0.9171,0.0029});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004});
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
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f69 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
  }
}
private class MFString70 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"44"});
  }
}
private class MFString71 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"43"});
  }
}
private class MFString72 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"91"});
  }
}
private class MFString73 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"45"});
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
  }
}
private class MFString78 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"53"});
  }
}
private class MFString79 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"52"});
  }
}
private class MFString80 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"51"});
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004});
  }
}
private class MFString85 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"62"});
  }
}
private class MFString86 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"54"});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236});
  }
}
private class MFString93 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"11"});
  }
}
private class MFString94 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10"});
  }
}
private class MFString95 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"15"});
  }
}
private class MFString96 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"17"});
  }
}
private class MFString97 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"18"});
  }
}
private class MFString98 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"16"});
  }
}
private class MFString99 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"94"});
  }
}
private class MFString100 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"14"});
  }
}
private class MFString101 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"82"});
  }
}
private class MFString102 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"28"});
  }
}
private class MFString103 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"29"});
  }
}
private class MFString104 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"88"});
  }
}
private class MFString105 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"84"});
  }
}
private class MFString106 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"20"});
  }
}
private class MFString107 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"22"});
  }
}
private class MFString108 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"23"});
  }
}
private class MFString109 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"21"});
  }
}
private class MFString110 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"95"});
  }
}
private class MFString111 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"19"});
  }
}
private class MFString112 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"83"});
  }
}
private class MFString113 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"30"});
  }
}
private class MFString114 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31"});
  }
}
private class MFString115 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"92"});
  }
}
private class MFString116 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"24"});
  }
}
private class MFString117 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {""});
  }
}
private class MFString118 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"13"});
  }
}
private class MFString119 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"12"});
  }
}
private class MFString120 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"26"});
  }
}
private class MFString121 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"27"});
  }
}
private class MFInt32122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f123 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325});
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
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f131 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
  }
}
private class MFString132 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"96"});
  }
}
private class MFString133 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"63"});
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
  }
}
private class MFString138 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"64"});
  }
}
private class MFString139 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"65"});
  }
}
private class MFString140 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"71"});
  }
}
private class MFString141 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"69"});
  }
}
private class MFFloat142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32146 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f147 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
  }
}
private class MFString148 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"97"});
  }
}
private class MFString149 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"66"});
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
private class MFVec3f153 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
  }
}
private class MFString154 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"67"});
  }
}
private class MFString155 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"68"});
  }
}
private class MFString156 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"74"});
  }
}
private class MFString157 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"72"});
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
}
