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
public class BoxMan3 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new BoxMan3().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/BoxMan3.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("BoxMan3.x3d"))
        .addMeta(new meta().setName("description").setContent("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare)."))
        .addMeta(new meta().setName("creator").setContent("James Smith - james@vapourtech.com"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman and Matt Beitler"))
        .addMeta(new meta().setName("created").setContent("1 March 2001"))
        .addMeta(new meta().setName("translated").setContent("19 October 2001"))
        .addMeta(new meta().setName("modified").setContent("6 January 2023"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org"))
        .addMeta(new meta().setName("reference").setContent("originals/boxman.wrl"))
        .addMeta(new meta().setName("reference").setContent("BoxMan3.js"))
        .addMeta(new meta().setName("warning").setContent("Skin mesh is split across multiple shapes within a Group, should that be allowed?"))
        .addMeta(new meta().setName("TODO").setContent("What does the original animation script accomplish? It is not hooked up, script source contains errors..."))
        .addMeta(new meta().setName("TODO").setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"))
        .addMeta(new meta().setName("Image").setContent("BoxManViewInclined.png"))
        .addMeta(new meta().setName("Image").setContent("BoxManViewFront.png"))
        .addMeta(new meta().setName("Image").setContent("BoxManViewRight.png"))
        .addMeta(new meta().setName("Image").setContent("BoxManViewLeft.png"))
        .addMeta(new meta().setName("Image").setContent("BoxManViewTop.png"))
        .addMeta(new meta().setName("reference").setContent("BoxManAnimationPanel.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
        .addMeta(new meta().setName("rights").setContent("(C) 2000 James Smith - james@vapourtech.com"))
        .addMeta(new meta().setName("reference").setContent("http://www.vapourtech.com"))
        .addMeta(new meta().setName("subject").setContent("BoxMan HAnim 2.0"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("BoxMan3 - A Seamless VRML Human"))
        .addChild(new Background().setGroundColor(new MFColor1().getArray()).setSkyColor(new MFColor2().getArray()))
        .addComments("When converting to VRML97 (which didn't include HAnim), HAnim node prototypes are provided automatically by the X3dToVrml97.xslt translation stylesheet")
        .addChild(new HAnimHumanoid().setName("Humanoid").setDEF("boxman_Humanoid").setInfo(new MFString3().getArray()).setVersion("1.0")
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("boxman_humanoid_root").setCenter(new float[] {0f,0.9723f,-0.0728f}).setSkinCoordIndex(new MFInt324().getArray()).setSkinCoordWeight(new MFFloat5().getArray()).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("boxman_sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f,0.9723f,-0.0728f})
                .addChild(new Shape().setDEF("SphereYellow")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f})))
                  .setGeometry(new Sphere().setRadius(0.02f)))))
            .addChild(new HAnimJoint().setName("l_hip").setDEF("boxman_l_hip").setCenter(new float[] {0.0956f,0.9364f,0f}).setSkinCoordIndex(new MFInt328().getArray()).setSkinCoordWeight(new MFFloat9().getArray()).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())
              .addChild(new HAnimSegment().setName("l_thigh").setDEF("boxman_l_thigh")
                .addChild(new Transform().setTranslation(new float[] {0.0956f,0.9364f,0f})
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint().setName("l_knee").setDEF("boxman_l_knee").setCenter(new float[] {0.0956f,0.5095f,-0.0036f}).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray()).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                .addChild(new HAnimSegment().setName("l_calf").setDEF("boxman_l_calf")
                  .addChild(new Transform().setTranslation(new float[] {0.0956f,0.5095f,-0.0036f})
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint().setName("l_ankle").setDEF("boxman_l_ankle").setCenter(new float[] {0.0946f,0.0762f,-0.0261f}).setSkinCoordIndex(new MFInt3216().getArray()).setSkinCoordWeight(new MFFloat17().getArray()).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray())
                  .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("boxman_l_hindfoot")
                    .addChild(new Transform().setTranslation(new float[] {0.0946f,0.0762f,-0.0261f})
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint().setName("l_midtarsal").setDEF("boxman_l_midtarsal").setCenter(new float[] {0.1079f,0.0317f,0.067f}).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray()).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray())
                    .addChild(new HAnimSegment().setName("l_middistal").setDEF("boxman_l_middistal")
                      .addChild(new Transform().setTranslation(new float[] {0.1079f,0.0317f,0.067f})
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite().setName("l_middistal_tip").setDEF("boxman_l_middistal_tip").setTranslation(new float[] {0.095f,0.0005f,0.1924f})
                        .addChild(new Shape().setDEF("SphereRed")
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))
                          .setGeometry(new Sphere().setRadius(0.02f)))))))))
            .addChild(new HAnimJoint().setName("r_hip").setDEF("boxman_r_hip").setCenter(new float[] {-0.0956f,0.9364f,0f}).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray()).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
              .addChild(new HAnimSegment().setName("r_thigh").setDEF("boxman_r_thigh")
                .addChild(new Transform().setTranslation(new float[] {-0.0956f,0.9364f,0f})
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint().setName("r_knee").setDEF("boxman_r_knee").setCenter(new float[] {-0.0956f,0.5095f,-0.0036f}).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray()).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray())
                .addChild(new HAnimSegment().setName("r_calf").setDEF("boxman_r_calf")
                  .addChild(new Transform().setTranslation(new float[] {-0.0956f,0.5095f,-0.0036f})
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint().setName("r_ankle").setDEF("boxman_r_ankle").setCenter(new float[] {-0.0946f,0.0762f,-0.0261f}).setSkinCoordIndex(new MFInt3232().getArray()).setSkinCoordWeight(new MFFloat33().getArray()).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray())
                  .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("boxman_r_hindfoot")
                    .addChild(new Transform().setTranslation(new float[] {-0.0946f,0.0762f,-0.0261f})
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint().setName("r_midtarsal").setDEF("boxman_r_midtarsal").setCenter(new float[] {-0.1079f,0.0317f,0.067f}).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray()).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                    .addChild(new HAnimSegment().setName("r_middistal").setDEF("boxman_r_middistal")
                      .addChild(new Transform().setTranslation(new float[] {-0.1079f,0.0317f,0.067f})
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite().setName("r_middistal_tip").setDEF("boxman_r_middistal_tip").setTranslation(new float[] {-0.095f,0.0005f,0.1924f})
                        .addChild(new Shape().setUSE("SphereRed"))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("boxman_vl5").setCenter(new float[] {0f,1.0817f,-0.0728f}).setSkinCoordIndex(new MFInt3240().getArray()).setSkinCoordWeight(new MFFloat41().getArray()).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())
              .addChild(new HAnimSegment().setName("l5").setDEF("boxman_l5")
                .addChild(new Transform().setTranslation(new float[] {0f,1.0817f,-0.0728f})
                  .addChild(new Shape().setUSE("SphereYellow"))))
              .addChild(new HAnimJoint().setName("skullbase").setDEF("boxman_skullbase").setCenter(new float[] {0f,1.644f,0.036f}).setSkinCoordIndex(new MFInt3244().getArray()).setSkinCoordWeight(new MFFloat45().getArray()).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())
                .addChild(new HAnimSegment().setName("skull").setDEF("boxman_skull")
                  .addChild(new Transform().setTranslation(new float[] {0f,1.644f,0.036f})
                    .addChild(new Shape().setUSE("SphereYellow")))
                  .addChild(new HAnimSite().setName("skull_tip").setDEF("boxman_skull_tip").setTranslation(new float[] {-0.0029f,1.7771f,0.0274f})
                    .addChild(new Shape().setUSE("SphereYellow")))))
              .addChild(new HAnimJoint().setName("l_shoulder").setDEF("boxman_l_shoulder").setCenter(new float[] {0.1968f,1.4642f,-0.0265f}).setSkinCoordIndex(new MFInt3248().getArray()).setSkinCoordWeight(new MFFloat49().getArray()).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                .addChild(new HAnimSegment().setName("l_upperarm").setDEF("boxman_l_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {0.1968f,1.4642f,-0.0265f})
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint().setName("l_elbow").setDEF("boxman_l_elbow").setCenter(new float[] {0.1982f,1.1622f,-0.0557f}).setSkinCoordIndex(new MFInt3252().getArray()).setSkinCoordWeight(new MFFloat53().getArray()).setUlimit(new MFFloat54().getArray()).setLlimit(new MFFloat55().getArray())
                  .addChild(new HAnimSegment().setName("l_forearm").setDEF("boxman_l_forearm")
                    .addChild(new Transform().setTranslation(new float[] {0.1982f,1.1622f,-0.0557f})
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint().setName("l_wrist").setDEF("boxman_l_wrist").setCenter(new float[] {0.1972f,0.8929f,-0.069f}).setSkinCoordIndex(new MFInt3256().getArray()).setSkinCoordWeight(new MFFloat57().getArray()).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                    .addChild(new HAnimSegment().setName("l_hand").setDEF("boxman_l_hand")
                      .addChild(new Transform().setTranslation(new float[] {0.1972f,0.8929f,-0.069f})
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite().setName("l_hand_tip").setDEF("boxman_l_hand_tip").setTranslation(new float[] {0.1912f,0.6976f,-0.071f})
                        .addChild(new Shape().setUSE("SphereRed")))))))
              .addChild(new HAnimJoint().setName("r_shoulder").setDEF("boxman_r_shoulder").setCenter(new float[] {-0.1968f,1.4642f,-0.0265f}).setSkinCoordIndex(new MFInt3260().getArray()).setSkinCoordWeight(new MFFloat61().getArray()).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                .addChild(new HAnimSegment().setName("r_upperarm").setDEF("boxman_r_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {-0.1968f,1.4642f,-0.0265f})
                    .addChild(new Shape().setUSE("SphereYellow"))))
                .addChild(new HAnimJoint().setName("r_elbow").setDEF("boxman_r_elbow").setCenter(new float[] {-0.1982f,1.1622f,-0.0557f}).setSkinCoordIndex(new MFInt3264().getArray()).setSkinCoordWeight(new MFFloat65().getArray()).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                  .addChild(new HAnimSegment().setName("r_forearm").setDEF("boxman_r_forearm")
                    .addChild(new Transform().setTranslation(new float[] {-0.1982f,1.1622f,-0.0557f})
                      .addChild(new Shape().setUSE("SphereYellow"))))
                  .addChild(new HAnimJoint().setName("r_wrist").setDEF("boxman_r_wrist").setCenter(new float[] {-0.1972f,0.8929f,-0.069f}).setSkinCoordIndex(new MFInt3268().getArray()).setSkinCoordWeight(new MFFloat69().getArray()).setUlimit(new MFFloat70().getArray()).setLlimit(new MFFloat71().getArray())
                    .addChild(new HAnimSegment().setName("r_hand").setDEF("boxman_r_hand")
                      .addChild(new Transform().setTranslation(new float[] {-0.1972f,0.8929f,-0.069f})
                        .addChild(new Shape().setUSE("SphereYellow")))
                      .addChild(new HAnimSite().setName("r_hand_tip").setDEF("boxman_r_hand_tip").setTranslation(new float[] {-0.1912f,0.6976f,-0.071f})
                        .addChild(new Shape().setUSE("SphereRed")))))))))
          .addComments("# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)")
          .addComments("top-level joint references")
          .addComments("top-level segment references")
          .addComments("top-level site references")
          .setSkinCoord(new Coordinate().setDEF("SKINCOORD").setPoint(new MFVec3f72().getArray()))
          .addSkin(new Group()
            .addChild(new Shape().setDEF("TrouserSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f}).setTransparency(0.5f)))
              .addComments("# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3273().getArray().append(new MFInt3274().getArray()))
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("ShoeSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f}).setTransparency(0.5f)))
              .addComments("# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray())
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("ShirtSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.5f)))
              .addComments("# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3276().getArray())
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("HeadHandsFleshToneSkin")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,0.75f,0.75f}).setTransparency(0.5f)))
              .addComments("# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3277().getArray())
                .setCoord(new Coordinate().setUSE("SKINCOORD"))))
            .addChild(new Shape().setDEF("SkinLines")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f})))
              .addComments("Combined set of prior IFS coordIndex values")
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3278().getArray().append(new MFInt3279().getArray()).append(new MFInt3280().getArray()))
                .setCoord(new Coordinate().setUSE("SKINCOORD")))))
          .addViewpoints(new HAnimSite().setName("BoxMan_view").setDEF("boxman_BoxMan_view")
            .addChild(new Viewpoint().setDEF("Inclined_View").setDescription("Inclined View").setOrientation(new float[] {0f,1f,0f,0.78f}).setPosition(new float[] {2f,0.9f,2f}))
            .addChild(new Viewpoint().setDEF("Front_View").setDescription("Front View").setPosition(new float[] {0f,1f,3f}))
            .addChild(new Viewpoint().setDEF("Right_View").setDescription("Right-side View").setOrientation(new float[] {0f,1f,0f,-1.57f}).setPosition(new float[] {-3f,1f,0f}))
            .addChild(new Viewpoint().setDEF("Left_View").setDescription("Left-side View").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {3f,1f,0f}))
            .addChild(new Viewpoint().setDEF("Top_View").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,3f,0f})))
          .addJoints(new HAnimJoint().setUSE("boxman_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("boxman_skullbase"))
          .addJoints(new HAnimJoint().setUSE("boxman_vl5"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_ankle"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_ankle"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_hip"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_hip"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_knee"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_knee"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("boxman_l_wrist"))
          .addJoints(new HAnimJoint().setUSE("boxman_r_wrist"))
          .addSegments(new HAnimSegment().setUSE("boxman_l5"))
          .addSegments(new HAnimSegment().setUSE("boxman_sacrum"))
          .addSegments(new HAnimSegment().setUSE("boxman_skull"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_calf"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_calf"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_hand"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_hand"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_hindfoot"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_hindfoot"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_middistal"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_middistal"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("boxman_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("boxman_r_upperarm"))
          .addSites(new HAnimSite().setUSE("boxman_skull_tip"))
          .addSites(new HAnimSite().setUSE("boxman_l_hand_tip"))
          .addSites(new HAnimSite().setUSE("boxman_r_hand_tip"))
          .addSites(new HAnimSite().setUSE("boxman_l_middistal_tip"))
          .addSites(new HAnimSite().setUSE("boxman_r_middistal_tip")))
        .addChild(new ExternProtoDeclare().setName("LOA1_WalkAnimation").setUrl(new MFString81().getArray())
          .addField(new field().setType("SFTime").setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFBool").setName("loop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFTime").setName("startTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFTime").setName("stopTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFFloat").setName("fraction_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFVec3f").setName("HumanoidRoot_translation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("HumanoidRoot_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_hip_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_knee_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_ankle_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_midtarsal_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_hip_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_knee_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_ankle_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_midtarsal_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("vl5_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("skullbase_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_shoulder_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_elbow_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("l_wrist_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_shoulder_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_elbow_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("r_wrist_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("LOA1_WalkAnimation").setDEF("ANIMATOR"))
        .addComments("Animation ROUTEs")
        .addChild(new ROUTE().setFromField("HumanoidRoot_translation_changed").setFromNode("ANIMATOR").setToField("set_translation").setToNode("boxman_humanoid_root"))
        .addChild(new ROUTE().setFromField("HumanoidRoot_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_humanoid_root"))
        .addChild(new ROUTE().setFromField("l_hip_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_hip"))
        .addChild(new ROUTE().setFromField("l_knee_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_knee"))
        .addChild(new ROUTE().setFromField("l_ankle_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_ankle"))
        .addChild(new ROUTE().setFromField("l_midtarsal_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_midtarsal"))
        .addChild(new ROUTE().setFromField("r_hip_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_hip"))
        .addChild(new ROUTE().setFromField("r_knee_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_knee"))
        .addChild(new ROUTE().setFromField("r_ankle_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_ankle"))
        .addChild(new ROUTE().setFromField("r_midtarsal_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_midtarsal"))
        .addChild(new ROUTE().setFromField("vl5_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_vl5"))
        .addChild(new ROUTE().setFromField("skullbase_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_skullbase"))
        .addChild(new ROUTE().setFromField("l_shoulder_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_shoulder"))
        .addChild(new ROUTE().setFromField("l_elbow_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_elbow"))
        .addChild(new ROUTE().setFromField("l_wrist_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_l_wrist"))
        .addChild(new ROUTE().setFromField("r_shoulder_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_shoulder"))
        .addChild(new ROUTE().setFromField("r_elbow_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_elbow"))
        .addChild(new ROUTE().setFromField("r_wrist_rotation_changed").setFromNode("ANIMATOR").setToField("set_rotation").setToNode("boxman_r_wrist"))
        .addChild(new Script().setDEF("ENGINE").setDirectOutput(true).setUrl(new MFString82().getArray())
          .addField(new field().setType("SFRotation").setName("update").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFNode").setName("humanoid").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new HAnimHumanoid().setUSE("boxman_Humanoid")))
          .addField(new field().setType("MFVec3f").setName("coordList").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("SFNode").setName("joint").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addComments("initialization node (if any) goes here"))
          .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
          .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1 0 0 0"))
          .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1 1 1")))
        .addComments("Trigger calculation after each animation change")
        .addComments("<ROUTE fromField='rotation_changed' fromNode='boxman_r_wrist' toField='update' toNode='ENGINE'/>"))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"});
  }
}
protected class MFColor1 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f,0.6f,0.6f});
  }
}
protected class MFColor2 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.75f,0.75f,0.75f});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11});
  }
}
protected class MFFloat5 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat11 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {64,65,66,67,68,69,70,71});
  }
}
protected class MFFloat17 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat19 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {72,73,74,75,76,77,78,79});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat23 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {132,133,134,135,136,137,138,139});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,141,142,143,144,145,146,147});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat42 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {168,169,170,171,172,173,174,175});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat46 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat47 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {176,177,178,179,180,181,182,183});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat53 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat54 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195,196,197,198,199});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat58 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat59 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {200,201,202,203,204,205,206,207});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {208,209,210,211,212,213,214,215});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat66 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {216,217,218,219,220,221,222,223});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat70 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat71 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFVec3f72 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,1f,0.05f,0.05f,1f,0.05f,0.03f,0.97f,-0.1f,-0.03f,0.97f,-0.1f,0.03f,0.94f,-0.075f,-0.03f,0.94f,-0.075f,0f,0.92f,0f,0f,0.94f,0.03f,-0.12f,1.06f,0.05f,0.12f,1.06f,0.05f,0.12f,1.06f,-0.1f,-0.12f,1.06f,-0.1f,0.0456f,0.9364f,0.05f,0.1456f,0.9364f,0.05f,0.1456f,0.9364f,-0.05f,0.0456f,0.9364f,-0.05f,0.0456f,0.9f,0.05f,0.1456f,0.9f,0.05f,0.1456f,0.9f,-0.05f,0.0456f,0.9f,-0.05f,0.0456f,0.8f,0.05f,0.1456f,0.8f,0.05f,0.1456f,0.8f,-0.05f,0.0456f,0.8f,-0.05f,0.0456f,0.7f,0.05f,0.1456f,0.7f,0.05f,0.1456f,0.7f,-0.05f,0.0456f,0.7f,-0.05f,0.0456f,0.6f,0.05f,0.1456f,0.6f,0.05f,0.1456f,0.6f,-0.05f,0.0456f,0.6f,-0.05f,0.0456f,0.55f,0.05f,0.1456f,0.55f,0.05f,0.1456f,0.55f,-0.05f,0.0456f,0.55f,-0.05f,0.0456f,0.52f,0.05f,0.1456f,0.52f,0.05f,0.1456f,0.52f,-0.05f,0.0456f,0.52f,-0.05f,0.0456f,0.5f,0.05f,0.1456f,0.5f,0.05f,0.1456f,0.5f,-0.05f,0.0456f,0.5f,-0.05f,0.0454f,0.43f,0.045f,0.1454f,0.43f,0.045f,0.1454f,0.43f,-0.055f,0.0454f,0.43f,-0.055f,0.0452f,0.36f,0.04f,0.1452f,0.36f,0.04f,0.1452f,0.36f,-0.06f,0.0452f,0.36f,-0.06f,0.045f,0.29f,0.035f,0.145f,0.29f,0.035f,0.145f,0.29f,-0.065f,0.045f,0.29f,-0.065f,0.0448f,0.21f,0.03f,0.1448f,0.21f,0.03f,0.1448f,0.21f,-0.07f,0.0448f,0.21f,-0.07f,0.0446f,0.1262f,0.025f,0.1446f,0.1262f,0.025f,0.1446f,0.1262f,-0.075f,0.0446f,0.1262f,-0.075f,0.0446f,0.0762f,0.025f,0.1446f,0.0762f,0.025f,0.1446f,0f,-0.075f,0.0446f,0f,-0.075f,0.0446f,0.0562f,0.057f,0.1446f,0.0562f,0.057f,0.1446f,0f,0.057f,0.0446f,0f,0.057f,0.0446f,0.0562f,0.087f,0.1446f,0.0562f,0.087f,0.1446f,0f,0.087f,0.0446f,0f,0.087f,0.0446f,0.0562f,0.1924f,0.1446f,0.0562f,0.1924f,0.1446f,0f,0.1924f,0.0446f,0f,0.1924f,-0.0456f,0.9364f,0.05f,-0.1456f,0.9364f,0.05f,-0.1456f,0.9364f,-0.05f,-0.0456f,0.9364f,-0.05f,-0.0456f,0.9f,0.05f,-0.1456f,0.9f,0.05f,-0.1456f,0.9f,-0.05f,-0.0456f,0.9f,-0.05f,-0.0456f,0.8f,0.05f,-0.1456f,0.8f,0.05f,-0.1456f,0.8f,-0.05f,-0.0456f,0.8f,-0.05f,-0.0456f,0.7f,0.05f,-0.1456f,0.7f,0.05f,-0.1456f,0.7f,-0.05f,-0.0456f,0.7f,-0.05f,-0.0456f,0.6f,0.05f,-0.1456f,0.6f,0.05f,-0.1456f,0.6f,-0.05f,-0.0456f,0.6f,-0.05f,-0.0456f,0.55f,0.05f,-0.1456f,0.55f,0.05f,-0.1456f,0.55f,-0.05f,-0.0456f,0.55f,-0.05f,-0.0456f,0.52f,0.05f,-0.1456f,0.52f,0.05f,-0.1456f,0.52f,-0.05f,-0.0456f,0.52f,-0.05f,-0.0456f,0.5f,0.05f,-0.1456f,0.5f,0.05f,-0.1456f,0.5f,-0.05f,-0.0456f,0.5f,-0.05f,-0.0454f,0.43f,0.045f,-0.1454f,0.43f,0.045f,-0.1454f,0.43f,-0.055f,-0.0454f,0.43f,-0.055f,-0.0452f,0.36f,0.04f,-0.1452f,0.36f,0.04f,-0.1452f,0.36f,-0.06f,-0.0452f,0.36f,-0.06f,-0.045f,0.29f,0.035f,-0.145f,0.29f,0.035f,-0.145f,0.29f,-0.065f,-0.045f,0.29f,-0.065f,-0.0448f,0.21f,0.03f,-0.1448f,0.21f,0.03f,-0.1448f,0.21f,-0.07f,-0.0448f,0.21f,-0.07f,-0.0446f,0.1262f,0.025f,-0.1446f,0.1262f,0.025f,-0.1446f,0.1262f,-0.075f,-0.0446f,0.1262f,-0.075f,-0.0446f,0.0762f,0.025f,-0.1446f,0.0762f,0.025f,-0.1446f,0f,-0.075f,-0.0446f,0f,-0.075f,-0.0446f,0.0562f,0.057f,-0.1446f,0.0562f,0.057f,-0.1446f,0f,0.057f,-0.0446f,0f,0.057f,-0.0446f,0.0562f,0.087f,-0.1446f,0.0562f,0.087f,-0.1446f,0f,0.087f,-0.0446f,0f,0.087f,-0.0446f,0.0562f,0.1924f,-0.1446f,0.0562f,0.1924f,-0.1446f,0f,0.1924f,-0.0446f,0f,0.1924f,-0.12f,1.1f,0.05f,0.12f,1.1f,0.05f,0.12f,1.1f,-0.1f,-0.12f,1.1f,-0.1f,-0.14f,1.42f,0.045f,0.14f,1.42f,0.045f,0.14f,1.42f,-0.09f,-0.14f,1.42f,-0.09f,-0.24f,1.52f,0.035f,0.24f,1.52f,0.035f,0.24f,1.52f,-0.09f,-0.24f,1.52f,-0.09f,-0.05f,1.56f,0.03f,0.05f,1.56f,0.03f,0.05f,1.56f,-0.06f,-0.05f,1.56f,-0.06f,-0.05f,1.6f,0.06f,0.05f,1.6f,0.06f,0.05f,1.62f,-0.03f,-0.05f,1.62f,-0.03f,-0.07f,1.777f,0.13f,0.07f,1.777f,0.13f,0.07f,1.777f,-0.03f,-0.07f,1.777f,-0.03f,-0.07f,1.6f,0.13f,0.07f,1.6f,0.13f,0.07f,1.66f,-0.03f,-0.07f,1.66f,-0.03f,0.16f,1.42f,0.015f,0.24f,1.5f,0.015f,0.24f,1.5f,-0.075f,0.16f,1.42f,-0.075f,0.17f,1.18f,-0.025f,0.23f,1.18f,-0.025f,0.23f,1.18f,-0.085f,0.17f,1.18f,-0.085f,0.17f,1.14f,-0.025f,0.23f,1.14f,-0.025f,0.23f,1.14f,-0.085f,0.17f,1.14f,-0.085f,0.18f,0.91f,-0.05f,0.22f,0.91f,-0.05f,0.22f,0.91f,-0.09f,0.18f,0.91f,-0.09f,0.18f,0.87f,-0.02f,0.22f,0.87f,-0.02f,0.22f,0.87f,-0.1f,0.18f,0.87f,-0.1f,0.18f,0.6976f,-0.02f,0.22f,0.6976f,-0.02f,0.22f,0.6976f,-0.1f,0.18f,0.6976f,-0.1f,-0.16f,1.42f,0.015f,-0.24f,1.5f,0.015f,-0.24f,1.5f,-0.075f,-0.16f,1.42f,-0.075f,-0.17f,1.18f,-0.025f,-0.23f,1.18f,-0.025f,-0.23f,1.18f,-0.085f,-0.17f,1.18f,-0.085f,-0.17f,1.14f,-0.025f,-0.23f,1.14f,-0.025f,-0.23f,1.14f,-0.085f,-0.17f,1.14f,-0.085f,-0.18f,0.91f,-0.05f,-0.22f,0.91f,-0.05f,-0.22f,0.91f,-0.09f,-0.18f,0.91f,-0.09f,-0.18f,0.87f,-0.02f,-0.22f,0.87f,-0.02f,-0.22f,0.87f,-0.1f,-0.18f,0.87f,-0.1f,-0.18f,0.6976f,-0.02f,-0.22f,0.6976f,-0.02f,-0.22f,0.6976f,-0.1f,-0.18f,0.6976f,-0.1f});
  }
}
protected class MFInt3273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1});
  }
}
protected class MFInt3274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
  }
}
protected class MFInt3278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1});
  }
}
protected class MFInt3280 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
  }
}
protected class MFString81 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation","LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation"});
  }
}
protected class MFString82 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"BoxMan3.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js"});
  }
}
}
