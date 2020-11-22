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
public class LOA0ExampleSourceWithDiamonds {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LOA0ExampleSourceWithDiamonds().initialize().toFileJSON("../data/LOA0ExampleSourceWithDiamonds.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
ProtoInstance ProtoInstance35 = null;
ProtoInstance ProtoInstance36 = null;
ProtoInstance ProtoInstance37 = null;
ProtoInstance ProtoInstance38 = null;
ProtoInstance ProtoInstance39 = null;
ProtoInstance ProtoInstance40 = null;
ProtoInstance ProtoInstance41 = null;
ProtoInstance ProtoInstance42 = null;
ProtoInstance ProtoInstance43 = null;
ProtoInstance ProtoInstance44 = null;
ProtoInstance ProtoInstance45 = null;
ProtoInstance ProtoInstance46 = null;
ProtoInstance ProtoInstance47 = null;
ProtoInstance ProtoInstance48 = null;
ProtoInstance ProtoInstance49 = null;
ProtoInstance ProtoInstance50 = null;
ProtoInstance ProtoInstance51 = null;
ProtoInstance ProtoInstance52 = null;
ProtoInstance ProtoInstance53 = null;
ProtoInstance ProtoInstance54 = null;
ProtoInstance ProtoInstance55 = null;
ProtoInstance ProtoInstance56 = null;
ProtoInstance ProtoInstance57 = null;
ProtoInstance ProtoInstance58 = null;
ProtoInstance ProtoInstance59 = null;
ProtoInstance ProtoInstance60 = null;
ProtoInstance ProtoInstance61 = null;
ProtoInstance ProtoInstance62 = null;
ProtoInstance ProtoInstance63 = null;
ProtoInstance ProtoInstance64 = null;
ProtoInstance ProtoInstance65 = null;
ProtoInstance ProtoInstance66 = null;
ProtoInstance ProtoInstance67 = null;
ProtoInstance ProtoInstance68 = null;
ProtoInstance ProtoInstance69 = null;
ProtoInstance ProtoInstance70 = null;
ProtoInstance ProtoInstance71 = null;
ProtoInstance ProtoInstance72 = null;
ProtoInstance ProtoInstance73 = null;
ProtoInstance ProtoInstance74 = null;
ProtoInstance ProtoInstance75 = null;
ProtoInstance ProtoInstance76 = null;
ProtoInstance ProtoInstance77 = null;
ProtoInstance ProtoInstance78 = null;
ProtoInstance ProtoInstance79 = null;
ProtoInstance ProtoInstance80 = null;
ProtoInstance ProtoInstance81 = null;
ProtoInstance ProtoInstance82 = null;
ProtoInstance ProtoInstance83 = null;
ProtoInstance ProtoInstance84 = null;
ProtoInstance ProtoInstance85 = null;
ProtoInstance ProtoInstance86 = null;
ProtoInstance ProtoInstance87 = null;
ProtoInstance ProtoInstance88 = null;
ProtoInstance ProtoInstance89 = null;
ProtoInstance ProtoInstance90 = null;
ProtoInstance ProtoInstance91 = null;
ProtoInstance ProtoInstance92 = null;
ProtoInstance ProtoInstance93 = null;
ProtoInstance ProtoInstance94 = null;
ProtoInstance ProtoInstance95 = null;
ProtoInstance ProtoInstance96 = null;
ProtoInstance ProtoInstance97 = null;
ProtoInstance ProtoInstance98 = null;
ProtoInstance ProtoInstance99 = null;
ProtoInstance ProtoInstance100 = null;
ProtoInstance ProtoInstance101 = null;
ProtoInstance ProtoInstance102 = null;
ProtoInstance ProtoInstance103 = null;
ProtoInstance ProtoInstance104 = null;
ProtoInstance ProtoInstance105 = null;
ProtoInstance ProtoInstance106 = null;
ProtoInstance ProtoInstance107 = null;
ProtoInstance ProtoInstance108 = null;
ProtoInstance ProtoInstance109 = null;
ProtoInstance ProtoInstance110 = null;
ProtoInstance ProtoInstance111 = null;
ProtoInstance ProtoInstance112 = null;
ProtoInstance ProtoInstance113 = null;
ProtoInstance ProtoInstance114 = null;
ProtoInstance ProtoInstance115 = null;
ProtoInstance ProtoInstance116 = null;
ProtoInstance ProtoInstance117 = null;
ProtoInstance ProtoInstance118 = null;
ProtoInstance ProtoInstance119 = null;
ProtoInstance ProtoInstance120 = null;
ProtoInstance ProtoInstance121 = null;
ProtoInstance ProtoInstance122 = null;
ProtoInstance ProtoInstance123 = null;
ProtoInstance ProtoInstance124 = null;
ProtoInstance ProtoInstance125 = null;
ProtoInstance ProtoInstance126 = null;
ProtoInstance ProtoInstance127 = null;
ProtoInstance ProtoInstance128 = null;
ProtoInstance ProtoInstance129 = null;
ProtoInstance ProtoInstance130 = null;
ProtoInstance ProtoInstance131 = null;
ProtoInstance ProtoInstance132 = null;
ProtoInstance ProtoInstance133 = null;
ProtoInstance ProtoInstance134 = null;
ProtoInstance ProtoInstance135 = null;
ProtoInstance ProtoInstance136 = null;
ProtoInstance ProtoInstance137 = null;
ProtoInstance ProtoInstance138 = null;
ProtoInstance ProtoInstance139 = null;
ProtoInstance ProtoInstance140 = null;
ProtoInstance ProtoInstance141 = null;
ProtoInstance ProtoInstance142 = null;
ProtoInstance ProtoInstance143 = null;
ProtoInstance ProtoInstance144 = null;
ProtoInstance ProtoInstance145 = null;
ProtoInstance ProtoInstance146 = null;
ProtoInstance ProtoInstance147 = null;
ProtoInstance ProtoInstance148 = null;
ProtoInstance ProtoInstance149 = null;
ProtoInstance ProtoInstance150 = null;
ProtoInstance ProtoInstance151 = null;
ProtoInstance ProtoInstance152 = null;
ProtoInstance ProtoInstance153 = null;
ProtoInstance ProtoInstance154 = null;
ProtoInstance ProtoInstance155 = null;
ProtoInstance ProtoInstance156 = null;
ProtoInstance ProtoInstance157 = null;
ProtoInstance ProtoInstance158 = null;
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new meta().setName("source").setContent("LOA0ExampleSourceWithDiamonds.wrl")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Humanoid")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("humanoidBody").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("MFString").setName("info").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("MFNode").setName("joints").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("MFNode").setName("segments").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("MFNode").setName("sites").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFString").setName("version").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("200x"))
            .addField(new field().setType("MFNode").setName("viewpoints").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("humanoidBody"))))
              .addChild(new Group()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("viewpoints"))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("center").setProtoField("center"))
                .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))))
        .addChild(new ProtoDeclare().setName("Joint")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("limitOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("MFFloat").setName("llimit").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("MFFloat").setName("stiffness").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFFloat").setName("ulimit").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("children"))
                  .addConnect(new connect().setNodeField("center").setProtoField("center"))
                  .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                  .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                  .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                  .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt320().getArray())).setCreaseAngle(0.5f)
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f1().getArray()))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}))))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("center")))))))
        .addChild(new ProtoDeclare().setName("Segment")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("addChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFNode").setName("removeChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("centerOfMass").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("coord").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).clearChildren())
            .addField(new field().setType("MFNode").setName("displacers").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFFloat").setName("mass").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFVec3f").setName("momentsOfInertia").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
        .addChild(new ProtoDeclare().setName("Site")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("addChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFNode").setName("removeChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("center").setProtoField("center"))
                .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Humanoid").setDEF("humanoid_2"))
        .addChild(new Group().setDEF("JointCenters_WorldInfo")
          .addChild(new WorldInfo().setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0").setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray()))))
        .addChild(new NavigationInfo().setAvatarSize(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat3().getArray())).setSpeed(1.5f)))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("humanoidBody")
            .addChild(ProtoInstance1 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("joints")
            .addChild(ProtoInstance80 = new ProtoInstance().setUSE("hanim_humanoid_root_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("segments")
            .addChild(ProtoInstance81 = new ProtoInstance().setUSE("hanim_sacrum_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("sites")
            .addChild(ProtoInstance82 = new ProtoInstance().setUSE("hanim_skull_tip_2"))
            .addChild(ProtoInstance83 = new ProtoInstance().setUSE("hanim_sellion_2"))
            .addChild(ProtoInstance84 = new ProtoInstance().setUSE("hanim_r_infraorbitale_2"))
            .addChild(ProtoInstance85 = new ProtoInstance().setUSE("hanim_l_infraorbitale_2"))
            .addChild(ProtoInstance86 = new ProtoInstance().setUSE("hanim_supramenton_2"))
            .addChild(ProtoInstance87 = new ProtoInstance().setUSE("hanim_r_tragion_2"))
            .addChild(ProtoInstance88 = new ProtoInstance().setUSE("hanim_r_gonion_2"))
            .addChild(ProtoInstance89 = new ProtoInstance().setUSE("hanim_l_tragion_2"))
            .addChild(ProtoInstance90 = new ProtoInstance().setUSE("hanim_l_gonion_2"))
            .addChild(ProtoInstance91 = new ProtoInstance().setUSE("hanim_nuchale_2"))
            .addChild(ProtoInstance92 = new ProtoInstance().setUSE("hanim_r_clavicale_2"))
            .addChild(ProtoInstance93 = new ProtoInstance().setUSE("hanim_suprasternale_2"))
            .addChild(ProtoInstance94 = new ProtoInstance().setUSE("hanim_l_clavicale_2"))
            .addChild(ProtoInstance95 = new ProtoInstance().setUSE("hanim_r_thelion_2"))
            .addChild(ProtoInstance96 = new ProtoInstance().setUSE("hanim_l_thelion_2"))
            .addChild(ProtoInstance97 = new ProtoInstance().setUSE("hanim_substernale_2"))
            .addChild(ProtoInstance98 = new ProtoInstance().setUSE("hanim_r_rib10_2"))
            .addChild(ProtoInstance99 = new ProtoInstance().setUSE("hanim_r_asis_2"))
            .addChild(ProtoInstance100 = new ProtoInstance().setUSE("hanim_l_rib10_2"))
            .addChild(ProtoInstance101 = new ProtoInstance().setUSE("hanim_l_asis_2"))
            .addChild(ProtoInstance102 = new ProtoInstance().setUSE("hanim_r_iliocristale_2"))
            .addChild(ProtoInstance103 = new ProtoInstance().setUSE("hanim_r_trochanterion_2"))
            .addChild(ProtoInstance104 = new ProtoInstance().setUSE("hanim_l_iliocristale_2"))
            .addChild(ProtoInstance105 = new ProtoInstance().setUSE("hanim_l_trochanterion_2"))
            .addChild(ProtoInstance106 = new ProtoInstance().setUSE("hanim_cervicale_2"))
            .addChild(ProtoInstance107 = new ProtoInstance().setUSE("hanim_spine_2_lower_back_2"))
            .addChild(ProtoInstance108 = new ProtoInstance().setUSE("hanim_r_psis_2"))
            .addChild(ProtoInstance109 = new ProtoInstance().setUSE("hanim_l_psis_2"))
            .addChild(ProtoInstance110 = new ProtoInstance().setUSE("hanim_waist_preferred_posterior_2"))
            .addChild(ProtoInstance111 = new ProtoInstance().setUSE("hanim_r_acromion_2"))
            .addChild(ProtoInstance112 = new ProtoInstance().setUSE("hanim_r_axilla_proximal_2"))
            .addChild(ProtoInstance113 = new ProtoInstance().setUSE("hanim_r_radial_styloid_2"))
            .addChild(ProtoInstance114 = new ProtoInstance().setUSE("hanim_r_axilla_distal_2"))
            .addChild(ProtoInstance115 = new ProtoInstance().setUSE("hanim_r_olecranon_2"))
            .addChild(ProtoInstance116 = new ProtoInstance().setUSE("hanim_r_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance117 = new ProtoInstance().setUSE("hanim_r_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance118 = new ProtoInstance().setUSE("hanim_r_radiale_2"))
            .addChild(ProtoInstance119 = new ProtoInstance().setUSE("hanim_r_metacarpal_phalanx3"))
            .addChild(ProtoInstance120 = new ProtoInstance().setUSE("hanim_r_dactylion_2"))
            .addChild(ProtoInstance121 = new ProtoInstance().setUSE("hanim_r_ulnar_styloid_2"))
            .addChild(ProtoInstance122 = new ProtoInstance().setUSE("hanim_r_metacarpal_phalanx6"))
            .addChild(ProtoInstance123 = new ProtoInstance().setUSE("hanim_l_acromion_2"))
            .addChild(ProtoInstance124 = new ProtoInstance().setUSE("hanim_l_axilla_proximal_2"))
            .addChild(ProtoInstance125 = new ProtoInstance().setUSE("hanim_l_radial_styloid_2"))
            .addChild(ProtoInstance126 = new ProtoInstance().setUSE("hanim_l_axilla_distal_2"))
            .addChild(ProtoInstance127 = new ProtoInstance().setUSE("hanim_l_olecranon_2"))
            .addChild(ProtoInstance128 = new ProtoInstance().setUSE("hanim_l_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance129 = new ProtoInstance().setUSE("hanim_l_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance130 = new ProtoInstance().setUSE("hanim_l_radiale_2"))
            .addChild(ProtoInstance131 = new ProtoInstance().setUSE("hanim_l_metacarpal_phalanx3"))
            .addChild(ProtoInstance132 = new ProtoInstance().setUSE("hanim_l_dactylion_2"))
            .addChild(ProtoInstance133 = new ProtoInstance().setUSE("hanim_l_ulnar_styloid_2"))
            .addChild(ProtoInstance134 = new ProtoInstance().setUSE("hanim_l_metacarpal_phalanx6"))
            .addChild(ProtoInstance135 = new ProtoInstance().setUSE("hanim_r_knee_crease_2"))
            .addChild(ProtoInstance136 = new ProtoInstance().setUSE("hanim_r_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance137 = new ProtoInstance().setUSE("hanim_r_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance138 = new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance139 = new ProtoInstance().setUSE("hanim_r_lateral_malleolus_2"))
            .addChild(ProtoInstance140 = new ProtoInstance().setUSE("hanim_r_medial_malleolus_2"))
            .addChild(ProtoInstance141 = new ProtoInstance().setUSE("hanim_r_sphyrion_2"))
            .addChild(ProtoInstance142 = new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance143 = new ProtoInstance().setUSE("hanim_r_calcaneus_posterior_2"))
            .addChild(ProtoInstance144 = new ProtoInstance().setUSE("hanim_r_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance145 = new ProtoInstance().setUSE("hanim_l_knee_crease_2"))
            .addChild(ProtoInstance146 = new ProtoInstance().setUSE("hanim_l_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance147 = new ProtoInstance().setUSE("hanim_l_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance148 = new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance149 = new ProtoInstance().setUSE("hanim_l_lateral_malleolus_2"))
            .addChild(ProtoInstance150 = new ProtoInstance().setUSE("hanim_l_medial_malleolus_2"))
            .addChild(ProtoInstance151 = new ProtoInstance().setUSE("hanim_l_sphyrion_2"))
            .addChild(ProtoInstance152 = new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance153 = new ProtoInstance().setUSE("hanim_l_calcaneus_posterior_2"))
            .addChild(ProtoInstance154 = new ProtoInstance().setUSE("hanim_l_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance155 = new ProtoInstance().setUSE("hanim_crotch_2"))
            .addChild(ProtoInstance156 = new ProtoInstance().setUSE("hanim_r_neck_base_2"))
            .addChild(ProtoInstance157 = new ProtoInstance().setUSE("hanim_l_neck_base_2"))
            .addChild(ProtoInstance158 = new ProtoInstance().setUSE("hanim_navel_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.824000000953674 0.0276999995112419"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance2 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum_2")));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance3 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip_2"))
                    .addChild(ProtoInstance4 = new ProtoInstance().setName("Site").setDEF("hanim_sellion_2"))
                    .addChild(ProtoInstance5 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale_2"))
                    .addChild(ProtoInstance6 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale_2"))
                    .addChild(ProtoInstance7 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton_2"))
                    .addChild(ProtoInstance8 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion_2"))
                    .addChild(ProtoInstance9 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion_2"))
                    .addChild(ProtoInstance10 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion_2"))
                    .addChild(ProtoInstance11 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion_2"))
                    .addChild(ProtoInstance12 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale_2"))
                    .addChild(ProtoInstance13 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale_2"))
                    .addChild(ProtoInstance14 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale_2"))
                    .addChild(ProtoInstance15 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale_2"))
                    .addChild(ProtoInstance16 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion_2"))
                    .addChild(ProtoInstance17 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion_2"))
                    .addChild(ProtoInstance18 = new ProtoInstance().setName("Site").setDEF("hanim_substernale_2"))
                    .addChild(ProtoInstance19 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10_2"))
                    .addChild(ProtoInstance20 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis_2"))
                    .addChild(ProtoInstance21 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10_2"))
                    .addChild(ProtoInstance22 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis_2"))
                    .addChild(ProtoInstance23 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale_2"))
                    .addChild(ProtoInstance24 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion_2"))
                    .addChild(ProtoInstance25 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale_2"))
                    .addChild(ProtoInstance26 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion_2"))
                    .addChild(ProtoInstance27 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale_2"))
                    .addChild(ProtoInstance28 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back_2"))
                    .addChild(ProtoInstance29 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis_2"))
                    .addChild(ProtoInstance30 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis_2"))
                    .addChild(ProtoInstance31 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior_2"))
                    .addChild(ProtoInstance32 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion_2"))
                    .addChild(ProtoInstance33 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal_2"))
                    .addChild(ProtoInstance34 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid_2"))
                    .addChild(ProtoInstance35 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal_2"))
                    .addChild(ProtoInstance36 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon_2"))
                    .addChild(ProtoInstance37 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles_2"))
                    .addChild(ProtoInstance38 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles_2"))
                    .addChild(ProtoInstance39 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale_2"))
                    .addChild(ProtoInstance40 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx3"))
                    .addChild(ProtoInstance41 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion_2"))
                    .addChild(ProtoInstance42 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid_2"))
                    .addChild(ProtoInstance43 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx6"))
                    .addChild(ProtoInstance44 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion_2"))
                    .addChild(ProtoInstance45 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal_2"))
                    .addChild(ProtoInstance46 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid_2"))
                    .addChild(ProtoInstance47 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal_2"))
                    .addChild(ProtoInstance48 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon_2"))
                    .addChild(ProtoInstance49 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles_2"))
                    .addChild(ProtoInstance50 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles_2"))
                    .addChild(ProtoInstance51 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale_2"))
                    .addChild(ProtoInstance52 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx3"))
                    .addChild(ProtoInstance53 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion_2"))
                    .addChild(ProtoInstance54 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid_2"))
                    .addChild(ProtoInstance55 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx6"))
                    .addChild(ProtoInstance56 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease_2"))
                    .addChild(ProtoInstance57 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles_2"))
                    .addChild(ProtoInstance58 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles_2"))
                    .addChild(ProtoInstance59 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx6"))
                    .addChild(ProtoInstance60 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus_2"))
                    .addChild(ProtoInstance61 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus_2"))
                    .addChild(ProtoInstance62 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion_2"))
                    .addChild(ProtoInstance63 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx2"))
                    .addChild(ProtoInstance64 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior_2"))
                    .addChild(ProtoInstance65 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx3"))
                    .addChild(ProtoInstance66 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease_2"))
                    .addChild(ProtoInstance67 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles_2"))
                    .addChild(ProtoInstance68 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles_2"))
                    .addChild(ProtoInstance69 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx6"))
                    .addChild(ProtoInstance70 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus_2"))
                    .addChild(ProtoInstance71 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus_2"))
                    .addChild(ProtoInstance72 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion_2"))
                    .addChild(ProtoInstance73 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx2"))
                    .addChild(ProtoInstance74 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior_2"))
                    .addChild(ProtoInstance75 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx3"))
                    .addChild(ProtoInstance76 = new ProtoInstance().setName("Site").setDEF("hanim_crotch_2"))
                    .addChild(ProtoInstance77 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base_2"))
                    .addChild(ProtoInstance78 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base_2"))
                    .addChild(ProtoInstance79 = new ProtoInstance().setName("Site").setDEF("hanim_navel_2")));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00499999988824129 1.75039994716644 0.00549999997019768"));
ProtoInstance4
                      .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance4
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00579999992623925 1.63160002231598 0.0851999968290329"));
ProtoInstance5
                      .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance5
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.023700000718236 1.61710000038147 0.0751999989151955"));
ProtoInstance6
                      .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance6
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.61710000038147 0.0751999989151955"));
ProtoInstance7
                      .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance7
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00609999988228083 1.54100000858307 0.0804999992251396"));
ProtoInstance8
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance8
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464"));
ProtoInstance9
                      .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance9
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862"));
ProtoInstance10
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance10
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.63479995727539 0.0282000005245209"));
ProtoInstance11
                      .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance11
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0631000027060509 1.55299997329712 0.0329999998211861"));
ProtoInstance12
                      .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance12
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536"));
ProtoInstance13
                      .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance13
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303"));
ProtoInstance14
                      .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance14
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.47140002250671 0.0551000013947487"));
ProtoInstance15
                      .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance15
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0271000005304813 1.49430000782013 0.0394000001251698"));
ProtoInstance16
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance16
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0736000016331673 1.33850002288818 0.121699996292591"));
ProtoInstance17
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance17
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0917999967932701 1.33819997310638 0.119199998676777"));
ProtoInstance18
                      .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance18
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461936 1.29949998855591 0.114699997007847"));
ProtoInstance19
                      .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance19
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0710999965667725 1.19410002231598 0.101599998772144"));
ProtoInstance20
                      .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance20
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.088699996471405 1.00209999084473 0.111199997365475"));
ProtoInstance21
                      .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance21
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0870999991893768 1.19249999523163 0.099200002849102"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.998300015926361 0.105200000107288"));
ProtoInstance23
                      .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance23
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.152500003576279 1.0628000497818 0.00350000010803342"));
ProtoInstance24
                      .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance24
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16889999806881 0.841899991035461 0.0351999998092651"));
ProtoInstance25
                      .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance25
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.161200001835823 1.05369997024536 0.0007999999797903"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.167699992656708 0.833599984645844 0.0303000006824732"));
ProtoInstance27
                      .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance27
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975"));
ProtoInstance28
                      .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance28
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00490000005811453 1.19079995155334 -0.111299999058247"));
ProtoInstance29
                      .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance29
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061"));
ProtoInstance30
                      .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance30
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0773999989032745 1.01900005340576 -0.115099996328354"));
ProtoInstance31
                      .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance31
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165535 1.09150004386902 -0.109099999070168"));
ProtoInstance32
                      .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance32
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954"));
ProtoInstance33
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance33
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444"));
ProtoInstance34
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance34
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792"));
ProtoInstance35
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance35
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468"));
ProtoInstance36
                      .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance36
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.190699994564056 1.14049994945526 -0.106499999761581"));
ProtoInstance37
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance37
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.222399994730949 1.15170001983643 -0.103299997746944"));
ProtoInstance38
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance38
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.167999997735024 1.12979996204376 -0.106200002133846"));
ProtoInstance39
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance39
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.212999999523163 1.130499958992 -0.109099999070168"));
ProtoInstance40
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance40
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593"));
ProtoInstance41
                      .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance41
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813"));
ProtoInstance42
                      .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance42
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.192900002002716 0.788999974727631 -0.10639999806881"));
ProtoInstance44
                      .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance44
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.203199997544289 1.47599995136261 -0.0489999987185001"));
ProtoInstance45
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance45
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.177699998021126 1.40649998188019 -0.00749999983236194"));
ProtoInstance46
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance46
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.190099999308586 0.864499986171722 -0.0414999984204769"));
ProtoInstance47
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance47
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704361 1.40719997882843 -0.0874999985098839"));
ProtoInstance48
                      .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance48
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.196199998259544 1.13750004768372 -0.112300001084805"));
ProtoInstance49
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance49
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.228000000119209 1.14820003509521 -0.109999999403954"));
ProtoInstance50
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance50
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.173500001430511 1.12720000743866 -0.111299999058247"));
ProtoInstance51
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance51
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.218199998140335 1.12119996547699 -0.116700001060963"));
ProtoInstance52
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance52
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.200900003314018 0.813899993896484 -0.023700000718236"));
ProtoInstance53
                      .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance53
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.205599993467331 0.674300014972687 -0.048200000077486"));
ProtoInstance54
                      .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance54
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.214200004935265 0.85290002822876 -0.064800001680851"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.192900002002716 0.78600001335144 -0.112199999392033"));
ProtoInstance56
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance56
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679"));
ProtoInstance57
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance57
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.142100006341934 0.499199986457825 0.0309999994933605"));
ProtoInstance58
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance58
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082"));
ProtoInstance59
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance59
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139"));
ProtoInstance61
                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance61
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828"));
ProtoInstance62
                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance62
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079"));
ProtoInstance63
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance63
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518"));
ProtoInstance64
                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance64
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679"));
ProtoInstance65
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance65
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.088299997150898 0.013399999588728 0.138300001621246"));
ProtoInstance66
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance66
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338"));
ProtoInstance67
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance67
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.159799993038177 0.496699988842011 0.0296999998390675"));
ProtoInstance68
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance68
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0397999994456768 0.494599997997284 0.0303000006824732"));
ProtoInstance69
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance69
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.182500004768372 0.00700000021606684 0.092799998819828"));
ProtoInstance70
                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance70
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.130799993872643 0.0597000010311604 -0.103200003504753"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348"));
ProtoInstance72
                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance72
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649"));
ProtoInstance73
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance73
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0816000029444695 0.023199999704957 0.0105999996885657"));
ProtoInstance74
                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance74
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.025900000706315 -0.11710000038147"));
ProtoInstance75
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance75
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.119499996304512 0.00789999961853027 0.143299996852875"));
ProtoInstance76
                      .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance76
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00340000004507601 0.826600015163422 0.0256999991834164"));
ProtoInstance77
                      .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance77
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907"));
ProtoInstance78
                      .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance78
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048"));
ProtoInstance79
                      .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance79
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00689999992027879 1.09660005569458 0.101700000464916"));
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.00999999977648258f,0f,-0.00999999977648258f,0f,0f,0f,0f,0.00999999977648258f,0.00999999977648258f,0f,0f,0f,0f,-0.00999999977648258f,0f,-0.00999999977648258f,0f});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.25f,1.60000002384186f,0.75f});
  }
}
}
