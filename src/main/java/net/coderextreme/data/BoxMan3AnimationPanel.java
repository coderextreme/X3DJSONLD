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
public class BoxMan3AnimationPanel implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new BoxMan3AnimationPanel().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/BoxMan3AnimationPanel.new.java.x3d");
    model.toFileJSON("../data/BoxMan3AnimationPanel.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("BoxMan3AnimationPanel.x3d"))
        .addMeta(new meta().setName("description").setContent("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors."))
        .addMeta(new meta().setName("creator").setContent("Joe Williams and James Smith - james@vapourtech.com"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new meta().setName("generator").setContent(".x3d to .x3d translation used BS Contact Geo 8.203"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta(new meta().setName("created").setContent("1 March 2001"))
        .addMeta(new meta().setName("revision").setContent("12 January 2017"))
        .addMeta(new meta().setName("translated").setContent("14 January 2017"))
        .addMeta(new meta().setName("modified").setContent("Tue, 09 Sep 2025 19:37:50 GMT"))
        .addMeta(new meta().setName("error").setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"))
        .addMeta(new meta().setName("Image").setContent("BoxManAnimationPanelInclined.png"))
        .addMeta(new meta().setName("MovingImage").setContent("BoxManAnimationPanel.mp4"))
        .addMeta(new meta().setName("MovingImage").setContent("https://www.youtube.com/watch?v=8tI83Rtg_DU"))
        .addMeta(new meta().setName("reference").setContent("https://twitter.com/Web3DConsortium/status/820638047523913728"))
        .addMeta(new meta().setName("reference").setContent("https://twitter.com/Web3DConsortium/status/820642726009978881"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org"))
        .addMeta(new meta().setName("reference").setContent("originals/boxman.wrl"))
        .addMeta(new meta().setName("reference").setContent("BoxMan3.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models/HAnim2001/boxman"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
        .addMeta(new meta().setName("reference").setContent("http://www.vapourtech.com"))
        .addMeta(new meta().setName("TODO").setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"))
        .addMeta(new meta().setName("rights").setContent("(C) 2000 James Smith - james@vapourtech.com")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("BoxMan3 - A Seamless VRML Human").setInfo(new MFString0().getArray()))
        .addChild(new Background().setSkyColor(new MFColor1().getArray()).setGroundColor(new MFColor2().getArray()))
        .addChild(new HAnimHumanoid().setDEF("boxman_Humanoid").setName("Humanoid").setInfo(new MFString3().getArray()).setVersion("1.0")
          .addSkeleton(new HAnimJoint("boxman_Humanoid").setDEF("boxman_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f ,0.9723f ,-0.0728f }).setSkinCoordIndex(new MFInt324().getArray()).setSkinCoordWeight(new MFFloat5().getArray())
            .addChild(new HAnimSegment("boxman_humanoid_root").setDEF("boxman_sacrum").setName("sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f ,0.9723f ,-0.0728f })
                .addChild(new Shape().setDEF("SphereYellow")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0f })))
                  .setGeometry(new Sphere().setRadius(0.02f )))))
            .addChild(new HAnimJoint("boxman_humanoid_root").setDEF("boxman_l_hip").setName("l_hip").setCenter(new float[] {0.0956f ,0.9364f ,0f }).setSkinCoordIndex(new MFInt326().getArray()).setSkinCoordWeight(new MFFloat7().getArray())
              .addChild(new HAnimSegment("boxman_l_hip").setDEF("boxman_l_thigh").setName("l_thigh")
                .addChild(new Transform().setTranslation(new float[] {0.0956f ,0.9364f ,0f })
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_l_hip").setDEF("boxman_l_knee").setName("l_knee").setCenter(new float[] {0.0956f ,0.5095f ,-0.0036f }).setSkinCoordIndex(new MFInt328().getArray()).setSkinCoordWeight(new MFFloat9().getArray())
                .addChild(new HAnimSegment("boxman_l_knee").setDEF("boxman_l_calf").setName("l_calf")
                  .addChild(new Transform().setTranslation(new float[] {0.0956f ,0.5095f ,-0.0036f })
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint("boxman_l_knee").setDEF("boxman_l_ankle").setName("l_ankle").setRotation(new float[] {-0.999999999999999f ,0f ,0f ,0.934517418078819f }).setCenter(new float[] {0.0946f ,0.0762f ,-0.0261f }).setSkinCoordIndex(new MFInt3210().getArray()).setSkinCoordWeight(new MFFloat11().getArray())
                  .addChild(new HAnimSegment("boxman_l_ankle").setDEF("boxman_l_hindfoot").setName("l_hindfoot")
                    .addChild(new Transform().setTranslation(new float[] {0.0946f ,0.0762f ,-0.0261f })
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint("boxman_l_ankle").setDEF("boxman_l_midtarsal").setName("l_midtarsal").setCenter(new float[] {0.1079f ,0.0317f ,0.067f }).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray())
                    .addChild(new HAnimSegment("boxman_l_midtarsal").setDEF("boxman_l_middistal").setName("l_middistal")
                      .addChild(new Transform().setTranslation(new float[] {0.1079f ,0.0317f ,0.067f })
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite("boxman_l_middistal").setDEF("boxman_l_middistal_tip").setName("l_middistal_tip").setTranslation(new float[] {0.095f ,0.0005f ,0.1924f })
                        .addChild(new Shape().setDEF("SphereRed")
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f })))
                          .setGeometry(new Sphere().setRadius(0.02f )))))))))
            .addChild(new HAnimJoint("boxman_humanoid_root").setDEF("boxman_r_hip").setName("r_hip").setRotation(new float[] {-1f ,0f ,0f ,1.84517416925276f }).setCenter(new float[] {-0.0956f ,0.9364f ,0f }).setSkinCoordIndex(new MFInt3214().getArray()).setSkinCoordWeight(new MFFloat15().getArray())
              .addChild(new HAnimSegment("boxman_r_hip").setDEF("boxman_r_thigh").setName("r_thigh")
                .addChild(new Transform().setTranslation(new float[] {-0.0956f ,0.9364f ,0f })
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_r_hip").setDEF("boxman_r_knee").setName("r_knee").setRotation(new float[] {1f ,0f ,0f ,1.81193032768473f }).setCenter(new float[] {-0.0956f ,0.5095f ,-0.0036f }).setSkinCoordIndex(new MFInt3216().getArray()).setSkinCoordWeight(new MFFloat17().getArray())
                .addChild(new HAnimSegment("boxman_r_knee").setDEF("boxman_r_calf").setName("r_calf")
                  .addChild(new Transform().setTranslation(new float[] {-0.0956f ,0.5095f ,-0.0036f })
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint("boxman_r_knee").setDEF("boxman_r_ankle").setName("r_ankle").setRotation(new float[] {-0.999999999999999f ,0f ,0f ,0.934517418078819f }).setCenter(new float[] {-0.0946f ,0.0762f ,-0.0261f }).setSkinCoordIndex(new MFInt3218().getArray()).setSkinCoordWeight(new MFFloat19().getArray())
                  .addChild(new HAnimSegment("boxman_r_ankle").setDEF("boxman_r_hindfoot").setName("r_hindfoot")
                    .addChild(new Transform().setTranslation(new float[] {-0.0946f ,0.0762f ,-0.0261f })
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint("boxman_r_ankle").setDEF("boxman_r_midtarsal").setName("r_midtarsal").setCenter(new float[] {-0.1079f ,0.0317f ,0.067f }).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray())
                    .addChild(new HAnimSegment("boxman_r_midtarsal").setDEF("boxman_r_middistal").setName("r_middistal")
                      .addChild(new Transform().setTranslation(new float[] {-0.1079f ,0.0317f ,0.067f })
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite("boxman_r_middistal").setDEF("boxman_r_middistal_tip").setName("r_middistal_tip").setTranslation(new float[] {-0.095f ,0.0005f ,0.1924f })
                        .addChild(new Shape().setUSE("SphereRed"))))))))
            .addChild(new HAnimJoint("boxman_humanoid_root").setDEF("boxman_vl5").setName("vl5").setCenter(new float[] {0f ,1.0817f ,-0.0728f }).setSkinCoordIndex(new MFInt3222().getArray()).setSkinCoordWeight(new MFFloat23().getArray())
              .addChild(new HAnimSegment("boxman_vl5").setDEF("boxman_l5").setName("l5")
                .addChild(new Transform().setTranslation(new float[] {0f ,1.0817f ,-0.0728f })
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint("boxman_vl5").setDEF("boxman_skullbase").setName("skullbase").setRotation(new float[] {-0.999999999999998f ,0f ,0f ,0.567582977341481f }).setCenter(new float[] {0f ,1.644f ,0.036f }).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray())
                .addChild(new HAnimSegment("boxman_skullbase").setDEF("boxman_skull").setName("skull")
                  .addChild(new Transform().setTranslation(new float[] {0f ,1.644f ,0.036f })
                    .addChild(new Shape().setUSE("SphereYellow")))
                  .addChild(new HAnimSite("boxman_skull").setDEF("boxman_skull_tip").setName("skull_tip").setTranslation(new float[] {-0.0029f ,1.7771f ,0.0274f })
                    .addChild(new Shape().setUSE("SphereYellow")))))
              .addChild(new HAnimJoint("boxman_vl5").setDEF("boxman_l_shoulder").setName("l_shoulder").setRotation(new float[] {-0.168396082523642f ,0f ,0.98571941209996f ,1.75368175088092f }).setCenter(new float[] {0.1968f ,1.4642f ,-0.0265f }).setSkinCoordIndex(new MFInt3226().getArray()).setSkinCoordWeight(new MFFloat27().getArray())
                .addChild(new HAnimSegment("boxman_l_shoulder").setDEF("boxman_l_upperarm").setName("l_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {0.1968f ,1.4642f ,-0.0265f })
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint("boxman_l_shoulder").setDEF("boxman_l_elbow").setName("l_elbow").setRotation(new float[] {0.976795664618561f ,-0.214173363382058f ,0f ,4.35600755948079f }).setCenter(new float[] {0.1982f ,1.1622f ,-0.0557f }).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray())
                  .addChild(new HAnimSegment("boxman_l_elbow").setDEF("boxman_l_forearm").setName("l_forearm")
                    .addChild(new Transform().setTranslation(new float[] {0.1982f ,1.1622f ,-0.0557f })
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint("boxman_l_elbow").setDEF("boxman_l_wrist").setName("l_wrist").setRotation(new float[] {0f ,1f ,0f ,0.379691598867005f }).setCenter(new float[] {0.1972f ,0.8929f ,-0.069f }).setSkinCoordIndex(new MFInt3230().getArray()).setSkinCoordWeight(new MFFloat31().getArray())
                    .addChild(new HAnimSegment("boxman_l_wrist").setDEF("boxman_l_hand").setName("l_hand")
                      .addChild(new Transform().setTranslation(new float[] {0.1972f ,0.8929f ,-0.069f })
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite("boxman_l_hand").setDEF("boxman_l_hand_tip").setName("l_hand_tip").setTranslation(new float[] {0.1912f ,0.6976f ,-0.071f })
                        .addChild(new Shape().setUSE("SphereRed")))))))
              .addChild(new HAnimJoint("boxman_vl5").setDEF("boxman_r_shoulder").setName("r_shoulder").setRotation(new float[] {0.168396082523642f ,0f ,0.98571941209996f ,4.52950355629867f }).setCenter(new float[] {-0.1968f ,1.4642f ,-0.0265f }).setSkinCoordIndex(new MFInt3232().getArray()).setSkinCoordWeight(new MFFloat33().getArray())
                .addChild(new HAnimSegment("boxman_r_shoulder").setDEF("boxman_r_upperarm").setName("r_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {-0.1968f ,1.4642f ,-0.0265f })
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint("boxman_r_shoulder").setDEF("boxman_r_elbow").setName("r_elbow").setRotation(new float[] {0.976795664618562f ,0.214173363382058f ,0f ,4.35600755948079f }).setCenter(new float[] {-0.1982f ,1.1622f ,-0.0557f }).setSkinCoordIndex(new MFInt3234().getArray()).setSkinCoordWeight(new MFFloat35().getArray())
                  .addChild(new HAnimSegment("boxman_r_elbow").setDEF("boxman_r_forearm").setName("r_forearm")
                    .addChild(new Transform().setTranslation(new float[] {-0.1982f ,1.1622f ,-0.0557f })
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint("boxman_r_elbow").setDEF("boxman_r_wrist").setName("r_wrist").setRotation(new float[] {0f ,-1f ,0f ,0.379691598867005f }).setCenter(new float[] {-0.1972f ,0.8929f ,-0.069f }).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray())
                    .addChild(new HAnimSegment("boxman_r_wrist").setDEF("boxman_r_hand").setName("r_hand")
                      .addChild(new Transform().setTranslation(new float[] {-0.1972f ,0.8929f ,-0.069f })
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite("boxman_r_hand").setDEF("boxman_r_hand_tip").setName("r_hand_tip").setTranslation(new float[] {-0.1912f ,0.6976f ,-0.071f })
                        .addChild(new Shape().setUSE("SphereRed")))))))))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_humanoid_root"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_skullbase"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_vl5"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_ankle"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_ankle"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_elbow"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_elbow"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_hip"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_hip"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_knee"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_knee"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_midtarsal"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_midtarsal"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_shoulder"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_shoulder"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_r_wrist"))
          .addJoints(new HAnimJoint("boxman_Humanoid").setUSE("boxman_l_wrist"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_sacrum"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l5"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_skull"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_calf"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_calf"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_forearm"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_forearm"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_hand"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_hand"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_hindfoot"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_hindfoot"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_middistal"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_middistal"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_thigh"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_thigh"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_l_upperarm"))
          .addSegments(new HAnimSegment("boxman_Humanoid").setUSE("boxman_r_upperarm"))
          .addSites(new HAnimSite("boxman_Humanoid").setUSE("boxman_skull_tip"))
          .addSites(new HAnimSite("boxman_Humanoid").setUSE("boxman_l_hand_tip"))
          .addSites(new HAnimSite("boxman_Humanoid").setUSE("boxman_r_hand_tip"))
          .addSites(new HAnimSite("boxman_Humanoid").setUSE("boxman_l_middistal_tip"))
          .addSites(new HAnimSite("boxman_Humanoid").setUSE("boxman_r_middistal_tip"))
          .addViewpoints(new HAnimSite("boxman_Humanoid").setDEF("boxman_BoxMan_view").setName("BoxMan_view")
            .addChild(new Viewpoint().setDEF("Inclined_View").setDescription("Inclined View").setPosition(new float[] {2f ,0.9f ,2f }).setOrientation(new float[] {0f ,1f ,0f ,0.78f }))
            .addChild(new Viewpoint().setDEF("Front_View").setDescription("Front View").setPosition(new float[] {0f ,1f ,3f }))
            .addChild(new Viewpoint().setDEF("Best_View").setDescription("Right-side View").setPosition(new float[] {-3f ,1f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,-1.57f }))
            .addChild(new Viewpoint().setDEF("Side_View").setDescription("Left-side View").setPosition(new float[] {3f ,1f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.57f }))
            .addChild(new Viewpoint().setDEF("Top_View").setDescription("Top View").setPosition(new float[] {0f ,3f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.57f })))
          .setSkinCoord(new Coordinate().setDEF("SKINCOORD").setPoint(new MFVec3f38().getArray()))
          .addSkin(new Group()
            .addChild(new Shape().setDEF("TrouserSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f }).setTransparency(0.5f )))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray().append(new MFInt3240().getArray()))
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("ShoeSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,0f }).setTransparency(0.5f )))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3241().getArray())
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("ShirtSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0f }).setTransparency(0.5f )))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3242().getArray())
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("HeadHandsFleshToneSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0.75f ,0.75f }).setTransparency(0.5f )))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3243().getArray())
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("SkinLines")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,0f })))
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3244().getArray().append(new MFInt3245().getArray()).append(new MFInt3246().getArray()))
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))))
        .addChild(new Group().setDEF("StopAnimation")
          .addChild(new TimeSensor().setDEF("StopTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new PositionInterpolator().setDEF("Stop_humanoid_root_TranslationInterpolator").setKey(new MFFloat47().getArray()).setKeyValue(new MFVec3f48().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_humanoid_root_RotationInterpolator").setKey(new MFFloat49().getArray()).setKeyValue(new MFRotation50().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_sacroiliac_RotationInterpolator").setKey(new MFFloat51().getArray()).setKeyValue(new MFRotation52().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_hip_RotationInterpolator").setKey(new MFFloat53().getArray()).setKeyValue(new MFRotation54().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_knee_RotationInterpolator").setKey(new MFFloat55().getArray()).setKeyValue(new MFRotation56().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ankle_RotationInterpolator").setKey(new MFFloat57().getArray()).setKeyValue(new MFRotation58().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_subtalar_RotationInterpolator").setKey(new MFFloat59().getArray()).setKeyValue(new MFRotation60().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_midtarsal_RotationInterpolator").setKey(new MFFloat61().getArray()).setKeyValue(new MFRotation62().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_metatarsal_RotationInterpolator").setKey(new MFFloat63().getArray()).setKeyValue(new MFRotation64().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_hip_RotationInterpolator").setKey(new MFFloat65().getArray()).setKeyValue(new MFRotation66().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_knee_RotationInterpolator").setKey(new MFFloat67().getArray()).setKeyValue(new MFRotation68().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ankle_RotationInterpolator").setKey(new MFFloat69().getArray()).setKeyValue(new MFRotation70().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_subtalar_RotationInterpolator").setKey(new MFFloat71().getArray()).setKeyValue(new MFRotation72().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_midtarsal_RotationInterpolator").setKey(new MFFloat73().getArray()).setKeyValue(new MFRotation74().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_metatarsal_RotationInterpolator").setKey(new MFFloat75().getArray()).setKeyValue(new MFRotation76().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl5_RotationInterpolator").setKey(new MFFloat77().getArray()).setKeyValue(new MFRotation78().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl4_RotationInterpolator").setKey(new MFFloat79().getArray()).setKeyValue(new MFRotation80().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl3_RotationInterpolator").setKey(new MFFloat81().getArray()).setKeyValue(new MFRotation82().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl2_RotationInterpolator").setKey(new MFFloat83().getArray()).setKeyValue(new MFRotation84().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl1_RotationInterpolator").setKey(new MFFloat85().getArray()).setKeyValue(new MFRotation86().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt12_RotationInterpolator").setKey(new MFFloat87().getArray()).setKeyValue(new MFRotation88().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt11_RotationInterpolator").setKey(new MFFloat89().getArray()).setKeyValue(new MFRotation90().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt10_RotationInterpolator").setKey(new MFFloat91().getArray()).setKeyValue(new MFRotation92().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt9_RotationInterpolator").setKey(new MFFloat93().getArray()).setKeyValue(new MFRotation94().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt8_RotationInterpolator").setKey(new MFFloat95().getArray()).setKeyValue(new MFRotation96().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt7_RotationInterpolator").setKey(new MFFloat97().getArray()).setKeyValue(new MFRotation98().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt6_RotationInterpolator").setKey(new MFFloat99().getArray()).setKeyValue(new MFRotation100().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt5_RotationInterpolator").setKey(new MFFloat101().getArray()).setKeyValue(new MFRotation102().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt4_RotationInterpolator").setKey(new MFFloat103().getArray()).setKeyValue(new MFRotation104().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt3_RotationInterpolator").setKey(new MFFloat105().getArray()).setKeyValue(new MFRotation106().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt2_RotationInterpolator").setKey(new MFFloat107().getArray()).setKeyValue(new MFRotation108().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt1_RotationInterpolator").setKey(new MFFloat109().getArray()).setKeyValue(new MFRotation110().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc7_RotationInterpolator").setKey(new MFFloat111().getArray()).setKeyValue(new MFRotation112().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc6_RotationInterpolator").setKey(new MFFloat113().getArray()).setKeyValue(new MFRotation114().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc5_RotationInterpolator").setKey(new MFFloat115().getArray()).setKeyValue(new MFRotation116().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc4_RotationInterpolator").setKey(new MFFloat117().getArray()).setKeyValue(new MFRotation118().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc3_RotationInterpolator").setKey(new MFFloat119().getArray()).setKeyValue(new MFRotation120().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc2_RotationInterpolator").setKey(new MFFloat121().getArray()).setKeyValue(new MFRotation122().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc1_RotationInterpolator").setKey(new MFFloat123().getArray()).setKeyValue(new MFRotation124().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_skullbase_RotationInterpolator").setKey(new MFFloat125().getArray()).setKeyValue(new MFRotation126().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_eyeball_joint_RotationInterpolator").setKey(new MFFloat127().getArray()).setKeyValue(new MFRotation128().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_eyeball_joint_RotationInterpolator").setKey(new MFFloat129().getArray()).setKeyValue(new MFRotation130().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_sternoclavicular_RotationInterpolator").setKey(new MFFloat131().getArray()).setKeyValue(new MFRotation132().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_acromioclavicular_RotationInterpolator").setKey(new MFFloat133().getArray()).setKeyValue(new MFRotation134().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_shoulder_RotationInterpolator").setKey(new MFFloat135().getArray()).setKeyValue(new MFRotation136().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_elbow_RotationInterpolator").setKey(new MFFloat137().getArray()).setKeyValue(new MFRotation138().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_wrist_RotationInterpolator").setKey(new MFFloat139().getArray()).setKeyValue(new MFRotation140().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb1_RotationInterpolator").setKey(new MFFloat141().getArray()).setKeyValue(new MFRotation142().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb2_RotationInterpolator").setKey(new MFFloat143().getArray()).setKeyValue(new MFRotation144().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb3_RotationInterpolator").setKey(new MFFloat145().getArray()).setKeyValue(new MFRotation146().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index0_RotationInterpolator").setKey(new MFFloat147().getArray()).setKeyValue(new MFRotation148().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index1_RotationInterpolator").setKey(new MFFloat149().getArray()).setKeyValue(new MFRotation150().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index2_RotationInterpolator").setKey(new MFFloat151().getArray()).setKeyValue(new MFRotation152().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index3_RotationInterpolator").setKey(new MFFloat153().getArray()).setKeyValue(new MFRotation154().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle0_RotationInterpolator").setKey(new MFFloat155().getArray()).setKeyValue(new MFRotation156().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle1_RotationInterpolator").setKey(new MFFloat157().getArray()).setKeyValue(new MFRotation158().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle2_RotationInterpolator").setKey(new MFFloat159().getArray()).setKeyValue(new MFRotation160().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle3_RotationInterpolator").setKey(new MFFloat161().getArray()).setKeyValue(new MFRotation162().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring0_RotationInterpolator").setKey(new MFFloat163().getArray()).setKeyValue(new MFRotation164().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring1_RotationInterpolator").setKey(new MFFloat165().getArray()).setKeyValue(new MFRotation166().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring2_RotationInterpolator").setKey(new MFFloat167().getArray()).setKeyValue(new MFRotation168().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring3_RotationInterpolator").setKey(new MFFloat169().getArray()).setKeyValue(new MFRotation170().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky0_RotationInterpolator").setKey(new MFFloat171().getArray()).setKeyValue(new MFRotation172().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky1_RotationInterpolator").setKey(new MFFloat173().getArray()).setKeyValue(new MFRotation174().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky2_RotationInterpolator").setKey(new MFFloat175().getArray()).setKeyValue(new MFRotation176().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky3_RotationInterpolator").setKey(new MFFloat177().getArray()).setKeyValue(new MFRotation178().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_sternoclavicular_RotationInterpolator").setKey(new MFFloat179().getArray()).setKeyValue(new MFRotation180().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_acromioclavicular_RotationInterpolator").setKey(new MFFloat181().getArray()).setKeyValue(new MFRotation182().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_shoulder_RotationInterpolator").setKey(new MFFloat183().getArray()).setKeyValue(new MFRotation184().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_elbow_RotationInterpolator").setKey(new MFFloat185().getArray()).setKeyValue(new MFRotation186().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_wrist_RotationInterpolator").setKey(new MFFloat187().getArray()).setKeyValue(new MFRotation188().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb1_RotationInterpolator").setKey(new MFFloat189().getArray()).setKeyValue(new MFRotation190().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb2_RotationInterpolator").setKey(new MFFloat191().getArray()).setKeyValue(new MFRotation192().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb3_RotationInterpolator").setKey(new MFFloat193().getArray()).setKeyValue(new MFRotation194().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index0_RotationInterpolator").setKey(new MFFloat195().getArray()).setKeyValue(new MFRotation196().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index1_RotationInterpolator").setKey(new MFFloat197().getArray()).setKeyValue(new MFRotation198().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index2_RotationInterpolator").setKey(new MFFloat199().getArray()).setKeyValue(new MFRotation200().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index3_RotationInterpolator").setKey(new MFFloat201().getArray()).setKeyValue(new MFRotation202().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle0_RotationInterpolator").setKey(new MFFloat203().getArray()).setKeyValue(new MFRotation204().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle1_RotationInterpolator").setKey(new MFFloat205().getArray()).setKeyValue(new MFRotation206().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle2_RotationInterpolator").setKey(new MFFloat207().getArray()).setKeyValue(new MFRotation208().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle3_RotationInterpolator").setKey(new MFFloat209().getArray()).setKeyValue(new MFRotation210().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring0_RotationInterpolator").setKey(new MFFloat211().getArray()).setKeyValue(new MFRotation212().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring1_RotationInterpolator").setKey(new MFFloat213().getArray()).setKeyValue(new MFRotation214().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring2_RotationInterpolator").setKey(new MFFloat215().getArray()).setKeyValue(new MFRotation216().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring3_RotationInterpolator").setKey(new MFFloat217().getArray()).setKeyValue(new MFRotation218().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky0_RotationInterpolator").setKey(new MFFloat219().getArray()).setKeyValue(new MFRotation220().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky1_RotationInterpolator").setKey(new MFFloat221().getArray()).setKeyValue(new MFRotation222().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky2_RotationInterpolator").setKey(new MFFloat223().getArray()).setKeyValue(new MFRotation224().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky3_RotationInterpolator").setKey(new MFFloat225().getArray()).setKeyValue(new MFRotation226().getArray())))
        .addChild(new Group().setDEF("StandAnimation")
          .addChild(new TimeSensor().setDEF("StandTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_metatarsal_PitchInterpolator").setKey(new MFFloat227().getArray()).setKeyValue(new MFRotation228().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_ankle_RotationInterpolator").setKey(new MFFloat229().getArray()).setKeyValue(new MFRotation230().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_knee_RotationInterpolator").setKey(new MFFloat231().getArray()).setKeyValue(new MFRotation232().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_hip_RotationInterpolator").setKey(new MFFloat233().getArray()).setKeyValue(new MFRotation234().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_ankle_RotationInterpolator").setKey(new MFFloat235().getArray()).setKeyValue(new MFRotation236().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_knee_RotationInterpolator").setKey(new MFFloat237().getArray()).setKeyValue(new MFRotation238().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_hip_RotationInterpolator").setKey(new MFFloat239().getArray()).setKeyValue(new MFRotation240().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_wrist_RotationInterpolator").setKey(new MFFloat241().getArray()).setKeyValue(new MFRotation242().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_elbow_RotationInterpolator").setKey(new MFFloat243().getArray()).setKeyValue(new MFRotation244().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_shoulder_RotationInterpolator").setKey(new MFFloat245().getArray()).setKeyValue(new MFRotation246().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_wrist_RotationInterpolator").setKey(new MFFloat247().getArray()).setKeyValue(new MFRotation248().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_elbow_RotationInterpolator").setKey(new MFFloat249().getArray()).setKeyValue(new MFRotation250().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_shoulder_RotationInterpolator").setKey(new MFFloat251().getArray()).setKeyValue(new MFRotation252().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_head_RotationInterpolator").setKey(new MFFloat253().getArray()).setKeyValue(new MFRotation254().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_neck_RotationInterpolator").setKey(new MFFloat255().getArray()).setKeyValue(new MFRotation256().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_eyeball_RotationInterpolator").setKey(new MFFloat257().getArray()).setKeyValue(new MFRotation258().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_eyeball_RotationInterpolator").setKey(new MFFloat259().getArray()).setKeyValue(new MFRotation260().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_lower_body_RotationInterpolator").setKey(new MFFloat261().getArray()).setKeyValue(new MFRotation262().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_upper_body_RotationInterpolator").setKey(new MFFloat263().getArray()).setKeyValue(new MFRotation264().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_whole_body_RotationInterpolator").setKey(new MFFloat265().getArray()).setKeyValue(new MFRotation266().getArray()))
          .addChild(new PositionInterpolator().setDEF("Stand_whole_body_TranslationInterpolator").setKey(new MFFloat267().getArray()).setKeyValue(new MFVec3f268().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_sternoclavicular_RollInterpolator").setKey(new MFFloat269().getArray()).setKeyValue(new MFRotation270().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_acromioclavicular_RollInterpolator").setKey(new MFFloat271().getArray()).setKeyValue(new MFRotation272().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_sternoclavicular_RollInterpolator").setKey(new MFFloat273().getArray()).setKeyValue(new MFRotation274().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_acromioclavicular_RollInterpolator").setKey(new MFFloat275().getArray()).setKeyValue(new MFRotation276().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_sacroiliac_YawInterpolator").setKey(new MFFloat277().getArray()).setKeyValue(new MFRotation278().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vl5_YawInterpolator").setKey(new MFFloat279().getArray()).setKeyValue(new MFRotation280().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vc6_YawInterpolator").setKey(new MFFloat281().getArray()).setKeyValue(new MFRotation282().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_thumb1_PitchInterpolator").setKey(new MFFloat283().getArray()).setKeyValue(new MFRotation284().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_thumb1_PitchInterpolator").setKey(new MFFloat285().getArray()).setKeyValue(new MFRotation286().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index1_RollInterpolator").setKey(new MFFloat287().getArray()).setKeyValue(new MFRotation288().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index2_RollInterpolator").setKey(new MFFloat289().getArray()).setKeyValue(new MFRotation290().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index3_RollInterpolator").setKey(new MFFloat291().getArray()).setKeyValue(new MFRotation292().getArray())))
        .addChild(new Group().setDEF("PitchesAnimation")
          .addChild(new TimeSensor().setDEF("PitchTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_metatarsal_PitchInterpolator").setKey(new MFFloat293().getArray()).setKeyValue(new MFRotation294().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_ankle_RotationInterpolator").setKey(new MFFloat295().getArray()).setKeyValue(new MFRotation296().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_knee_RotationInterpolator").setKey(new MFFloat297().getArray()).setKeyValue(new MFRotation298().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_hip_RotationInterpolator").setKey(new MFFloat299().getArray()).setKeyValue(new MFRotation300().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_ankle_RotationInterpolator").setKey(new MFFloat301().getArray()).setKeyValue(new MFRotation302().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_knee_RotationInterpolator").setKey(new MFFloat303().getArray()).setKeyValue(new MFRotation304().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_hip_RotationInterpolator").setKey(new MFFloat305().getArray()).setKeyValue(new MFRotation306().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_wrist_RotationInterpolator").setKey(new MFFloat307().getArray()).setKeyValue(new MFRotation308().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_elbow_RotationInterpolator").setKey(new MFFloat309().getArray()).setKeyValue(new MFRotation310().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_shoulder_RotationInterpolator").setKey(new MFFloat311().getArray()).setKeyValue(new MFRotation312().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_wrist_RotationInterpolator").setKey(new MFFloat313().getArray()).setKeyValue(new MFRotation314().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_elbow_RotationInterpolator").setKey(new MFFloat315().getArray()).setKeyValue(new MFRotation316().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_shoulder_RotationInterpolator").setKey(new MFFloat317().getArray()).setKeyValue(new MFRotation318().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_head_RotationInterpolator").setKey(new MFFloat319().getArray()).setKeyValue(new MFRotation320().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_neck_RotationInterpolator").setKey(new MFFloat321().getArray()).setKeyValue(new MFRotation322().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_lower_body_RotationInterpolator").setKey(new MFFloat323().getArray()).setKeyValue(new MFRotation324().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_upper_body_RotationInterpolator").setKey(new MFFloat325().getArray()).setKeyValue(new MFRotation326().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_whole_body_RotationInterpolator").setKey(new MFFloat327().getArray()).setKeyValue(new MFRotation328().getArray()))
          .addChild(new PositionInterpolator().setDEF("Pitches_whole_body_TranslationInterpolator").setKey(new MFFloat329().getArray()).setKeyValue(new MFVec3f330().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_sternoclavicular_RollInterpolator").setKey(new MFFloat331().getArray()).setKeyValue(new MFRotation332().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_acromioclavicular_RollInterpolator").setKey(new MFFloat333().getArray()).setKeyValue(new MFRotation334().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_sternoclavicular_RollInterpolator").setKey(new MFFloat335().getArray()).setKeyValue(new MFRotation336().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_acromioclavicular_RollInterpolator").setKey(new MFFloat337().getArray()).setKeyValue(new MFRotation338().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_sacroiliac_YawInterpolator").setKey(new MFFloat339().getArray()).setKeyValue(new MFRotation340().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vl5_YawInterpolator").setKey(new MFFloat341().getArray()).setKeyValue(new MFRotation342().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vc6_YawInterpolator").setKey(new MFFloat343().getArray()).setKeyValue(new MFRotation344().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_thumb1_PitchInterpolator").setKey(new MFFloat345().getArray()).setKeyValue(new MFRotation346().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_thumb1_PitchInterpolator").setKey(new MFFloat347().getArray()).setKeyValue(new MFRotation348().getArray())))
        .addChild(new Group().setDEF("YawsAnimation")
          .addChild(new TimeSensor().setDEF("YawTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_metatarsal_PitchInterpolator").setKey(new MFFloat349().getArray()).setKeyValue(new MFRotation350().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_ankle_RotationInterpolator").setKey(new MFFloat351().getArray()).setKeyValue(new MFRotation352().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_knee_RotationInterpolator").setKey(new MFFloat353().getArray()).setKeyValue(new MFRotation354().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_hip_RotationInterpolator").setKey(new MFFloat355().getArray()).setKeyValue(new MFRotation356().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_ankle_RotationInterpolator").setKey(new MFFloat357().getArray()).setKeyValue(new MFRotation358().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_knee_RotationInterpolator").setKey(new MFFloat359().getArray()).setKeyValue(new MFRotation360().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_hip_RotationInterpolator").setKey(new MFFloat361().getArray()).setKeyValue(new MFRotation362().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_wrist_RotationInterpolator").setKey(new MFFloat363().getArray()).setKeyValue(new MFRotation364().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_elbow_RotationInterpolator").setKey(new MFFloat365().getArray()).setKeyValue(new MFRotation366().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_shoulder_RotationInterpolator").setKey(new MFFloat367().getArray()).setKeyValue(new MFRotation368().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_wrist_RotationInterpolator").setKey(new MFFloat369().getArray()).setKeyValue(new MFRotation370().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_elbow_RotationInterpolator").setKey(new MFFloat371().getArray()).setKeyValue(new MFRotation372().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_shoulder_RotationInterpolator").setKey(new MFFloat373().getArray()).setKeyValue(new MFRotation374().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_head_RotationInterpolator").setKey(new MFFloat375().getArray()).setKeyValue(new MFRotation376().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_neck_RotationInterpolator").setKey(new MFFloat377().getArray()).setKeyValue(new MFRotation378().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_upper_body_RotationInterpolator").setKey(new MFFloat379().getArray()).setKeyValue(new MFRotation380().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_lower_body_RotationInterpolator").setKey(new MFFloat381().getArray()).setKeyValue(new MFRotation382().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_whole_body_RotationInterpolator").setKey(new MFFloat383().getArray()).setKeyValue(new MFRotation384().getArray()))
          .addChild(new PositionInterpolator().setDEF("Yaws_whole_body_TranslationInterpolator").setKey(new MFFloat385().getArray()).setKeyValue(new MFVec3f386().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_sternoclavicular_RollInterpolator").setKey(new MFFloat387().getArray()).setKeyValue(new MFRotation388().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_acromioclavicular_RollInterpolator").setKey(new MFFloat389().getArray()).setKeyValue(new MFRotation390().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_sternoclavicular_RollInterpolator").setKey(new MFFloat391().getArray()).setKeyValue(new MFRotation392().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_acromioclavicular_RollInterpolator").setKey(new MFFloat393().getArray()).setKeyValue(new MFRotation394().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_sacroiliac_YawInterpolator").setKey(new MFFloat395().getArray()).setKeyValue(new MFRotation396().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vl5_YawInterpolator").setKey(new MFFloat397().getArray()).setKeyValue(new MFRotation398().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vc6_YawInterpolator").setKey(new MFFloat399().getArray()).setKeyValue(new MFRotation400().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_thumb1_PitchInterpolator").setKey(new MFFloat401().getArray()).setKeyValue(new MFRotation402().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_thumb1_PitchInterpolator").setKey(new MFFloat403().getArray()).setKeyValue(new MFRotation404().getArray())))
        .addChild(new Group().setDEF("RollsAnimation")
          .addChild(new TimeSensor().setDEF("RollTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_metatarsal_PitchInterpolator").setKey(new MFFloat405().getArray()).setKeyValue(new MFRotation406().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_ankle_RotationInterpolator").setKey(new MFFloat407().getArray()).setKeyValue(new MFRotation408().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_knee_RotationInterpolator").setKey(new MFFloat409().getArray()).setKeyValue(new MFRotation410().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_hip_RotationInterpolator").setKey(new MFFloat411().getArray()).setKeyValue(new MFRotation412().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_ankle_RotationInterpolator").setKey(new MFFloat413().getArray()).setKeyValue(new MFRotation414().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_knee_RotationInterpolator").setKey(new MFFloat415().getArray()).setKeyValue(new MFRotation416().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_hip_RotationInterpolator").setKey(new MFFloat417().getArray()).setKeyValue(new MFRotation418().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_wrist_RotationInterpolator").setKey(new MFFloat419().getArray()).setKeyValue(new MFRotation420().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_elbow_RotationInterpolator").setKey(new MFFloat421().getArray()).setKeyValue(new MFRotation422().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_shoulder_RotationInterpolator").setKey(new MFFloat423().getArray()).setKeyValue(new MFRotation424().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_wrist_RotationInterpolator").setKey(new MFFloat425().getArray()).setKeyValue(new MFRotation426().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_elbow_RotationInterpolator").setKey(new MFFloat427().getArray()).setKeyValue(new MFRotation428().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_shoulder_RotationInterpolator").setKey(new MFFloat429().getArray()).setKeyValue(new MFRotation430().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_head_RotationInterpolator").setKey(new MFFloat431().getArray()).setKeyValue(new MFRotation432().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_neck_RotationInterpolator").setKey(new MFFloat433().getArray()).setKeyValue(new MFRotation434().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_lower_body_RotationInterpolator").setKey(new MFFloat435().getArray()).setKeyValue(new MFRotation436().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_upper_body_RotationInterpolator").setKey(new MFFloat437().getArray()).setKeyValue(new MFRotation438().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_whole_body_RotationInterpolator").setKey(new MFFloat439().getArray()).setKeyValue(new MFRotation440().getArray()))
          .addChild(new PositionInterpolator().setDEF("Rolls_whole_body_TranslationInterpolator").setKey(new MFFloat441().getArray()).setKeyValue(new MFVec3f442().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_sternoclavicular_RollInterpolator").setKey(new MFFloat443().getArray()).setKeyValue(new MFRotation444().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_acromioclavicular_RollInterpolator").setKey(new MFFloat445().getArray()).setKeyValue(new MFRotation446().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_sternoclavicular_RollInterpolator").setKey(new MFFloat447().getArray()).setKeyValue(new MFRotation448().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_acromioclavicular_RollInterpolator").setKey(new MFFloat449().getArray()).setKeyValue(new MFRotation450().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_sacroiliac_YawInterpolator").setKey(new MFFloat451().getArray()).setKeyValue(new MFRotation452().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vl5_YawInterpolator").setKey(new MFFloat453().getArray()).setKeyValue(new MFRotation454().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vc6_YawInterpolator").setKey(new MFFloat455().getArray()).setKeyValue(new MFRotation456().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_thumb1_PitchInterpolator").setKey(new MFFloat457().getArray()).setKeyValue(new MFRotation458().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_thumb1_PitchInterpolator").setKey(new MFFloat459().getArray()).setKeyValue(new MFRotation460().getArray())))
        .addChild(new Group().setDEF("WalkAnimation")
          .addChild(new TimeSensor().setDEF("WalkTimer").setCycleInterval(1.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_metatarsal_PitchInterpolator").setKey(new MFFloat461().getArray()).setKeyValue(new MFRotation462().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_ankle_RotationInterpolator").setKey(new MFFloat463().getArray()).setKeyValue(new MFRotation464().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_knee_RotationInterpolator").setKey(new MFFloat465().getArray()).setKeyValue(new MFRotation466().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_hip_RotationInterpolator").setKey(new MFFloat467().getArray()).setKeyValue(new MFRotation468().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_ankle_RotationInterpolator").setKey(new MFFloat469().getArray()).setKeyValue(new MFRotation470().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_knee_RotationInterpolator").setKey(new MFFloat471().getArray()).setKeyValue(new MFRotation472().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_hip_RotationInterpolator").setKey(new MFFloat473().getArray()).setKeyValue(new MFRotation474().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_lower_body_RotationInterpolator").setKey(new MFFloat475().getArray()).setKeyValue(new MFRotation476().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_wrist_RotationInterpolator").setKey(new MFFloat477().getArray()).setKeyValue(new MFRotation478().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_elbow_RotationInterpolator").setKey(new MFFloat479().getArray()).setKeyValue(new MFRotation480().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_shoulder_RotationInterpolator").setKey(new MFFloat481().getArray()).setKeyValue(new MFRotation482().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_wrist_RotationInterpolator").setKey(new MFFloat483().getArray()).setKeyValue(new MFRotation484().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_elbow_RotationInterpolator").setKey(new MFFloat485().getArray()).setKeyValue(new MFRotation486().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_shoulder_RotationInterpolator").setKey(new MFFloat487().getArray()).setKeyValue(new MFRotation488().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_head_RotationInterpolator").setKey(new MFFloat489().getArray()).setKeyValue(new MFRotation490().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_neck_RotationInterpolator").setKey(new MFFloat491().getArray()).setKeyValue(new MFRotation492().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_upper_body_RotationInterpolator").setKey(new MFFloat493().getArray()).setKeyValue(new MFRotation494().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_whole_body_RotationInterpolator").setKey(new MFFloat495().getArray()).setKeyValue(new MFRotation496().getArray()))
          .addChild(new PositionInterpolator().setDEF("Walk_whole_body_TranslationInterpolator").setKey(new MFFloat497().getArray()).setKeyValue(new MFVec3f498().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_sternoclavicular_RollInterpolator").setKey(new MFFloat499().getArray()).setKeyValue(new MFRotation500().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_acromioclavicular_RollInterpolator").setKey(new MFFloat501().getArray()).setKeyValue(new MFRotation502().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_sternoclavicular_RollInterpolator").setKey(new MFFloat503().getArray()).setKeyValue(new MFRotation504().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_acromioclavicular_RollInterpolator").setKey(new MFFloat505().getArray()).setKeyValue(new MFRotation506().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_sacroiliac_YawInterpolator").setKey(new MFFloat507().getArray()).setKeyValue(new MFRotation508().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vl5_YawInterpolator").setKey(new MFFloat509().getArray()).setKeyValue(new MFRotation510().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vc6_YawInterpolator").setKey(new MFFloat511().getArray()).setKeyValue(new MFRotation512().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_thumb1_PitchInterpolator").setKey(new MFFloat513().getArray()).setKeyValue(new MFRotation514().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_thumb1_PitchInterpolator").setKey(new MFFloat515().getArray()).setKeyValue(new MFRotation516().getArray())))
        .addChild(new Group().setDEF("RunAnimation")
          .addChild(new TimeSensor().setDEF("RunTimer").setCycleInterval(0.9d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Run_r_metatarsal_PitchInterpolator").setKey(new MFFloat517().getArray()).setKeyValue(new MFRotation518().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_hip_RotationInterpolator_Run").setKey(new MFFloat519().getArray()).setKeyValue(new MFRotation520().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_knee_RotationInterpolator_Run").setKey(new MFFloat521().getArray()).setKeyValue(new MFRotation522().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_ankle_RotationInterpolator_Run").setKey(new MFFloat523().getArray()).setKeyValue(new MFRotation524().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_hip_RotationInterpolator_Run").setKey(new MFFloat525().getArray()).setKeyValue(new MFRotation526().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_knee_RotationInterpolator_Run").setKey(new MFFloat527().getArray()).setKeyValue(new MFRotation528().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_ankle_RotationInterpolator_Run").setKey(new MFFloat529().getArray()).setKeyValue(new MFRotation530().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_shoulder_RotationInterpolator_Run").setKey(new MFFloat531().getArray()).setKeyValue(new MFRotation532().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_elbow_RotationInterpolator_Run").setKey(new MFFloat533().getArray()).setKeyValue(new MFRotation534().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_wrist_RotationInterpolator_Run").setKey(new MFFloat535().getArray()).setKeyValue(new MFRotation536().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_shoulder_RotationInterpolator_Run").setKey(new MFFloat537().getArray()).setKeyValue(new MFRotation538().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_elbow_RotationInterpolator_Run").setKey(new MFFloat539().getArray()).setKeyValue(new MFRotation540().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_wrist_RotationInterpolator_Run").setKey(new MFFloat541().getArray()).setKeyValue(new MFRotation542().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_lower_body_RotationInterpolator_Run").setKey(new MFFloat543().getArray()).setKeyValue(new MFRotation544().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_head_RotationInterpolator_Run").setKey(new MFFloat545().getArray()).setKeyValue(new MFRotation546().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_neck_RotationInterpolator_Run").setKey(new MFFloat547().getArray()).setKeyValue(new MFRotation548().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_upper_body_RotationInterpolator_Run").setKey(new MFFloat549().getArray()).setKeyValue(new MFRotation550().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_whole_body_RotationInterpolator_Run").setKey(new MFFloat551().getArray()).setKeyValue(new MFRotation552().getArray()))
          .addChild(new PositionInterpolator().setDEF("Run_whole_body_TranslationInterpolator_Run").setKey(new MFFloat553().getArray()).setKeyValue(new MFVec3f554().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_sternoclavicular_RollInterpolator").setKey(new MFFloat555().getArray()).setKeyValue(new MFRotation556().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_acromioclavicular_RollInterpolator").setKey(new MFFloat557().getArray()).setKeyValue(new MFRotation558().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_sternoclavicular_RollInterpolator").setKey(new MFFloat559().getArray()).setKeyValue(new MFRotation560().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_acromioclavicular_RollInterpolator").setKey(new MFFloat561().getArray()).setKeyValue(new MFRotation562().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_sacroiliac_YawInterpolator").setKey(new MFFloat563().getArray()).setKeyValue(new MFRotation564().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vl5_YawInterpolator").setKey(new MFFloat565().getArray()).setKeyValue(new MFRotation566().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vc6_YawInterpolator").setKey(new MFFloat567().getArray()).setKeyValue(new MFRotation568().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_thumb1_PitchInterpolator").setKey(new MFFloat569().getArray()).setKeyValue(new MFRotation570().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_thumb1_PitchInterpolator").setKey(new MFFloat571().getArray()).setKeyValue(new MFRotation572().getArray())))
        .addChild(new Group().setDEF("JumpAnimation")
          .addChild(new TimeSensor().setDEF("JumpTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_metatarsal_PitchInterpolator").setKey(new MFFloat573().getArray()).setKeyValue(new MFRotation574().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_ankle_RotationInterpolator").setKey(new MFFloat575().getArray()).setKeyValue(new MFRotation576().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_knee_RotationInterpolator").setKey(new MFFloat577().getArray()).setKeyValue(new MFRotation578().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_hip_RotationInterpolator").setKey(new MFFloat579().getArray()).setKeyValue(new MFRotation580().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_ankle_RotationInterpolator").setKey(new MFFloat581().getArray()).setKeyValue(new MFRotation582().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_knee_RotationInterpolator").setKey(new MFFloat583().getArray()).setKeyValue(new MFRotation584().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_hip_RotationInterpolator").setKey(new MFFloat585().getArray()).setKeyValue(new MFRotation586().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_lower_body_RotationInterpolator").setKey(new MFFloat587().getArray()).setKeyValue(new MFRotation588().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_wrist_RotationInterpolator").setKey(new MFFloat589().getArray()).setKeyValue(new MFRotation590().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_elbow_RotationInterpolator").setKey(new MFFloat591().getArray()).setKeyValue(new MFRotation592().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_shoulder_RotationInterpolator").setKey(new MFFloat593().getArray()).setKeyValue(new MFRotation594().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_wrist_RotationInterpolator").setKey(new MFFloat595().getArray()).setKeyValue(new MFRotation596().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_elbow_RotationInterpolator").setKey(new MFFloat597().getArray()).setKeyValue(new MFRotation598().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_shoulder_RotationInterpolator").setKey(new MFFloat599().getArray()).setKeyValue(new MFRotation600().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_head_RotationInterpolator").setKey(new MFFloat601().getArray()).setKeyValue(new MFRotation602().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_neck_RotationInterpolator").setKey(new MFFloat603().getArray()).setKeyValue(new MFRotation604().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_upper_body_RotationInterpolator").setKey(new MFFloat605().getArray()).setKeyValue(new MFRotation606().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_whole_body_RotationInterpolator").setKey(new MFFloat607().getArray()).setKeyValue(new MFRotation608().getArray()))
          .addChild(new PositionInterpolator().setDEF("Jump_whole_body_TranslationInterpolator").setKey(new MFFloat609().getArray()).setKeyValue(new MFVec3f610().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_sternoclavicular_RollInterpolator").setKey(new MFFloat611().getArray()).setKeyValue(new MFRotation612().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_acromioclavicular_RollInterpolator").setKey(new MFFloat613().getArray()).setKeyValue(new MFRotation614().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_sternoclavicular_RollInterpolator").setKey(new MFFloat615().getArray()).setKeyValue(new MFRotation616().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_acromioclavicular_RollInterpolator").setKey(new MFFloat617().getArray()).setKeyValue(new MFRotation618().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_sacroiliac_YawInterpolator").setKey(new MFFloat619().getArray()).setKeyValue(new MFRotation620().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vl5_YawInterpolator").setKey(new MFFloat621().getArray()).setKeyValue(new MFRotation622().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vc6_YawInterpolator").setKey(new MFFloat623().getArray()).setKeyValue(new MFRotation624().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_thumb1_PitchInterpolator").setKey(new MFFloat625().getArray()).setKeyValue(new MFRotation626().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_thumb1_PitchInterpolator").setKey(new MFFloat627().getArray()).setKeyValue(new MFRotation628().getArray())))
        .addChild(new Group().setDEF("KickAnimation")
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_sternoclavicular_RollInterpolator").setKey(new MFFloat629().getArray()).setKeyValue(new MFRotation630().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_acromioclavicular_RollInterpolator").setKey(new MFFloat631().getArray()).setKeyValue(new MFRotation632().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_shoulder_RollInterpolator").setKey(new MFFloat633().getArray()).setKeyValue(new MFRotation634().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_ForeArm_PitchInterpolator").setKey(new MFFloat635().getArray()).setKeyValue(new MFRotation636().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_wrist_RollInterpolator").setKey(new MFFloat637().getArray()).setKeyValue(new MFRotation638().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_thumb1_PitchInterpolator").setKey(new MFFloat639().getArray()).setKeyValue(new MFRotation640().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_sternoclavicular_RollInterpolator").setKey(new MFFloat641().getArray()).setKeyValue(new MFRotation642().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_acromioclavicular_RollInterpolator").setKey(new MFFloat643().getArray()).setKeyValue(new MFRotation644().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_shoulder_RollInterpolator").setKey(new MFFloat645().getArray()).setKeyValue(new MFRotation646().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ForeArm_PitchInterpolator").setKey(new MFFloat647().getArray()).setKeyValue(new MFRotation648().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_wrist_RollInterpolator").setKey(new MFFloat649().getArray()).setKeyValue(new MFRotation650().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_thumb1_PitchInterpolator").setKey(new MFFloat651().getArray()).setKeyValue(new MFRotation652().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_hip_PitchInterpolator").setKey(new MFFloat653().getArray()).setKeyValue(new MFRotation654().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_knee_PitchInterpolator").setKey(new MFFloat655().getArray()).setKeyValue(new MFRotation656().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_hip_PitchInterpolator").setKey(new MFFloat657().getArray()).setKeyValue(new MFRotation658().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_knee_PitchInterpolator").setKey(new MFFloat659().getArray()).setKeyValue(new MFRotation660().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ankle_PitchInterpolator").setKey(new MFFloat661().getArray()).setKeyValue(new MFRotation662().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_metatarsal_PitchInterpolator").setKey(new MFFloat663().getArray()).setKeyValue(new MFRotation664().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_sacroiliac_YawInterpolator").setKey(new MFFloat665().getArray()).setKeyValue(new MFRotation666().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vl5_YawInterpolator").setKey(new MFFloat667().getArray()).setKeyValue(new MFRotation668().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vc6_YawInterpolator").setKey(new MFFloat669().getArray()).setKeyValue(new MFRotation670().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_lower_body_RotationInterpolator").setKey(new MFFloat671().getArray()).setKeyValue(new MFRotation672().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_upper_body_RotationInterpolator").setKey(new MFFloat673().getArray()).setKeyValue(new MFRotation674().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_whole_body_RotationInterpolator").setKey(new MFFloat675().getArray()).setKeyValue(new MFRotation676().getArray()))
          .addChild(new PositionInterpolator().setDEF("Kick_whole_body_TranslationInterpolator").setKey(new MFFloat677().getArray()).setKeyValue(new MFVec3f678().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_neck_RotationInterpolator").setKey(new MFFloat679().getArray()).setKeyValue(new MFRotation680().getArray())))
        .addChild(new Group().setDEF("Interface")
          .addChild(new Transform().setDEF("CoordinateSystemFloor").setScale(new float[] {0.1f ,0.1f ,0.1f })
            .addChild(new Shape().setDEF("AxisLinesShape")
              .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new MFInt32681().getArray()).setCoordIndex(new MFInt32682().getArray())
                .setColor(new Color().setColor(new MFColor683().getArray()))
                .setCoord(new Coordinate().setPoint(new MFVec3f684().getArray())))))
          .addChild(new ProximitySensor().setDEF("HudProx").setSize(new float[] {50f ,50f ,50f }))
          .addChild(new Transform().setDEF("HudXform").setTranslation(new float[] {2f ,1f ,2f }).setRotation(new float[] {0f ,1f ,0f ,0.78f })
            .addChild(new Transform().setTranslation(new float[] {-0.4f ,-0.01f ,-0.75f }).setScale(new float[] {0.02f ,0.02f ,0.02f })
              .addChild(new Transform().setDEF("Stand_Text").setTranslation(new float[] {0f ,-0.9f ,0f })
                .addChild(new TouchSensor().setDEF("Stand_Touch"))
                .addChild(new Shape().setDEF("StandText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("text_color").setAmbientIntensity(1f ).setDiffuseColor(new float[] {0.819f ,0.521f ,0.169f }).setSpecularColor(new float[] {0.819f ,0.521f ,0.169f }).setEmissiveColor(new float[] {0.819f ,0.521f ,0.169f })))
                  .setGeometry(new Text().setString(new MFString685().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString686().getArray()))))
                .addChild(new Shape().setDEF("Stand_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("Clear").setAmbientIntensity(1f ).setDiffuseColor(new float[] {0f ,0.5f ,0f }).setEmissiveColor(new float[] {0f ,0.5f ,0f }).setTransparency(0.8f )))
                  .setGeometry(new IndexedFaceSet().setDEF("Backing").setCoordIndex(new MFInt32687().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f688().getArray())))))
              .addChild(new Transform().setDEF("Pitch_Text").setTranslation(new float[] {0f ,-2.4f ,0f })
                .addChild(new TouchSensor().setDEF("Pitch_Touch"))
                .addChild(new Shape().setDEF("PitchText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString689().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString690().getArray()))))
                .addChild(new Shape().setDEF("Pitch_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Yaw_Text").setTranslation(new float[] {0f ,-3.8f ,0f })
                .addChild(new TouchSensor().setDEF("Yaw_Touch"))
                .addChild(new Shape().setDEF("YawText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString691().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString692().getArray()))))
                .addChild(new Shape().setDEF("Yaw_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Roll_Text").setTranslation(new float[] {0f ,-5.2f ,0f })
                .addChild(new TouchSensor().setDEF("Roll_Touch"))
                .addChild(new Shape().setDEF("RollText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString693().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString694().getArray()))))
                .addChild(new Shape().setDEF("Roll_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Walk_Text").setTranslation(new float[] {0f ,-6.6f ,0f })
                .addChild(new TouchSensor().setDEF("Walk_Touch"))
                .addChild(new Shape().setDEF("WalkText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString695().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString696().getArray()))))
                .addChild(new Shape().setDEF("Walk_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Run_Text").setTranslation(new float[] {0f ,-8f ,0f })
                .addChild(new TouchSensor().setDEF("Run_Touch"))
                .addChild(new Shape().setDEF("RunText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString697().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString698().getArray()))))
                .addChild(new Shape().setDEF("Run_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Jump_Text").setTranslation(new float[] {0f ,-9.4f ,0f })
                .addChild(new TouchSensor().setDEF("Jump_Touch"))
                .addChild(new Shape().setDEF("JumpText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString699().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString700().getArray()))))
                .addChild(new Shape().setDEF("Jump_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Kick_Text").setTranslation(new float[] {0f ,-10.8f ,0f })
                .addChild(new TouchSensor().setDEF("Kick_Touch"))
                .addChild(new Shape().setDEF("KickText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString701().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString702().getArray()))))
                .addChild(new Shape().setDEF("Kick_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Stop_Text").setTranslation(new float[] {0f ,0.4f ,0f })
                .addChild(new TouchSensor().setDEF("Stop_Touch"))
                .addChild(new Shape().setDEF("StopText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString703().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString704().getArray()))))
                .addChild(new Shape().setDEF("Stop_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("SceneLabel").setTranslation(new float[] {1.3f ,3f ,0f })
                .addChild(new Shape().setDEF("SceneLabelText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString705().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString706().getArray()).setJustify(new MFString707().getArray()))))))))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_humanoid_root_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_humanoid_root_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_sacroiliac_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_subtalar_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_midtarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_metatarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_subtalar_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_midtarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_metatarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt12_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt11_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt10_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt9_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt8_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt7_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt6_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc7_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc6_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_skullbase_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Stop_humanoid_root_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Stop_humanoid_root_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl5_RotationInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_skullbase_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_eyeball_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_eyeball_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index1_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index2_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index3_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Stand_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_head_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Stand_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Pitches_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_head_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Pitch_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Yaws_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_head_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Yaw_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Rolls_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_head_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Roll_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Walk_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_head_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Walk_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_ankle_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_knee_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_hip_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_ankle_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_knee_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_hip_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_lower_body_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_wrist_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_elbow_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_shoulder_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_wrist_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_elbow_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_shoulder_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_head_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_neck_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_upper_body_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_body_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_body_TranslationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Run_r_ankle_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_knee_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_hip_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_ankle_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_knee_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_hip_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_wrist_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_elbow_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_shoulder_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_wrist_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_elbow_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_shoulder_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_head_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_whole_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_whole_body_TranslationInterpolator_Run").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Run_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Jump_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_head_RotationInterpolator").setFromField("value_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Jump_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_shoulder_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_ForeArm_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_wrist_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_shoulder_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ForeArm_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_wrist_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_hip_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_knee_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_hip_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_knee_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ankle_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Kick_l_shoulder_RollInterpolator").setFromField("value_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_ForeArm_PitchInterpolator").setFromField("value_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_wrist_RollInterpolator").setFromField("value_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_shoulder_RollInterpolator").setFromField("value_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ForeArm_PitchInterpolator").setFromField("value_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_wrist_RollInterpolator").setFromField("value_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_hip_PitchInterpolator").setFromField("value_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_knee_PitchInterpolator").setFromField("value_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ankle_PitchInterpolator").setFromField("value_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_hip_PitchInterpolator").setFromField("value_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_knee_PitchInterpolator").setFromField("value_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ankle_PitchInterpolator").setFromField("value_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_vl5_YawInterpolator").setFromField("value_changed").setToNode("boxman_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudXform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudXform").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_startTime")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"});
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.75f ,0.75f ,0.75f });
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f ,0.6f ,0.6f });
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f });
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {64,65,66,67,68,69,70,71});
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {72,73,74,75,76,77,78,79});
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f });
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131});
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {132,133,134,135,136,137,138,139});
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,141,142,143,144,145,146,147});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167});
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {168,169,170,171,172,173,174,175});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {176,177,178,179,180,181,182,183});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {184,185,186,187,188,189,190,191});
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195,196,197,198,199});
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {200,201,202,203,204,205,206,207});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {208,209,210,211,212,213,214,215});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {216,217,218,219,220,221,222,223});
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,1f ,0.05f ,0.05f ,1f ,0.05f ,0.03f ,0.97f ,-0.1f ,-0.03f ,0.97f ,-0.1f ,0.03f ,0.94f ,-0.075f ,-0.03f ,0.94f ,-0.075f ,0f ,0.92f ,0f ,0f ,0.94f ,0.03f ,-0.12f ,1.06f ,0.05f ,0.12f ,1.06f ,0.05f ,0.12f ,1.06f ,-0.1f ,-0.12f ,1.06f ,-0.1f ,0.0456f ,0.9364f ,0.05f ,0.1456f ,0.9364f ,0.05f ,0.1456f ,0.9364f ,-0.05f ,0.0456f ,0.9364f ,-0.05f ,0.0456f ,0.9f ,0.05f ,0.1456f ,0.9f ,0.05f ,0.1456f ,0.9f ,-0.05f ,0.0456f ,0.9f ,-0.05f ,0.0456f ,0.8f ,0.05f ,0.1456f ,0.8f ,0.05f ,0.1456f ,0.8f ,-0.05f ,0.0456f ,0.8f ,-0.05f ,0.0456f ,0.7f ,0.05f ,0.1456f ,0.7f ,0.05f ,0.1456f ,0.7f ,-0.05f ,0.0456f ,0.7f ,-0.05f ,0.0456f ,0.6f ,0.05f ,0.1456f ,0.6f ,0.05f ,0.1456f ,0.6f ,-0.05f ,0.0456f ,0.6f ,-0.05f ,0.0456f ,0.55f ,0.05f ,0.1456f ,0.55f ,0.05f ,0.1456f ,0.55f ,-0.05f ,0.0456f ,0.55f ,-0.05f ,0.0456f ,0.52f ,0.05f ,0.1456f ,0.52f ,0.05f ,0.1456f ,0.52f ,-0.05f ,0.0456f ,0.52f ,-0.05f ,0.0456f ,0.5f ,0.05f ,0.1456f ,0.5f ,0.05f ,0.1456f ,0.5f ,-0.05f ,0.0456f ,0.5f ,-0.05f ,0.0454f ,0.43f ,0.045f ,0.1454f ,0.43f ,0.045f ,0.1454f ,0.43f ,-0.055f ,0.0454f ,0.43f ,-0.055f ,0.0452f ,0.36f ,0.04f ,0.1452f ,0.36f ,0.04f ,0.1452f ,0.36f ,-0.06f ,0.0452f ,0.36f ,-0.06f ,0.045f ,0.29f ,0.035f ,0.145f ,0.29f ,0.035f ,0.145f ,0.29f ,-0.065f ,0.045f ,0.29f ,-0.065f ,0.0448f ,0.21f ,0.03f ,0.1448f ,0.21f ,0.03f ,0.1448f ,0.21f ,-0.07f ,0.0448f ,0.21f ,-0.07f ,0.0446f ,0.1262f ,0.025f ,0.1446f ,0.1262f ,0.025f ,0.1446f ,0.1262f ,-0.075f ,0.0446f ,0.1262f ,-0.075f ,0.0446f ,0.0762f ,0.025f ,0.1446f ,0.0762f ,0.025f ,0.1446f ,0f ,-0.075f ,0.0446f ,0f ,-0.075f ,0.0446f ,0.0562f ,0.057f ,0.1446f ,0.0562f ,0.057f ,0.1446f ,0f ,0.057f ,0.0446f ,0f ,0.057f ,0.0446f ,0.0562f ,0.087f ,0.1446f ,0.0562f ,0.087f ,0.1446f ,0f ,0.087f ,0.0446f ,0f ,0.087f ,0.0446f ,0.0562f ,0.1924f ,0.1446f ,0.0562f ,0.1924f ,0.1446f ,0f ,0.1924f ,0.0446f ,0f ,0.1924f ,-0.0456f ,0.9364f ,0.05f ,-0.1456f ,0.9364f ,0.05f ,-0.1456f ,0.9364f ,-0.05f ,-0.0456f ,0.9364f ,-0.05f ,-0.0456f ,0.9f ,0.05f ,-0.1456f ,0.9f ,0.05f ,-0.1456f ,0.9f ,-0.05f ,-0.0456f ,0.9f ,-0.05f ,-0.0456f ,0.8f ,0.05f ,-0.1456f ,0.8f ,0.05f ,-0.1456f ,0.8f ,-0.05f ,-0.0456f ,0.8f ,-0.05f ,-0.0456f ,0.7f ,0.05f ,-0.1456f ,0.7f ,0.05f ,-0.1456f ,0.7f ,-0.05f ,-0.0456f ,0.7f ,-0.05f ,-0.0456f ,0.6f ,0.05f ,-0.1456f ,0.6f ,0.05f ,-0.1456f ,0.6f ,-0.05f ,-0.0456f ,0.6f ,-0.05f ,-0.0456f ,0.55f ,0.05f ,-0.1456f ,0.55f ,0.05f ,-0.1456f ,0.55f ,-0.05f ,-0.0456f ,0.55f ,-0.05f ,-0.0456f ,0.52f ,0.05f ,-0.1456f ,0.52f ,0.05f ,-0.1456f ,0.52f ,-0.05f ,-0.0456f ,0.52f ,-0.05f ,-0.0456f ,0.5f ,0.05f ,-0.1456f ,0.5f ,0.05f ,-0.1456f ,0.5f ,-0.05f ,-0.0456f ,0.5f ,-0.05f ,-0.0454f ,0.43f ,0.045f ,-0.1454f ,0.43f ,0.045f ,-0.1454f ,0.43f ,-0.055f ,-0.0454f ,0.43f ,-0.055f ,-0.0452f ,0.36f ,0.04f ,-0.1452f ,0.36f ,0.04f ,-0.1452f ,0.36f ,-0.06f ,-0.0452f ,0.36f ,-0.06f ,-0.045f ,0.29f ,0.035f ,-0.145f ,0.29f ,0.035f ,-0.145f ,0.29f ,-0.065f ,-0.045f ,0.29f ,-0.065f ,-0.0448f ,0.21f ,0.03f ,-0.1448f ,0.21f ,0.03f ,-0.1448f ,0.21f ,-0.07f ,-0.0448f ,0.21f ,-0.07f ,-0.0446f ,0.1262f ,0.025f ,-0.1446f ,0.1262f ,0.025f ,-0.1446f ,0.1262f ,-0.075f ,-0.0446f ,0.1262f ,-0.075f ,-0.0446f ,0.0762f ,0.025f ,-0.1446f ,0.0762f ,0.025f ,-0.1446f ,0f ,-0.075f ,-0.0446f ,0f ,-0.075f ,-0.0446f ,0.0562f ,0.057f ,-0.1446f ,0.0562f ,0.057f ,-0.1446f ,0f ,0.057f ,-0.0446f ,0f ,0.057f ,-0.0446f ,0.0562f ,0.087f ,-0.1446f ,0.0562f ,0.087f ,-0.1446f ,0f ,0.087f ,-0.0446f ,0f ,0.087f ,-0.0446f ,0.0562f ,0.1924f ,-0.1446f ,0.0562f ,0.1924f ,-0.1446f ,0f ,0.1924f ,-0.0446f ,0f ,0.1924f ,-0.12f ,1.1f ,0.05f ,0.12f ,1.1f ,0.05f ,0.12f ,1.1f ,-0.1f ,-0.12f ,1.1f ,-0.1f ,-0.14f ,1.42f ,0.045f ,0.14f ,1.42f ,0.045f ,0.14f ,1.42f ,-0.09f ,-0.14f ,1.42f ,-0.09f ,-0.24f ,1.52f ,0.035f ,0.24f ,1.52f ,0.035f ,0.24f ,1.52f ,-0.09f ,-0.24f ,1.52f ,-0.09f ,-0.05f ,1.56f ,0.03f ,0.05f ,1.56f ,0.03f ,0.05f ,1.56f ,-0.06f ,-0.05f ,1.56f ,-0.06f ,-0.05f ,1.6f ,0.06f ,0.05f ,1.6f ,0.06f ,0.05f ,1.62f ,-0.03f ,-0.05f ,1.62f ,-0.03f ,-0.07f ,1.777f ,0.13f ,0.07f ,1.777f ,0.13f ,0.07f ,1.777f ,-0.03f ,-0.07f ,1.777f ,-0.03f ,-0.07f ,1.6f ,0.13f ,0.07f ,1.6f ,0.13f ,0.07f ,1.66f ,-0.03f ,-0.07f ,1.66f ,-0.03f ,0.16f ,1.42f ,0.015f ,0.24f ,1.5f ,0.015f ,0.24f ,1.5f ,-0.075f ,0.16f ,1.42f ,-0.075f ,0.17f ,1.18f ,-0.025f ,0.23f ,1.18f ,-0.025f ,0.23f ,1.18f ,-0.085f ,0.17f ,1.18f ,-0.085f ,0.17f ,1.14f ,-0.025f ,0.23f ,1.14f ,-0.025f ,0.23f ,1.14f ,-0.085f ,0.17f ,1.14f ,-0.085f ,0.18f ,0.91f ,-0.05f ,0.22f ,0.91f ,-0.05f ,0.22f ,0.91f ,-0.09f ,0.18f ,0.91f ,-0.09f ,0.18f ,0.87f ,-0.02f ,0.22f ,0.87f ,-0.02f ,0.22f ,0.87f ,-0.1f ,0.18f ,0.87f ,-0.1f ,0.18f ,0.6976f ,-0.02f ,0.22f ,0.6976f ,-0.02f ,0.22f ,0.6976f ,-0.1f ,0.18f ,0.6976f ,-0.1f ,-0.16f ,1.42f ,0.015f ,-0.24f ,1.5f ,0.015f ,-0.24f ,1.5f ,-0.075f ,-0.16f ,1.42f ,-0.075f ,-0.17f ,1.18f ,-0.025f ,-0.23f ,1.18f ,-0.025f ,-0.23f ,1.18f ,-0.085f ,-0.17f ,1.18f ,-0.085f ,-0.17f ,1.14f ,-0.025f ,-0.23f ,1.14f ,-0.025f ,-0.23f ,1.14f ,-0.085f ,-0.17f ,1.14f ,-0.085f ,-0.18f ,0.91f ,-0.05f ,-0.22f ,0.91f ,-0.05f ,-0.22f ,0.91f ,-0.09f ,-0.18f ,0.91f ,-0.09f ,-0.18f ,0.87f ,-0.02f ,-0.22f ,0.87f ,-0.02f ,-0.22f ,0.87f ,-0.1f ,-0.18f ,0.87f ,-0.1f ,-0.18f ,0.6976f ,-0.02f ,-0.22f ,0.6976f ,-0.02f ,-0.22f ,0.6976f ,-0.1f ,-0.18f ,0.6976f ,-0.1f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation50 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation52 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation54 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation56 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation58 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation60 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation62 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation64 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation66 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation68 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation70 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat71 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation72 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation74 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation76 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation78 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation80 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation82 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation84 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation86 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation88 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation90 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation92 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation94 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation96 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation98 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation100 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation102 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation104 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation106 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation108 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation110 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation112 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation114 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation116 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation118 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation120 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation122 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation124 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation126 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation128 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation130 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation132 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation134 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation136 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation138 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation140 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation142 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation144 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation146 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat147 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation148 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat149 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation150 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation152 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat153 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation154 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat155 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation156 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat157 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation158 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation160 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat161 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation162 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat163 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation164 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat165 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation166 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat167 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation168 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat169 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation170 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat171 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation172 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat173 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation174 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation176 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat177 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation178 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat179 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation180 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat181 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation182 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat183 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation184 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat185 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation186 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat187 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation188 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat189 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation190 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat191 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation192 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat193 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation194 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat195 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation196 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat197 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation198 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation200 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat201 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation202 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat203 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation204 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat205 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation206 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat207 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation208 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat209 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation210 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation212 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat213 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation214 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat215 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation216 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat217 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation218 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation220 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat221 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation222 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat223 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation224 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat225 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation226 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat227 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation228 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,-1f ,0f ,0f ,0.015f ,1f ,0f ,0f ,0.17f ,-1f ,0f ,0f ,0.025f ,1f ,0f ,0f ,0.01f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat229 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation230 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat231 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation232 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat233 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation234 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat235 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation236 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat237 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation238 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat239 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation240 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat241 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation242 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,0.25f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat243 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation244 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat245 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation246 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation248 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat249 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation250 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat251 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation252 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat253 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation254 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat255 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation256 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat257 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,0.7f ,1f });
  }
}
private class MFRotation258 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.45f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat259 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,0.7f ,1f });
  }
}
private class MFRotation260 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.45f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat261 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation262 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat263 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation264 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat265 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation266 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat267 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat269 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation270 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat271 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation272 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat273 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation274 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat275 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation276 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat277 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation278 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat279 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation280 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat281 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation282 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0f ,0f ,0f ,-1f ,0f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat283 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation284 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat285 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation286 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.1f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat287 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation288 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.1f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.3f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat289 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation290 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.4f ,0f ,0f ,1f ,0.32f ,0f ,0f ,1f ,0.25f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat291 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation292 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.3f ,0f ,0f ,1f ,0.35f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat293 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation294 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,-1f ,0f ,0f ,0.5f ,-1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.75f ,-1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat295 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation296 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat297 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation298 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat299 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation300 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat301 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation302 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat303 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation304 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat305 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation306 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat307 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation308 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat309 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation310 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat311 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation312 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat313 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation314 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat315 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation316 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat317 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation318 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat319 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation320 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat321 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.55f ,1f });
  }
}
private class MFRotation322 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.55f ,-1f ,0f ,0f ,1.05f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat323 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation324 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat325 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation326 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat327 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation328 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat329 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.25f ,0.375f ,0.5f ,0.625f ,0.75f ,0.875f ,1f });
  }
}
private class MFVec3f330 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.15f ,0f ,0f ,-0.7f ,0f ,0f ,-0.15f ,0f ,0f ,0f ,0f ,0f ,-0.15f ,0f ,0f ,-0.7f ,0f ,0f ,-0.15f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat331 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation332 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat333 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation334 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat335 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation336 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat337 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation338 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat339 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation340 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat341 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation342 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat343 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation344 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat345 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation346 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat347 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation348 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat349 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation350 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat351 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation352 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat353 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation354 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat355 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation356 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat357 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation358 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat359 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation360 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat361 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation362 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat363 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation364 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat365 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation366 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat367 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation368 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat369 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation370 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat371 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation372 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat373 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation374 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat375 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation376 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat377 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation378 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat379 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation380 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat381 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation382 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat383 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation384 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat385 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f386 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat387 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation388 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat389 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation390 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat391 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation392 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat393 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation394 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat395 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation396 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,-1f ,0f ,0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.24f ,0f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat397 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation398 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat399 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation400 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat401 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation402 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat403 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation404 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat405 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation406 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat407 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation408 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat409 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation410 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat411 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation412 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,-1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat413 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation414 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat415 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation416 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat417 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation418 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat419 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation420 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat421 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation422 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat423 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation424 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,-1f ,3f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat425 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation426 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat427 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation428 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat429 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation430 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,3f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat431 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation432 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat433 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation434 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.25f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.25f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat435 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation436 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat437 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation438 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat439 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation440 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat441 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.25f ,0.375f ,0.5f ,0.625f ,0.75f ,0.875f ,1f });
  }
}
private class MFVec3f442 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.25f ,0f ,0f ,-0.8f ,0f ,0f ,-0.25f ,0f ,0f ,0f ,0f ,0f ,-0.25f ,0f ,0f ,-0.8f ,0f ,0f ,-0.25f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat443 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation444 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.22f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat445 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation446 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat447 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation448 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,-0.22f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat449 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation450 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat451 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation452 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat453 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation454 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat455 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation456 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat457 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation458 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat459 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation460 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat461 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation462 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat463 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.4583f ,0.5f ,0.6667f ,0.75f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation464 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.3533f ,-1f ,0f ,0f ,0.1072f ,1f ,0f ,0f ,0.2612f ,1f ,0f ,0f ,0.1268f ,-1f ,0f ,0f ,0.01793f ,-1f ,0f ,0f ,0.05824f ,-1f ,0f ,0f ,0.2398f ,-1f ,0f ,0f ,0.35f ,-1f ,0f ,0f ,0.3322f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat465 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation466 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.8573f ,1f ,0f ,0f ,0.8926f ,1f ,0f ,0f ,0.5351f ,1f ,0f ,0f ,0.1756f ,1f ,0f ,0f ,0.1194f ,1f ,0f ,0f ,0.3153f ,1f ,0f ,0f ,0.09354f ,1f ,0f ,0f ,0.08558f ,1f ,0f ,0f ,0.2475f ,1f ,0f ,0f ,0.8573f });
  }
}
private class MFFloat467 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation468 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f ,0.03511f ,0.8116f ,0.1481f ,-0.995f ,0.02296f ,0.09674f ,0.4683f ,-1f ,0.00192f ,0.007964f ,0.4732f ,-0.998f ,-0.0158f ,-0.06102f ,0.5079f ,-0.9911f ,-0.03541f ,-0.1286f ,0.5419f ,-0.9131f ,-0.06243f ,-0.403f ,0.3361f ,-0.4306f ,-0.07962f ,-0.899f ,0.07038f ,1f ,0f ,0f ,0.2571f ,0.9891f ,-0.02805f ,0.1444f ,0.3879f ,-0.5831f ,0.03511f ,0.8116f ,0.1481f });
  }
}
private class MFFloat469 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.6667f ,0.9167f ,1f });
  }
}
private class MFRotation470 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.06714f ,-1f ,0f ,0f ,0.2152f ,-1f ,0f ,0f ,0.3184f ,-1f ,0f ,0f ,0.4717f ,-1f ,0f ,0f ,0.2912f ,1f ,0f ,0f ,0.1222f ,-1f ,0f ,0f ,0.06714f });
  }
}
private class MFFloat471 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation472 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.3226f ,1f ,0f ,0f ,0.1556f ,1f ,0f ,0f ,0.08678f ,1f ,0f ,0f ,0.8751f ,1f ,0f ,0f ,1.131f ,1f ,0f ,0f ,0.09961f ,1f ,0f ,0f ,0.3942f ,1f ,0f ,0f ,0.3226f });
  }
}
private class MFFloat473 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation474 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873f ,0.06094f ,0.484f ,0.2865f ,0.9963f ,-0.01057f ,0.08481f ,0.2488f ,0.9965f ,0.01591f ,-0.08222f ,0.3836f ,-0.7018f ,-0.03223f ,-0.7117f ,0.1289f ,-1f ,0f ,0f ,0.5518f ,-0.9964f ,0.02231f ,0.0817f ,0.5351f ,-0.9809f ,0.04912f ,0.1881f ,0.5204f ,-0.873f ,0.06094f ,0.484f ,0.2865f });
  }
}
private class MFFloat475 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation476 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,-1f ,0.1056f ,0f ,0f ,1f ,0.09018f ,0f ,0f ,-1f ,0.1056f });
  }
}
private class MFFloat477 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation478 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129f ,0.4759f ,-0.3357f ,0.1346f ,0.1533f ,-0.9878f ,0.02582f ,0.3902f ,-0.5701f ,0.7604f ,-0.311f ,0.366f ,-0.8129f ,0.4759f ,-0.3357f ,0.1346f });
  }
}
private class MFFloat479 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation480 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.411508f ,-1f ,0f ,0f ,0.0925011f ,-1f ,0f ,0f ,0.572568f ,-1f ,0f ,0f ,0.411508f });
  }
}
private class MFFloat481 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation482 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.09346f ,1f ,0f ,0f ,0.3197f ,-1f ,0f ,0f ,0.1564f ,-1f ,0f ,0f ,0.09346f });
  }
}
private class MFFloat483 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation484 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.461076f ,-0.330195f ,-0.927451f ,0.175516f ,0.538852f ,0.0327774f ,-0.999314f ,-0.0172185f ,0.492033f ,0f ,-1f ,0f ,0.461076f });
  }
}
private class MFFloat485 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation486 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.0659878f ,-1f ,0f ,0f ,0.488383f ,-1f ,0f ,0f ,0.0177536f ,-1f ,0f ,0f ,0.0659878f });
  }
}
private class MFFloat487 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation488 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.1189f ,-1f ,0f ,0f ,0.1861f ,1f ,0f ,0f ,0.3357f ,1f ,0f ,0f ,0.1189f });
  }
}
private class MFFloat489 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.4167f ,0.5f ,0.5833f ,0.6667f ,0.75f ,0.8333f ,0.9167f ,1f });
  }
}
private class MFRotation490 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.08642f ,0f ,1f ,0f ,0.1825f ,0f ,1f ,0f ,0.1505f ,0f ,1f ,0f ,0.1053f ,0f ,1f ,0f ,0.04391f ,0f ,-1f ,0f ,0.03119f ,0f ,-1f ,0f ,0.07936f ,0f ,-1f ,0f ,0.1616f ,0f ,-1f ,0f ,0.155f ,0f ,-1f ,0f ,0.08642f });
  }
}
private class MFFloat491 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation492 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat493 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.75f ,0.8333f ,1f });
  }
}
private class MFRotation494 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0.0826f ,-0.01972f ,-0.5974f ,0.8017f ,0.08231f ,0.009296f ,-0.9648f ,0.2627f ,0.1734f ,-0.01238f ,0.9549f ,-0.2968f ,0.08732f ,-0.008125f ,0.9691f ,-0.2463f ,0.158f ,0f ,1f ,0f ,0.0826f });
  }
}
private class MFFloat495 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation496 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat497 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.04167f ,0.125f ,0.1667f ,0.2083f ,0.25f ,0.2917f ,0.375f ,0.4583f ,0.5f ,0.5417f ,0.5833f ,0.625f ,0.7083f ,0.75f ,0.7917f ,0.875f ,0.9167f ,1f });
  }
}
private class MFVec3f498 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.00928f ,0f ,0f ,-0.003858f ,0f ,0f ,-0.008847f ,0f ,0f ,-0.01486f ,0f ,0f ,-0.02641f ,0f ,0f ,-0.03934f ,0f ,0f ,-0.0502f ,0f ,0f ,-0.07469f ,0f ,0f ,-0.02732f ,0f ,0f ,-0.01608f ,0f ,0f ,-0.01129f ,0f ,0f ,-0.005819f ,0f ,0f ,-0.002004f ,0f ,0f ,-0.002579f ,0f ,0f ,-0.0143f ,0f ,0f ,-0.03799f ,0f ,0f ,-0.05648f ,0f ,0f ,-0.045f ,0f ,0f ,-0.00928f ,0f });
  }
}
private class MFFloat499 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation500 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat501 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation502 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat503 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation504 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat505 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation506 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat507 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation508 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat509 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation510 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat511 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation512 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat513 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation514 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat515 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation516 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat517 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation518 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat519 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation520 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f ,0.033f ,0.04f ,1.42f ,-0.99f ,0.1328f ,0.067f ,0.42f ,0.99f ,0.014f ,0.009f ,0.9f ,-0.99f ,0.0703f ,0.05f ,0.7f ,-0.99f ,0.033f ,0.04f ,1.42f });
  }
}
private class MFFloat521 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation522 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,1.01f ,1f ,0f ,0f ,0.426f ,1f ,0f ,0f ,0.705f ,1f ,0f ,0f ,2.179f ,1f ,0f ,0f ,1.01f });
  }
}
private class MFFloat523 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,0.3f ,0.4f ,1f });
  }
}
private class MFRotation524 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.0374f ,-1f ,0f ,0f ,0.1037f ,-1f ,0f ,0f ,0.4328f ,1f ,0f ,0f ,0.1929f ,1f ,0f ,0f ,0.03574f });
  }
}
private class MFFloat525 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation526 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f ,-0.014f ,0.009f ,0.9f ,-0.99f ,-0.0703f ,-0.05f ,0.7f ,-0.99f ,-0.033f ,0.04f ,1.42f ,-0.99f ,-0.1328f ,-0.067f ,0.42f ,0.99f ,-0.014f ,0.009f ,0.9f });
  }
}
private class MFFloat527 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation528 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.705f ,1f ,0f ,0f ,2.179f ,1f ,0f ,0f ,1.01f ,1f ,0f ,0f ,0.426f ,1f ,0f ,0f ,0.705f });
  }
}
private class MFFloat529 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,0.71f ,0.8f ,0.82f ,1f });
  }
}
private class MFRotation530 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.2323f ,-1f ,0f ,0f ,0.07843f ,-1f ,0f ,0f ,0.32f ,-1f ,0f ,0f ,0.374f ,-1f ,0f ,0f ,0.3478f ,1f ,0f ,0f ,0.2323f });
  }
}
private class MFFloat531 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation532 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f ,-0.074f ,0.25f ,1.5f ,0.99f ,-0.092f ,0.44f ,0.3f ,-0.99f ,0.136f ,0.25f ,0.85f ,0.99f ,-0.081f ,0.38f ,0.4f ,0.99f ,-0.074f ,0.25f ,1.5f });
  }
}
private class MFFloat533 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation534 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,1.85f ,-0.99f ,-0.19f ,0.18f ,1.35f ,-1f ,0f ,0f ,0.975f ,-0.99f ,-0.09f ,-0.02f ,1.55f ,-1f ,0f ,0f ,1.85f });
  }
}
private class MFFloat535 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation536 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.25f ,-1f ,0.08f ,0.14f ,0.25f ,1f ,0.08f ,0.14f ,0f ,0f ,1f ,0f ,-0.25f ,1f ,0.08f ,-0.14f ,-0.25f ,1f ,0.08f ,0.14f });
  }
}
private class MFFloat537 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation538 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f ,-0.136f ,-0.25f ,0.85f ,0.99f ,0.081f ,-0.38f ,0.4f ,0.99f ,0.074f ,-0.25f ,1.5f ,0.99f ,0.081f ,-0.38f ,0.4f ,-0.99f ,-0.136f ,-0.25f ,0.85f });
  }
}
private class MFFloat539 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation540 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.975f ,-0.99f ,0.09f ,0.02f ,1.55f ,-1f ,0f ,0f ,1.85f ,-0.99f ,0.19f ,-0.18f ,1.35f ,-1f ,0f ,0f ,0.975f });
  }
}
private class MFFloat541 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation542 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.917742f ,-0.237244f ,-0.318536f ,0.214273f ,-0.917742f ,-0.237244f ,-0.318536f ,0.214273f });
  }
}
private class MFFloat543 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation544 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.125f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0.125f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0.125f });
  }
}
private class MFFloat545 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation546 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.08f ,1f ,0f ,0f ,0.12f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.08f });
  }
}
private class MFFloat547 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation548 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.7f ,0f ,0f ,0.4f ,-0.7f ,-0.7f ,0f ,0.4f ,0f ,0f ,0f ,0.4f ,-0.7f ,0.7f ,0f ,0.4f ,0.7f ,0f ,0f ,0.4f });
  }
}
private class MFFloat549 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7636f ,1f });
  }
}
private class MFRotation550 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.97f ,0.65f ,0.086f ,0.5f ,0.9f ,0.003f ,-0.02f ,0.38f ,0.95f ,-0.68f ,-0.086f ,0.5f ,0.9f ,0.004f ,-0.025f ,0.4f ,0.97f ,0.65f ,0.086f ,0.5f });
  }
}
private class MFFloat551 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation552 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.06f ,1f ,0f ,0f ,0.167f ,1f ,0f ,0f ,0.06f ,1f ,0f ,0f ,0.168f ,1f ,0f ,0f ,0.06f });
  }
}
private class MFFloat553 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,0.3f ,0.31f ,0.5f ,0.69f ,0.7f ,0.78f ,1f });
  }
}
private class MFVec3f554 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.01f ,0f ,0f ,-0.037f ,0f ,0f ,-0.049f ,0f ,0f ,-0.037f ,0f ,0f ,-0.01f ,0f ,0f ,-0.037f ,0f ,0f ,-0.049f ,0f ,0f ,-0.037f ,0f ,0f ,-0.01f ,0f });
  }
}
private class MFFloat555 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation556 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat557 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation558 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat559 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation560 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat561 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation562 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat563 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation564 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat565 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation566 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat567 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation568 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat569 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation570 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat571 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation572 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat573 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation574 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat575 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.15f ,0.25f ,0.28f ,0.32f ,0.35f ,0.64f ,0.76f ,0.84f ,0.88f ,0.92f ,0.96f ,1f });
  }
}
private class MFRotation576 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.6735f ,-1f ,0f ,0f ,0.6735f ,-1f ,0f ,0f ,0.3527f ,-1f ,0f ,0f ,0.3038f ,-1f ,0f ,0f ,0.07964f ,1f ,0f ,0f ,1.3f ,1f ,0f ,0f ,0.6509f ,1f ,0f ,0f ,0.3001f ,-1f ,0f ,0f ,0.2087f ,-1f ,0f ,0f ,0.3756f ,-1f ,0f ,0f ,0.3279f ,-1f ,0f ,0f ,0.1193f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat577 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.25f ,0.3f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation578 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,2.5f ,1f ,0f ,0f ,1.7f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.9507f ,1f ,0f ,0f ,0.5845f ,1f ,0f ,0f ,0.9054f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat579 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.18f ,0.24f ,0.26f ,0.28f ,0.32f ,0.48f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation580 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.63f ,-1f ,0f ,0f ,1.7f ,-1f ,0f ,0f ,1.55f ,-1f ,0f ,0f ,0.8943f ,-1f ,0f ,0f ,0.3698f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.4963f ,-1f ,0f ,0f ,0.3829f ,-1f ,0f ,0f ,0.5169f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat581 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.36f ,0.4f ,0.44f ,0.48f ,0.64f ,0.76f ,0.84f ,0.88f ,0.92f ,0.96f ,1f });
  }
}
private class MFRotation582 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.625f ,-1f ,0f ,0f ,0.625f ,-1f ,0f ,0f ,0.3364f ,-1f ,0f ,0f ,0.2742f ,-1f ,0f ,0f ,0.05078f ,1f ,0f ,0f ,0.2833f ,1f ,0f ,0f ,0.6667f ,1f ,0f ,0f ,0.2833f ,-1f ,0f ,0f ,0.2108f ,-1f ,0f ,0f ,0.375f ,-1f ,0f ,0f ,0.3146f ,-1f ,0f ,0f ,0.1174f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat583 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation584 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,2.047f ,1f ,0f ,0f ,2.047f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.566f ,1f ,0f ,0f ,0.5913f ,1f ,0f ,0f ,0.9235f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat585 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.36f ,0.4f ,0.44f ,0.48f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation586 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,4.349f ,1f ,0f ,0f ,4.349f ,1f ,0f ,0f ,4.615f ,-1f ,0f ,0f ,0.9136f ,-1f ,0f ,0f ,0.3614f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.7869f ,-1f ,0f ,0f ,0.3918f ,-1f ,0f ,0f ,0.5433f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat587 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.76f ,1f });
  }
}
private class MFRotation588 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.1892f ,1f ,0f ,0f ,0.1892f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat589 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,1f });
  }
}
private class MFRotation590 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-0.0585279f ,0.983903f ,-0.168849f ,1.85956f ,-0.0585279f ,0.983903f ,-0.168849f ,1.85956f ,-0.00222418f ,0.99801f ,-0.0630095f ,1.46072f ,0f ,1f ,0f ,0.497349f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat591 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,1f });
  }
}
private class MFRotation592 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.04151f ,-1f ,0f ,0f ,0.04151f ,-1f ,0f ,0f ,0.5855f ,-1f ,0f ,0f ,0.5852f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat593 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation594 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0.9992f ,0.02042f ,0.03558f ,4.688f ,0.9992f ,0.02042f ,0.03558f ,4.688f ,0.9989f ,-0.04623f ,0.005159f ,4.079f ,-0.8687f ,-0.2525f ,-0.4261f ,1.501f ,-0.941f ,-0.2893f ,-0.1754f ,0.4788f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat595 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.48f ,0.52f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation596 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0.0672928f ,0.989475f ,-0.128107f ,4.15574f ,0.0672928f ,0.989475f ,-0.128107f ,4.15574f ,0.00364942f ,0.999901f ,0.0135896f ,4.5822f ,0f ,-1f ,0f ,0.655922f ,-0.00050618f ,-0.999999f ,0.0012782f ,1.28397f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat597 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.58f ,0.72f ,1f });
  }
}
private class MFRotation598 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.13f ,-1f ,0f ,0f ,1.7f ,-1f ,0f ,0f ,1.7f ,-1f ,0f ,0f ,0.4f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat599 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation600 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-0.9987f ,0.02554f ,0.04498f ,1.57f ,-0.9987f ,0.02554f ,0.04498f ,1.57f ,1f ,0.0004113f ,0.003055f ,4.114f ,-0.8413f ,0.3238f ,0.4329f ,1.453f ,-0.877f ,0.4198f ,0.2337f ,0.6009f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat601 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.76f ,1f });
  }
}
private class MFRotation602 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5989f ,-1f ,0f ,0f ,0.5989f ,-1f ,0f ,0f ,0.3216f ,1f ,0f ,0f ,0.06503f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat603 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.76f ,1f });
  }
}
private class MFRotation604 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.1942f ,-1f ,0f ,0f ,0.1942f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.2284f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat605 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,0.28f ,0.34f ,0.71f ,0.88f ,1f });
  }
}
private class MFRotation606 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.05f ,1f ,0f ,0f ,1.051f ,-1f ,0f ,0f ,0.257f ,1f ,0f ,0f ,0.2171f ,1f ,0f ,0f ,0.3465f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat607 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.64f ,0.76f ,1f });
  }
}
private class MFRotation608 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.3273f ,1f ,0f ,0f ,0.3273f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat609 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.04f ,0.07f ,0.11f ,0.15f ,0.19f ,0.22f ,0.25f ,0.27f ,0.31f ,0.33f ,0.35f ,0.38f ,0.53f ,0.544f ,0.76f ,0.8f ,0.84f ,0.88f ,0.92f ,0.96f ,1f });
  }
}
private class MFVec3f610 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.01264f ,-0.01289f ,0f ,-0.04712f ,-0.03738f ,-0.0003345f ,-0.1049f ,-0.05353f ,-0.0005712f ,-0.1892f ,-0.06561f ,-0.0008233f ,-0.286f ,-0.06276f ,-0.0009591f ,-0.3795f ,-0.05148f ,-0.00106f ,-0.4484f ,-0.03656f ,-0.00106f ,-0.4484f ,-0.03656f ,-0.001122f ,-0.25f ,-0.1499f ,-0.0008616f ,-0.05f ,-0.06358f ,-0.0005128f ,0.15f ,-0.05488f ,0.0004779f ,0.55f ,0.02732f ,0.0001728f ,1.385f ,0.006873f ,0.00017f ,1.395f ,0.0069f ,0f ,0.35f ,0.02148f ,0f ,-0.01299f ,-0.01057f ,0f ,-0.06932f ,-0.01064f ,0.0001365f ,-0.1037f ,-0.005059f ,0.0001279f ,-0.07198f ,-0.007596f ,0.000141f ,-0.01626f ,-0.004935f ,0f ,0f ,0f });
  }
}
private class MFFloat611 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation612 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.22f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat613 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation614 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat615 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation616 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,-0.22f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat617 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation618 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat619 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation620 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,-1f ,0f ,0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,-1f ,0.24f ,0f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat621 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation622 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,0.6f ,0f ,1f ,0f ,0.1f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat623 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation624 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.8f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0f ,0.6f ,0f ,-1f ,0f ,0.8f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat625 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation626 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat627 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation628 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat629 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation630 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.22f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat631 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation632 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat633 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation634 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.76f ,-0.25f ,0f ,1f ,1.76f ,0f ,0f ,1f ,1.256f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat635 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation636 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,-0.55f ,-1f ,0.25f ,0f ,2.55f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat637 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation638 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0.55f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat639 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation640 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat641 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation642 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,-0.22f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat643 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation644 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat645 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation646 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-1.76f ,0.25f ,0f ,1f ,-1.76f ,0f ,0f ,1f ,-1.256f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat647 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation648 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,-0.55f ,1f ,0.25f ,0f ,-2.55f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat649 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation650 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,-0.55f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat651 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation652 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat653 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.3f ,0.5f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation654 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.9f ,-1f ,0f ,0f ,1.75f ,-1f ,0f ,0f ,2.25f ,-1f ,0f ,0f ,2f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat655 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation656 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.95f ,1f ,0f ,0f ,1.75f ,-1f ,0f ,0f ,0.28f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat657 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.3f ,0.5f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation658 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat659 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation660 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat661 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation662 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.9f ,-1f ,0f ,0f ,0.95f ,1f ,0f ,0f ,0.75f ,-1f ,0f ,0f ,0.05f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat663 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation664 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,-1f ,0f ,0f ,0.5f ,-1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.75f ,-1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat665 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation666 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,-1f ,0f ,0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,-1f ,0.24f ,0f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat667 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation668 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat669 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation670 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat671 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation672 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat673 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation674 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat675 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation676 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat677 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f678 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat679 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.55f ,1f });
  }
}
private class MFRotation680 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFInt32681 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
private class MFInt32682 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFColor683 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0.6f ,0f ,0f ,0f ,1f });
  }
}
private class MFVec3f684 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f });
  }
}
private class MFString685 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Stand"});
  }
}
private class MFString686 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFInt32687 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f688 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,-0.25f ,-0.01f ,3f ,-0.25f ,-0.01f ,3f ,1f ,-0.01f ,-0.2f ,1f ,-0.01f });
  }
}
private class MFString689 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Pitch"});
  }
}
private class MFString690 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString691 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Yaw"});
  }
}
private class MFString692 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString693 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Roll"});
  }
}
private class MFString694 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString695 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Walk"});
  }
}
private class MFString696 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString697 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Run"});
  }
}
private class MFString698 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString699 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jump"});
  }
}
private class MFString700 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString701 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kick"});
  }
}
private class MFString702 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString703 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Default"});
  }
}
private class MFString704 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString705 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"BoxMan3","Animation"});
  }
}
private class MFString706 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString707 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
