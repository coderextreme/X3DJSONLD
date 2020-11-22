var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
var ProtoInstance13 = null;
var ProtoInstance14 = null;
var ProtoInstance15 = null;
var ProtoInstance16 = null;
var ProtoInstance17 = null;
var ProtoInstance18 = null;
var ProtoInstance19 = null;
var ProtoInstance20 = null;
var ProtoInstance21 = null;
var ProtoInstance22 = null;
var ProtoInstance23 = null;
var ProtoInstance24 = null;
var ProtoInstance25 = null;
var ProtoInstance26 = null;
var ProtoInstance27 = null;
var ProtoInstance28 = null;
var ProtoInstance29 = null;
var ProtoInstance30 = null;
var ProtoInstance31 = null;
var ProtoInstance32 = null;
var ProtoInstance33 = null;
var ProtoInstance34 = null;
var ProtoInstance35 = null;
var ProtoInstance36 = null;
var ProtoInstance37 = null;
var ProtoInstance38 = null;
var ProtoInstance39 = null;
var ProtoInstance40 = null;
var ProtoInstance41 = null;
var ProtoInstance42 = null;
var ProtoInstance43 = null;
var ProtoInstance44 = null;
var ProtoInstance45 = null;
var ProtoInstance46 = null;
var ProtoInstance47 = null;
var ProtoInstance48 = null;
var ProtoInstance49 = null;
var ProtoInstance50 = null;
var ProtoInstance51 = null;
var ProtoInstance52 = null;
var ProtoInstance53 = null;
var ProtoInstance54 = null;
var ProtoInstance55 = null;
var ProtoInstance56 = null;
var ProtoInstance57 = null;
var ProtoInstance58 = null;
var ProtoInstance59 = null;
var ProtoInstance60 = null;
var ProtoInstance61 = null;
var ProtoInstance62 = null;
var ProtoInstance63 = null;
var ProtoInstance64 = null;
var ProtoInstance65 = null;
var ProtoInstance66 = null;
var ProtoInstance67 = null;
var ProtoInstance68 = null;
var ProtoInstance69 = null;
var ProtoInstance70 = null;
var ProtoInstance71 = null;
var ProtoInstance72 = null;
var ProtoInstance73 = null;
var ProtoInstance74 = null;
var ProtoInstance75 = null;
var ProtoInstance76 = null;
var ProtoInstance77 = null;
var ProtoInstance78 = null;
var ProtoInstance79 = null;
var ProtoInstance80 = null;
var ProtoInstance81 = null;
var ProtoInstance82 = null;
var ProtoInstance83 = null;
var ProtoInstance84 = null;
var ProtoInstance85 = null;
var ProtoInstance86 = null;
var ProtoInstance87 = null;
var ProtoInstance88 = null;
var ProtoInstance89 = null;
var ProtoInstance90 = null;
var ProtoInstance91 = null;
var ProtoInstance92 = null;
var ProtoInstance93 = null;
var ProtoInstance94 = null;
var ProtoInstance95 = null;
var ProtoInstance96 = null;
var ProtoInstance97 = null;
var ProtoInstance98 = null;
var ProtoInstance99 = null;
var ProtoInstance100 = null;
var ProtoInstance101 = null;
var ProtoInstance102 = null;
var ProtoInstance103 = null;
var ProtoInstance104 = null;
var ProtoInstance105 = null;
var ProtoInstance106 = null;
var ProtoInstance107 = null;
var ProtoInstance108 = null;
var ProtoInstance109 = null;
var ProtoInstance110 = null;
var ProtoInstance111 = null;
var ProtoInstance112 = null;
var ProtoInstance113 = null;
var ProtoInstance114 = null;
var ProtoInstance115 = null;
var ProtoInstance116 = null;
var ProtoInstance117 = null;
var ProtoInstance118 = null;
var ProtoInstance119 = null;
var ProtoInstance120 = null;
var ProtoInstance121 = null;
var ProtoInstance122 = null;
var ProtoInstance123 = null;
var ProtoInstance124 = null;
var ProtoInstance125 = null;
var ProtoInstance126 = null;
var ProtoInstance127 = null;
var ProtoInstance128 = null;
var ProtoInstance129 = null;
var ProtoInstance130 = null;
var ProtoInstance131 = null;
var ProtoInstance132 = null;
var ProtoInstance133 = null;
var ProtoInstance134 = null;
var ProtoInstance135 = null;
var ProtoInstance136 = null;
var ProtoInstance137 = null;
var ProtoInstance138 = null;
var ProtoInstance139 = null;
var ProtoInstance140 = null;
var ProtoInstance141 = null;
var ProtoInstance142 = null;
var ProtoInstance143 = null;
var ProtoInstance144 = null;
var ProtoInstance145 = null;
var ProtoInstance146 = null;
var ProtoInstance147 = null;
var ProtoInstance148 = null;
var ProtoInstance149 = null;
var ProtoInstance150 = null;
var ProtoInstance151 = null;
var ProtoInstance152 = null;
var ProtoInstance153 = null;
var ProtoInstance154 = null;
var ProtoInstance155 = null;
var ProtoInstance156 = null;
var ProtoInstance157 = null;
var ProtoInstance158 = null;
var ProtoInstance159 = null;
var ProtoInstance160 = null;
var ProtoInstance161 = null;
var ProtoInstance162 = null;
var ProtoInstance163 = null;
var ProtoInstance164 = null;
var ProtoInstance165 = null;
var ProtoInstance166 = null;
var ProtoInstance167 = null;
var ProtoInstance168 = null;
var ProtoInstance169 = null;
var ProtoInstance170 = null;
var ProtoInstance171 = null;
var ProtoInstance172 = null;
var ProtoInstance173 = null;
var ProtoInstance174 = null;
var ProtoInstance175 = null;
var ProtoInstance176 = null;
var ProtoInstance177 = null;
var ProtoInstance178 = null;
var ProtoInstance179 = null;
var ProtoInstance180 = null;
var ProtoInstance181 = null;
var ProtoInstance182 = null;
var ProtoInstance183 = null;
var ProtoInstance184 = null;
var ProtoInstance185 = null;
var ProtoInstance186 = null;
var ProtoInstance187 = null;
var ProtoInstance188 = null;
var ProtoInstance189 = null;
var ProtoInstance190 = null;
var ProtoInstance191 = null;
var ProtoInstance192 = null;
var ProtoInstance193 = null;
var ProtoInstance194 = null;
var ProtoInstance195 = null;
var ProtoInstance196 = null;
var ProtoInstance197 = null;
var ProtoInstance198 = null;
var ProtoInstance199 = null;
var ProtoInstance200 = null;
var ProtoInstance201 = null;
var ProtoInstance202 = null;
var ProtoInstance203 = null;
var ProtoInstance204 = null;
var ProtoInstance205 = null;
var ProtoInstance206 = null;
var ProtoInstance207 = null;
var ProtoInstance208 = null;
var ProtoInstance209 = null;
var ProtoInstance210 = null;
var ProtoInstance211 = null;
var ProtoInstance212 = null;
var ProtoInstance213 = null;
var ProtoInstance214 = null;
var ProtoInstance215 = null;
var ProtoInstance216 = null;
var ProtoInstance217 = null;
var ProtoInstance218 = null;
var ProtoInstance219 = null;
var ProtoInstance220 = null;
var ProtoInstance221 = null;
var ProtoInstance222 = null;
var ProtoInstance223 = null;
var ProtoInstance224 = null;
var ProtoInstance225 = null;
var ProtoInstance226 = null;
var ProtoInstance227 = null;
var ProtoInstance228 = null;
var ProtoInstance229 = null;
var ProtoInstance230 = null;
var ProtoInstance231 = null;
var ProtoInstance232 = null;
var ProtoInstance233 = null;
var ProtoInstance234 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta((new autoclass.meta()).setName("source").setContent("LOA1ExampleSourceWithDiamonds.wrl")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("Humanoid")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("center").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("humanoidBody").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setName("info").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("joints").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("name").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("rotation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("scaleOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("segments").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("sites").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("version").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("200x"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("viewpoints").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("bboxCenter").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("bboxSize").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Group())
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("humanoidBody"))))
              .addChild((new autoclass.Group())
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("viewpoints"))))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
                .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
                .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
                .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("Joint")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("center").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("limitOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFFLOAT).setName("llimit").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("name").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("rotation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("scaleOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFFLOAT).setName("stiffness").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFFLOAT).setName("ulimit").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Transform())
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
                  .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
                  .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
                  .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
                  .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                  .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))))
              .addChild((new autoclass.Transform())
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])).setCreaseAngle(java.newFloat(0.5))
                    .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.00999999977648258), java.newFloat(0), java.newFloat(-0.00999999977648258), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.00999999977648258), java.newFloat(0.00999999977648258), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-0.00999999977648258), java.newFloat(0), java.newFloat(-0.00999999977648258), java.newFloat(0)]))))
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)])))))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("center")))))))
        .addChild((new autoclass.ProtoDeclare()).setName("Segment")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("addChildren").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("removeChildren").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("centerOfMass").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("coord").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).clearChildren())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("displacers").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("name").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("mass").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("momentsOfInertia").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("bboxCenter").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("bboxSize").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Group())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
                .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize"))
                .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("Site")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("addChildren").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("removeChildren").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("center").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("name").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("rotation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("scaleOrientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
                .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
                .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
                .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
                .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))
                .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren"))))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("Humanoid").setDEF("humanoid_2"))
        .addChild((new autoclass.Group()).setDEF("JointCenters_WorldInfo")
          .addChild((new autoclass.WorldInfo()).setTitle("HANIM 200x Default Joint Centers, LOA&#8209;1").setInfo(java.newArray("java.lang.String", [" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]))))
        .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.60000002384186), java.newFloat(0.75)])).setSpeed(java.newFloat(1.5))))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("humanoidBody")
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_humanoid_root_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("joints")
            .addChild(ProtoInstance118 = (new autoclass.ProtoInstance()).setUSE("hanim_humanoid_root_2"))
            .addChild(ProtoInstance119 = (new autoclass.ProtoInstance()).setUSE("hanim_sacroiliac_2"))
            .addChild(ProtoInstance120 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hip_2"))
            .addChild(ProtoInstance121 = (new autoclass.ProtoInstance()).setUSE("hanim_l_knee_2"))
            .addChild(ProtoInstance122 = (new autoclass.ProtoInstance()).setUSE("hanim_l_talocrural_2"))
            .addChild(ProtoInstance123 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metatarsophalangeal__2"))
            .addChild(ProtoInstance124 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hip_2"))
            .addChild(ProtoInstance125 = (new autoclass.ProtoInstance()).setUSE("hanim_r_knee_2"))
            .addChild(ProtoInstance126 = (new autoclass.ProtoInstance()).setUSE("hanim_r_talocrural_2"))
            .addChild(ProtoInstance127 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metatarsophalangeal__2"))
            .addChild(ProtoInstance128 = (new autoclass.ProtoInstance()).setUSE("hanim_vl5_2"))
            .addChild(ProtoInstance129 = (new autoclass.ProtoInstance()).setUSE("hanim_skullbase_2"))
            .addChild(ProtoInstance130 = (new autoclass.ProtoInstance()).setUSE("hanim_l_shoulder_2"))
            .addChild(ProtoInstance131 = (new autoclass.ProtoInstance()).setUSE("hanim_l_elbow_2"))
            .addChild(ProtoInstance132 = (new autoclass.ProtoInstance()).setUSE("hanim_l_radiocarpal_2"))
            .addChild(ProtoInstance133 = (new autoclass.ProtoInstance()).setUSE("hanim_r_shoulder_2"))
            .addChild(ProtoInstance134 = (new autoclass.ProtoInstance()).setUSE("hanim_r_elbow_2"))
            .addChild(ProtoInstance135 = (new autoclass.ProtoInstance()).setUSE("hanim_r_radiocarpal_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("segments")
            .addChild(ProtoInstance136 = (new autoclass.ProtoInstance()).setUSE("hanim_l_middistal_2"))
            .addChild(ProtoInstance137 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hindfoot_2"))
            .addChild(ProtoInstance138 = (new autoclass.ProtoInstance()).setUSE("hanim_l_calf_2"))
            .addChild(ProtoInstance139 = (new autoclass.ProtoInstance()).setUSE("hanim_l_thigh_2"))
            .addChild(ProtoInstance140 = (new autoclass.ProtoInstance()).setUSE("hanim_r_middistal_2"))
            .addChild(ProtoInstance141 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hindfoot_2"))
            .addChild(ProtoInstance142 = (new autoclass.ProtoInstance()).setUSE("hanim_r_calf_2"))
            .addChild(ProtoInstance143 = (new autoclass.ProtoInstance()).setUSE("hanim_r_thigh_2"))
            .addChild(ProtoInstance144 = (new autoclass.ProtoInstance()).setUSE("hanim_pelvis_2"))
            .addChild(ProtoInstance145 = (new autoclass.ProtoInstance()).setUSE("hanim_skull_2"))
            .addChild(ProtoInstance146 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hand_2"))
            .addChild(ProtoInstance147 = (new autoclass.ProtoInstance()).setUSE("hanim_l_forearm_2"))
            .addChild(ProtoInstance148 = (new autoclass.ProtoInstance()).setUSE("hanim_l_upperarm_2"))
            .addChild(ProtoInstance149 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hand_2"))
            .addChild(ProtoInstance150 = (new autoclass.ProtoInstance()).setUSE("hanim_r_forearm_2"))
            .addChild(ProtoInstance151 = (new autoclass.ProtoInstance()).setUSE("hanim_r_upperarm_2"))
            .addChild(ProtoInstance152 = (new autoclass.ProtoInstance()).setUSE("hanim_l5_2"))
            .addChild(ProtoInstance153 = (new autoclass.ProtoInstance()).setUSE("hanim_sacrum_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("sites")
            .addChild(ProtoInstance154 = (new autoclass.ProtoInstance()).setUSE("hanim_l_middistal_tip_2"))
            .addChild(ProtoInstance155 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance156 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance157 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance158 = (new autoclass.ProtoInstance()).setUSE("hanim_l_lateral_malleolus_2"))
            .addChild(ProtoInstance159 = (new autoclass.ProtoInstance()).setUSE("hanim_l_medial_malleolus_2"))
            .addChild(ProtoInstance160 = (new autoclass.ProtoInstance()).setUSE("hanim_l_sphyrion_2"))
            .addChild(ProtoInstance161 = (new autoclass.ProtoInstance()).setUSE("hanim_l_calcaneus_posterior_2"))
            .addChild(ProtoInstance162 = (new autoclass.ProtoInstance()).setUSE("hanim_l_knee_crease_2"))
            .addChild(ProtoInstance163 = (new autoclass.ProtoInstance()).setUSE("hanim_l_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance164 = (new autoclass.ProtoInstance()).setUSE("hanim_l_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance165 = (new autoclass.ProtoInstance()).setUSE("hanim_r_middistal_tip_2"))
            .addChild(ProtoInstance166 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance167 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance168 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance169 = (new autoclass.ProtoInstance()).setUSE("hanim_r_lateral_malleolus_2"))
            .addChild(ProtoInstance170 = (new autoclass.ProtoInstance()).setUSE("hanim_r_medial_malleolus_2"))
            .addChild(ProtoInstance171 = (new autoclass.ProtoInstance()).setUSE("hanim_r_sphyrion_2"))
            .addChild(ProtoInstance172 = (new autoclass.ProtoInstance()).setUSE("hanim_r_calcaneus_posterior_2"))
            .addChild(ProtoInstance173 = (new autoclass.ProtoInstance()).setUSE("hanim_r_knee_crease_2"))
            .addChild(ProtoInstance174 = (new autoclass.ProtoInstance()).setUSE("hanim_r_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance175 = (new autoclass.ProtoInstance()).setUSE("hanim_r_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance176 = (new autoclass.ProtoInstance()).setUSE("hanim_skull_tip_2"))
            .addChild(ProtoInstance177 = (new autoclass.ProtoInstance()).setUSE("hanim_sellion_2"))
            .addChild(ProtoInstance178 = (new autoclass.ProtoInstance()).setUSE("hanim_r_infraorbitale_2"))
            .addChild(ProtoInstance179 = (new autoclass.ProtoInstance()).setUSE("hanim_l_infraorbitale_2"))
            .addChild(ProtoInstance180 = (new autoclass.ProtoInstance()).setUSE("hanim_supramenton_2"))
            .addChild(ProtoInstance181 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tragion_2"))
            .addChild(ProtoInstance182 = (new autoclass.ProtoInstance()).setUSE("hanim_r_gonion_2"))
            .addChild(ProtoInstance183 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tragion_2"))
            .addChild(ProtoInstance184 = (new autoclass.ProtoInstance()).setUSE("hanim_l_gonion_2"))
            .addChild(ProtoInstance185 = (new autoclass.ProtoInstance()).setUSE("hanim_nuchale_2"))
            .addChild(ProtoInstance186 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hand_tip_2"))
            .addChild(ProtoInstance187 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpal_phalanx3"))
            .addChild(ProtoInstance188 = (new autoclass.ProtoInstance()).setUSE("hanim_l_dactylion_2"))
            .addChild(ProtoInstance189 = (new autoclass.ProtoInstance()).setUSE("hanim_l_ulnar_styloid_2"))
            .addChild(ProtoInstance190 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpal_phalanx6"))
            .addChild(ProtoInstance191 = (new autoclass.ProtoInstance()).setUSE("hanim_l_radial_styloid_2"))
            .addChild(ProtoInstance192 = (new autoclass.ProtoInstance()).setUSE("hanim_l_olecranon_2"))
            .addChild(ProtoInstance193 = (new autoclass.ProtoInstance()).setUSE("hanim_l_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance194 = (new autoclass.ProtoInstance()).setUSE("hanim_l_radiale_2"))
            .addChild(ProtoInstance195 = (new autoclass.ProtoInstance()).setUSE("hanim_l_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance196 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hand_tip_2"))
            .addChild(ProtoInstance197 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpal_phalanx3"))
            .addChild(ProtoInstance198 = (new autoclass.ProtoInstance()).setUSE("hanim_r_dactylion_2"))
            .addChild(ProtoInstance199 = (new autoclass.ProtoInstance()).setUSE("hanim_r_ulnar_styloid_2"))
            .addChild(ProtoInstance200 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpal_phalanx6"))
            .addChild(ProtoInstance201 = (new autoclass.ProtoInstance()).setUSE("hanim_r_radial_styloid_2"))
            .addChild(ProtoInstance202 = (new autoclass.ProtoInstance()).setUSE("hanim_r_olecranon_2"))
            .addChild(ProtoInstance203 = (new autoclass.ProtoInstance()).setUSE("hanim_r_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance204 = (new autoclass.ProtoInstance()).setUSE("hanim_r_radiale_2"))
            .addChild(ProtoInstance205 = (new autoclass.ProtoInstance()).setUSE("hanim_r_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance206 = (new autoclass.ProtoInstance()).setUSE("hanim_r_clavicale_2"))
            .addChild(ProtoInstance207 = (new autoclass.ProtoInstance()).setUSE("hanim_suprasternale_2"))
            .addChild(ProtoInstance208 = (new autoclass.ProtoInstance()).setUSE("hanim_l_clavicale_2"))
            .addChild(ProtoInstance209 = (new autoclass.ProtoInstance()).setUSE("hanim_r_thelion_2"))
            .addChild(ProtoInstance210 = (new autoclass.ProtoInstance()).setUSE("hanim_l_thelion_2"))
            .addChild(ProtoInstance211 = (new autoclass.ProtoInstance()).setUSE("hanim_substernale_2"))
            .addChild(ProtoInstance212 = (new autoclass.ProtoInstance()).setUSE("hanim_r_rib10_2"))
            .addChild(ProtoInstance213 = (new autoclass.ProtoInstance()).setUSE("hanim_l_rib10_2"))
            .addChild(ProtoInstance214 = (new autoclass.ProtoInstance()).setUSE("hanim_cervicale_2"))
            .addChild(ProtoInstance215 = (new autoclass.ProtoInstance()).setUSE("hanim_spine_2_lower_back_2"))
            .addChild(ProtoInstance216 = (new autoclass.ProtoInstance()).setUSE("hanim_waist_preferred_posterior_2"))
            .addChild(ProtoInstance217 = (new autoclass.ProtoInstance()).setUSE("hanim_r_acromion_2"))
            .addChild(ProtoInstance218 = (new autoclass.ProtoInstance()).setUSE("hanim_r_axilla_proximal_2"))
            .addChild(ProtoInstance219 = (new autoclass.ProtoInstance()).setUSE("hanim_r_axilla_distal_2"))
            .addChild(ProtoInstance220 = (new autoclass.ProtoInstance()).setUSE("hanim_l_acromion_2"))
            .addChild(ProtoInstance221 = (new autoclass.ProtoInstance()).setUSE("hanim_l_axilla_proximal_2"))
            .addChild(ProtoInstance222 = (new autoclass.ProtoInstance()).setUSE("hanim_l_axilla_distal_2"))
            .addChild(ProtoInstance223 = (new autoclass.ProtoInstance()).setUSE("hanim_r_neck_base_2"))
            .addChild(ProtoInstance224 = (new autoclass.ProtoInstance()).setUSE("hanim_l_neck_base_2"))
            .addChild(ProtoInstance225 = (new autoclass.ProtoInstance()).setUSE("hanim_navel_2"))
            .addChild(ProtoInstance226 = (new autoclass.ProtoInstance()).setUSE("hanim_r_asis_2"))
            .addChild(ProtoInstance227 = (new autoclass.ProtoInstance()).setUSE("hanim_l_asis_2"))
            .addChild(ProtoInstance228 = (new autoclass.ProtoInstance()).setUSE("hanim_r_iliocristale_2"))
            .addChild(ProtoInstance229 = (new autoclass.ProtoInstance()).setUSE("hanim_r_trochanterion_2"))
            .addChild(ProtoInstance230 = (new autoclass.ProtoInstance()).setUSE("hanim_l_iliocristale_2"))
            .addChild(ProtoInstance231 = (new autoclass.ProtoInstance()).setUSE("hanim_l_trochanterion_2"))
            .addChild(ProtoInstance232 = (new autoclass.ProtoInstance()).setUSE("hanim_r_psis_2"))
            .addChild(ProtoInstance233 = (new autoclass.ProtoInstance()).setUSE("hanim_l_psis_2"))
            .addChild(ProtoInstance234 = (new autoclass.ProtoInstance()).setUSE("hanim_crotch_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.824000000953674 0.0276999995112419"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_sacroiliac_2"))
                .addChild(ProtoInstance42 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl5_2"))
                .addChild(ProtoInstance108 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_sacrum_2")));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacroiliac"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.914900004863739 0.0015999999595806"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_hip_2"))
                    .addChild(ProtoInstance22 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_hip_2"))
                    .addChild(ProtoInstance41 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_pelvis_2")));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hip"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.0961000025272369 0.912400007247925 -0.0000999999974737875"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee_2"))
                        .addChild(ProtoInstance18 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh_2")));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.104000002145767 0.486699998378754 0.030799999833107"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural_2"))
                            .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf_2")));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.110100001096725 0.0656000003218651 -0.0736000016331673"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal__2"))
                                .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot_2")));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.108599998056889 0.0000999999974737875 0.0368000008165836"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal_2")));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip_2"))
                                        .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx6"))
                                        .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx2"))
                                        .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx3")));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.135399997234344 0.0015999999595806 0.147599995136261"));
ProtoInstance9
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance9
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.182500004768372 0.00700000021606684 0.092799998819828"));
ProtoInstance10
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance10
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0816000029444695 0.023199999704957 0.0105999996885657"));
ProtoInstance11
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance11
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.119499996304512 0.00789999961853027 0.143299996852875"));
ProtoInstance12
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance12
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus_2"))
                                    .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus_2"))
                                    .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion_2"))
                                    .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior_2")));
ProtoInstance13
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance13
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.130799993872643 0.0597000010311604 -0.103200003504753"));
ProtoInstance14
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance14
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348"));
ProtoInstance15
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance15
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649"));
ProtoInstance16
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance16
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.025900000706315 -0.11710000038147"));
ProtoInstance17
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance18
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance18
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance19 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease_2"))
                            .addChild(ProtoInstance20 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles_2"))
                            .addChild(ProtoInstance21 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles_2")));
ProtoInstance19
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance19
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338"));
ProtoInstance20
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance20
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.159799993038177 0.496699988842011 0.0296999998390675"));
ProtoInstance21
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance21
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0397999994456768 0.494599997997284 0.0303000006824732"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hip"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0949999988079071 0.917100012302399 0.00289999996311963"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance23 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee_2"))
                        .addChild(ProtoInstance37 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh_2")));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0866999998688698 0.491299986839294 0.0318000018596649"));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance24 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural_2"))
                            .addChild(ProtoInstance36 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf_2")));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0800999999046326 0.0711999982595444 -0.0766000002622604"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance25 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal__2"))
                                .addChild(ProtoInstance31 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot_2")));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0800999999046326 0 0.0368000008165836"));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance26 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal_2")));
ProtoInstance26
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance26
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance27 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip_2"))
                                        .addChild(ProtoInstance28 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx6"))
                                        .addChild(ProtoInstance29 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx2"))
                                        .addChild(ProtoInstance30 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx3")));
ProtoInstance27
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance27
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.104299999773502 -0.0227000005543232 0.144999995827675"));
ProtoInstance28
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance28
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997"));
ProtoInstance29
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance29
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518"));
ProtoInstance30
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance30
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.088299997150898 0.013399999588728 0.138300001621246"));
ProtoInstance31
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance31
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance32 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus_2"))
                                    .addChild(ProtoInstance33 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus_2"))
                                    .addChild(ProtoInstance34 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion_2"))
                                    .addChild(ProtoInstance35 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior_2")));
ProtoInstance32
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance32
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139"));
ProtoInstance33
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance33
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828"));
ProtoInstance34
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance34
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079"));
ProtoInstance35
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance35
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679"));
ProtoInstance36
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance37
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance37
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance38 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease_2"))
                            .addChild(ProtoInstance39 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles_2"))
                            .addChild(ProtoInstance40 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles_2")));
ProtoInstance38
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance38
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679"));
ProtoInstance39
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance39
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.142100006341934 0.499199986457825 0.0309999994933605"));
ProtoInstance40
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance40
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082"));
ProtoInstance41
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("pelvis"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl5"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00279999990016222 1.05680000782013 -0.0776000022888184"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance43 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_skullbase_2"))
                    .addChild(ProtoInstance55 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_shoulder_2"))
                    .addChild(ProtoInstance71 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_shoulder_2"))
                    .addChild(ProtoInstance87 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l5_2")));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skullbase"));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00439999997615814 1.62090003490448 0.0236000008881092"));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance44 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull_2")));
ProtoInstance44
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance44
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance45 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip_2"))
                            .addChild(ProtoInstance46 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion_2"))
                            .addChild(ProtoInstance47 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale_2"))
                            .addChild(ProtoInstance48 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale_2"))
                            .addChild(ProtoInstance49 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton_2"))
                            .addChild(ProtoInstance50 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion_2"))
                            .addChild(ProtoInstance51 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion_2"))
                            .addChild(ProtoInstance52 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion_2"))
                            .addChild(ProtoInstance53 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion_2"))
                            .addChild(ProtoInstance54 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale_2")));
ProtoInstance45
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance45
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00499999988824129 1.75039994716644 0.00549999997019768"));
ProtoInstance46
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance46
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00579999992623925 1.63160002231598 0.0851999968290329"));
ProtoInstance47
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance47
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.023700000718236 1.61710000038147 0.0751999989151955"));
ProtoInstance48
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance48
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.61710000038147 0.0751999989151955"));
ProtoInstance49
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance49
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00609999988228083 1.54100000858307 0.0804999992251396"));
ProtoInstance50
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance50
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464"));
ProtoInstance51
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance51
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862"));
ProtoInstance52
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance52
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.63479995727539 0.0282000005245209"));
ProtoInstance53
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance53
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0631000027060509 1.55299997329712 0.0329999998211861"));
ProtoInstance54
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance54
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_shoulder"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.202900007367134 1.43760001659393 -0.0386999994516373"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance56 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow_2"))
                        .addChild(ProtoInstance69 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm_2")));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.201399996876717 1.1356999874115 -0.0681999996304512"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance57 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal_2"))
                            .addChild(ProtoInstance64 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm_2")));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198400005698204 0.866299986839294 -0.0582999996840954"));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance58 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand_2")));
ProtoInstance58
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance58
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance59 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip_2"))
                                    .addChild(ProtoInstance60 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx3"))
                                    .addChild(ProtoInstance61 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion_2"))
                                    .addChild(ProtoInstance62 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid_2"))
                                    .addChild(ProtoInstance63 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx6")));
ProtoInstance59
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance59
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.208000004291534 0.673099994659424 -0.049100000411272"));
ProtoInstance60
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance60
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.200900003314018 0.813899993896484 -0.023700000718236"));
ProtoInstance61
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance61
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.205599993467331 0.674300014972687 -0.048200000077486"));
ProtoInstance62
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance62
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.214200004935265 0.85290002822876 -0.064800001680851"));
ProtoInstance63
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance63
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.192900002002716 0.78600001335144 -0.112199999392033"));
ProtoInstance64
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance64
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance65 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid_2"))
                                .addChild(ProtoInstance66 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon_2"))
                                .addChild(ProtoInstance67 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles_2"))
                                .addChild(ProtoInstance68 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale_2")));
ProtoInstance65
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance65
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.190099999308586 0.864499986171722 -0.0414999984204769"));
ProtoInstance66
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance66
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.196199998259544 1.13750004768372 -0.112300001084805"));
ProtoInstance67
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance67
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.173500001430511 1.12720000743866 -0.111299999058247"));
ProtoInstance68
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance68
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.218199998140335 1.12119996547699 -0.116700001060963"));
ProtoInstance69
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance69
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance70 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles_2")));
ProtoInstance70
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance70
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.228000000119209 1.14820003509521 -0.109999999403954"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_shoulder"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance72 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow_2"))
                        .addChild(ProtoInstance85 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm_2")));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.194900006055832 1.13880002498627 -0.061999998986721"));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance73 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal_2"))
                            .addChild(ProtoInstance80 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm_2")));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652"));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance74 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand_2")));
ProtoInstance74
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance74
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance75 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip_2"))
                                    .addChild(ProtoInstance76 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx3"))
                                    .addChild(ProtoInstance77 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion_2"))
                                    .addChild(ProtoInstance78 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid_2"))
                                    .addChild(ProtoInstance79 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx6")));
ProtoInstance75
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance75
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884"));
ProtoInstance76
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance76
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593"));
ProtoInstance77
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance77
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813"));
ProtoInstance78
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance78
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673"));
ProtoInstance79
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance79
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.192900002002716 0.788999974727631 -0.10639999806881"));
ProtoInstance80
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance80
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance81 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid_2"))
                                .addChild(ProtoInstance82 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon_2"))
                                .addChild(ProtoInstance83 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles_2"))
                                .addChild(ProtoInstance84 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale_2")));
ProtoInstance81
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance81
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792"));
ProtoInstance82
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance82
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.190699994564056 1.14049994945526 -0.106499999761581"));
ProtoInstance83
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance83
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.167999997735024 1.12979996204376 -0.106200002133846"));
ProtoInstance84
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance84
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.212999999523163 1.130499958992 -0.109099999070168"));
ProtoInstance85
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance85
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance86 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles_2")));
ProtoInstance86
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance86
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.222399994730949 1.15170001983643 -0.103299997746944"));
ProtoInstance87
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l5"));
ProtoInstance87
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance88 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale_2"))
                        .addChild(ProtoInstance89 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale_2"))
                        .addChild(ProtoInstance90 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale_2"))
                        .addChild(ProtoInstance91 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion_2"))
                        .addChild(ProtoInstance92 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion_2"))
                        .addChild(ProtoInstance93 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale_2"))
                        .addChild(ProtoInstance94 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10_2"))
                        .addChild(ProtoInstance95 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10_2"))
                        .addChild(ProtoInstance96 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale_2"))
                        .addChild(ProtoInstance97 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back_2"))
                        .addChild(ProtoInstance98 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior_2"))
                        .addChild(ProtoInstance99 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion_2"))
                        .addChild(ProtoInstance100 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal_2"))
                        .addChild(ProtoInstance101 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal_2"))
                        .addChild(ProtoInstance102 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion_2"))
                        .addChild(ProtoInstance103 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal_2"))
                        .addChild(ProtoInstance104 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal_2"))
                        .addChild(ProtoInstance105 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base_2"))
                        .addChild(ProtoInstance106 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base_2"))
                        .addChild(ProtoInstance107 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel_2")));
ProtoInstance88
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance88
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303"));
ProtoInstance89
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance89
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.47140002250671 0.0551000013947487"));
ProtoInstance90
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance90
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0271000005304813 1.49430000782013 0.0394000001251698"));
ProtoInstance91
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance91
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0736000016331673 1.33850002288818 0.121699996292591"));
ProtoInstance92
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance92
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0917999967932701 1.33819997310638 0.119199998676777"));
ProtoInstance93
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance93
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461936 1.29949998855591 0.114699997007847"));
ProtoInstance94
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance94
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0710999965667725 1.19410002231598 0.101599998772144"));
ProtoInstance95
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance95
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0870999991893768 1.19249999523163 0.099200002849102"));
ProtoInstance96
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance96
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975"));
ProtoInstance97
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance97
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00490000005811453 1.19079995155334 -0.111299999058247"));
ProtoInstance98
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance98
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165535 1.09150004386902 -0.109099999070168"));
ProtoInstance99
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance99
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954"));
ProtoInstance100
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance100
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444"));
ProtoInstance101
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance101
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468"));
ProtoInstance102
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance102
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.203199997544289 1.47599995136261 -0.0489999987185001"));
ProtoInstance103
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance103
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.177699998021126 1.40649998188019 -0.00749999983236194"));
ProtoInstance104
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance104
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704361 1.40719997882843 -0.0874999985098839"));
ProtoInstance105
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance105
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907"));
ProtoInstance106
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance106
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048"));
ProtoInstance107
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance107
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00689999992027879 1.09660005569458 0.101700000464916"));
ProtoInstance108
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacrum"));
ProtoInstance108
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance109 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_asis_2"))
                    .addChild(ProtoInstance110 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_asis_2"))
                    .addChild(ProtoInstance111 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_iliocristale_2"))
                    .addChild(ProtoInstance112 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_trochanterion_2"))
                    .addChild(ProtoInstance113 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_iliocristale_2"))
                    .addChild(ProtoInstance114 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_trochanterion_2"))
                    .addChild(ProtoInstance115 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_psis_2"))
                    .addChild(ProtoInstance116 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_psis_2"))
                    .addChild(ProtoInstance117 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_crotch_2")));
ProtoInstance109
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_asis"));
ProtoInstance109
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.088699996471405 1.00209999084473 0.111199997365475"));
ProtoInstance110
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_asis"));
ProtoInstance110
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0925000011920929 0.998300015926361 0.105200000107288"));
ProtoInstance111
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_iliocristale"));
ProtoInstance111
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.152500003576279 1.0628000497818 0.00350000010803342"));
ProtoInstance112
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_trochanterion"));
ProtoInstance112
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16889999806881 0.841899991035461 0.0351999998092651"));
ProtoInstance113
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_iliocristale"));
ProtoInstance113
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.161200001835823 1.05369997024536 0.0007999999797903"));
ProtoInstance114
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_trochanterion"));
ProtoInstance114
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.167699992656708 0.833599984645844 0.0303000006824732"));
ProtoInstance115
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_psis"));
ProtoInstance115
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061"));
ProtoInstance116
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_psis"));
ProtoInstance116
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0773999989032745 1.01900005340576 -0.115099996328354"));
ProtoInstance117
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("crotch"));
ProtoInstance117
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00340000004507601 0.826600015163422 0.0256999991834164"));
    X3D0.toFileX3D("../data/LOA1ExampleSourceWithDiamonds.new.x3d");
