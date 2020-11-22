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
public class LOA4ExampleSourceWithDiamonds {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LOA4ExampleSourceWithDiamonds().initialize().toFileJSON("../data/LOA4ExampleSourceWithDiamonds.new.json");
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
ProtoInstance ProtoInstance314 = null;
ProtoInstance ProtoInstance315 = null;
ProtoInstance ProtoInstance316 = null;
ProtoInstance ProtoInstance317 = null;
ProtoInstance ProtoInstance318 = null;
ProtoInstance ProtoInstance319 = null;
ProtoInstance ProtoInstance320 = null;
ProtoInstance ProtoInstance321 = null;
ProtoInstance ProtoInstance322 = null;
ProtoInstance ProtoInstance323 = null;
ProtoInstance ProtoInstance324 = null;
ProtoInstance ProtoInstance325 = null;
ProtoInstance ProtoInstance326 = null;
ProtoInstance ProtoInstance327 = null;
ProtoInstance ProtoInstance328 = null;
ProtoInstance ProtoInstance329 = null;
ProtoInstance ProtoInstance330 = null;
ProtoInstance ProtoInstance331 = null;
ProtoInstance ProtoInstance332 = null;
ProtoInstance ProtoInstance333 = null;
ProtoInstance ProtoInstance334 = null;
ProtoInstance ProtoInstance335 = null;
ProtoInstance ProtoInstance336 = null;
ProtoInstance ProtoInstance337 = null;
ProtoInstance ProtoInstance338 = null;
ProtoInstance ProtoInstance339 = null;
ProtoInstance ProtoInstance340 = null;
ProtoInstance ProtoInstance341 = null;
ProtoInstance ProtoInstance342 = null;
ProtoInstance ProtoInstance343 = null;
ProtoInstance ProtoInstance344 = null;
ProtoInstance ProtoInstance345 = null;
ProtoInstance ProtoInstance346 = null;
ProtoInstance ProtoInstance347 = null;
ProtoInstance ProtoInstance348 = null;
ProtoInstance ProtoInstance349 = null;
ProtoInstance ProtoInstance350 = null;
ProtoInstance ProtoInstance351 = null;
ProtoInstance ProtoInstance352 = null;
ProtoInstance ProtoInstance353 = null;
ProtoInstance ProtoInstance354 = null;
ProtoInstance ProtoInstance355 = null;
ProtoInstance ProtoInstance356 = null;
ProtoInstance ProtoInstance357 = null;
ProtoInstance ProtoInstance358 = null;
ProtoInstance ProtoInstance359 = null;
ProtoInstance ProtoInstance360 = null;
ProtoInstance ProtoInstance361 = null;
ProtoInstance ProtoInstance362 = null;
ProtoInstance ProtoInstance363 = null;
ProtoInstance ProtoInstance364 = null;
ProtoInstance ProtoInstance365 = null;
ProtoInstance ProtoInstance366 = null;
ProtoInstance ProtoInstance367 = null;
ProtoInstance ProtoInstance368 = null;
ProtoInstance ProtoInstance369 = null;
ProtoInstance ProtoInstance370 = null;
ProtoInstance ProtoInstance371 = null;
ProtoInstance ProtoInstance372 = null;
ProtoInstance ProtoInstance373 = null;
ProtoInstance ProtoInstance374 = null;
ProtoInstance ProtoInstance375 = null;
ProtoInstance ProtoInstance376 = null;
ProtoInstance ProtoInstance377 = null;
ProtoInstance ProtoInstance378 = null;
ProtoInstance ProtoInstance379 = null;
ProtoInstance ProtoInstance380 = null;
ProtoInstance ProtoInstance381 = null;
ProtoInstance ProtoInstance382 = null;
ProtoInstance ProtoInstance383 = null;
ProtoInstance ProtoInstance384 = null;
ProtoInstance ProtoInstance385 = null;
ProtoInstance ProtoInstance386 = null;
ProtoInstance ProtoInstance387 = null;
ProtoInstance ProtoInstance388 = null;
ProtoInstance ProtoInstance389 = null;
ProtoInstance ProtoInstance390 = null;
ProtoInstance ProtoInstance391 = null;
ProtoInstance ProtoInstance392 = null;
ProtoInstance ProtoInstance393 = null;
ProtoInstance ProtoInstance394 = null;
ProtoInstance ProtoInstance395 = null;
ProtoInstance ProtoInstance396 = null;
ProtoInstance ProtoInstance397 = null;
ProtoInstance ProtoInstance398 = null;
ProtoInstance ProtoInstance399 = null;
ProtoInstance ProtoInstance400 = null;
ProtoInstance ProtoInstance401 = null;
ProtoInstance ProtoInstance402 = null;
ProtoInstance ProtoInstance403 = null;
ProtoInstance ProtoInstance404 = null;
ProtoInstance ProtoInstance405 = null;
ProtoInstance ProtoInstance406 = null;
ProtoInstance ProtoInstance407 = null;
ProtoInstance ProtoInstance408 = null;
ProtoInstance ProtoInstance409 = null;
ProtoInstance ProtoInstance410 = null;
ProtoInstance ProtoInstance411 = null;
ProtoInstance ProtoInstance412 = null;
ProtoInstance ProtoInstance413 = null;
ProtoInstance ProtoInstance414 = null;
ProtoInstance ProtoInstance415 = null;
ProtoInstance ProtoInstance416 = null;
ProtoInstance ProtoInstance417 = null;
ProtoInstance ProtoInstance418 = null;
ProtoInstance ProtoInstance419 = null;
ProtoInstance ProtoInstance420 = null;
ProtoInstance ProtoInstance421 = null;
ProtoInstance ProtoInstance422 = null;
ProtoInstance ProtoInstance423 = null;
ProtoInstance ProtoInstance424 = null;
ProtoInstance ProtoInstance425 = null;
ProtoInstance ProtoInstance426 = null;
ProtoInstance ProtoInstance427 = null;
ProtoInstance ProtoInstance428 = null;
ProtoInstance ProtoInstance429 = null;
ProtoInstance ProtoInstance430 = null;
ProtoInstance ProtoInstance431 = null;
ProtoInstance ProtoInstance432 = null;
ProtoInstance ProtoInstance433 = null;
ProtoInstance ProtoInstance434 = null;
ProtoInstance ProtoInstance435 = null;
ProtoInstance ProtoInstance436 = null;
ProtoInstance ProtoInstance437 = null;
ProtoInstance ProtoInstance438 = null;
ProtoInstance ProtoInstance439 = null;
ProtoInstance ProtoInstance440 = null;
ProtoInstance ProtoInstance441 = null;
ProtoInstance ProtoInstance442 = null;
ProtoInstance ProtoInstance443 = null;
ProtoInstance ProtoInstance444 = null;
ProtoInstance ProtoInstance445 = null;
ProtoInstance ProtoInstance446 = null;
ProtoInstance ProtoInstance447 = null;
ProtoInstance ProtoInstance448 = null;
ProtoInstance ProtoInstance449 = null;
ProtoInstance ProtoInstance450 = null;
ProtoInstance ProtoInstance451 = null;
ProtoInstance ProtoInstance452 = null;
ProtoInstance ProtoInstance453 = null;
ProtoInstance ProtoInstance454 = null;
ProtoInstance ProtoInstance455 = null;
ProtoInstance ProtoInstance456 = null;
ProtoInstance ProtoInstance457 = null;
ProtoInstance ProtoInstance458 = null;
ProtoInstance ProtoInstance459 = null;
ProtoInstance ProtoInstance460 = null;
ProtoInstance ProtoInstance461 = null;
ProtoInstance ProtoInstance462 = null;
ProtoInstance ProtoInstance463 = null;
ProtoInstance ProtoInstance464 = null;
ProtoInstance ProtoInstance465 = null;
ProtoInstance ProtoInstance466 = null;
ProtoInstance ProtoInstance467 = null;
ProtoInstance ProtoInstance468 = null;
ProtoInstance ProtoInstance469 = null;
ProtoInstance ProtoInstance470 = null;
ProtoInstance ProtoInstance471 = null;
ProtoInstance ProtoInstance472 = null;
ProtoInstance ProtoInstance473 = null;
ProtoInstance ProtoInstance474 = null;
ProtoInstance ProtoInstance475 = null;
ProtoInstance ProtoInstance476 = null;
ProtoInstance ProtoInstance477 = null;
ProtoInstance ProtoInstance478 = null;
ProtoInstance ProtoInstance479 = null;
ProtoInstance ProtoInstance480 = null;
ProtoInstance ProtoInstance481 = null;
ProtoInstance ProtoInstance482 = null;
ProtoInstance ProtoInstance483 = null;
ProtoInstance ProtoInstance484 = null;
ProtoInstance ProtoInstance485 = null;
ProtoInstance ProtoInstance486 = null;
ProtoInstance ProtoInstance487 = null;
ProtoInstance ProtoInstance488 = null;
ProtoInstance ProtoInstance489 = null;
ProtoInstance ProtoInstance490 = null;
ProtoInstance ProtoInstance491 = null;
ProtoInstance ProtoInstance492 = null;
ProtoInstance ProtoInstance493 = null;
ProtoInstance ProtoInstance494 = null;
ProtoInstance ProtoInstance495 = null;
ProtoInstance ProtoInstance496 = null;
ProtoInstance ProtoInstance497 = null;
ProtoInstance ProtoInstance498 = null;
ProtoInstance ProtoInstance499 = null;
ProtoInstance ProtoInstance500 = null;
ProtoInstance ProtoInstance501 = null;
ProtoInstance ProtoInstance502 = null;
ProtoInstance ProtoInstance503 = null;
ProtoInstance ProtoInstance504 = null;
ProtoInstance ProtoInstance505 = null;
ProtoInstance ProtoInstance506 = null;
ProtoInstance ProtoInstance507 = null;
ProtoInstance ProtoInstance508 = null;
ProtoInstance ProtoInstance509 = null;
ProtoInstance ProtoInstance510 = null;
ProtoInstance ProtoInstance511 = null;
ProtoInstance ProtoInstance512 = null;
ProtoInstance ProtoInstance513 = null;
ProtoInstance ProtoInstance514 = null;
ProtoInstance ProtoInstance515 = null;
ProtoInstance ProtoInstance516 = null;
ProtoInstance ProtoInstance517 = null;
ProtoInstance ProtoInstance518 = null;
ProtoInstance ProtoInstance519 = null;
ProtoInstance ProtoInstance520 = null;
ProtoInstance ProtoInstance521 = null;
ProtoInstance ProtoInstance522 = null;
ProtoInstance ProtoInstance523 = null;
ProtoInstance ProtoInstance524 = null;
ProtoInstance ProtoInstance525 = null;
ProtoInstance ProtoInstance526 = null;
ProtoInstance ProtoInstance527 = null;
ProtoInstance ProtoInstance528 = null;
ProtoInstance ProtoInstance529 = null;
ProtoInstance ProtoInstance530 = null;
ProtoInstance ProtoInstance531 = null;
ProtoInstance ProtoInstance532 = null;
ProtoInstance ProtoInstance533 = null;
ProtoInstance ProtoInstance534 = null;
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new meta().setName("source").setContent("LOA4ExampleSourceWithDiamonds.wrl")))
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
          .addChild(new WorldInfo().setTitle("HANIM 200x Default Joint Centers, LOA&#8209;4").setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray()))))
        .addChild(new NavigationInfo().setAvatarSize(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat3().getArray())).setSpeed(1.5f)))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("humanoidBody")
            .addChild(ProtoInstance1 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("joints")
            .addChild(ProtoInstance268 = new ProtoInstance().setUSE("hanim_humanoid_root_2"))
            .addChild(ProtoInstance269 = new ProtoInstance().setUSE("hanim_sacroiliac_2"))
            .addChild(ProtoInstance270 = new ProtoInstance().setUSE("hanim_l_hip_2"))
            .addChild(ProtoInstance271 = new ProtoInstance().setUSE("hanim_l_knee_2"))
            .addChild(ProtoInstance272 = new ProtoInstance().setUSE("hanim_l_talocrural_2"))
            .addChild(ProtoInstance273 = new ProtoInstance().setUSE("hanim_l_tarsotarsal_interphalangeal__2"))
            .addChild(ProtoInstance274 = new ProtoInstance().setUSE("hanim_l_metatarsophalangeal__2"))
            .addChild(ProtoInstance275 = new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal__2"))
            .addChild(ProtoInstance276 = new ProtoInstance().setUSE("hanim_r_hip_2"))
            .addChild(ProtoInstance277 = new ProtoInstance().setUSE("hanim_r_knee_2"))
            .addChild(ProtoInstance278 = new ProtoInstance().setUSE("hanim_r_talocrural_2"))
            .addChild(ProtoInstance279 = new ProtoInstance().setUSE("hanim_r_tarsotarsal_interphalangeal__2"))
            .addChild(ProtoInstance280 = new ProtoInstance().setUSE("hanim_r_metatarsophalangeal__2"))
            .addChild(ProtoInstance281 = new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal__2"))
            .addChild(ProtoInstance282 = new ProtoInstance().setUSE("hanim_vl5_2"))
            .addChild(ProtoInstance283 = new ProtoInstance().setUSE("hanim_vl4_2"))
            .addChild(ProtoInstance284 = new ProtoInstance().setUSE("hanim_vl3_2"))
            .addChild(ProtoInstance285 = new ProtoInstance().setUSE("hanim_vl2_2"))
            .addChild(ProtoInstance286 = new ProtoInstance().setUSE("hanim_vl1_2"))
            .addChild(ProtoInstance287 = new ProtoInstance().setUSE("hanim_vt12_2"))
            .addChild(ProtoInstance288 = new ProtoInstance().setUSE("hanim_vt11_2"))
            .addChild(ProtoInstance289 = new ProtoInstance().setUSE("hanim_vt10_2"))
            .addChild(ProtoInstance290 = new ProtoInstance().setUSE("hanim_vt9_2"))
            .addChild(ProtoInstance291 = new ProtoInstance().setUSE("hanim_vt8_2"))
            .addChild(ProtoInstance292 = new ProtoInstance().setUSE("hanim_vt7_2"))
            .addChild(ProtoInstance293 = new ProtoInstance().setUSE("hanim_vt6_2"))
            .addChild(ProtoInstance294 = new ProtoInstance().setUSE("hanim_vt5_2"))
            .addChild(ProtoInstance295 = new ProtoInstance().setUSE("hanim_vt4_2"))
            .addChild(ProtoInstance296 = new ProtoInstance().setUSE("hanim_vt3_2"))
            .addChild(ProtoInstance297 = new ProtoInstance().setUSE("hanim_vt2_2"))
            .addChild(ProtoInstance298 = new ProtoInstance().setUSE("hanim_vt1_2"))
            .addChild(ProtoInstance299 = new ProtoInstance().setUSE("hanim_vc7_2"))
            .addChild(ProtoInstance300 = new ProtoInstance().setUSE("hanim_vc6_2"))
            .addChild(ProtoInstance301 = new ProtoInstance().setUSE("hanim_vc5_2"))
            .addChild(ProtoInstance302 = new ProtoInstance().setUSE("hanim_vc4_2"))
            .addChild(ProtoInstance303 = new ProtoInstance().setUSE("hanim_vc3_2"))
            .addChild(ProtoInstance304 = new ProtoInstance().setUSE("hanim_vc2_2"))
            .addChild(ProtoInstance305 = new ProtoInstance().setUSE("hanim_vc1_2"))
            .addChild(ProtoInstance306 = new ProtoInstance().setUSE("hanim_skullbase_2"))
            .addChild(ProtoInstance307 = new ProtoInstance().setUSE("hanim_l_eyeball_4"))
            .addChild(ProtoInstance308 = new ProtoInstance().setUSE("hanim_r_eyeball_4"))
            .addChild(ProtoInstance309 = new ProtoInstance().setUSE("hanim_l_sternoclavicular_2"))
            .addChild(ProtoInstance310 = new ProtoInstance().setUSE("hanim_l_acromioclavicular_2"))
            .addChild(ProtoInstance311 = new ProtoInstance().setUSE("hanim_l_shoulder_2"))
            .addChild(ProtoInstance312 = new ProtoInstance().setUSE("hanim_l_elbow_2"))
            .addChild(ProtoInstance313 = new ProtoInstance().setUSE("hanim_l_radiocarpal_2"))
            .addChild(ProtoInstance314 = new ProtoInstance().setUSE("hanim_l_carpometacarpal2"))
            .addChild(ProtoInstance315 = new ProtoInstance().setUSE("hanim_l_metacarpophalangeal2"))
            .addChild(ProtoInstance316 = new ProtoInstance().setUSE("hanim_l_carpal_interphalangeal2"))
            .addChild(ProtoInstance317 = new ProtoInstance().setUSE("hanim_l_carpometacarpal3"))
            .addChild(ProtoInstance318 = new ProtoInstance().setUSE("hanim_l_metacarpophalangeal3"))
            .addChild(ProtoInstance319 = new ProtoInstance().setUSE("hanim_l_carpal_proximal_interphalangeal3"))
            .addChild(ProtoInstance320 = new ProtoInstance().setUSE("hanim_l_carpal_distal_interphalangeal3"))
            .addChild(ProtoInstance321 = new ProtoInstance().setUSE("hanim_l_carpometacarpal4"))
            .addChild(ProtoInstance322 = new ProtoInstance().setUSE("hanim_l_metacarpophalangeal4"))
            .addChild(ProtoInstance323 = new ProtoInstance().setUSE("hanim_l_carpal_proximal_interphalangeal4"))
            .addChild(ProtoInstance324 = new ProtoInstance().setUSE("hanim_l_carpal_distal_interphalangeal4"))
            .addChild(ProtoInstance325 = new ProtoInstance().setUSE("hanim_l_carpometacarpal5"))
            .addChild(ProtoInstance326 = new ProtoInstance().setUSE("hanim_l_metacarpophalangeal5"))
            .addChild(ProtoInstance327 = new ProtoInstance().setUSE("hanim_l_carpal_proximal_interphalangeal5"))
            .addChild(ProtoInstance328 = new ProtoInstance().setUSE("hanim_l_carpal_distal_interphalangeal5"))
            .addChild(ProtoInstance329 = new ProtoInstance().setUSE("hanim_l_carpometacarpal6"))
            .addChild(ProtoInstance330 = new ProtoInstance().setUSE("hanim_l_metacarpophalangeal6"))
            .addChild(ProtoInstance331 = new ProtoInstance().setUSE("hanim_l_carpal_proximal_interphalangeal6"))
            .addChild(ProtoInstance332 = new ProtoInstance().setUSE("hanim_l_carpal_distal_interphalangeal6"))
            .addChild(ProtoInstance333 = new ProtoInstance().setUSE("hanim_r_sternoclavicular_2"))
            .addChild(ProtoInstance334 = new ProtoInstance().setUSE("hanim_r_acromioclavicular_2"))
            .addChild(ProtoInstance335 = new ProtoInstance().setUSE("hanim_r_shoulder_2"))
            .addChild(ProtoInstance336 = new ProtoInstance().setUSE("hanim_r_elbow_2"))
            .addChild(ProtoInstance337 = new ProtoInstance().setUSE("hanim_r_radiocarpal_2"))
            .addChild(ProtoInstance338 = new ProtoInstance().setUSE("hanim_r_carpometacarpal2"))
            .addChild(ProtoInstance339 = new ProtoInstance().setUSE("hanim_r_metacarpophalangeal2"))
            .addChild(ProtoInstance340 = new ProtoInstance().setUSE("hanim_r_carpal_interphalangeal2"))
            .addChild(ProtoInstance341 = new ProtoInstance().setUSE("hanim_r_carpometacarpal3"))
            .addChild(ProtoInstance342 = new ProtoInstance().setUSE("hanim_r_metacarpophalangeal3"))
            .addChild(ProtoInstance343 = new ProtoInstance().setUSE("hanim_r_carpal_proximal_interphalangeal3"))
            .addChild(ProtoInstance344 = new ProtoInstance().setUSE("hanim_r_carpal_distal_interphalangeal3"))
            .addChild(ProtoInstance345 = new ProtoInstance().setUSE("hanim_r_carpometacarpal4"))
            .addChild(ProtoInstance346 = new ProtoInstance().setUSE("hanim_r_metacarpophalangeal4"))
            .addChild(ProtoInstance347 = new ProtoInstance().setUSE("hanim_r_carpal_proximal_interphalangeal4"))
            .addChild(ProtoInstance348 = new ProtoInstance().setUSE("hanim_r_carpal_distal_interphalangeal4"))
            .addChild(ProtoInstance349 = new ProtoInstance().setUSE("hanim_r_carpometacarpal5"))
            .addChild(ProtoInstance350 = new ProtoInstance().setUSE("hanim_r_metacarpophalangeal5"))
            .addChild(ProtoInstance351 = new ProtoInstance().setUSE("hanim_r_carpal_proximal_interphalangeal5"))
            .addChild(ProtoInstance352 = new ProtoInstance().setUSE("hanim_r_carpal_distal_interphalangeal5"))
            .addChild(ProtoInstance353 = new ProtoInstance().setUSE("hanim_r_carpometacarpal6"))
            .addChild(ProtoInstance354 = new ProtoInstance().setUSE("hanim_r_metacarpophalangeal6"))
            .addChild(ProtoInstance355 = new ProtoInstance().setUSE("hanim_r_carpal_proximal_interphalangeal6"))
            .addChild(ProtoInstance356 = new ProtoInstance().setUSE("hanim_r_carpal_distal_interphalangeal6")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("sites")
            .addChild(ProtoInstance357 = new ProtoInstance().setUSE("hanim_l_tarsal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance358 = new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance359 = new ProtoInstance().setUSE("hanim_l_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance360 = new ProtoInstance().setUSE("hanim_l_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance361 = new ProtoInstance().setUSE("hanim_l_lateral_malleolus_2"))
            .addChild(ProtoInstance362 = new ProtoInstance().setUSE("hanim_l_medial_malleolus_2"))
            .addChild(ProtoInstance363 = new ProtoInstance().setUSE("hanim_l_sphyrion_2"))
            .addChild(ProtoInstance364 = new ProtoInstance().setUSE("hanim_l_calcaneus_posterior_2"))
            .addChild(ProtoInstance365 = new ProtoInstance().setUSE("hanim_l_knee_crease_2"))
            .addChild(ProtoInstance366 = new ProtoInstance().setUSE("hanim_l_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance367 = new ProtoInstance().setUSE("hanim_l_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance368 = new ProtoInstance().setUSE("hanim_r_tarsal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance369 = new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance370 = new ProtoInstance().setUSE("hanim_r_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance371 = new ProtoInstance().setUSE("hanim_r_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance372 = new ProtoInstance().setUSE("hanim_r_lateral_malleolus_2"))
            .addChild(ProtoInstance373 = new ProtoInstance().setUSE("hanim_r_medial_malleolus_2"))
            .addChild(ProtoInstance374 = new ProtoInstance().setUSE("hanim_r_sphyrion_2"))
            .addChild(ProtoInstance375 = new ProtoInstance().setUSE("hanim_r_calcaneus_posterior_2"))
            .addChild(ProtoInstance376 = new ProtoInstance().setUSE("hanim_r_knee_crease_2"))
            .addChild(ProtoInstance377 = new ProtoInstance().setUSE("hanim_r_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance378 = new ProtoInstance().setUSE("hanim_r_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance379 = new ProtoInstance().setUSE("hanim_r_iliocristale_2"))
            .addChild(ProtoInstance380 = new ProtoInstance().setUSE("hanim_r_trochanterion_2"))
            .addChild(ProtoInstance381 = new ProtoInstance().setUSE("hanim_l_iliocristale_2"))
            .addChild(ProtoInstance382 = new ProtoInstance().setUSE("hanim_l_trochanterion_2"))
            .addChild(ProtoInstance383 = new ProtoInstance().setUSE("hanim_r_asis_2"))
            .addChild(ProtoInstance384 = new ProtoInstance().setUSE("hanim_l_asis_2"))
            .addChild(ProtoInstance385 = new ProtoInstance().setUSE("hanim_r_psis_2"))
            .addChild(ProtoInstance386 = new ProtoInstance().setUSE("hanim_l_psis_2"))
            .addChild(ProtoInstance387 = new ProtoInstance().setUSE("hanim_crotch_2"))
            .addChild(ProtoInstance388 = new ProtoInstance().setUSE("hanim_skull_tip_2"))
            .addChild(ProtoInstance389 = new ProtoInstance().setUSE("hanim_sellion_2"))
            .addChild(ProtoInstance390 = new ProtoInstance().setUSE("hanim_r_infraorbitale_2"))
            .addChild(ProtoInstance391 = new ProtoInstance().setUSE("hanim_l_infraorbitale_2"))
            .addChild(ProtoInstance392 = new ProtoInstance().setUSE("hanim_supramenton_2"))
            .addChild(ProtoInstance393 = new ProtoInstance().setUSE("hanim_r_tragion_2"))
            .addChild(ProtoInstance394 = new ProtoInstance().setUSE("hanim_r_gonion_2"))
            .addChild(ProtoInstance395 = new ProtoInstance().setUSE("hanim_l_tragion_2"))
            .addChild(ProtoInstance396 = new ProtoInstance().setUSE("hanim_l_gonion_2"))
            .addChild(ProtoInstance397 = new ProtoInstance().setUSE("hanim_nuchale_2"))
            .addChild(ProtoInstance398 = new ProtoInstance().setUSE("hanim_r_neck_base_2"))
            .addChild(ProtoInstance399 = new ProtoInstance().setUSE("hanim_l_neck_base_2"))
            .addChild(ProtoInstance400 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance401 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx_2_tip_2"))
            .addChild(ProtoInstance402 = new ProtoInstance().setUSE("hanim_l_dactylion_2"))
            .addChild(ProtoInstance403 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx_3_tip_2"))
            .addChild(ProtoInstance404 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx_4_tip_2"))
            .addChild(ProtoInstance405 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx_5_tip_2"))
            .addChild(ProtoInstance406 = new ProtoInstance().setUSE("hanim_l_metacarpal_phalanx3"))
            .addChild(ProtoInstance407 = new ProtoInstance().setUSE("hanim_l_ulnar_styloid_2"))
            .addChild(ProtoInstance408 = new ProtoInstance().setUSE("hanim_l_metacarpal_phalanx6"))
            .addChild(ProtoInstance409 = new ProtoInstance().setUSE("hanim_l_radial_styloid_2"))
            .addChild(ProtoInstance410 = new ProtoInstance().setUSE("hanim_l_olecranon_2"))
            .addChild(ProtoInstance411 = new ProtoInstance().setUSE("hanim_l_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance412 = new ProtoInstance().setUSE("hanim_l_radiale_2"))
            .addChild(ProtoInstance413 = new ProtoInstance().setUSE("hanim_l_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance414 = new ProtoInstance().setUSE("hanim_l_clavicale_2"))
            .addChild(ProtoInstance415 = new ProtoInstance().setUSE("hanim_l_acromion_2"))
            .addChild(ProtoInstance416 = new ProtoInstance().setUSE("hanim_l_axilla_proximal_2"))
            .addChild(ProtoInstance417 = new ProtoInstance().setUSE("hanim_l_axilla_distal_2"))
            .addChild(ProtoInstance418 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance419 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx_2_tip_2"))
            .addChild(ProtoInstance420 = new ProtoInstance().setUSE("hanim_r_dactylion_2"))
            .addChild(ProtoInstance421 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx_3_tip_2"))
            .addChild(ProtoInstance422 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx_4_tip_2"))
            .addChild(ProtoInstance423 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx_5_tip_2"))
            .addChild(ProtoInstance424 = new ProtoInstance().setUSE("hanim_r_metacarpal_phalanx3"))
            .addChild(ProtoInstance425 = new ProtoInstance().setUSE("hanim_r_ulnar_styloid_2"))
            .addChild(ProtoInstance426 = new ProtoInstance().setUSE("hanim_r_metacarpal_phalanx6"))
            .addChild(ProtoInstance427 = new ProtoInstance().setUSE("hanim_r_radial_styloid_2"))
            .addChild(ProtoInstance428 = new ProtoInstance().setUSE("hanim_r_olecranon_2"))
            .addChild(ProtoInstance429 = new ProtoInstance().setUSE("hanim_r_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance430 = new ProtoInstance().setUSE("hanim_r_radiale_2"))
            .addChild(ProtoInstance431 = new ProtoInstance().setUSE("hanim_r_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance432 = new ProtoInstance().setUSE("hanim_r_clavicale_2"))
            .addChild(ProtoInstance433 = new ProtoInstance().setUSE("hanim_r_acromion_2"))
            .addChild(ProtoInstance434 = new ProtoInstance().setUSE("hanim_r_axilla_proximal_2"))
            .addChild(ProtoInstance435 = new ProtoInstance().setUSE("hanim_r_axilla_distal_2"))
            .addChild(ProtoInstance436 = new ProtoInstance().setUSE("hanim_suprasternale_2"))
            .addChild(ProtoInstance437 = new ProtoInstance().setUSE("hanim_cervicale_2"))
            .addChild(ProtoInstance438 = new ProtoInstance().setUSE("hanim_r_thelion_2"))
            .addChild(ProtoInstance439 = new ProtoInstance().setUSE("hanim_l_thelion_2"))
            .addChild(ProtoInstance440 = new ProtoInstance().setUSE("hanim_substernale_2"))
            .addChild(ProtoInstance441 = new ProtoInstance().setUSE("hanim_r_rib10_2"))
            .addChild(ProtoInstance442 = new ProtoInstance().setUSE("hanim_l_rib10_2"))
            .addChild(ProtoInstance443 = new ProtoInstance().setUSE("hanim_spine_2_lower_back_2"))
            .addChild(ProtoInstance444 = new ProtoInstance().setUSE("hanim_waist_preferred_posterior_2"))
            .addChild(ProtoInstance445 = new ProtoInstance().setUSE("hanim_navel_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("segments")
            .addChild(ProtoInstance446 = new ProtoInstance().setUSE("hanim_l_tarsal_distal_phalanx2"))
            .addChild(ProtoInstance447 = new ProtoInstance().setUSE("hanim_l_middistal_2"))
            .addChild(ProtoInstance448 = new ProtoInstance().setUSE("hanim_l_midproximal_2"))
            .addChild(ProtoInstance449 = new ProtoInstance().setUSE("hanim_l_hindfoot_2"))
            .addChild(ProtoInstance450 = new ProtoInstance().setUSE("hanim_l_calf_2"))
            .addChild(ProtoInstance451 = new ProtoInstance().setUSE("hanim_l_thigh_2"))
            .addChild(ProtoInstance452 = new ProtoInstance().setUSE("hanim_r_tarsal_distal_phalanx2"))
            .addChild(ProtoInstance453 = new ProtoInstance().setUSE("hanim_r_middistal_2"))
            .addChild(ProtoInstance454 = new ProtoInstance().setUSE("hanim_r_midproximal_2"))
            .addChild(ProtoInstance455 = new ProtoInstance().setUSE("hanim_r_hindfoot_2"))
            .addChild(ProtoInstance456 = new ProtoInstance().setUSE("hanim_r_calf_2"))
            .addChild(ProtoInstance457 = new ProtoInstance().setUSE("hanim_r_thigh_2"))
            .addChild(ProtoInstance458 = new ProtoInstance().setUSE("hanim_pelvis_2"))
            .addChild(ProtoInstance459 = new ProtoInstance().setUSE("hanim_l_eyeball_4"))
            .addChild(ProtoInstance460 = new ProtoInstance().setUSE("hanim_r_eyeball_4"))
            .addChild(ProtoInstance461 = new ProtoInstance().setUSE("hanim_skull_2"))
            .addChild(ProtoInstance462 = new ProtoInstance().setUSE("hanim_c1_2"))
            .addChild(ProtoInstance463 = new ProtoInstance().setUSE("hanim_c2_2"))
            .addChild(ProtoInstance464 = new ProtoInstance().setUSE("hanim_c3_2"))
            .addChild(ProtoInstance465 = new ProtoInstance().setUSE("hanim_c4_2"))
            .addChild(ProtoInstance466 = new ProtoInstance().setUSE("hanim_c5_2"))
            .addChild(ProtoInstance467 = new ProtoInstance().setUSE("hanim_c6_2"))
            .addChild(ProtoInstance468 = new ProtoInstance().setUSE("hanim_c7_2"))
            .addChild(ProtoInstance469 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx2"))
            .addChild(ProtoInstance470 = new ProtoInstance().setUSE("hanim_l_index_proximal_6"))
            .addChild(ProtoInstance471 = new ProtoInstance().setUSE("hanim_l_index_proximal_6"))
            .addChild(ProtoInstance472 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx3"))
            .addChild(ProtoInstance473 = new ProtoInstance().setUSE("hanim_l_index_middle_2"))
            .addChild(ProtoInstance474 = new ProtoInstance().setUSE("hanim_l_index_proximal_6"))
            .addChild(ProtoInstance475 = new ProtoInstance().setUSE("hanim_l_index_metacarpal_2"))
            .addChild(ProtoInstance476 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx4"))
            .addChild(ProtoInstance477 = new ProtoInstance().setUSE("hanim_l_middle_middle_2"))
            .addChild(ProtoInstance478 = new ProtoInstance().setUSE("hanim_l_middle_proximal_2"))
            .addChild(ProtoInstance479 = new ProtoInstance().setUSE("hanim_l_middle_metacarpal_2"))
            .addChild(ProtoInstance480 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx5"))
            .addChild(ProtoInstance481 = new ProtoInstance().setUSE("hanim_l_ring_middle_2"))
            .addChild(ProtoInstance482 = new ProtoInstance().setUSE("hanim_l_ring_proximal_2"))
            .addChild(ProtoInstance483 = new ProtoInstance().setUSE("hanim_l_ring_metacarpal_2"))
            .addChild(ProtoInstance484 = new ProtoInstance().setUSE("hanim_l_carpal_distal_phalanx6"))
            .addChild(ProtoInstance485 = new ProtoInstance().setUSE("hanim_l_pinky_middle_2"))
            .addChild(ProtoInstance486 = new ProtoInstance().setUSE("hanim_l_pinky_proximal_2"))
            .addChild(ProtoInstance487 = new ProtoInstance().setUSE("hanim_l_pinky_metacarpal_2"))
            .addChild(ProtoInstance488 = new ProtoInstance().setUSE("hanim_l_hand_2"))
            .addChild(ProtoInstance489 = new ProtoInstance().setUSE("hanim_l_forearm_2"))
            .addChild(ProtoInstance490 = new ProtoInstance().setUSE("hanim_l_upperarm_2"))
            .addChild(ProtoInstance491 = new ProtoInstance().setUSE("hanim_l_scapula_2"))
            .addChild(ProtoInstance492 = new ProtoInstance().setUSE("hanim_l_clavicle_2"))
            .addChild(ProtoInstance493 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx2"))
            .addChild(ProtoInstance494 = new ProtoInstance().setUSE("hanim_r_index_proximal_6"))
            .addChild(ProtoInstance495 = new ProtoInstance().setUSE("hanim_r_index_proximal_6"))
            .addChild(ProtoInstance496 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx3"))
            .addChild(ProtoInstance497 = new ProtoInstance().setUSE("hanim_r_index_middle_2"))
            .addChild(ProtoInstance498 = new ProtoInstance().setUSE("hanim_r_index_proximal_6"))
            .addChild(ProtoInstance499 = new ProtoInstance().setUSE("hanim_r_index_metacarpal_2"))
            .addChild(ProtoInstance500 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx4"))
            .addChild(ProtoInstance501 = new ProtoInstance().setUSE("hanim_r_middle_middle_2"))
            .addChild(ProtoInstance502 = new ProtoInstance().setUSE("hanim_r_middle_proximal_2"))
            .addChild(ProtoInstance503 = new ProtoInstance().setUSE("hanim_r_middle_metacarpal_2"))
            .addChild(ProtoInstance504 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx5"))
            .addChild(ProtoInstance505 = new ProtoInstance().setUSE("hanim_r_ring_middle_2"))
            .addChild(ProtoInstance506 = new ProtoInstance().setUSE("hanim_r_ring_proximal_2"))
            .addChild(ProtoInstance507 = new ProtoInstance().setUSE("hanim_r_ring_metacarpal_2"))
            .addChild(ProtoInstance508 = new ProtoInstance().setUSE("hanim_r_carpal_distal_phalanx6"))
            .addChild(ProtoInstance509 = new ProtoInstance().setUSE("hanim_r_pinky_middle_2"))
            .addChild(ProtoInstance510 = new ProtoInstance().setUSE("hanim_r_pinky_proximal_2"))
            .addChild(ProtoInstance511 = new ProtoInstance().setUSE("hanim_r_pinky_metacarpal_2"))
            .addChild(ProtoInstance512 = new ProtoInstance().setUSE("hanim_r_hand_2"))
            .addChild(ProtoInstance513 = new ProtoInstance().setUSE("hanim_r_forearm_2"))
            .addChild(ProtoInstance514 = new ProtoInstance().setUSE("hanim_r_upperarm_2"))
            .addChild(ProtoInstance515 = new ProtoInstance().setUSE("hanim_r_scapula_2"))
            .addChild(ProtoInstance516 = new ProtoInstance().setUSE("hanim_r_clavicle_2"))
            .addChild(ProtoInstance517 = new ProtoInstance().setUSE("hanim_t1_2"))
            .addChild(ProtoInstance518 = new ProtoInstance().setUSE("hanim_t2_2"))
            .addChild(ProtoInstance519 = new ProtoInstance().setUSE("hanim_t3_2"))
            .addChild(ProtoInstance520 = new ProtoInstance().setUSE("hanim_t4_2"))
            .addChild(ProtoInstance521 = new ProtoInstance().setUSE("hanim_t5_2"))
            .addChild(ProtoInstance522 = new ProtoInstance().setUSE("hanim_t6_2"))
            .addChild(ProtoInstance523 = new ProtoInstance().setUSE("hanim_t7_2"))
            .addChild(ProtoInstance524 = new ProtoInstance().setUSE("hanim_t8_2"))
            .addChild(ProtoInstance525 = new ProtoInstance().setUSE("hanim_t9_2"))
            .addChild(ProtoInstance526 = new ProtoInstance().setUSE("hanim_t10_2"))
            .addChild(ProtoInstance527 = new ProtoInstance().setUSE("hanim_t11_2"))
            .addChild(ProtoInstance528 = new ProtoInstance().setUSE("hanim_t12_2"))
            .addChild(ProtoInstance529 = new ProtoInstance().setUSE("hanim_l1_2"))
            .addChild(ProtoInstance530 = new ProtoInstance().setUSE("hanim_l2_2"))
            .addChild(ProtoInstance531 = new ProtoInstance().setUSE("hanim_l3_2"))
            .addChild(ProtoInstance532 = new ProtoInstance().setUSE("hanim_l4_2"))
            .addChild(ProtoInstance533 = new ProtoInstance().setUSE("hanim_l5_2"))
            .addChild(ProtoInstance534 = new ProtoInstance().setUSE("hanim_sacrum_2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;4\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.824000000953674 0.0276999995112419"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance2 = new ProtoInstance().setName("Joint").setDEF("hanim_sacroiliac_2"))
                .addChild(ProtoInstance59 = new ProtoInstance().setName("Joint").setDEF("hanim_vl5_2"))
                .addChild(ProtoInstance267 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum_2")));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("center").setValue("0 0.914900004863739 0.0015999999595806"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance3 = new ProtoInstance().setName("Joint").setDEF("hanim_l_hip_2"))
                    .addChild(ProtoInstance26 = new ProtoInstance().setName("Joint").setDEF("hanim_r_hip_2"))
                    .addChild(ProtoInstance49 = new ProtoInstance().setName("Segment").setDEF("hanim_pelvis_2")));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("name").setValue("l_hip"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("center").setValue("0.0961000025272369 0.912400007247925 -0.0000999999974737875"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance4 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee_2"))
                        .addChild(ProtoInstance22 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh_2")));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("center").setValue("0.104000002145767 0.486699998378754 0.030799999833107"));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance5 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural_2"))
                            .addChild(ProtoInstance21 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf_2")));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("center").setValue("0.110100001096725 0.0656000003218651 -0.0736000016331673"));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance6 = new ProtoInstance().setName("Joint").setDEF("hanim_l_tarsotarsal_interphalangeal__2"))
                                .addChild(ProtoInstance16 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot_2")));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsotarsal_interphalangeal_"));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("center").setValue("0.108599998056889 0.0000999999974737875 -0.0368000008165836"));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance7 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal__2"))
                                    .addChild(ProtoInstance15 = new ProtoInstance().setName("Segment").setDEF("hanim_l_midproximal_2")));
ProtoInstance7
                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance7
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance7
                                      .addFieldValue(new fieldValue().setName("center").setValue("0.108599998056889 0.0000999999974737875 0.0368000008165836"));
ProtoInstance7
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance8 = new ProtoInstance().setName("Joint").setDEF("hanim_l_tarsal_interphalangeal__2"))
                                        .addChild(ProtoInstance13 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal_2")));
ProtoInstance8
                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance8
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_"));
ProtoInstance8
                                          .addFieldValue(new fieldValue().setName("center").setValue("0.108599998056889 0 0.0762000009417534"));
ProtoInstance8
                                          .addFieldValue(new fieldValue().setName("children")
                                            .addChild(ProtoInstance9 = new ProtoInstance().setName("Segment").setDEF("hanim_l_tarsal_distal_phalanx2")));
ProtoInstance9
                                              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_1"));
ProtoInstance9
                                              .addFieldValue(new fieldValue().setName("children")
                                                .addChild(ProtoInstance10 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_1_tip_2"))
                                                .addChild(ProtoInstance11 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx6"))
                                                .addChild(ProtoInstance12 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx3")));
ProtoInstance10
                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_1_tip"));
ProtoInstance10
                                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.135399997234344 0.0015999999595806 0.147599995136261"));
ProtoInstance11
                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance11
                                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.182500004768372 0.00700000021606684 0.092799998819828"));
ProtoInstance12
                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance12
                                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.119499996304512 0.00789999961853027 0.143299996852875"));
ProtoInstance13
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance13
                                          .addFieldValue(new fieldValue().setName("children")
                                            .addChild(ProtoInstance14 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx2")));
ProtoInstance14
                                              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance14
                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0816000029444695 0.023199999704957 0.0105999996885657"));
ProtoInstance15
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_midproximal"));
ProtoInstance16
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance16
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance17 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus_2"))
                                    .addChild(ProtoInstance18 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus_2"))
                                    .addChild(ProtoInstance19 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion_2"))
                                    .addChild(ProtoInstance20 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior_2")));
ProtoInstance17
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance17
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.130799993872643 0.0597000010311604 -0.103200003504753"));
ProtoInstance18
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance18
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348"));
ProtoInstance19
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance19
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649"));
ProtoInstance20
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance20
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.025900000706315 -0.11710000038147"));
ProtoInstance21
                              .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance22
                          .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance22
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance23 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease_2"))
                            .addChild(ProtoInstance24 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles_2"))
                            .addChild(ProtoInstance25 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles_2")));
ProtoInstance23
                              .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance23
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338"));
ProtoInstance24
                              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance24
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.159799993038177 0.496699988842011 0.0296999998390675"));
ProtoInstance25
                              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance25
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0397999994456768 0.494599997997284 0.0303000006824732"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("name").setValue("r_hip"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.0949999988079071 0.917100012302399 0.00289999996311963"));
ProtoInstance26
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance27 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee_2"))
                        .addChild(ProtoInstance45 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh_2")));
ProtoInstance27
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance27
                          .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance27
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.0866999998688698 0.491299986839294 0.0318000018596649"));
ProtoInstance27
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance28 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural_2"))
                            .addChild(ProtoInstance44 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf_2")));
ProtoInstance28
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance28
                              .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance28
                              .addFieldValue(new fieldValue().setName("center").setValue("-0.0800999999046326 0.0711999982595444 -0.0766000002622604"));
ProtoInstance28
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance29 = new ProtoInstance().setName("Joint").setDEF("hanim_r_tarsotarsal_interphalangeal__2"))
                                .addChild(ProtoInstance39 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot_2")));
ProtoInstance29
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance29
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsotarsal_interphalangeal_"));
ProtoInstance29
                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.0800999999046326 0 -0.0368000008165836"));
ProtoInstance29
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance30 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal__2"))
                                    .addChild(ProtoInstance38 = new ProtoInstance().setName("Segment").setDEF("hanim_r_midproximal_2")));
ProtoInstance30
                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance30
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance30
                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.0800999999046326 0 0.0368000008165836"));
ProtoInstance30
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance31 = new ProtoInstance().setName("Joint").setDEF("hanim_r_tarsal_interphalangeal__2"))
                                        .addChild(ProtoInstance36 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal_2")));
ProtoInstance31
                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance31
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_"));
ProtoInstance31
                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.0800999999046326 0.00389999989420176 0.0732000023126602"));
ProtoInstance31
                                          .addFieldValue(new fieldValue().setName("children")
                                            .addChild(ProtoInstance32 = new ProtoInstance().setName("Segment").setDEF("hanim_r_tarsal_distal_phalanx2")));
ProtoInstance32
                                              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_1"));
ProtoInstance32
                                              .addFieldValue(new fieldValue().setName("children")
                                                .addChild(ProtoInstance33 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_1_tip_2"))
                                                .addChild(ProtoInstance34 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx6"))
                                                .addChild(ProtoInstance35 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx3")));
ProtoInstance33
                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_1_tip"));
ProtoInstance33
                                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.104299999773502 -0.0227000005543232 0.144999995827675"));
ProtoInstance34
                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance34
                                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997"));
ProtoInstance35
                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance35
                                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.088299997150898 0.013399999588728 0.138300001621246"));
ProtoInstance36
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance36
                                          .addFieldValue(new fieldValue().setName("children")
                                            .addChild(ProtoInstance37 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx2")));
ProtoInstance37
                                              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance37
                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518"));
ProtoInstance38
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_midproximal"));
ProtoInstance39
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance39
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance40 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus_2"))
                                    .addChild(ProtoInstance41 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus_2"))
                                    .addChild(ProtoInstance42 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion_2"))
                                    .addChild(ProtoInstance43 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior_2")));
ProtoInstance40
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance40
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139"));
ProtoInstance41
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance41
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828"));
ProtoInstance42
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance42
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079"));
ProtoInstance43
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance43
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679"));
ProtoInstance44
                              .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance45
                          .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance45
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance46 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease_2"))
                            .addChild(ProtoInstance47 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles_2"))
                            .addChild(ProtoInstance48 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles_2")));
ProtoInstance46
                              .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance46
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679"));
ProtoInstance47
                              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance47
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.142100006341934 0.499199986457825 0.0309999994933605"));
ProtoInstance48
                              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance48
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082"));
ProtoInstance49
                      .addFieldValue(new fieldValue().setName("name").setValue("pelvis"));
ProtoInstance49
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance50 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale_2"))
                        .addChild(ProtoInstance51 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion_2"))
                        .addChild(ProtoInstance52 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale_2"))
                        .addChild(ProtoInstance53 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion_2"))
                        .addChild(ProtoInstance54 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis_2"))
                        .addChild(ProtoInstance55 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis_2"))
                        .addChild(ProtoInstance56 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis_2"))
                        .addChild(ProtoInstance57 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis_2"))
                        .addChild(ProtoInstance58 = new ProtoInstance().setName("Site").setDEF("hanim_crotch_2")));
ProtoInstance50
                          .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance50
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.152500003576279 1.0628000497818 0.00350000010803342"));
ProtoInstance51
                          .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance51
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.16889999806881 0.841899991035461 0.0351999998092651"));
ProtoInstance52
                          .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance52
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.161200001835823 1.05369997024536 0.0007999999797903"));
ProtoInstance53
                          .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance53
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.167699992656708 0.833599984645844 0.0303000006824732"));
ProtoInstance54
                          .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance54
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.088699996471405 1.00209999084473 0.111199997365475"));
ProtoInstance55
                          .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance55
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.998300015926361 0.105200000107288"));
ProtoInstance56
                          .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance56
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061"));
ProtoInstance57
                          .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance57
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0773999989032745 1.01900005340576 -0.115099996328354"));
ProtoInstance58
                          .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance58
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00340000004507601 0.826600015163422 0.0256999991834164"));
ProtoInstance59
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance59
                  .addFieldValue(new fieldValue().setName("name").setValue("vl5"));
ProtoInstance59
                  .addFieldValue(new fieldValue().setName("center").setValue("0.00279999990016222 1.05680000782013 -0.0776000022888184"));
ProtoInstance59
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance60 = new ProtoInstance().setName("Joint").setDEF("hanim_vl4_2"))
                    .addChild(ProtoInstance264 = new ProtoInstance().setName("Segment").setDEF("hanim_l5_2")));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("name").setValue("vl4"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("center").setValue("0.00350000010803342 1.09249997138977 -0.0786999985575676"));
ProtoInstance60
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance61 = new ProtoInstance().setName("Joint").setDEF("hanim_vl3_2"))
                        .addChild(ProtoInstance263 = new ProtoInstance().setName("Segment").setDEF("hanim_l4_2")));
ProtoInstance61
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance61
                          .addFieldValue(new fieldValue().setName("name").setValue("vl3"));
ProtoInstance61
                          .addFieldValue(new fieldValue().setName("center").setValue("0.00410000002011657 1.1275999546051 -0.0795999988913536"));
ProtoInstance61
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance62 = new ProtoInstance().setName("Joint").setDEF("hanim_vl2_2"))
                            .addChild(ProtoInstance262 = new ProtoInstance().setName("Segment").setDEF("hanim_l3_2")));
ProtoInstance62
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance62
                              .addFieldValue(new fieldValue().setName("name").setValue("vl2"));
ProtoInstance62
                              .addFieldValue(new fieldValue().setName("center").setValue("0.0044999998062849 1.15460002422333 -0.0799999982118607"));
ProtoInstance62
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance63 = new ProtoInstance().setName("Joint").setDEF("hanim_vl1_2"))
                                .addChild(ProtoInstance258 = new ProtoInstance().setName("Segment").setDEF("hanim_l2_2")));
ProtoInstance63
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance63
                                  .addFieldValue(new fieldValue().setName("name").setValue("vl1"));
ProtoInstance63
                                  .addFieldValue(new fieldValue().setName("center").setValue("0.00480000022798777 1.19120001792908 -0.0804999992251396"));
ProtoInstance63
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance64 = new ProtoInstance().setName("Joint").setDEF("hanim_vt12_2"))
                                    .addChild(ProtoInstance257 = new ProtoInstance().setName("Segment").setDEF("hanim_l1_2")));
ProtoInstance64
                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance64
                                      .addFieldValue(new fieldValue().setName("name").setValue("vt12"));
ProtoInstance64
                                      .addFieldValue(new fieldValue().setName("center").setValue("0.00510000018402934 1.22780001163483 -0.0807999968528748"));
ProtoInstance64
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance65 = new ProtoInstance().setName("Joint").setDEF("hanim_vt11_2"))
                                        .addChild(ProtoInstance256 = new ProtoInstance().setName("Segment").setDEF("hanim_t12_2")));
ProtoInstance65
                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance65
                                          .addFieldValue(new fieldValue().setName("name").setValue("vt11"));
ProtoInstance65
                                          .addFieldValue(new fieldValue().setName("center").setValue("0.00529999984428287 1.26789999008179 -0.0810000002384186"));
ProtoInstance65
                                          .addFieldValue(new fieldValue().setName("children")
                                            .addChild(ProtoInstance66 = new ProtoInstance().setName("Joint").setDEF("hanim_vt10_2"))
                                            .addChild(ProtoInstance255 = new ProtoInstance().setName("Segment").setDEF("hanim_t11_2")));
ProtoInstance66
                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance66
                                              .addFieldValue(new fieldValue().setName("name").setValue("vt10"));
ProtoInstance66
                                              .addFieldValue(new fieldValue().setName("center").setValue("0.00559999980032444 1.28480005264282 -0.0821999981999397"));
ProtoInstance66
                                              .addFieldValue(new fieldValue().setName("children")
                                                .addChild(ProtoInstance67 = new ProtoInstance().setName("Joint").setDEF("hanim_vt9_2"))
                                                .addChild(ProtoInstance253 = new ProtoInstance().setName("Segment").setDEF("hanim_t10_2")));
ProtoInstance67
                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance67
                                                  .addFieldValue(new fieldValue().setName("name").setValue("vt9"));
ProtoInstance67
                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.00570000009611249 1.31260001659393 -0.0838000029325485"));
ProtoInstance67
                                                  .addFieldValue(new fieldValue().setName("children")
                                                    .addChild(ProtoInstance68 = new ProtoInstance().setName("Joint").setDEF("hanim_vt8_2"))
                                                    .addChild(ProtoInstance250 = new ProtoInstance().setName("Segment").setDEF("hanim_t9_2")));
ProtoInstance68
                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance68
                                                      .addFieldValue(new fieldValue().setName("name").setValue("vt8"));
ProtoInstance68
                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.00570000009611249 1.33819997310638 -0.0844999998807907"));
ProtoInstance68
                                                      .addFieldValue(new fieldValue().setName("children")
                                                        .addChild(ProtoInstance69 = new ProtoInstance().setName("Joint").setDEF("hanim_vt7_2"))
                                                        .addChild(ProtoInstance249 = new ProtoInstance().setName("Segment").setDEF("hanim_t8_2")));
ProtoInstance69
                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance69
                                                          .addFieldValue(new fieldValue().setName("name").setValue("vt7"));
ProtoInstance69
                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.00579999992623925 1.36249995231628 -0.0833000019192696"));
ProtoInstance69
                                                          .addFieldValue(new fieldValue().setName("children")
                                                            .addChild(ProtoInstance70 = new ProtoInstance().setName("Joint").setDEF("hanim_vt6_2"))
                                                            .addChild(ProtoInstance248 = new ProtoInstance().setName("Segment").setDEF("hanim_t7_2")));
ProtoInstance70
                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance70
                                                              .addFieldValue(new fieldValue().setName("name").setValue("vt6"));
ProtoInstance70
                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.0059000002220273 1.38660001754761 -0.0799999982118607"));
ProtoInstance70
                                                              .addFieldValue(new fieldValue().setName("children")
                                                                .addChild(ProtoInstance71 = new ProtoInstance().setName("Joint").setDEF("hanim_vt5_2"))
                                                                .addChild(ProtoInstance247 = new ProtoInstance().setName("Segment").setDEF("hanim_t6_2")));
ProtoInstance71
                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance71
                                                                  .addFieldValue(new fieldValue().setName("name").setValue("vt5"));
ProtoInstance71
                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.00600000005215406 1.41019999980927 -0.0745000019669533"));
ProtoInstance71
                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                    .addChild(ProtoInstance72 = new ProtoInstance().setName("Joint").setDEF("hanim_vt4_2"))
                                                                    .addChild(ProtoInstance246 = new ProtoInstance().setName("Segment").setDEF("hanim_t5_2")));
ProtoInstance72
                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance72
                                                                      .addFieldValue(new fieldValue().setName("name").setValue("vt4"));
ProtoInstance72
                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.00609999988228083 1.432000041008 -0.067500002682209"));
ProtoInstance72
                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                        .addChild(ProtoInstance73 = new ProtoInstance().setName("Joint").setDEF("hanim_vt3_2"))
                                                                        .addChild(ProtoInstance245 = new ProtoInstance().setName("Segment").setDEF("hanim_t4_2")));
ProtoInstance73
                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance73
                                                                          .addFieldValue(new fieldValue().setName("name").setValue("vt3"));
ProtoInstance73
                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.00620000017806888 1.45829999446869 -0.0570000000298023"));
ProtoInstance73
                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                            .addChild(ProtoInstance74 = new ProtoInstance().setName("Joint").setDEF("hanim_vt2_2"))
                                                                            .addChild(ProtoInstance244 = new ProtoInstance().setName("Segment").setDEF("hanim_t3_2")));
ProtoInstance74
                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance74
                                                                              .addFieldValue(new fieldValue().setName("name").setValue("vt2"));
ProtoInstance74
                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.00630000000819564 1.47609996795654 -0.0483999997377396"));
ProtoInstance74
                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                .addChild(ProtoInstance75 = new ProtoInstance().setName("Joint").setDEF("hanim_vt1_2"))
                                                                                .addChild(ProtoInstance243 = new ProtoInstance().setName("Segment").setDEF("hanim_t2_2")));
ProtoInstance75
                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance75
                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("vt1"));
ProtoInstance75
                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.00650000013411045 1.4951000213623 -0.0386999994516373"));
ProtoInstance75
                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                    .addChild(ProtoInstance76 = new ProtoInstance().setName("Joint").setDEF("hanim_vc7_2"))
                                                                                    .addChild(ProtoInstance108 = new ProtoInstance().setName("Joint").setDEF("hanim_l_sternoclavicular_2"))
                                                                                    .addChild(ProtoInstance174 = new ProtoInstance().setName("Joint").setDEF("hanim_r_sternoclavicular_2"))
                                                                                    .addChild(ProtoInstance240 = new ProtoInstance().setName("Segment").setDEF("hanim_t1_2")));
ProtoInstance76
                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance76
                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("vc7"));
ProtoInstance76
                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.51320004463196 -0.0300999991595745"));
ProtoInstance76
                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                        .addChild(ProtoInstance77 = new ProtoInstance().setName("Joint").setDEF("hanim_vc6_2"))
                                                                                        .addChild(ProtoInstance105 = new ProtoInstance().setName("Segment").setDEF("hanim_c7_2")));
ProtoInstance77
                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance77
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("vc6"));
ProtoInstance77
                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.53569996356964 -0.014299999922514"));
ProtoInstance77
                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                            .addChild(ProtoInstance78 = new ProtoInstance().setName("Joint").setDEF("hanim_vc5_2"))
                                                                                            .addChild(ProtoInstance104 = new ProtoInstance().setName("Segment").setDEF("hanim_c6_2")));
ProtoInstance78
                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance78
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("vc5"));
ProtoInstance78
                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.55200004577637 -0.00820000004023314"));
ProtoInstance78
                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                .addChild(ProtoInstance79 = new ProtoInstance().setName("Joint").setDEF("hanim_vc4_2"))
                                                                                                .addChild(ProtoInstance103 = new ProtoInstance().setName("Segment").setDEF("hanim_c5_2")));
ProtoInstance79
                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance79
                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("vc4"));
ProtoInstance79
                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.56620001792908 -0.00839999970048666"));
ProtoInstance79
                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                    .addChild(ProtoInstance80 = new ProtoInstance().setName("Joint").setDEF("hanim_vc3_2"))
                                                                                                    .addChild(ProtoInstance102 = new ProtoInstance().setName("Segment").setDEF("hanim_c4_2")));
ProtoInstance80
                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance80
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("vc3"));
ProtoInstance80
                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.58000004291534 -0.0103000001981854"));
ProtoInstance80
                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                        .addChild(ProtoInstance81 = new ProtoInstance().setName("Joint").setDEF("hanim_vc2_2"))
                                                                                                        .addChild(ProtoInstance101 = new ProtoInstance().setName("Segment").setDEF("hanim_c3_2")));
ProtoInstance81
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance81
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("vc2"));
ProtoInstance81
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.59280002117157 -0.0103000001981854"));
ProtoInstance81
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance82 = new ProtoInstance().setName("Joint").setDEF("hanim_vc1_2"))
                                                                                                            .addChild(ProtoInstance100 = new ProtoInstance().setName("Segment").setDEF("hanim_c2_2")));
ProtoInstance82
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance82
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("vc1"));
ProtoInstance82
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.00659999996423721 1.61440002918243 -0.00340000004507601"));
ProtoInstance82
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance83 = new ProtoInstance().setName("Joint").setDEF("hanim_skullbase_2"))
                                                                                                                .addChild(ProtoInstance99 = new ProtoInstance().setName("Segment").setDEF("hanim_c1_2")));
ProtoInstance83
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance83
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("skullbase"));
ProtoInstance83
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.00439999997615814 1.62090003490448 0.0236000008881092"));
ProtoInstance83
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance84 = new ProtoInstance().setName("Joint").setDEF("hanim_l_eyeball_4"))
                                                                                                                    .addChild(ProtoInstance86 = new ProtoInstance().setName("Joint").setDEF("hanim_r_eyeball_4"))
                                                                                                                    .addChild(ProtoInstance88 = new ProtoInstance().setName("Segment").setDEF("hanim_skull_2")));
ProtoInstance84
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance84
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_eyeball"));
ProtoInstance84
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.0335999988019466 1.63320004940033 0.0502000004053116"));
ProtoInstance84
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance85 = new ProtoInstance().setName("Segment").setDEF("hanim_l_eyeball_3")));
ProtoInstance85
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_eyeball"));
ProtoInstance86
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance86
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_eyeball"));
ProtoInstance86
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.0236000008881092 1.6331000328064 0.0509999990463257"));
ProtoInstance86
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance87 = new ProtoInstance().setName("Segment").setDEF("hanim_r_eyeball_3")));
ProtoInstance87
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_eyeball"));
ProtoInstance88
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance88
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance89 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip_2"))
                                                                                                                        .addChild(ProtoInstance90 = new ProtoInstance().setName("Site").setDEF("hanim_sellion_2"))
                                                                                                                        .addChild(ProtoInstance91 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale_2"))
                                                                                                                        .addChild(ProtoInstance92 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale_2"))
                                                                                                                        .addChild(ProtoInstance93 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton_2"))
                                                                                                                        .addChild(ProtoInstance94 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion_2"))
                                                                                                                        .addChild(ProtoInstance95 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion_2"))
                                                                                                                        .addChild(ProtoInstance96 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion_2"))
                                                                                                                        .addChild(ProtoInstance97 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion_2"))
                                                                                                                        .addChild(ProtoInstance98 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale_2")));
ProtoInstance89
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance89
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00499999988824129 1.75039994716644 0.00549999997019768"));
ProtoInstance90
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance90
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00579999992623925 1.63160002231598 0.0851999968290329"));
ProtoInstance91
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance91
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.023700000718236 1.61710000038147 0.0751999989151955"));
ProtoInstance92
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance92
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.61710000038147 0.0751999989151955"));
ProtoInstance93
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance93
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00609999988228083 1.54100000858307 0.0804999992251396"));
ProtoInstance94
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance94
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464"));
ProtoInstance95
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance95
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862"));
ProtoInstance96
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance96
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.63479995727539 0.0282000005245209"));
ProtoInstance97
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance97
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0631000027060509 1.55299997329712 0.0329999998211861"));
ProtoInstance98
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance98
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536"));
ProtoInstance99
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("c1"));
ProtoInstance100
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("c2"));
ProtoInstance101
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("c3"));
ProtoInstance102
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("c4"));
ProtoInstance103
                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("c5"));
ProtoInstance104
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("c6"));
ProtoInstance105
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("c7"));
ProtoInstance105
                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                            .addChild(ProtoInstance106 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base_2"))
                                                                                            .addChild(ProtoInstance107 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base_2")));
ProtoInstance106
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance106
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907"));
ProtoInstance107
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance107
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048"));
ProtoInstance108
                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance108
                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_sternoclavicular"));
ProtoInstance108
                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.0820000022649765 1.44879996776581 -0.035300001502037"));
ProtoInstance108
                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                        .addChild(ProtoInstance109 = new ProtoInstance().setName("Joint").setDEF("hanim_l_acromioclavicular_2"))
                                                                                        .addChild(ProtoInstance169 = new ProtoInstance().setName("Segment").setDEF("hanim_l_clavicle_2")));
ProtoInstance109
                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance109
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_acromioclavicular"));
ProtoInstance109
                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.0961999967694283 1.42690002918243 -0.0423999987542629"));
ProtoInstance109
                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                            .addChild(ProtoInstance110 = new ProtoInstance().setName("Joint").setDEF("hanim_l_shoulder_2"))
                                                                                            .addChild(ProtoInstance168 = new ProtoInstance().setName("Segment").setDEF("hanim_l_scapula_2")));
ProtoInstance110
                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance110
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"));
ProtoInstance110
                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.202900007367134 1.43760001659393 -0.0386999994516373"));
ProtoInstance110
                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                .addChild(ProtoInstance111 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow_2"))
                                                                                                .addChild(ProtoInstance166 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm_2")));
ProtoInstance111
                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance111
                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance111
                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.201399996876717 1.1356999874115 -0.0681999996304512"));
ProtoInstance111
                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                    .addChild(ProtoInstance112 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal_2"))
                                                                                                    .addChild(ProtoInstance161 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm_2")));
ProtoInstance112
                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance112
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance112
                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.198400005698204 0.866299986839294 -0.0582999996840954"));
ProtoInstance112
                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                        .addChild(ProtoInstance113 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpometacarpal2"))
                                                                                                        .addChild(ProtoInstance120 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpometacarpal3"))
                                                                                                        .addChild(ProtoInstance130 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpometacarpal4"))
                                                                                                        .addChild(ProtoInstance139 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpometacarpal5"))
                                                                                                        .addChild(ProtoInstance148 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpometacarpal6"))
                                                                                                        .addChild(ProtoInstance157 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand_2")));
ProtoInstance113
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance113
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpometacarpal_1"));
ProtoInstance113
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.192399993538857 0.847199976444244 -0.0533999986946583"));
ProtoInstance113
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance114 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metacarpophalangeal2"))
                                                                                                            .addChild(ProtoInstance119 = new ProtoInstance().setName("Segment").setDEF("hanim_l_index_proximal_4")));
ProtoInstance114
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance114
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpophalangeal_1"));
ProtoInstance114
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.195099994540215 0.82260000705719 0.0245999991893768"));
ProtoInstance114
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance115 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_interphalangeal2"))
                                                                                                                .addChild(ProtoInstance118 = new ProtoInstance().setName("Segment").setDEF("hanim_l_index_proximal_2")));
ProtoInstance115
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance115
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_interphalangeal_1"));
ProtoInstance115
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.195500001311302 0.815900027751923 0.046399999409914"));
ProtoInstance115
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance116 = new ProtoInstance().setName("Segment").setDEF("hanim_l_carpal_distal_phalanx2")));
ProtoInstance116
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_1"));
ProtoInstance116
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance117 = new ProtoInstance().setName("Site").setDEF("hanim_l_carpal_distal_phalanx_1_tip_2")));
ProtoInstance117
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_1_tip"));
ProtoInstance117
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.19820000231266 0.806100010871887 0.0759000033140183"));
ProtoInstance118
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_index_proximal"));
ProtoInstance119
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_index_proximal"));
ProtoInstance120
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance120
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpometacarpal_2"));
ProtoInstance120
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.198300004005432 0.80239999294281 -0.0280000008642673"));
ProtoInstance120
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance121 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metacarpophalangeal3"))
                                                                                                            .addChild(ProtoInstance129 = new ProtoInstance().setName("Segment").setDEF("hanim_l_index_metacarpal_2")));
ProtoInstance121
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance121
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpophalangeal_2"));
ProtoInstance121
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.198300004005432 0.781499981880188 -0.0280000008642673"));
ProtoInstance121
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance122 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal3"))
                                                                                                                .addChild(ProtoInstance128 = new ProtoInstance().setName("Segment").setDEF("hanim_l_index_proximal_6")));
ProtoInstance122
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance122
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_proximal_interphalangeal_2"));
ProtoInstance122
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.201700001955032 0.736299991607666 -0.0248000007122755"));
ProtoInstance122
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance123 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal3"))
                                                                                                                    .addChild(ProtoInstance127 = new ProtoInstance().setName("Segment").setDEF("hanim_l_index_middle_2")));
ProtoInstance123
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance123
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_interphalangeal_2"));
ProtoInstance123
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.202800005674362 0.713900029659271 -0.0236000008881092"));
ProtoInstance123
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance124 = new ProtoInstance().setName("Segment").setDEF("hanim_l_carpal_distal_phalanx3")));
ProtoInstance124
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_2"));
ProtoInstance124
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance125 = new ProtoInstance().setName("Site").setDEF("hanim_l_carpal_distal_phalanx_2_tip_2"))
                                                                                                                            .addChild(ProtoInstance126 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion_2")));
ProtoInstance125
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_2_tip"));
ProtoInstance125
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.20890000462532 0.685800015926361 -0.0244999993592501"));
ProtoInstance126
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance126
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.205599993467331 0.674300014972687 -0.048200000077486"));
ProtoInstance127
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_index_middle"));
ProtoInstance128
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_index_proximal"));
ProtoInstance129
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_index_metacarpal"));
ProtoInstance130
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance130
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpometacarpal_3"));
ProtoInstance130
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.198699995875359 0.802900016307831 -0.0529999993741512"));
ProtoInstance130
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance131 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metacarpophalangeal4"))
                                                                                                            .addChild(ProtoInstance138 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middle_metacarpal_2")));
ProtoInstance131
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance131
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpophalangeal_3"));
ProtoInstance131
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.198699995875359 0.781799972057343 -0.0529999993741512"));
ProtoInstance131
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance132 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal4"))
                                                                                                                .addChild(ProtoInstance137 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middle_proximal_2")));
ProtoInstance132
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance132
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_proximal_interphalangeal_3"));
ProtoInstance132
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.201299995183945 0.727299988269806 -0.0502999983727932"));
ProtoInstance132
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance133 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal4"))
                                                                                                                    .addChild(ProtoInstance136 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middle_middle_2")));
ProtoInstance133
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance133
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_interphalangeal_3"));
ProtoInstance133
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.202600002288818 0.701099991798401 -0.0494000017642975"));
ProtoInstance133
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance134 = new ProtoInstance().setName("Segment").setDEF("hanim_l_carpal_distal_phalanx4")));
ProtoInstance134
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_3"));
ProtoInstance134
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance135 = new ProtoInstance().setName("Site").setDEF("hanim_l_carpal_distal_phalanx_3_tip_2")));
ProtoInstance135
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_3_tip"));
ProtoInstance135
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.208000004291534 0.673099994659424 -0.049100000411272"));
ProtoInstance136
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_middle_middle"));
ProtoInstance137
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_middle_proximal"));
ProtoInstance138
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_middle_metacarpal"));
ProtoInstance139
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance139
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpometacarpal_4"));
ProtoInstance139
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.195600003004074 0.801900029182434 -0.0794000029563904"));
ProtoInstance139
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance140 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metacarpophalangeal5"))
                                                                                                            .addChild(ProtoInstance147 = new ProtoInstance().setName("Segment").setDEF("hanim_l_ring_metacarpal_2")));
ProtoInstance140
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance140
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpophalangeal_4"));
ProtoInstance140
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.195600003004074 0.781499981880188 -0.0794000029563904"));
ProtoInstance140
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance141 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal5"))
                                                                                                                .addChild(ProtoInstance146 = new ProtoInstance().setName("Segment").setDEF("hanim_l_ring_proximal_2")));
ProtoInstance141
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance141
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_proximal_interphalangeal_4"));
ProtoInstance141
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.197300001978874 0.72869998216629 -0.0776999965310097"));
ProtoInstance141
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance142 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal5"))
                                                                                                                    .addChild(ProtoInstance145 = new ProtoInstance().setName("Segment").setDEF("hanim_l_ring_middle_2")));
ProtoInstance142
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance142
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_interphalangeal_4"));
ProtoInstance142
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.198300004005432 0.704500019550323 -0.0767000019550323"));
ProtoInstance142
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance143 = new ProtoInstance().setName("Segment").setDEF("hanim_l_carpal_distal_phalanx5")));
ProtoInstance143
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_4"));
ProtoInstance143
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance144 = new ProtoInstance().setName("Site").setDEF("hanim_l_carpal_distal_phalanx_4_tip_2")));
ProtoInstance144
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_4_tip"));
ProtoInstance144
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.203500002622604 0.675000011920929 -0.0755999982357025"));
ProtoInstance145
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_ring_middle"));
ProtoInstance146
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_ring_proximal"));
ProtoInstance147
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_ring_metacarpal"));
ProtoInstance148
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance148
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpometacarpal_5"));
ProtoInstance148
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("0.192499995231628 0.806599974632263 -0.10360000282526"));
ProtoInstance148
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance149 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metacarpophalangeal6"))
                                                                                                            .addChild(ProtoInstance156 = new ProtoInstance().setName("Segment").setDEF("hanim_l_pinky_metacarpal_2")));
ProtoInstance149
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance149
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpophalangeal_5"));
ProtoInstance149
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("0.192499995231628 0.78659999370575 -0.10360000282526"));
ProtoInstance149
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance150 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal6"))
                                                                                                                .addChild(ProtoInstance155 = new ProtoInstance().setName("Segment").setDEF("hanim_l_pinky_proximal_2")));
ProtoInstance150
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance150
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_proximal_interphalangeal_5"));
ProtoInstance150
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("0.193800002336502 0.745199978351593 -0.102399997413158"));
ProtoInstance150
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance151 = new ProtoInstance().setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal6"))
                                                                                                                    .addChild(ProtoInstance154 = new ProtoInstance().setName("Segment").setDEF("hanim_l_pinky_middle_2")));
ProtoInstance151
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance151
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_interphalangeal_5"));
ProtoInstance151
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("0.19480000436306 0.727699995040894 -0.101700000464916"));
ProtoInstance151
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance152 = new ProtoInstance().setName("Segment").setDEF("hanim_l_carpal_distal_phalanx6")));
ProtoInstance152
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_5"));
ProtoInstance152
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance153 = new ProtoInstance().setName("Site").setDEF("hanim_l_carpal_distal_phalanx_5_tip_2")));
ProtoInstance153
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_carpal_distal_phalanx_5_tip"));
ProtoInstance153
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.201399996876717 0.700900018215179 -0.101199999451637"));
ProtoInstance154
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_pinky_middle"));
ProtoInstance155
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_pinky_proximal"));
ProtoInstance156
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_pinky_metacarpal"));
ProtoInstance157
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance157
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance158 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx3"))
                                                                                                            .addChild(ProtoInstance159 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid_2"))
                                                                                                            .addChild(ProtoInstance160 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx6")));
ProtoInstance158
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance158
                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.200900003314018 0.813899993896484 -0.023700000718236"));
ProtoInstance159
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance159
                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.214200004935265 0.85290002822876 -0.064800001680851"));
ProtoInstance160
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance160
                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.192900002002716 0.78600001335144 -0.112199999392033"));
ProtoInstance161
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance161
                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                        .addChild(ProtoInstance162 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid_2"))
                                                                                                        .addChild(ProtoInstance163 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon_2"))
                                                                                                        .addChild(ProtoInstance164 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles_2"))
                                                                                                        .addChild(ProtoInstance165 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale_2")));
ProtoInstance162
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance162
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.190099999308586 0.864499986171722 -0.0414999984204769"));
ProtoInstance163
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance163
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.196199998259544 1.13750004768372 -0.112300001084805"));
ProtoInstance164
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance164
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.173500001430511 1.12720000743866 -0.111299999058247"));
ProtoInstance165
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance165
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.218199998140335 1.12119996547699 -0.116700001060963"));
ProtoInstance166
                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance166
                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                    .addChild(ProtoInstance167 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles_2")));
ProtoInstance167
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance167
                                                                                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.228000000119209 1.14820003509521 -0.109999999403954"));
ProtoInstance168
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_scapula"));
ProtoInstance169
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_clavicle"));
ProtoInstance169
                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                            .addChild(ProtoInstance170 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale_2"))
                                                                                            .addChild(ProtoInstance171 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion_2"))
                                                                                            .addChild(ProtoInstance172 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal_2"))
                                                                                            .addChild(ProtoInstance173 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal_2")));
ProtoInstance170
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance170
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0271000005304813 1.49430000782013 0.0394000001251698"));
ProtoInstance171
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance171
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.203199997544289 1.47599995136261 -0.0489999987185001"));
ProtoInstance172
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance172
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.177699998021126 1.40649998188019 -0.00749999983236194"));
ProtoInstance173
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance173
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704361 1.40719997882843 -0.0874999985098839"));
ProtoInstance174
                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance174
                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_sternoclavicular"));
ProtoInstance174
                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.0693999975919724 1.46000003814697 -0.0329999998211861"));
ProtoInstance174
                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                        .addChild(ProtoInstance175 = new ProtoInstance().setName("Joint").setDEF("hanim_r_acromioclavicular_2"))
                                                                                        .addChild(ProtoInstance235 = new ProtoInstance().setName("Segment").setDEF("hanim_r_clavicle_2")));
ProtoInstance175
                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance175
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_acromioclavicular"));
ProtoInstance175
                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.0835999995470047 1.42809998989105 -0.0401000007987022"));
ProtoInstance175
                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                            .addChild(ProtoInstance176 = new ProtoInstance().setName("Joint").setDEF("hanim_r_shoulder_2"))
                                                                                            .addChild(ProtoInstance234 = new ProtoInstance().setName("Segment").setDEF("hanim_r_scapula_2")));
ProtoInstance176
                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance176
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"));
ProtoInstance176
                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071"));
ProtoInstance176
                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                .addChild(ProtoInstance177 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow_2"))
                                                                                                .addChild(ProtoInstance232 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm_2")));
ProtoInstance177
                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance177
                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance177
                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.194900006055832 1.13880002498627 -0.061999998986721"));
ProtoInstance177
                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                    .addChild(ProtoInstance178 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal_2"))
                                                                                                    .addChild(ProtoInstance227 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm_2")));
ProtoInstance178
                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance178
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance178
                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652"));
ProtoInstance178
                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                        .addChild(ProtoInstance179 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpometacarpal2"))
                                                                                                        .addChild(ProtoInstance186 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpometacarpal3"))
                                                                                                        .addChild(ProtoInstance196 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpometacarpal4"))
                                                                                                        .addChild(ProtoInstance205 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpometacarpal5"))
                                                                                                        .addChild(ProtoInstance214 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpometacarpal6"))
                                                                                                        .addChild(ProtoInstance223 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand_2")));
ProtoInstance179
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance179
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpometacarpal_1"));
ProtoInstance179
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.189899995923042 0.850199997425079 -0.0472999997437"));
ProtoInstance179
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance180 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metacarpophalangeal2"))
                                                                                                            .addChild(ProtoInstance185 = new ProtoInstance().setName("Segment").setDEF("hanim_r_index_proximal_4")));
ProtoInstance180
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance180
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpophalangeal_1"));
ProtoInstance180
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("-0.187399998307228 0.825600028038025 0.0306000001728535"));
ProtoInstance180
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance181 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_interphalangeal2"))
                                                                                                                .addChild(ProtoInstance184 = new ProtoInstance().setName("Segment").setDEF("hanim_r_index_proximal_2")));
ProtoInstance181
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance181
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_interphalangeal_1"));
ProtoInstance181
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.18639999628067 0.819000005722046 0.0505999997258186"));
ProtoInstance181
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance182 = new ProtoInstance().setName("Segment").setDEF("hanim_r_carpal_distal_phalanx2")));
ProtoInstance182
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_1"));
ProtoInstance182
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance183 = new ProtoInstance().setName("Site").setDEF("hanim_r_carpal_distal_phalanx_1_tip_2")));
ProtoInstance183
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_1_tip"));
ProtoInstance183
                                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.18690000474453 0.809000015258789 0.0820000022649765"));
ProtoInstance184
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_index_proximal"));
ProtoInstance185
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_index_proximal"));
ProtoInstance186
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance186
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpometacarpal_2"));
ProtoInstance186
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.196099996566772 0.805499970912933 -0.0218000002205372"));
ProtoInstance186
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance187 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metacarpophalangeal3"))
                                                                                                            .addChild(ProtoInstance195 = new ProtoInstance().setName("Segment").setDEF("hanim_r_index_metacarpal_2")));
ProtoInstance187
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance187
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpophalangeal_2"));
ProtoInstance187
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("-0.196099996566772 0.784600019454956 -0.0218000002205372"));
ProtoInstance187
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance188 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal3"))
                                                                                                                .addChild(ProtoInstance194 = new ProtoInstance().setName("Segment").setDEF("hanim_r_index_proximal_6")));
ProtoInstance188
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance188
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_proximal_interphalangeal_2"));
ProtoInstance188
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.19539999961853 0.739300012588501 -0.0185000002384186"));
ProtoInstance188
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance189 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal3"))
                                                                                                                    .addChild(ProtoInstance193 = new ProtoInstance().setName("Segment").setDEF("hanim_r_index_middle_2")));
ProtoInstance189
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance189
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_interphalangeal_2"));
ProtoInstance189
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.194499999284744 0.716899991035461 -0.0173000004142523"));
ProtoInstance189
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance190 = new ProtoInstance().setName("Segment").setDEF("hanim_r_carpal_distal_phalanx3")));
ProtoInstance190
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_2"));
ProtoInstance190
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance191 = new ProtoInstance().setName("Site").setDEF("hanim_r_carpal_distal_phalanx_2_tip_2"))
                                                                                                                            .addChild(ProtoInstance192 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion_2")));
ProtoInstance191
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_2_tip"));
ProtoInstance191
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.197999998927116 0.688300013542175 -0.0179999992251396"));
ProtoInstance192
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance192
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813"));
ProtoInstance193
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_index_middle"));
ProtoInstance194
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_index_proximal"));
ProtoInstance195
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_index_metacarpal"));
ProtoInstance196
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance196
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpometacarpal_3"));
ProtoInstance196
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.197200000286102 0.805999994277954 -0.0467999987304211"));
ProtoInstance196
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance197 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metacarpophalangeal4"))
                                                                                                            .addChild(ProtoInstance204 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middle_metacarpal_2")));
ProtoInstance197
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance197
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpophalangeal_3"));
ProtoInstance197
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("-0.197200000286102 0.784900009632111 -0.0467999987304211"));
ProtoInstance197
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance198 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal4"))
                                                                                                                .addChild(ProtoInstance203 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middle_proximal_2")));
ProtoInstance198
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance198
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_proximal_interphalangeal_3"));
ProtoInstance198
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.194999992847443 0.730400025844574 -0.0441000014543533"));
ProtoInstance198
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance199 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal4"))
                                                                                                                    .addChild(ProtoInstance202 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middle_middle_2")));
ProtoInstance199
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance199
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_interphalangeal_3"));
ProtoInstance199
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.193900004029274 0.704200029373169 -0.0432000011205673"));
ProtoInstance199
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance200 = new ProtoInstance().setName("Segment").setDEF("hanim_r_carpal_distal_phalanx4")));
ProtoInstance200
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_3"));
ProtoInstance200
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance201 = new ProtoInstance().setName("Site").setDEF("hanim_r_carpal_distal_phalanx_3_tip_2")));
ProtoInstance201
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_3_tip"));
ProtoInstance201
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884"));
ProtoInstance202
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_middle_middle"));
ProtoInstance203
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_middle_proximal"));
ProtoInstance204
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_middle_metacarpal"));
ProtoInstance205
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance205
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpometacarpal_4"));
ProtoInstance205
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.195099994540215 0.804899990558624 -0.0732000023126602"));
ProtoInstance205
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance206 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metacarpophalangeal5"))
                                                                                                            .addChild(ProtoInstance213 = new ProtoInstance().setName("Segment").setDEF("hanim_r_ring_metacarpal_2")));
ProtoInstance206
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance206
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpophalangeal_4"));
ProtoInstance206
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("-0.195099994540215 0.784500002861023 -0.0732000023126602"));
ProtoInstance206
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance207 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal5"))
                                                                                                                .addChild(ProtoInstance212 = new ProtoInstance().setName("Segment").setDEF("hanim_r_ring_proximal_2")));
ProtoInstance207
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance207
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_proximal_interphalangeal_4"));
ProtoInstance207
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.19200000166893 0.731800019741058 -0.0715999975800514"));
ProtoInstance207
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance208 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal5"))
                                                                                                                    .addChild(ProtoInstance211 = new ProtoInstance().setName("Segment").setDEF("hanim_r_ring_middle_2")));
ProtoInstance208
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance208
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_interphalangeal_4"));
ProtoInstance208
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.190799996256828 0.70770001411438 -0.0706000030040741"));
ProtoInstance208
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance209 = new ProtoInstance().setName("Segment").setDEF("hanim_r_carpal_distal_phalanx5")));
ProtoInstance209
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_4"));
ProtoInstance209
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance210 = new ProtoInstance().setName("Site").setDEF("hanim_r_carpal_distal_phalanx_4_tip_2")));
ProtoInstance210
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_4_tip"));
ProtoInstance210
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.193399995565414 0.677799999713898 -0.069300003349781"));
ProtoInstance211
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_ring_middle"));
ProtoInstance212
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_ring_proximal"));
ProtoInstance213
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_ring_metacarpal"));
ProtoInstance214
                                                                                                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance214
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpometacarpal_5"));
ProtoInstance214
                                                                                                          .addFieldValue(new fieldValue().setName("center").setValue("-0.1925999969244 0.809599995613098 -0.0974999964237213"));
ProtoInstance214
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance215 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metacarpophalangeal6"))
                                                                                                            .addChild(ProtoInstance222 = new ProtoInstance().setName("Segment").setDEF("hanim_r_pinky_metacarpal_2")));
ProtoInstance215
                                                                                                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance215
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpophalangeal_5"));
ProtoInstance215
                                                                                                              .addFieldValue(new fieldValue().setName("center").setValue("-0.1925999969244 0.789600014686584 -0.0974999964237213"));
ProtoInstance215
                                                                                                              .addFieldValue(new fieldValue().setName("children")
                                                                                                                .addChild(ProtoInstance216 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal6"))
                                                                                                                .addChild(ProtoInstance221 = new ProtoInstance().setName("Segment").setDEF("hanim_r_pinky_proximal_2")));
ProtoInstance216
                                                                                                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance216
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_proximal_interphalangeal_5"));
ProtoInstance216
                                                                                                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.190200001001358 0.748300015926361 -0.0962999984622002"));
ProtoInstance216
                                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                                    .addChild(ProtoInstance217 = new ProtoInstance().setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal6"))
                                                                                                                    .addChild(ProtoInstance220 = new ProtoInstance().setName("Segment").setDEF("hanim_r_pinky_middle_2")));
ProtoInstance217
                                                                                                                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance217
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_interphalangeal_5"));
ProtoInstance217
                                                                                                                      .addFieldValue(new fieldValue().setName("center").setValue("-0.190799996256828 0.754000008106232 -0.096000000834465"));
ProtoInstance217
                                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                                        .addChild(ProtoInstance218 = new ProtoInstance().setName("Segment").setDEF("hanim_r_carpal_distal_phalanx6")));
ProtoInstance218
                                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_5"));
ProtoInstance218
                                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                                            .addChild(ProtoInstance219 = new ProtoInstance().setName("Site").setDEF("hanim_r_carpal_distal_phalanx_5_tip_2")));
ProtoInstance219
                                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_carpal_distal_phalanx_5_tip"));
ProtoInstance219
                                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.193800002336502 0.703499972820282 -0.0948999971151352"));
ProtoInstance220
                                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_pinky_middle"));
ProtoInstance221
                                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_pinky_proximal"));
ProtoInstance222
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_pinky_metacarpal"));
ProtoInstance223
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance223
                                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                                            .addChild(ProtoInstance224 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx3"))
                                                                                                            .addChild(ProtoInstance225 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid_2"))
                                                                                                            .addChild(ProtoInstance226 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx6")));
ProtoInstance224
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance224
                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593"));
ProtoInstance225
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance225
                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673"));
ProtoInstance226
                                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance226
                                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.192900002002716 0.788999974727631 -0.10639999806881"));
ProtoInstance227
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance227
                                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                                        .addChild(ProtoInstance228 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid_2"))
                                                                                                        .addChild(ProtoInstance229 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon_2"))
                                                                                                        .addChild(ProtoInstance230 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles_2"))
                                                                                                        .addChild(ProtoInstance231 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale_2")));
ProtoInstance228
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance228
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792"));
ProtoInstance229
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance229
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.190699994564056 1.14049994945526 -0.106499999761581"));
ProtoInstance230
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance230
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.167999997735024 1.12979996204376 -0.106200002133846"));
ProtoInstance231
                                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance231
                                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.212999999523163 1.130499958992 -0.109099999070168"));
ProtoInstance232
                                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance232
                                                                                                  .addFieldValue(new fieldValue().setName("children")
                                                                                                    .addChild(ProtoInstance233 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles_2")));
ProtoInstance233
                                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance233
                                                                                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.222399994730949 1.15170001983643 -0.103299997746944"));
ProtoInstance234
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_scapula"));
ProtoInstance235
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_clavicle"));
ProtoInstance235
                                                                                          .addFieldValue(new fieldValue().setName("children")
                                                                                            .addChild(ProtoInstance236 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale_2"))
                                                                                            .addChild(ProtoInstance237 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion_2"))
                                                                                            .addChild(ProtoInstance238 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal_2"))
                                                                                            .addChild(ProtoInstance239 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal_2")));
ProtoInstance236
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance236
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303"));
ProtoInstance237
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance237
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954"));
ProtoInstance238
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance238
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444"));
ProtoInstance239
                                                                                              .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance239
                                                                                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468"));
ProtoInstance240
                                                                                      .addFieldValue(new fieldValue().setName("name").setValue("t1"));
ProtoInstance240
                                                                                      .addFieldValue(new fieldValue().setName("children")
                                                                                        .addChild(ProtoInstance241 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale_2"))
                                                                                        .addChild(ProtoInstance242 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale_2")));
ProtoInstance241
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance241
                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.47140002250671 0.0551000013947487"));
ProtoInstance242
                                                                                          .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance242
                                                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975"));
ProtoInstance243
                                                                                  .addFieldValue(new fieldValue().setName("name").setValue("t2"));
ProtoInstance244
                                                                              .addFieldValue(new fieldValue().setName("name").setValue("t3"));
ProtoInstance245
                                                                          .addFieldValue(new fieldValue().setName("name").setValue("t4"));
ProtoInstance246
                                                                      .addFieldValue(new fieldValue().setName("name").setValue("t5"));
ProtoInstance247
                                                                  .addFieldValue(new fieldValue().setName("name").setValue("t6"));
ProtoInstance248
                                                              .addFieldValue(new fieldValue().setName("name").setValue("t7"));
ProtoInstance249
                                                          .addFieldValue(new fieldValue().setName("name").setValue("t8"));
ProtoInstance250
                                                      .addFieldValue(new fieldValue().setName("name").setValue("t9"));
ProtoInstance250
                                                      .addFieldValue(new fieldValue().setName("children")
                                                        .addChild(ProtoInstance251 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion_2"))
                                                        .addChild(ProtoInstance252 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion_2")));
ProtoInstance251
                                                          .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance251
                                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.0736000016331673 1.33850002288818 0.121699996292591"));
ProtoInstance252
                                                          .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance252
                                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0917999967932701 1.33819997310638 0.119199998676777"));
ProtoInstance253
                                                  .addFieldValue(new fieldValue().setName("name").setValue("t10"));
ProtoInstance253
                                                  .addFieldValue(new fieldValue().setName("children")
                                                    .addChild(ProtoInstance254 = new ProtoInstance().setName("Site").setDEF("hanim_substernale_2")));
ProtoInstance254
                                                      .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance254
                                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461936 1.29949998855591 0.114699997007847"));
ProtoInstance255
                                              .addFieldValue(new fieldValue().setName("name").setValue("t11"));
ProtoInstance256
                                          .addFieldValue(new fieldValue().setName("name").setValue("t12"));
ProtoInstance257
                                      .addFieldValue(new fieldValue().setName("name").setValue("l1"));
ProtoInstance258
                                  .addFieldValue(new fieldValue().setName("name").setValue("l2"));
ProtoInstance258
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance259 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10_2"))
                                    .addChild(ProtoInstance260 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10_2"))
                                    .addChild(ProtoInstance261 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back_2")));
ProtoInstance259
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance259
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.0710999965667725 1.19410002231598 0.101599998772144"));
ProtoInstance260
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance260
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0870999991893768 1.19249999523163 0.099200002849102"));
ProtoInstance261
                                      .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance261
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00490000005811453 1.19079995155334 -0.111299999058247"));
ProtoInstance262
                              .addFieldValue(new fieldValue().setName("name").setValue("l3"));
ProtoInstance263
                          .addFieldValue(new fieldValue().setName("name").setValue("l4"));
ProtoInstance264
                      .addFieldValue(new fieldValue().setName("name").setValue("l5"));
ProtoInstance264
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance265 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior_2"))
                        .addChild(ProtoInstance266 = new ProtoInstance().setName("Site").setDEF("hanim_navel_2")));
ProtoInstance265
                          .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance265
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165535 1.09150004386902 -0.109099999070168"));
ProtoInstance266
                          .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance266
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00689999992027879 1.09660005569458 0.101700000464916"));
ProtoInstance267
                  .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {" HANIM 200x Default Joint Centers, Level-Of-Articulation 4 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.25f,1.60000002384186f,0.75f});
  }
}
}
