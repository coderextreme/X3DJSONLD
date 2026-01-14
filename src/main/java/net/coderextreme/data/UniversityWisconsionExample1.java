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
public class UniversityWisconsionExample1 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new UniversityWisconsionExample1().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/UniversityWisconsionExample1.new.java.x3d");
    model.toFileJSON("../data/UniversityWisconsionExample1.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(3))
        .addMeta(new meta().setName("title").setContent("BvhUniversityWisconsionExample1.x3d"))
        .addMeta(new meta().setName("description").setContent("BVH file conversion: *enter description here, short-sentence summaries preferred*"))
        .addMeta(new meta().setName("creator").setContent("*enter name of original author here*"))
        .addMeta(new meta().setName("created").setContent("*enter date of initial version here*"))
        .addMeta(new meta().setName("translated").setContent("2 September 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:21:02 GMT"))
        .addMeta(new meta().setName("reference").setContent("BvhUniversityWIsconsionExample1.bvh"))
        .addMeta(new meta().setName("reference").setContent("https://TODO/UniversityWIsconsionExample1.bvh"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP"))
        .addMeta(new meta().setName("generator").setContent("Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("BvhUniversityWisconsionExample1.x3d"))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF("BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation")
          .setMetadata(new MetadataSet().setName("BvhToHAnimNameConversionTable")
            .setMetadata(new MetadataString().setName("ROOT_Hips").setReference("ROOT").setValue(new MFString0().getArray()))
            .setMetadata(new MetadataString().setName("Chest").setReference("JOINT").setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName("Neck").setReference("JOINT").setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName("Head").setReference("JOINT").setValue(new MFString3().getArray()))
            .setMetadata(new MetadataString().setName("HeadSite").setReference("Site").setValue(new MFString4().getArray()))
            .setMetadata(new MetadataString().setName("LeftCollar").setReference("JOINT").setValue(new MFString5().getArray()))
            .setMetadata(new MetadataString().setName("LeftUpArm").setReference("JOINT").setValue(new MFString6().getArray()))
            .setMetadata(new MetadataString().setName("LeftLowArm").setReference("JOINT").setValue(new MFString7().getArray()))
            .setMetadata(new MetadataString().setName("LeftHand").setReference("JOINT").setValue(new MFString8().getArray()))
            .setMetadata(new MetadataString().setName("LeftHandSite").setReference("Site").setValue(new MFString9().getArray()))
            .setMetadata(new MetadataString().setName("RightCollar").setReference("JOINT").setValue(new MFString10().getArray()))
            .setMetadata(new MetadataString().setName("RightUpArm").setReference("JOINT").setValue(new MFString11().getArray()))
            .setMetadata(new MetadataString().setName("RightLowArm").setReference("JOINT").setValue(new MFString12().getArray()))
            .setMetadata(new MetadataString().setName("RightHand").setReference("JOINT").setValue(new MFString13().getArray()))
            .setMetadata(new MetadataString().setName("RightHandSite").setReference("Site").setValue(new MFString14().getArray()))
            .setMetadata(new MetadataString().setName("LeftUpLeg").setReference("JOINT").setValue(new MFString15().getArray()))
            .setMetadata(new MetadataString().setName("LeftLowLeg").setReference("JOINT").setValue(new MFString16().getArray()))
            .setMetadata(new MetadataString().setName("LeftFoot").setReference("JOINT").setValue(new MFString17().getArray()))
            .setMetadata(new MetadataString().setName("LeftFootSite").setReference("Site").setValue(new MFString18().getArray()))
            .setMetadata(new MetadataString().setName("RightUpLeg").setReference("JOINT").setValue(new MFString19().getArray()))
            .setMetadata(new MetadataString().setName("RightLowLeg").setReference("JOINT").setValue(new MFString20().getArray()))
            .setMetadata(new MetadataString().setName("RightFoot").setReference("JOINT").setValue(new MFString21().getArray()))
            .setMetadata(new MetadataString().setName("RightFootSite").setReference("Site").setValue(new MFString22().getArray()))))
        .addChild(new Transform().setDEF("InitialPositionScaled").setTranslation(new float[] {0f ,1.244f ,0f })
          .addChild(new Viewpoint().setDescription("BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m").setPosition(new float[] {0f ,0f ,8f }))
          .addChild(new Viewpoint().setDescription("BvhUniversityWisconsionExample1 initial motion position").setPosition(new float[] {0.803f ,3.501f ,16.836f }))
          .addChild(new Viewpoint().setDescription("BvhUniversityWisconsionExample1 final motion position").setPosition(new float[] {0.781f ,3.51f ,16.647f })))
        .addChild(new HAnimHumanoid().setDEF("BvhUniversityWisconsionExample1_ROOT_Hips").setName("ROOT_Hips")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorEmail").setValue(new MFString23().getArray()))
            .setMetadata(new MetadataString().setName("authorName").setValue(new MFString24().getArray()))
            .setMetadata(new MetadataString().setName("copyright").setValue(new MFString25().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new MFString26().getArray()))
            .setMetadata(new MetadataString().setName("usageDescription").setValue(new MFString27().getArray())))
          .addSkeleton(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setDEF("BvhUniversityWisconsionExample1_humanoid_root").setName("humanoid_root").setTranslation(new float[] {0.7849403f ,3.508388f ,8.680851f }).setRotation(new float[] {-0.0184530858032817f ,-0.992698784706892f ,-0.119199859336308f ,2.9151883640198f }).setScale(new float[] {0.1f ,0.1f ,0.1f })
            .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_humanoid_root").setDEF("BvhUniversityWisconsionExample1_sacrum").setName("sacrum")
              .addChild(new Switch().setWhichChoice(0)
                .addChild(new Group()
                  .addChild(new TouchSensor().setDescription("HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum"))
                  .addChild(new Shape().setDEF("HAnimRootShape")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDEF("HAnimRootMaterial").setDiffuseColor(new float[] {0.8f ,0f ,0f }).setTransparency(0.3f )))
                    .setGeometry(new Sphere().setDEF("HAnimJointSphere").setRadius(0.254f ))))
                .addChild(new Shape().setDEF("HAnimJointShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new float[] {0f ,0f ,0.8f }).setTransparency(0.3f )))
                  .setGeometry(new Sphere().setUSE("HAnimJointSphere")))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3228().getArray())
                    .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA29().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))
                .addChild(new Shape().setDEF("HAnimSiteShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0.5f ,0f }).setTransparency(0.3f )))
                  .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setSolid(false).setCreaseAngle(0.5f ).setCoordIndex(new MFInt3231().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                    .setColor(new ColorRGBA().setDEF("HAnimSiteLineColorRGBA").setColor(new MFColorRGBA34().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray())))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3236().getArray())
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                  .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray()))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3238().getArray())
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                  .setCoord(new Coordinate().setPoint(new MFVec3f39().getArray()))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3240().getArray())
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                  .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray())))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_humanoid_root").setDEF("BvhUniversityWisconsionExample1_vl5").setName("vl5").setRotation(new float[] {0.929559139694865f ,-0.360437334785587f ,0.0774902155269029f ,0.820797255601436f }).setCenter(new float[] {0f ,5.21f ,0f })
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_vl5").setDEF("BvhUniversityWisconsionExample1_l5").setName("l5")
                .addChild(new Transform().setTranslation(new float[] {0f ,5.21f ,0f })
                  .addChild(new TouchSensor().setDescription("HAnimJoint Chest vl5, HAnimSegment l5"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3242().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f43().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3244().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3246().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_vl5").setDEF("BvhUniversityWisconsionExample1_Neck").setName("Neck").setRotation(new float[] {0.983970484111271f ,0.0663053900569327f ,0.16554661472597f ,0.772979753553571f }).setCenter(new float[] {0f ,23.86f ,0f })
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_Neck").setDEF("BvhUniversityWisconsionExample1_vl5_to_Neck").setName("vl5_to_Neck")
                  .addChild(new Transform().setTranslation(new float[] {0f ,23.86f ,0f })
                    .addChild(new TouchSensor().setDescription("HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3248().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray()))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_Neck").setDEF("BvhUniversityWisconsionExample1_skullbase").setName("skullbase").setRotation(new float[] {-0.979126474330309f ,0.150183590569867f ,-0.136953409556093f ,0.734508385229556f }).setCenter(new float[] {0f ,29.31f ,0f })
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_skullbase").setDEF("BvhUniversityWisconsionExample1_skull").setName("skull")
                    .addChild(new Transform().setTranslation(new float[] {0f ,29.31f ,0f })
                      .addChild(new HAnimSite().setDEF("BvhUniversityWisconsionExample1_skull_tip").setName("skull_tip").setTranslation(new float[] {0f ,3.87f ,0f })
                        .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3250().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f51().getArray())))))
                      .addChild(new TouchSensor().setDescription("HAnimJoint Head skullbase, HAnimSegment skull"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_vl5").setDEF("BvhUniversityWisconsionExample1_LeftCollar").setName("LeftCollar").setRotation(new float[] {-0.0400336310146056f ,0.285571817840178f ,0.957520780580368f ,0.318543581718216f }).setCenter(new float[] {1.12f ,21.44f ,1.87f })
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftCollar").setDEF("BvhUniversityWisconsionExample1_vl5_to_LeftCollar").setName("vl5_to_LeftCollar")
                  .addChild(new Transform().setTranslation(new float[] {1.12f ,21.44f ,1.87f })
                    .addChild(new TouchSensor().setDescription("HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3252().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftCollar").setDEF("BvhUniversityWisconsionExample1_LeftUpArm").setName("LeftUpArm").setRotation(new float[] {-0.027309899849048f ,-0.170484979510911f ,0.984981746598077f ,1.66813504770243f }).setCenter(new float[] {6.66f ,21.44f ,1.87f })
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftUpArm").setDEF("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm").setName("LeftCollar_to_LeftUpArm")
                    .addChild(new Transform().setTranslation(new float[] {6.66f ,21.44f ,1.87f })
                      .addChild(new TouchSensor().setDescription("HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3254().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f55().getArray()))))))
                  .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftUpArm").setDEF("BvhUniversityWisconsionExample1_LeftLowArm").setName("LeftLowArm").setRotation(new float[] {-0.998249192144246f ,0.0587758586859541f ,-0.00662939055192083f ,1.65994762916941f }).setCenter(new float[] {6.66f ,9.48f ,1.87f })
                    .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftLowArm").setDEF("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm").setName("LeftUpArm_to_LeftLowArm")
                      .addChild(new Transform().setTranslation(new float[] {6.66f ,9.48f ,1.87f })
                        .addChild(new TouchSensor().setDescription("HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm"))
                        .addChild(new Shape().setUSE("HAnimJointShape"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3256().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray()))))))
                    .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftLowArm").setDEF("BvhUniversityWisconsionExample1_LeftHand").setName("LeftHand").setRotation(new float[] {0.404520441533964f ,0.00251538810905742f ,0.914525497293667f ,0.0133189030390886f }).setCenter(new float[] {6.66f ,-0.45f ,1.87f })
                      .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftHand").setDEF("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand").setName("LeftLowArm_to_LeftHand")
                        .addChild(new Transform().setTranslation(new float[] {6.66f ,-0.45f ,1.87f })
                          .addChild(new HAnimSite().setDEF("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip").setName("LeftLowArm_to_LeftHand_tip").setTranslation(new float[] {0f ,-7f ,0f })
                            .addChild(new TouchSensor().setDescription("HAnimSite LeftLowArm_to_LeftHand_tip"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3258().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray())))))
                          .addChild(new TouchSensor().setDescription("HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand"))
                          .addChild(new Shape().setUSE("HAnimJointShape"))))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_vl5").setDEF("BvhUniversityWisconsionExample1_RightCollar").setName("RightCollar").setRotation(new float[] {-0.0717927567877157f ,-0.898736438505571f ,-0.432572091304025f ,0.383573753513759f }).setCenter(new float[] {-1.12f ,21.44f ,1.87f })
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightCollar").setDEF("BvhUniversityWisconsionExample1_vl5_to_RightCollar").setName("vl5_to_RightCollar")
                  .addChild(new Transform().setTranslation(new float[] {-1.12f ,21.44f ,1.87f })
                    .addChild(new TouchSensor().setDescription("HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3260().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightCollar").setDEF("BvhUniversityWisconsionExample1_RightUpArm").setName("RightUpArm").setRotation(new float[] {-0.750052184733347f ,-0.545300751513553f ,-0.374257679380781f ,1.93524054510947f }).setCenter(new float[] {-7.19f ,21.44f ,1.87f })
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightUpArm").setDEF("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm").setName("RightCollar_to_RightUpArm")
                    .addChild(new Transform().setTranslation(new float[] {-7.19f ,21.44f ,1.87f })
                      .addChild(new TouchSensor().setDescription("HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3262().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f63().getArray()))))))
                  .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightUpArm").setDEF("BvhUniversityWisconsionExample1_RightLowArm").setName("RightLowArm").setRotation(new float[] {-0.942326628906139f ,0.260683574441484f ,0.209915693722034f ,1.36514284873355f }).setCenter(new float[] {-7.19f ,9.62f ,1.87f })
                    .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightLowArm").setDEF("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm").setName("RightUpArm_to_RightLowArm")
                      .addChild(new Transform().setTranslation(new float[] {-7.19f ,9.62f ,1.87f })
                        .addChild(new TouchSensor().setDescription("HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm"))
                        .addChild(new Shape().setUSE("HAnimJointShape"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3264().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))))))
                    .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightLowArm").setDEF("BvhUniversityWisconsionExample1_RightHand").setName("RightHand").setRotation(new float[] {0.487401172792782f ,0.00827736333346378f ,-0.87313892480885f ,0.0323338299925714f }).setCenter(new float[] {-7.19f ,-1.03f ,1.87f })
                      .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightHand").setDEF("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand").setName("RightLowArm_to_RightHand")
                        .addChild(new Transform().setTranslation(new float[] {-7.19f ,-1.03f ,1.87f })
                          .addChild(new HAnimSite().setDEF("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip").setName("RightLowArm_to_RightHand_tip").setTranslation(new float[] {0f ,-7f ,0f })
                            .addChild(new TouchSensor().setDescription("HAnimSite RightLowArm_to_RightHand_tip"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3266().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f67().getArray())))))
                          .addChild(new TouchSensor().setDescription("HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand"))
                          .addChild(new Shape().setUSE("HAnimJointShape")))))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_humanoid_root").setDEF("BvhUniversityWisconsionExample1_LeftUpLeg").setName("LeftUpLeg").setRotation(new float[] {0.798274116909833f ,-0.0905296906431976f ,0.595451769150005f ,0.374616063385567f }).setCenter(new float[] {3.91f ,0f ,0f })
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftUpLeg").setDEF("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg").setName("humanoid_root_to_LeftUpLeg")
                .addChild(new Transform().setTranslation(new float[] {3.91f ,0f ,0f })
                  .addChild(new TouchSensor().setDescription("HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3268().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray()))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftUpLeg").setDEF("BvhUniversityWisconsionExample1_LeftLowLeg").setName("LeftLowLeg").setRotation(new float[] {0.969171949455709f ,0.159020234805176f ,0.188197495495361f ,1.02828103886506f }).setCenter(new float[] {3.91f ,-18.34f ,0f })
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftLowLeg").setDEF("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg").setName("LeftUpLeg_to_LeftLowLeg")
                  .addChild(new Transform().setTranslation(new float[] {3.91f ,-18.34f ,0f })
                    .addChild(new TouchSensor().setDescription("HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3270().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_LeftLowLeg").setDEF("BvhUniversityWisconsionExample1_LeftFoot").setName("LeftFoot").setRotation(new float[] {1.00000000000036f ,0f ,0f ,0.0199134632110525f }).setCenter(new float[] {3.91f ,-35.71f ,0f })
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_LeftFoot").setDEF("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot").setName("LeftLowLeg_to_LeftFoot")
                    .addChild(new Transform().setTranslation(new float[] {3.91f ,-35.71f ,0f })
                      .addChild(new HAnimSite().setDEF("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip").setName("LeftLowLeg_to_LeftFoot_tip").setTranslation(new float[] {0f ,-3.46f ,0f })
                        .addChild(new TouchSensor().setDescription("HAnimSite LeftLowLeg_to_LeftFoot_tip"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3272().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f73().getArray())))))
                      .addChild(new TouchSensor().setDescription("HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot"))
                      .addChild(new Shape().setUSE("HAnimJointShape")))))))
            .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_humanoid_root").setDEF("BvhUniversityWisconsionExample1_RightUpLeg").setName("RightUpLeg").setRotation(new float[] {-0.529026768997627f ,-0.0781104813974245f ,-0.845002621522441f ,0.345959390966261f }).setCenter(new float[] {-3.91f ,0f ,0f })
              .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightUpLeg").setDEF("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg").setName("humanoid_root_to_RightUpLeg")
                .addChild(new Transform().setTranslation(new float[] {-3.91f ,0f ,0f })
                  .addChild(new TouchSensor().setDescription("HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg"))
                  .addChild(new Shape().setUSE("HAnimJointShape"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3274().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f75().getArray()))))))
              .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightUpLeg").setDEF("BvhUniversityWisconsionExample1_RightLowLeg").setName("RightLowLeg").setRotation(new float[] {0.978057447453843f ,-0.194999101930461f ,0.073341527979632f ,0.971415273794883f }).setCenter(new float[] {-3.91f ,-17.63f ,0f })
                .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightLowLeg").setDEF("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg").setName("RightUpLeg_to_RightLowLeg")
                  .addChild(new Transform().setTranslation(new float[] {-3.91f ,-17.63f ,0f })
                    .addChild(new TouchSensor().setDescription("HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg"))
                    .addChild(new Shape().setUSE("HAnimJointShape"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3276().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))))))
                .addChild(new HAnimJoint("BvhUniversityWisconsionExample1_RightLowLeg").setDEF("BvhUniversityWisconsionExample1_RightFoot").setName("RightFoot").setRotation(new float[] {-1f ,0f ,0f ,0.446403006744384f }).setCenter(new float[] {-3.91f ,-34.77f ,0f })
                  .addChild(new HAnimSegment("BvhUniversityWisconsionExample1_RightFoot").setDEF("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot").setName("RightLowLeg_to_RightFoot")
                    .addChild(new Transform().setTranslation(new float[] {-3.91f ,-34.77f ,0f })
                      .addChild(new HAnimSite().setDEF("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip").setName("RightLowLeg_to_RightFoot_tip").setTranslation(new float[] {0f ,-3.75f ,0f })
                        .addChild(new TouchSensor().setDescription("HAnimSite RightLowLeg_to_RightFoot_tip"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3278().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f79().getArray())))))
                      .addChild(new TouchSensor().setDescription("HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot"))
                      .addChild(new Shape().setUSE("HAnimJointShape"))))))))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_humanoid_root"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_vl5"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_Neck"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_skullbase"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftCollar"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftUpArm"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftLowArm"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftHand"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightCollar"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightUpArm"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightLowArm"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightHand"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftUpLeg"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftLowLeg"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftFoot"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightUpLeg"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightLowLeg"))
          .addJoints(new HAnimJoint("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightFoot"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_sacrum"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_l5"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_vl5_to_Neck"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_skull"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_vl5_to_RightCollar"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"))
          .addSegments(new HAnimSegment("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"))
          .addViewpoints(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setDEF("BvhUniversityWisconsionExample1_humanoid_root_view").setName("humanoid_root_view")
            .addChild(new Viewpoint().setDEF("BvhUniversityWisconsionExample1_humanoid_root_viewpoint").setDescription("BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center").setPosition(new float[] {0f ,0f ,80f })))
          .addSites(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_skull_tip"))
          .addSites(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"))
          .addSites(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"))
          .addSites(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"))
          .addSites(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"))
          .addSites(new HAnimSite("BvhUniversityWisconsionExample1_ROOT_Hips").setUSE("BvhUniversityWisconsionExample1_humanoid_root_view")))
        .addChild(new Group().setDEF("BvhUniversityWisconsionExample1_MotionGroup")
          .addChild(new TimeSensor().setDEF("RealTimer").setCycleInterval(0.067d).setLoop(true))
          .addChild(new TimeSensor().setDEF("StepTimer").setEnabled(false).setCycleInterval(2d).setLoop(true))
          .addChild(new ScalarInterpolator().setDEF("FrameStepper").setKey(new MFFloat80().getArray()).setKeyValue(new MFFloat81().getArray()))
          .addChild(new PositionInterpolator().setDEF("Interpolator0_humanoid_root").setKey(new MFFloat82().getArray()).setKeyValue(new MFVec3f83().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator1_humanoid_root").setKey(new MFFloat84().getArray()).setKeyValue(new MFRotation85().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator2_vl5").setKey(new MFFloat86().getArray()).setKeyValue(new MFRotation87().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator3_Neck").setKey(new MFFloat88().getArray()).setKeyValue(new MFRotation89().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator4_skullbase").setKey(new MFFloat90().getArray()).setKeyValue(new MFRotation91().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator5_LeftCollar").setKey(new MFFloat92().getArray()).setKeyValue(new MFRotation93().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator6_LeftUpArm").setKey(new MFFloat94().getArray()).setKeyValue(new MFRotation95().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator7_LeftLowArm").setKey(new MFFloat96().getArray()).setKeyValue(new MFRotation97().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator8_LeftHand").setKey(new MFFloat98().getArray()).setKeyValue(new MFRotation99().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator9_RightCollar").setKey(new MFFloat100().getArray()).setKeyValue(new MFRotation101().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator10_RightUpArm").setKey(new MFFloat102().getArray()).setKeyValue(new MFRotation103().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator11_RightLowArm").setKey(new MFFloat104().getArray()).setKeyValue(new MFRotation105().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator12_RightHand").setKey(new MFFloat106().getArray()).setKeyValue(new MFRotation107().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator13_LeftUpLeg").setKey(new MFFloat108().getArray()).setKeyValue(new MFRotation109().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator14_LeftLowLeg").setKey(new MFFloat110().getArray()).setKeyValue(new MFRotation111().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator15_LeftFoot").setKey(new MFFloat112().getArray()).setKeyValue(new MFRotation113().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator16_RightUpLeg").setKey(new MFFloat114().getArray()).setKeyValue(new MFRotation115().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator17_RightLowLeg").setKey(new MFFloat116().getArray()).setKeyValue(new MFRotation117().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Interpolator18_RightFoot").setKey(new MFFloat118().getArray()).setKeyValue(new MFRotation119().getArray())))
        .addChild(new ROUTE().setFromNode("StepTimer").setFromField("fraction_changed").setToNode("FrameStepper").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator0_humanoid_root").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator0_humanoid_root").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator0_humanoid_root").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator1_humanoid_root").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator1_humanoid_root").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator1_humanoid_root").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator2_vl5").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator2_vl5").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator2_vl5").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator3_Neck").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator3_Neck").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator3_Neck").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_Neck").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator4_skullbase").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator4_skullbase").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator4_skullbase").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator5_LeftCollar").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator5_LeftCollar").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator5_LeftCollar").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftCollar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator6_LeftUpArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator6_LeftUpArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator6_LeftUpArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftUpArm").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator7_LeftLowArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator7_LeftLowArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator7_LeftLowArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftLowArm").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator8_LeftHand").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator8_LeftHand").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator8_LeftHand").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftHand").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator9_RightCollar").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator9_RightCollar").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator9_RightCollar").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightCollar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator10_RightUpArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator10_RightUpArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator10_RightUpArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightUpArm").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator11_RightLowArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator11_RightLowArm").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator11_RightLowArm").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightLowArm").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator12_RightHand").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator12_RightHand").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator12_RightHand").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightHand").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator13_LeftUpLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator13_LeftUpLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator13_LeftUpLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftUpLeg").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator14_LeftLowLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator14_LeftLowLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator14_LeftLowLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftLowLeg").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator15_LeftFoot").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator15_LeftFoot").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator15_LeftFoot").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_LeftFoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator16_RightUpLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator16_RightUpLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator16_RightUpLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightUpLeg").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator17_RightLowLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator17_RightLowLeg").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator17_RightLowLeg").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightLowLeg").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RealTimer").setFromField("fraction_changed").setToNode("Interpolator18_RightFoot").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FrameStepper").setFromField("value_changed").setToNode("Interpolator18_RightFoot").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Interpolator18_RightFoot").setFromField("value_changed").setToNode("BvhUniversityWisconsionExample1_RightFoot").setToField("set_rotation")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoid_root","sacrum"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"vl5","l5"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Neck","vl5_to_Neck"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"skullbase","skull"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"skullbase_tip"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftCollar","vl5_to_LeftCollar"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftUpArm","LeftCollar_to_LeftUpArm"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftLowArm","LeftUpArm_to_LeftLowArm"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftHand","LeftLowArm_to_LeftHand"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftHand_tip"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightCollar","vl5_to_RightCollar"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightUpArm","RightCollar_to_RightUpArm"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightLowArm","RightUpArm_to_RightLowArm"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightHand","RightLowArm_to_RightHand"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightHand_tip"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftUpLeg","humanoid_root_to_LeftUpLeg"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftLowLeg","LeftUpLeg_to_LeftLowLeg"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftFoot","LeftLowLeg_to_LeftFoot"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LeftFoot_tip"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightUpLeg","humanoid_root_to_RightUpLeg"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightLowLeg","RightUpLeg_to_RightLowLeg"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightFoot","RightLowLeg_to_RightFoot"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RightFoot_tip"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"*TODO*"});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"*TODO*"});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Copyright (c) 2023"});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"*TODO*"});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"*TODO*"});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA29 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.254f ,0f ,-0.254f ,0f ,0f ,0f ,0f ,0.254f ,0.254f ,0f ,0f ,0f ,0f ,-0.254f ,0f ,-0.254f ,0f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA34 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,0.5f ,0f ,1f ,1f ,0.5f ,0f ,0.1f });
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f37 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,5.21f ,0f });
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f39 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,3.91f ,0f ,0f });
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,-3.91f ,0f ,0f });
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f43 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,18.65f ,0f });
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f45 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,1.12f ,16.23f ,1.87f });
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,-1.12f ,16.23f ,1.87f });
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,5.45f ,0f });
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f51 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-3.87f ,0f ,0f ,0f ,0f });
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,5.54f ,0f ,0f });
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f55 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-11.96f ,0f });
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-9.93f ,0f });
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,7f ,0f ,0f ,0f ,0f });
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,-6.07f ,0f ,0f });
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f63 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-11.82f ,0f });
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-10.65f ,0f });
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f67 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,7f ,0f ,0f ,0f ,0f });
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f69 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-18.34f ,0f });
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-17.37f ,0f });
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f73 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,3.46f ,0f ,0f ,0f ,0f });
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f75 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-17.63f ,0f });
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-17.14f ,0f });
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f79 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,3.75f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f ,1f });
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,1f });
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.803f ,3.501f ,8.836f ,0.781f ,3.51f ,8.647f });
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation85 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.0118f ,-0.9911f ,-0.1325f ,2.8785f ,-0.0199f ,-0.993f ,-0.1163f ,2.9232f });
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation87 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.9093f ,-0.4082f ,0.0806f ,0.8073f ,0.9336f ,-0.3501f ,0.0768f ,0.824f });
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation89 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.9834f ,0.0677f ,0.1685f ,0.7761f ,0.9841f ,0.066f ,0.1649f ,0.7723f });
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation91 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.9778f ,0.1629f ,-0.1317f ,0.736f ,-0.9794f ,0.1474f ,-0.1381f ,0.7342f });
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation93 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.0626f ,0.7102f ,0.7012f ,0.2502f ,-0.0355f ,0.2109f ,0.9769f ,0.3411f });
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation95 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.1561f ,-0.2157f ,0.9639f ,1.7536f ,0.0022f ,-0.1597f ,0.9872f ,1.6521f });
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation97 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.9933f ,-0.0526f ,-0.103f ,1.6066f ,-0.9965f ,0.0822f ,0.0138f ,1.6744f });
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation99 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0434f ,0.0003f ,0.9991f ,0.0121f ,0.4673f ,0.0029f ,0.8841f ,0.0138f });
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation101 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.0734f ,-0.5964f ,-0.7993f ,0.3057f ,-0.07f ,-0.9291f ,-0.3633f ,0.4091f });
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation103 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.6801f ,-0.6074f ,-0.4106f ,2.0536f ,-0.765f ,-0.5303f ,-0.3654f ,1.9107f });
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation105 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.9378f ,0.2739f ,0.2135f ,1.4058f ,-0.9433f ,0.2577f ,0.2091f ,1.3563f });
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation107 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.4025f ,0.0061f ,-0.9154f ,0.0299f ,0.5037f ,0.0087f ,-0.8638f ,0.0329f });
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation109 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.8595f ,-0.1039f ,0.5004f ,0.4748f ,0.7784f ,-0.0864f ,0.6217f ,0.3536f });
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation111 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.9184f ,0.2378f ,0.3162f ,0.9291f ,0.9762f ,0.1432f ,0.1627f ,1.0525f });
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation113 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.0199f ,1f ,0f ,0f ,0.0286f });
  }
}
private class MFFloat114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation115 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5548f ,-0.0795f ,-0.8282f ,0.3423f ,-0.5234f ,-0.0778f ,-0.8485f ,0.3468f });
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation117 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.9694f ,-0.234f ,0.0739f ,0.9755f ,0.9797f ,-0.1864f ,0.0732f ,0.9707f });
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation119 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.418f ,-1f ,0f ,0f ,0.4526f });
  }
}
}
