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
ProtoInstance ProtoInstance159 = null;
ProtoInstance ProtoInstance160 = null;
ProtoInstance ProtoInstance161 = null;
ProtoInstance ProtoInstance162 = null;
ProtoInstance ProtoInstance163 = null;
ProtoInstance ProtoInstance164 = null;
ProtoInstance ProtoInstance165 = null;
ProtoInstance ProtoInstance166 = null;
ProtoInstance ProtoInstance167 = null;
ProtoInstance ProtoInstance168 = null;
ProtoInstance ProtoInstance169 = null;
ProtoInstance ProtoInstance170 = null;
ProtoInstance ProtoInstance171 = null;
ProtoInstance ProtoInstance172 = null;
ProtoInstance ProtoInstance173 = null;
ProtoInstance ProtoInstance174 = null;
ProtoInstance ProtoInstance175 = null;
ProtoInstance ProtoInstance176 = null;
ProtoInstance ProtoInstance177 = null;
ProtoInstance ProtoInstance178 = null;
ProtoInstance ProtoInstance179 = null;
ProtoInstance ProtoInstance180 = null;
ProtoInstance ProtoInstance181 = null;
ProtoInstance ProtoInstance182 = null;
ProtoInstance ProtoInstance183 = null;
ProtoInstance ProtoInstance184 = null;
ProtoInstance ProtoInstance185 = null;
ProtoInstance ProtoInstance186 = null;
ProtoInstance ProtoInstance187 = null;
ProtoInstance ProtoInstance188 = null;
ProtoInstance ProtoInstance189 = null;
ProtoInstance ProtoInstance190 = null;
ProtoInstance ProtoInstance191 = null;
ProtoInstance ProtoInstance192 = null;
ProtoInstance ProtoInstance193 = null;
ProtoInstance ProtoInstance194 = null;
ProtoInstance ProtoInstance195 = null;
ProtoInstance ProtoInstance196 = null;
ProtoInstance ProtoInstance197 = null;
ProtoInstance ProtoInstance198 = null;
ProtoInstance ProtoInstance199 = null;
ProtoInstance ProtoInstance200 = null;
ProtoInstance ProtoInstance201 = null;
ProtoInstance ProtoInstance202 = null;
ProtoInstance ProtoInstance203 = null;
ProtoInstance ProtoInstance204 = null;
ProtoInstance ProtoInstance205 = null;
ProtoInstance ProtoInstance206 = null;
ProtoInstance ProtoInstance207 = null;
ProtoInstance ProtoInstance208 = null;
ProtoInstance ProtoInstance209 = null;
ProtoInstance ProtoInstance210 = null;
ProtoInstance ProtoInstance211 = null;
ProtoInstance ProtoInstance212 = null;
ProtoInstance ProtoInstance213 = null;
ProtoInstance ProtoInstance214 = null;
ProtoInstance ProtoInstance215 = null;
ProtoInstance ProtoInstance216 = null;
ProtoInstance ProtoInstance217 = null;
ProtoInstance ProtoInstance218 = null;
ProtoInstance ProtoInstance219 = null;
ProtoInstance ProtoInstance220 = null;
ProtoInstance ProtoInstance221 = null;
ProtoInstance ProtoInstance222 = null;
ProtoInstance ProtoInstance223 = null;
ProtoInstance ProtoInstance224 = null;
ProtoInstance ProtoInstance225 = null;
ProtoInstance ProtoInstance226 = null;
ProtoInstance ProtoInstance227 = null;
ProtoInstance ProtoInstance228 = null;
ProtoInstance ProtoInstance229 = null;
ProtoInstance ProtoInstance230 = null;
ProtoInstance ProtoInstance231 = null;
ProtoInstance ProtoInstance232 = null;
ProtoInstance ProtoInstance233 = null;
ProtoInstance ProtoInstance234 = null;
ProtoInstance ProtoInstance235 = null;
ProtoInstance ProtoInstance236 = null;
ProtoInstance ProtoInstance237 = null;
ProtoInstance ProtoInstance238 = null;
ProtoInstance ProtoInstance239 = null;
ProtoInstance ProtoInstance240 = null;
ProtoInstance ProtoInstance241 = null;
ProtoInstance ProtoInstance242 = null;
ProtoInstance ProtoInstance243 = null;
ProtoInstance ProtoInstance244 = null;
ProtoInstance ProtoInstance245 = null;
ProtoInstance ProtoInstance246 = null;
ProtoInstance ProtoInstance247 = null;
ProtoInstance ProtoInstance248 = null;
ProtoInstance ProtoInstance249 = null;
ProtoInstance ProtoInstance250 = null;
ProtoInstance ProtoInstance251 = null;
ProtoInstance ProtoInstance252 = null;
ProtoInstance ProtoInstance253 = null;
ProtoInstance ProtoInstance254 = null;
ProtoInstance ProtoInstance255 = null;
ProtoInstance ProtoInstance256 = null;
ProtoInstance ProtoInstance257 = null;
ProtoInstance ProtoInstance258 = null;
ProtoInstance ProtoInstance259 = null;
ProtoInstance ProtoInstance260 = null;
ProtoInstance ProtoInstance261 = null;
ProtoInstance ProtoInstance262 = null;
ProtoInstance ProtoInstance263 = null;
ProtoInstance ProtoInstance264 = null;
ProtoInstance ProtoInstance265 = null;
ProtoInstance ProtoInstance266 = null;
ProtoInstance ProtoInstance267 = null;
ProtoInstance ProtoInstance268 = null;
ProtoInstance ProtoInstance269 = null;
ProtoInstance ProtoInstance270 = null;
ProtoInstance ProtoInstance271 = null;
ProtoInstance ProtoInstance272 = null;
ProtoInstance ProtoInstance273 = null;
ProtoInstance ProtoInstance274 = null;
ProtoInstance ProtoInstance275 = null;
ProtoInstance ProtoInstance276 = null;
ProtoInstance ProtoInstance277 = null;
ProtoInstance ProtoInstance278 = null;
ProtoInstance ProtoInstance279 = null;
ProtoInstance ProtoInstance280 = null;
ProtoInstance ProtoInstance281 = null;
ProtoInstance ProtoInstance282 = null;
ProtoInstance ProtoInstance283 = null;
ProtoInstance ProtoInstance284 = null;
ProtoInstance ProtoInstance285 = null;
ProtoInstance ProtoInstance286 = null;
ProtoInstance ProtoInstance287 = null;
ProtoInstance ProtoInstance288 = null;
ProtoInstance ProtoInstance289 = null;
ProtoInstance ProtoInstance290 = null;
ProtoInstance ProtoInstance291 = null;
ProtoInstance ProtoInstance292 = null;
ProtoInstance ProtoInstance293 = null;
ProtoInstance ProtoInstance294 = null;
ProtoInstance ProtoInstance295 = null;
ProtoInstance ProtoInstance296 = null;
ProtoInstance ProtoInstance297 = null;
ProtoInstance ProtoInstance298 = null;
ProtoInstance ProtoInstance299 = null;
ProtoInstance ProtoInstance300 = null;
ProtoInstance ProtoInstance301 = null;
ProtoInstance ProtoInstance302 = null;
ProtoInstance ProtoInstance303 = null;
ProtoInstance ProtoInstance304 = null;
ProtoInstance ProtoInstance305 = null;
ProtoInstance ProtoInstance306 = null;
ProtoInstance ProtoInstance307 = null;
ProtoInstance ProtoInstance308 = null;
ProtoInstance ProtoInstance309 = null;
ProtoInstance ProtoInstance310 = null;
ProtoInstance ProtoInstance311 = null;
ProtoInstance ProtoInstance312 = null;
ProtoInstance ProtoInstance313 = null;
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
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
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Humanoid").setDEF("humanoid"))
        .addChild(new Group().setDEF("JointCenters_WorldInfo")
          .addChild(new WorldInfo().setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0").setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray()))))
        .addChild(new NavigationInfo().setAvatarSize(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat3().getArray())).setSpeed(1.5f)))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("humanoidBody")
            .addChild(ProtoInstance1 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("joints")
            .addChild(ProtoInstance80 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("segments")
            .addChild(ProtoInstance159 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("sites")
            .addChild(ProtoInstance237 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
            .addChild(ProtoInstance238 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
            .addChild(ProtoInstance239 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
            .addChild(ProtoInstance240 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
            .addChild(ProtoInstance241 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
            .addChild(ProtoInstance242 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
            .addChild(ProtoInstance243 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
            .addChild(ProtoInstance244 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
            .addChild(ProtoInstance245 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
            .addChild(ProtoInstance246 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale"))
            .addChild(ProtoInstance247 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
            .addChild(ProtoInstance248 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
            .addChild(ProtoInstance249 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
            .addChild(ProtoInstance250 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
            .addChild(ProtoInstance251 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
            .addChild(ProtoInstance252 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
            .addChild(ProtoInstance253 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
            .addChild(ProtoInstance254 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
            .addChild(ProtoInstance255 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
            .addChild(ProtoInstance256 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
            .addChild(ProtoInstance257 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
            .addChild(ProtoInstance258 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
            .addChild(ProtoInstance259 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
            .addChild(ProtoInstance260 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
            .addChild(ProtoInstance261 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
            .addChild(ProtoInstance262 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
            .addChild(ProtoInstance263 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
            .addChild(ProtoInstance264 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
            .addChild(ProtoInstance265 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
            .addChild(ProtoInstance266 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
            .addChild(ProtoInstance267 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
            .addChild(ProtoInstance268 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
            .addChild(ProtoInstance269 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
            .addChild(ProtoInstance270 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
            .addChild(ProtoInstance271 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles"))
            .addChild(ProtoInstance272 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
            .addChild(ProtoInstance273 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale"))
            .addChild(ProtoInstance274 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
            .addChild(ProtoInstance275 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
            .addChild(ProtoInstance276 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
            .addChild(ProtoInstance277 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5"))
            .addChild(ProtoInstance278 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
            .addChild(ProtoInstance279 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
            .addChild(ProtoInstance280 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
            .addChild(ProtoInstance281 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
            .addChild(ProtoInstance282 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
            .addChild(ProtoInstance283 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles"))
            .addChild(ProtoInstance284 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
            .addChild(ProtoInstance285 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale"))
            .addChild(ProtoInstance286 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
            .addChild(ProtoInstance287 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
            .addChild(ProtoInstance288 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
            .addChild(ProtoInstance289 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5"))
            .addChild(ProtoInstance290 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
            .addChild(ProtoInstance291 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
            .addChild(ProtoInstance292 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles"))
            .addChild(ProtoInstance293 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
            .addChild(ProtoInstance294 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
            .addChild(ProtoInstance295 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
            .addChild(ProtoInstance296 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
            .addChild(ProtoInstance297 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
            .addChild(ProtoInstance298 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior"))
            .addChild(ProtoInstance299 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2"))
            .addChild(ProtoInstance300 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
            .addChild(ProtoInstance301 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
            .addChild(ProtoInstance302 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles"))
            .addChild(ProtoInstance303 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
            .addChild(ProtoInstance304 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
            .addChild(ProtoInstance305 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
            .addChild(ProtoInstance306 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
            .addChild(ProtoInstance307 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
            .addChild(ProtoInstance308 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior"))
            .addChild(ProtoInstance309 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2"))
            .addChild(ProtoInstance310 = new ProtoInstance().setName("Site").setDEF("hanim_crotch"))
            .addChild(ProtoInstance311 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
            .addChild(ProtoInstance312 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
            .addChild(ProtoInstance313 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.8240000009536743 0.027699999511241913"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance2 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance3 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                    .addChild(ProtoInstance4 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                    .addChild(ProtoInstance5 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                    .addChild(ProtoInstance6 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                    .addChild(ProtoInstance7 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                    .addChild(ProtoInstance8 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                    .addChild(ProtoInstance9 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                    .addChild(ProtoInstance10 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                    .addChild(ProtoInstance11 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                    .addChild(ProtoInstance12 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale"))
                    .addChild(ProtoInstance13 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                    .addChild(ProtoInstance14 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                    .addChild(ProtoInstance15 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                    .addChild(ProtoInstance16 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                    .addChild(ProtoInstance17 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                    .addChild(ProtoInstance18 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                    .addChild(ProtoInstance19 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                    .addChild(ProtoInstance20 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
                    .addChild(ProtoInstance21 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                    .addChild(ProtoInstance22 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
                    .addChild(ProtoInstance23 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
                    .addChild(ProtoInstance24 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
                    .addChild(ProtoInstance25 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
                    .addChild(ProtoInstance26 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
                    .addChild(ProtoInstance27 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                    .addChild(ProtoInstance28 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                    .addChild(ProtoInstance29 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
                    .addChild(ProtoInstance30 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
                    .addChild(ProtoInstance31 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                    .addChild(ProtoInstance32 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                    .addChild(ProtoInstance33 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                    .addChild(ProtoInstance34 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                    .addChild(ProtoInstance35 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                    .addChild(ProtoInstance36 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                    .addChild(ProtoInstance37 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles"))
                    .addChild(ProtoInstance38 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance39 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale"))
                    .addChild(ProtoInstance40 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance41 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                    .addChild(ProtoInstance42 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                    .addChild(ProtoInstance43 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5"))
                    .addChild(ProtoInstance44 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                    .addChild(ProtoInstance45 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                    .addChild(ProtoInstance46 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                    .addChild(ProtoInstance47 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                    .addChild(ProtoInstance48 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                    .addChild(ProtoInstance49 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles"))
                    .addChild(ProtoInstance50 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance51 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale"))
                    .addChild(ProtoInstance52 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance53 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                    .addChild(ProtoInstance54 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                    .addChild(ProtoInstance55 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5"))
                    .addChild(ProtoInstance56 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                    .addChild(ProtoInstance57 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance58 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles"))
                    .addChild(ProtoInstance59 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance60 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                    .addChild(ProtoInstance61 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                    .addChild(ProtoInstance62 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                    .addChild(ProtoInstance63 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance64 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior"))
                    .addChild(ProtoInstance65 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2"))
                    .addChild(ProtoInstance66 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                    .addChild(ProtoInstance67 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance68 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles"))
                    .addChild(ProtoInstance69 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance70 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                    .addChild(ProtoInstance71 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                    .addChild(ProtoInstance72 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                    .addChild(ProtoInstance73 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance74 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior"))
                    .addChild(ProtoInstance75 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2"))
                    .addChild(ProtoInstance76 = new ProtoInstance().setName("Site").setDEF("hanim_crotch"))
                    .addChild(ProtoInstance77 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                    .addChild(ProtoInstance78 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                    .addChild(ProtoInstance79 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance4
                      .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance4
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance5
                      .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance5
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance6
                      .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance6
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance7
                      .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance7
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance8
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance8
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance9
                      .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance9
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance10
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance10
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance11
                      .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance11
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance12
                      .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance12
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance13
                      .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance13
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance14
                      .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance14
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance15
                      .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance15
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance16
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance16
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance17
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance17
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance18
                      .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance18
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance19
                      .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance19
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance20
                      .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance20
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance21
                      .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance21
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance23
                      .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance23
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance24
                      .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance24
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance25
                      .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance25
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance27
                      .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance27
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance28
                      .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance28
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance29
                      .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance29
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance30
                      .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance30
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance31
                      .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance31
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance32
                      .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance32
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance33
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance33
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance34
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance34
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance35
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance35
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance36
                      .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance36
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance37
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance37
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance38
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance38
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance39
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance39
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance40
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance40
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance41
                      .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance41
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance42
                      .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance42
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance44
                      .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance44
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance45
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance45
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance46
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance46
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance47
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance47
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance48
                      .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance48
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance49
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance49
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance50
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance50
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance51
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance51
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance52
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance52
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance53
                      .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance53
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance54
                      .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance54
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance56
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance56
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance57
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance57
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance58
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance58
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance59
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance59
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance61
                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance61
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance62
                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance62
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance63
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance63
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance64
                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance64
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance65
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance65
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance66
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance66
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance67
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance67
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance68
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance68
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance69
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance69
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance70
                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance70
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance72
                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance72
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance73
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance73
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance74
                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance74
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance75
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance75
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance76
                      .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance76
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance77
                      .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance77
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance78
                      .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance78
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance79
                      .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance79
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance80
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance80
              .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance80
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.8240000009536743 0.027699999511241913"));
ProtoInstance80
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance81 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance81
                  .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance81
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance82 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                    .addChild(ProtoInstance83 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                    .addChild(ProtoInstance84 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                    .addChild(ProtoInstance85 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                    .addChild(ProtoInstance86 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                    .addChild(ProtoInstance87 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                    .addChild(ProtoInstance88 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                    .addChild(ProtoInstance89 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                    .addChild(ProtoInstance90 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                    .addChild(ProtoInstance91 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale"))
                    .addChild(ProtoInstance92 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                    .addChild(ProtoInstance93 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                    .addChild(ProtoInstance94 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                    .addChild(ProtoInstance95 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                    .addChild(ProtoInstance96 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                    .addChild(ProtoInstance97 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                    .addChild(ProtoInstance98 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                    .addChild(ProtoInstance99 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
                    .addChild(ProtoInstance100 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                    .addChild(ProtoInstance101 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
                    .addChild(ProtoInstance102 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
                    .addChild(ProtoInstance103 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
                    .addChild(ProtoInstance104 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
                    .addChild(ProtoInstance105 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
                    .addChild(ProtoInstance106 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                    .addChild(ProtoInstance107 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                    .addChild(ProtoInstance108 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
                    .addChild(ProtoInstance109 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
                    .addChild(ProtoInstance110 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                    .addChild(ProtoInstance111 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                    .addChild(ProtoInstance112 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                    .addChild(ProtoInstance113 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                    .addChild(ProtoInstance114 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                    .addChild(ProtoInstance115 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                    .addChild(ProtoInstance116 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles"))
                    .addChild(ProtoInstance117 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance118 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale"))
                    .addChild(ProtoInstance119 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance120 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                    .addChild(ProtoInstance121 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                    .addChild(ProtoInstance122 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5"))
                    .addChild(ProtoInstance123 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                    .addChild(ProtoInstance124 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                    .addChild(ProtoInstance125 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                    .addChild(ProtoInstance126 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                    .addChild(ProtoInstance127 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                    .addChild(ProtoInstance128 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles"))
                    .addChild(ProtoInstance129 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance130 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale"))
                    .addChild(ProtoInstance131 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance132 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                    .addChild(ProtoInstance133 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                    .addChild(ProtoInstance134 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5"))
                    .addChild(ProtoInstance135 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                    .addChild(ProtoInstance136 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance137 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles"))
                    .addChild(ProtoInstance138 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance139 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                    .addChild(ProtoInstance140 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                    .addChild(ProtoInstance141 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                    .addChild(ProtoInstance142 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance143 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior"))
                    .addChild(ProtoInstance144 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2"))
                    .addChild(ProtoInstance145 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                    .addChild(ProtoInstance146 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance147 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles"))
                    .addChild(ProtoInstance148 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance149 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                    .addChild(ProtoInstance150 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                    .addChild(ProtoInstance151 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                    .addChild(ProtoInstance152 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance153 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior"))
                    .addChild(ProtoInstance154 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2"))
                    .addChild(ProtoInstance155 = new ProtoInstance().setName("Site").setDEF("hanim_crotch"))
                    .addChild(ProtoInstance156 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                    .addChild(ProtoInstance157 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                    .addChild(ProtoInstance158 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance82
                      .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance82
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance83
                      .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance83
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance84
                      .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance84
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance85
                      .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance85
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance86
                      .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance86
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance87
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance87
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance88
                      .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance88
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance89
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance89
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance90
                      .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance90
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance91
                      .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance91
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance92
                      .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance92
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance93
                      .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance93
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance94
                      .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance94
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance95
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance95
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance96
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance96
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance97
                      .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance97
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance98
                      .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance98
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance99
                      .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance99
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance100
                      .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance100
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance101
                      .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance101
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance102
                      .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance102
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance103
                      .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance103
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance104
                      .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance104
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance105
                      .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance105
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance106
                      .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance106
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance107
                      .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance107
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance108
                      .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance108
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance109
                      .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance109
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance110
                      .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance110
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance111
                      .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance111
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance112
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance112
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance113
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance113
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance114
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance114
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance115
                      .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance115
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance116
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance116
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance117
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance117
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance118
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance118
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance119
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance119
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance120
                      .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance120
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance121
                      .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance121
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance122
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance122
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance123
                      .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance123
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance124
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance124
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance125
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance125
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance126
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance126
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance127
                      .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance127
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance128
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance128
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance129
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance129
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance130
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance130
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance131
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance131
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance132
                      .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance132
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance133
                      .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance133
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance134
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance134
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance135
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance135
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance136
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance136
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance137
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance137
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance138
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance138
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance139
                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance139
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance140
                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance140
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance141
                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance141
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance142
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance142
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance143
                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance143
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance144
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance144
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance145
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance145
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance146
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance146
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance147
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance147
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance148
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance148
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance149
                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance149
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance150
                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance150
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance151
                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance151
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance152
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance152
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance153
                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance153
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance154
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance154
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance155
                      .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance155
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance156
                      .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance156
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance157
                      .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance157
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance158
                      .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance158
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance159
              .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance159
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance160 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                .addChild(ProtoInstance161 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                .addChild(ProtoInstance162 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                .addChild(ProtoInstance163 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                .addChild(ProtoInstance164 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                .addChild(ProtoInstance165 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                .addChild(ProtoInstance166 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                .addChild(ProtoInstance167 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                .addChild(ProtoInstance168 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                .addChild(ProtoInstance169 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale"))
                .addChild(ProtoInstance170 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                .addChild(ProtoInstance171 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                .addChild(ProtoInstance172 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                .addChild(ProtoInstance173 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                .addChild(ProtoInstance174 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                .addChild(ProtoInstance175 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                .addChild(ProtoInstance176 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                .addChild(ProtoInstance177 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
                .addChild(ProtoInstance178 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                .addChild(ProtoInstance179 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
                .addChild(ProtoInstance180 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
                .addChild(ProtoInstance181 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
                .addChild(ProtoInstance182 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
                .addChild(ProtoInstance183 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
                .addChild(ProtoInstance184 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                .addChild(ProtoInstance185 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                .addChild(ProtoInstance186 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
                .addChild(ProtoInstance187 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
                .addChild(ProtoInstance188 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                .addChild(ProtoInstance189 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                .addChild(ProtoInstance190 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                .addChild(ProtoInstance191 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                .addChild(ProtoInstance192 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                .addChild(ProtoInstance193 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                .addChild(ProtoInstance194 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles"))
                .addChild(ProtoInstance195 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                .addChild(ProtoInstance196 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale"))
                .addChild(ProtoInstance197 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                .addChild(ProtoInstance198 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                .addChild(ProtoInstance199 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                .addChild(ProtoInstance200 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5"))
                .addChild(ProtoInstance201 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                .addChild(ProtoInstance202 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                .addChild(ProtoInstance203 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                .addChild(ProtoInstance204 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                .addChild(ProtoInstance205 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                .addChild(ProtoInstance206 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles"))
                .addChild(ProtoInstance207 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                .addChild(ProtoInstance208 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale"))
                .addChild(ProtoInstance209 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                .addChild(ProtoInstance210 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                .addChild(ProtoInstance211 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                .addChild(ProtoInstance212 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5"))
                .addChild(ProtoInstance213 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                .addChild(ProtoInstance214 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                .addChild(ProtoInstance215 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles"))
                .addChild(ProtoInstance216 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                .addChild(ProtoInstance217 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                .addChild(ProtoInstance218 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                .addChild(ProtoInstance219 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                .addChild(ProtoInstance220 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                .addChild(ProtoInstance221 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior"))
                .addChild(ProtoInstance222 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2"))
                .addChild(ProtoInstance223 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                .addChild(ProtoInstance224 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                .addChild(ProtoInstance225 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles"))
                .addChild(ProtoInstance226 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                .addChild(ProtoInstance227 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                .addChild(ProtoInstance228 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                .addChild(ProtoInstance229 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                .addChild(ProtoInstance230 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                .addChild(ProtoInstance231 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior"))
                .addChild(ProtoInstance232 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2"))
                .addChild(ProtoInstance233 = new ProtoInstance().setName("Site").setDEF("hanim_crotch"))
                .addChild(ProtoInstance234 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                .addChild(ProtoInstance235 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                .addChild(ProtoInstance236 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance160
                  .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance160
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance161
                  .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance161
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance162
                  .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance162
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance163
                  .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance163
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance164
                  .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance164
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance165
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance165
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance166
                  .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance166
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance167
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance167
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance168
                  .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance168
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance169
                  .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance169
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance170
                  .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance170
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance171
                  .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance171
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance172
                  .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance172
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance173
                  .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance173
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance174
                  .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance174
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance175
                  .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance175
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance176
                  .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance176
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance177
                  .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance177
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance178
                  .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance178
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance179
                  .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance179
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance180
                  .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance180
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance181
                  .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance181
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance182
                  .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance182
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance183
                  .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance183
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance184
                  .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance184
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance185
                  .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance185
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance186
                  .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance186
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance187
                  .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance187
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance188
                  .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance188
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance189
                  .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance189
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance190
                  .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance190
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance191
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance191
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance192
                  .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance192
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance193
                  .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance193
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance194
                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance194
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance195
                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance195
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance196
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance196
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance197
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance197
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance198
                  .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance198
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance199
                  .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance199
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance200
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance200
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance201
                  .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance201
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance202
                  .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance202
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance203
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance203
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance204
                  .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance204
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance205
                  .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance205
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance206
                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance206
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance207
                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance207
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance208
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance208
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance209
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance209
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance210
                  .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance210
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance211
                  .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance211
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance212
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance212
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance213
                  .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance213
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance214
                  .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance214
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance215
                  .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance215
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance216
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance216
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance217
                  .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance217
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance218
                  .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance218
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance219
                  .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance219
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance220
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance220
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance221
                  .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance221
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance222
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance222
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance223
                  .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance223
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance224
                  .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance224
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance225
                  .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance225
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance226
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance226
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance227
                  .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance227
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance228
                  .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance228
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance229
                  .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance229
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance230
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance230
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance231
                  .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance231
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance232
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance232
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance233
                  .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance233
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance234
                  .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance234
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance235
                  .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance235
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance236
                  .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance236
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance237
              .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance237
              .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance238
              .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance238
              .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance239
              .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance239
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance240
              .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance240
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance241
              .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance241
              .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance242
              .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance242
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance243
              .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance243
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance244
              .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance244
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance245
              .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance245
              .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance246
              .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance246
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance247
              .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance247
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance248
              .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance248
              .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance249
              .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance249
              .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance250
              .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance250
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance251
              .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance251
              .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance252
              .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance252
              .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance253
              .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance253
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance254
              .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance254
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance255
              .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance255
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance256
              .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance256
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance257
              .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance257
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance258
              .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance258
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance259
              .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance259
              .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance260
              .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance260
              .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance261
              .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance261
              .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance262
              .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance262
              .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance263
              .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance263
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance264
              .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance264
              .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance265
              .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance265
              .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance266
              .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance266
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance267
              .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance267
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance268
              .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance268
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance269
              .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance269
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance270
              .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance270
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance271
              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance271
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance272
              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance272
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance273
              .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance273
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance274
              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance274
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance275
              .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance275
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance276
              .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance276
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance277
              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance277
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance278
              .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance278
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance279
              .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance279
              .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance280
              .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance280
              .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance281
              .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance281
              .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance282
              .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance282
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance283
              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance283
              .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance284
              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance284
              .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance285
              .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance285
              .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance286
              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance286
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance287
              .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance287
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance288
              .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance288
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance289
              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance289
              .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance290
              .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance290
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance291
              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance291
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance292
              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance292
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance293
              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance293
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance294
              .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance294
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance295
              .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance295
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance296
              .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance296
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance297
              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance297
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance298
              .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance298
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance299
              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance299
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance300
              .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance300
              .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance301
              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance301
              .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance302
              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance302
              .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance303
              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance303
              .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance304
              .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance304
              .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance305
              .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance305
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance306
              .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance306
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance307
              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance307
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance308
              .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance308
              .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance309
              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance309
              .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance310
              .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance310
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance311
              .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance311
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance312
              .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance312
              .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance313
              .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance313
              .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.009999999776482582f,0f,-0.009999999776482582f,0f,0f,0f,0f,0.009999999776482582f,0.009999999776482582f,0f,0f,0f,0f,-0.009999999776482582f,0f,-0.009999999776482582f,0f});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.25f,1.600000023841858f,0.75f});
  }
}
}
