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
public class LOA1ExampleSourceInVRML {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LOA1ExampleSourceInVRML().initialize().toFileJSON("../data/LOA1ExampleSourceInVRML.new.json");
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
ProtoInstance ProtoInstance535 = null;
ProtoInstance ProtoInstance536 = null;
ProtoInstance ProtoInstance537 = null;
ProtoInstance ProtoInstance538 = null;
ProtoInstance ProtoInstance539 = null;
ProtoInstance ProtoInstance540 = null;
ProtoInstance ProtoInstance541 = null;
ProtoInstance ProtoInstance542 = null;
ProtoInstance ProtoInstance543 = null;
ProtoInstance ProtoInstance544 = null;
ProtoInstance ProtoInstance545 = null;
ProtoInstance ProtoInstance546 = null;
ProtoInstance ProtoInstance547 = null;
ProtoInstance ProtoInstance548 = null;
ProtoInstance ProtoInstance549 = null;
ProtoInstance ProtoInstance550 = null;
ProtoInstance ProtoInstance551 = null;
ProtoInstance ProtoInstance552 = null;
ProtoInstance ProtoInstance553 = null;
ProtoInstance ProtoInstance554 = null;
ProtoInstance ProtoInstance555 = null;
ProtoInstance ProtoInstance556 = null;
ProtoInstance ProtoInstance557 = null;
ProtoInstance ProtoInstance558 = null;
ProtoInstance ProtoInstance559 = null;
ProtoInstance ProtoInstance560 = null;
ProtoInstance ProtoInstance561 = null;
ProtoInstance ProtoInstance562 = null;
ProtoInstance ProtoInstance563 = null;
ProtoInstance ProtoInstance564 = null;
ProtoInstance ProtoInstance565 = null;
ProtoInstance ProtoInstance566 = null;
ProtoInstance ProtoInstance567 = null;
ProtoInstance ProtoInstance568 = null;
ProtoInstance ProtoInstance569 = null;
ProtoInstance ProtoInstance570 = null;
ProtoInstance ProtoInstance571 = null;
ProtoInstance ProtoInstance572 = null;
ProtoInstance ProtoInstance573 = null;
ProtoInstance ProtoInstance574 = null;
ProtoInstance ProtoInstance575 = null;
ProtoInstance ProtoInstance576 = null;
ProtoInstance ProtoInstance577 = null;
ProtoInstance ProtoInstance578 = null;
ProtoInstance ProtoInstance579 = null;
ProtoInstance ProtoInstance580 = null;
ProtoInstance ProtoInstance581 = null;
ProtoInstance ProtoInstance582 = null;
ProtoInstance ProtoInstance583 = null;
ProtoInstance ProtoInstance584 = null;
ProtoInstance ProtoInstance585 = null;
ProtoInstance ProtoInstance586 = null;
ProtoInstance ProtoInstance587 = null;
ProtoInstance ProtoInstance588 = null;
ProtoInstance ProtoInstance589 = null;
ProtoInstance ProtoInstance590 = null;
ProtoInstance ProtoInstance591 = null;
ProtoInstance ProtoInstance592 = null;
ProtoInstance ProtoInstance593 = null;
ProtoInstance ProtoInstance594 = null;
ProtoInstance ProtoInstance595 = null;
ProtoInstance ProtoInstance596 = null;
ProtoInstance ProtoInstance597 = null;
ProtoInstance ProtoInstance598 = null;
ProtoInstance ProtoInstance599 = null;
ProtoInstance ProtoInstance600 = null;
ProtoInstance ProtoInstance601 = null;
ProtoInstance ProtoInstance602 = null;
ProtoInstance ProtoInstance603 = null;
ProtoInstance ProtoInstance604 = null;
ProtoInstance ProtoInstance605 = null;
ProtoInstance ProtoInstance606 = null;
ProtoInstance ProtoInstance607 = null;
ProtoInstance ProtoInstance608 = null;
ProtoInstance ProtoInstance609 = null;
ProtoInstance ProtoInstance610 = null;
ProtoInstance ProtoInstance611 = null;
ProtoInstance ProtoInstance612 = null;
ProtoInstance ProtoInstance613 = null;
ProtoInstance ProtoInstance614 = null;
ProtoInstance ProtoInstance615 = null;
ProtoInstance ProtoInstance616 = null;
ProtoInstance ProtoInstance617 = null;
ProtoInstance ProtoInstance618 = null;
ProtoInstance ProtoInstance619 = null;
ProtoInstance ProtoInstance620 = null;
ProtoInstance ProtoInstance621 = null;
ProtoInstance ProtoInstance622 = null;
ProtoInstance ProtoInstance623 = null;
ProtoInstance ProtoInstance624 = null;
ProtoInstance ProtoInstance625 = null;
ProtoInstance ProtoInstance626 = null;
ProtoInstance ProtoInstance627 = null;
ProtoInstance ProtoInstance628 = null;
ProtoInstance ProtoInstance629 = null;
ProtoInstance ProtoInstance630 = null;
ProtoInstance ProtoInstance631 = null;
ProtoInstance ProtoInstance632 = null;
ProtoInstance ProtoInstance633 = null;
ProtoInstance ProtoInstance634 = null;
ProtoInstance ProtoInstance635 = null;
ProtoInstance ProtoInstance636 = null;
ProtoInstance ProtoInstance637 = null;
ProtoInstance ProtoInstance638 = null;
ProtoInstance ProtoInstance639 = null;
ProtoInstance ProtoInstance640 = null;
ProtoInstance ProtoInstance641 = null;
ProtoInstance ProtoInstance642 = null;
ProtoInstance ProtoInstance643 = null;
ProtoInstance ProtoInstance644 = null;
ProtoInstance ProtoInstance645 = null;
ProtoInstance ProtoInstance646 = null;
ProtoInstance ProtoInstance647 = null;
ProtoInstance ProtoInstance648 = null;
ProtoInstance ProtoInstance649 = null;
ProtoInstance ProtoInstance650 = null;
ProtoInstance ProtoInstance651 = null;
ProtoInstance ProtoInstance652 = null;
ProtoInstance ProtoInstance653 = null;
ProtoInstance ProtoInstance654 = null;
ProtoInstance ProtoInstance655 = null;
ProtoInstance ProtoInstance656 = null;
ProtoInstance ProtoInstance657 = null;
ProtoInstance ProtoInstance658 = null;
ProtoInstance ProtoInstance659 = null;
ProtoInstance ProtoInstance660 = null;
ProtoInstance ProtoInstance661 = null;
ProtoInstance ProtoInstance662 = null;
ProtoInstance ProtoInstance663 = null;
ProtoInstance ProtoInstance664 = null;
ProtoInstance ProtoInstance665 = null;
ProtoInstance ProtoInstance666 = null;
ProtoInstance ProtoInstance667 = null;
ProtoInstance ProtoInstance668 = null;
ProtoInstance ProtoInstance669 = null;
ProtoInstance ProtoInstance670 = null;
ProtoInstance ProtoInstance671 = null;
ProtoInstance ProtoInstance672 = null;
ProtoInstance ProtoInstance673 = null;
ProtoInstance ProtoInstance674 = null;
ProtoInstance ProtoInstance675 = null;
ProtoInstance ProtoInstance676 = null;
ProtoInstance ProtoInstance677 = null;
ProtoInstance ProtoInstance678 = null;
ProtoInstance ProtoInstance679 = null;
ProtoInstance ProtoInstance680 = null;
ProtoInstance ProtoInstance681 = null;
ProtoInstance ProtoInstance682 = null;
ProtoInstance ProtoInstance683 = null;
ProtoInstance ProtoInstance684 = null;
ProtoInstance ProtoInstance685 = null;
ProtoInstance ProtoInstance686 = null;
ProtoInstance ProtoInstance687 = null;
ProtoInstance ProtoInstance688 = null;
ProtoInstance ProtoInstance689 = null;
ProtoInstance ProtoInstance690 = null;
ProtoInstance ProtoInstance691 = null;
ProtoInstance ProtoInstance692 = null;
ProtoInstance ProtoInstance693 = null;
ProtoInstance ProtoInstance694 = null;
ProtoInstance ProtoInstance695 = null;
ProtoInstance ProtoInstance696 = null;
ProtoInstance ProtoInstance697 = null;
ProtoInstance ProtoInstance698 = null;
ProtoInstance ProtoInstance699 = null;
ProtoInstance ProtoInstance700 = null;
ProtoInstance ProtoInstance701 = null;
ProtoInstance ProtoInstance702 = null;
ProtoInstance ProtoInstance703 = null;
ProtoInstance ProtoInstance704 = null;
ProtoInstance ProtoInstance705 = null;
ProtoInstance ProtoInstance706 = null;
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
        .addMeta(new meta().setName("source").setContent("LOA1ExampleSourceInVRML.wrl")))
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
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("center").setProtoField("center"))
                .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))))
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
          .addChild(new WorldInfo().setTitle("HANIM 200x Default Joint Centers, LOA&#8209;1").setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString0().getArray()))))
        .addChild(new NavigationInfo().setAvatarSize(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat1().getArray())).setSpeed(1.5f)))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("humanoidBody")
            .addChild(ProtoInstance1 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("joints")
            .addChild(ProtoInstance118 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root"))
            .addChild(ProtoInstance235 = new ProtoInstance().setName("Joint").setDEF("hanim_sacroiliac"))
            .addChild(ProtoInstance275 = new ProtoInstance().setName("Joint").setDEF("hanim_l_hip"))
            .addChild(ProtoInstance294 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee"))
            .addChild(ProtoInstance308 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural"))
            .addChild(ProtoInstance320 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
            .addChild(ProtoInstance326 = new ProtoInstance().setName("Joint").setDEF("hanim_r_hip"))
            .addChild(ProtoInstance345 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee"))
            .addChild(ProtoInstance359 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural"))
            .addChild(ProtoInstance371 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
            .addChild(ProtoInstance377 = new ProtoInstance().setName("Joint").setDEF("hanim_vl5"))
            .addChild(ProtoInstance443 = new ProtoInstance().setName("Joint").setDEF("hanim_skullbase"))
            .addChild(ProtoInstance455 = new ProtoInstance().setName("Joint").setDEF("hanim_l_shoulder"))
            .addChild(ProtoInstance471 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow"))
            .addChild(ProtoInstance484 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal"))
            .addChild(ProtoInstance491 = new ProtoInstance().setName("Joint").setDEF("hanim_r_shoulder"))
            .addChild(ProtoInstance507 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow"))
            .addChild(ProtoInstance520 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("segments")
            .addChild(ProtoInstance527 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal"))
            .addChild(ProtoInstance532 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot"))
            .addChild(ProtoInstance537 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf"))
            .addChild(ProtoInstance538 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh"))
            .addChild(ProtoInstance542 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal"))
            .addChild(ProtoInstance547 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot"))
            .addChild(ProtoInstance552 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf"))
            .addChild(ProtoInstance553 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh"))
            .addChild(ProtoInstance557 = new ProtoInstance().setName("Segment").setDEF("hanim_pelvis"))
            .addChild(ProtoInstance558 = new ProtoInstance().setName("Segment").setDEF("hanim_skull"))
            .addChild(ProtoInstance569 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand"))
            .addChild(ProtoInstance575 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm"))
            .addChild(ProtoInstance580 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm"))
            .addChild(ProtoInstance582 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand"))
            .addChild(ProtoInstance588 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm"))
            .addChild(ProtoInstance593 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm"))
            .addChild(ProtoInstance595 = new ProtoInstance().setName("Segment").setDEF("hanim_l5"))
            .addChild(ProtoInstance616 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("sites")
            .addChild(ProtoInstance626 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
            .addChild(ProtoInstance627 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
            .addChild(ProtoInstance628 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
            .addChild(ProtoInstance629 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2"))
            .addChild(ProtoInstance630 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
            .addChild(ProtoInstance631 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
            .addChild(ProtoInstance632 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
            .addChild(ProtoInstance633 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior"))
            .addChild(ProtoInstance634 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
            .addChild(ProtoInstance635 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
            .addChild(ProtoInstance636 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles"))
            .addChild(ProtoInstance637 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
            .addChild(ProtoInstance638 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
            .addChild(ProtoInstance639 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
            .addChild(ProtoInstance640 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2"))
            .addChild(ProtoInstance641 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
            .addChild(ProtoInstance642 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
            .addChild(ProtoInstance643 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
            .addChild(ProtoInstance644 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior"))
            .addChild(ProtoInstance645 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
            .addChild(ProtoInstance646 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
            .addChild(ProtoInstance647 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles"))
            .addChild(ProtoInstance648 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
            .addChild(ProtoInstance649 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
            .addChild(ProtoInstance650 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
            .addChild(ProtoInstance651 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
            .addChild(ProtoInstance652 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
            .addChild(ProtoInstance653 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
            .addChild(ProtoInstance654 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
            .addChild(ProtoInstance655 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
            .addChild(ProtoInstance656 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
            .addChild(ProtoInstance657 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale"))
            .addChild(ProtoInstance658 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
            .addChild(ProtoInstance659 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
            .addChild(ProtoInstance660 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
            .addChild(ProtoInstance661 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
            .addChild(ProtoInstance662 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5"))
            .addChild(ProtoInstance663 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
            .addChild(ProtoInstance664 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
            .addChild(ProtoInstance665 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
            .addChild(ProtoInstance666 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale"))
            .addChild(ProtoInstance667 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles"))
            .addChild(ProtoInstance668 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
            .addChild(ProtoInstance669 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
            .addChild(ProtoInstance670 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
            .addChild(ProtoInstance671 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
            .addChild(ProtoInstance672 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5"))
            .addChild(ProtoInstance673 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
            .addChild(ProtoInstance674 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
            .addChild(ProtoInstance675 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
            .addChild(ProtoInstance676 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale"))
            .addChild(ProtoInstance677 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles"))
            .addChild(ProtoInstance678 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
            .addChild(ProtoInstance679 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
            .addChild(ProtoInstance680 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
            .addChild(ProtoInstance681 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
            .addChild(ProtoInstance682 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
            .addChild(ProtoInstance683 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
            .addChild(ProtoInstance684 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
            .addChild(ProtoInstance685 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
            .addChild(ProtoInstance686 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
            .addChild(ProtoInstance687 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
            .addChild(ProtoInstance688 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
            .addChild(ProtoInstance689 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
            .addChild(ProtoInstance690 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
            .addChild(ProtoInstance691 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
            .addChild(ProtoInstance692 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
            .addChild(ProtoInstance693 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
            .addChild(ProtoInstance694 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
            .addChild(ProtoInstance695 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
            .addChild(ProtoInstance696 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
            .addChild(ProtoInstance697 = new ProtoInstance().setName("Site").setDEF("hanim_navel"))
            .addChild(ProtoInstance698 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
            .addChild(ProtoInstance699 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
            .addChild(ProtoInstance700 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
            .addChild(ProtoInstance701 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
            .addChild(ProtoInstance702 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
            .addChild(ProtoInstance703 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
            .addChild(ProtoInstance704 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
            .addChild(ProtoInstance705 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
            .addChild(ProtoInstance706 = new ProtoInstance().setName("Site").setDEF("hanim_crotch")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.8240000009536743 0.027699999511241913"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance2 = new ProtoInstance().setName("Joint").setDEF("hanim_sacroiliac"))
                .addChild(ProtoInstance42 = new ProtoInstance().setName("Joint").setDEF("hanim_vl5"))
                .addChild(ProtoInstance108 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("center").setValue("0 0.914900004863739 0.0015999999595806003"));
ProtoInstance2
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance3 = new ProtoInstance().setName("Joint").setDEF("hanim_l_hip"))
                    .addChild(ProtoInstance22 = new ProtoInstance().setName("Joint").setDEF("hanim_r_hip"))
                    .addChild(ProtoInstance41 = new ProtoInstance().setName("Segment").setDEF("hanim_pelvis")));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("name").setValue("l_hip"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance3
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance4 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee"))
                        .addChild(ProtoInstance18 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance4
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance5 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural"))
                            .addChild(ProtoInstance17 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance5
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance6 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                                .addChild(ProtoInstance12 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance6
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance7 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance7
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance7
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance8 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                                        .addChild(ProtoInstance9 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance10 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance11 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance8
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance8
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance9
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance9
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance10
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance10
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance11
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance11
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance12
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance12
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance13 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                                    .addChild(ProtoInstance14 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                                    .addChild(ProtoInstance15 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                                    .addChild(ProtoInstance16 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance13
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance13
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance14
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance14
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance15
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance15
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance16
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance16
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance17
                              .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance18
                          .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance18
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance19 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                            .addChild(ProtoInstance20 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance21 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance19
                              .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance19
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance20
                              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance20
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance21
                              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance21
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("name").setValue("r_hip"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance22
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance23 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee"))
                        .addChild(ProtoInstance37 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance23
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance23
                          .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance23
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance23
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance24 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural"))
                            .addChild(ProtoInstance36 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance24
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance24
                              .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance24
                              .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance24
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance25 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                                .addChild(ProtoInstance31 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance25
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance25
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance25
                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance25
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance26 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance26
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance26
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance27 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                                        .addChild(ProtoInstance28 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance29 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance30 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance27
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance27
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance28
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance28
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance29
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance29
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance30
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance30
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance31
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance31
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance32 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                                    .addChild(ProtoInstance33 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                                    .addChild(ProtoInstance34 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                                    .addChild(ProtoInstance35 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance32
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance32
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance33
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance33
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance34
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance34
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance35
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance35
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance36
                              .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance37
                          .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance37
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance38 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                            .addChild(ProtoInstance39 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance40 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance38
                              .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance38
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance39
                              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance39
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance40
                              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance40
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance41
                      .addFieldValue(new fieldValue().setName("name").setValue("pelvis"));
ProtoInstance42
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance42
                  .addFieldValue(new fieldValue().setName("name").setValue("vl5"));
ProtoInstance42
                  .addFieldValue(new fieldValue().setName("center").setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836"));
ProtoInstance42
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance43 = new ProtoInstance().setName("Joint").setDEF("hanim_skullbase"))
                    .addChild(ProtoInstance55 = new ProtoInstance().setName("Joint").setDEF("hanim_l_shoulder"))
                    .addChild(ProtoInstance71 = new ProtoInstance().setName("Joint").setDEF("hanim_r_shoulder"))
                    .addChild(ProtoInstance87 = new ProtoInstance().setName("Segment").setDEF("hanim_l5")));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("name").setValue("skullbase"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance43
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance44 = new ProtoInstance().setName("Segment").setDEF("hanim_skull")));
ProtoInstance44
                          .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance44
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance45 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                            .addChild(ProtoInstance46 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                            .addChild(ProtoInstance47 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                            .addChild(ProtoInstance48 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                            .addChild(ProtoInstance49 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                            .addChild(ProtoInstance50 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                            .addChild(ProtoInstance51 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                            .addChild(ProtoInstance52 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                            .addChild(ProtoInstance53 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                            .addChild(ProtoInstance54 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale")));
ProtoInstance45
                              .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance45
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance46
                              .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance46
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance47
                              .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance47
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance48
                              .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance48
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance49
                              .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance49
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance50
                              .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance50
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance51
                              .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance51
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance52
                              .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance52
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance53
                              .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance53
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance54
                              .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance54
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance55
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance56 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow"))
                        .addChild(ProtoInstance69 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance56
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance56
                          .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance56
                          .addFieldValue(new fieldValue().setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance56
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance57 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal"))
                            .addChild(ProtoInstance64 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance57
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance57
                              .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance57
                              .addFieldValue(new fieldValue().setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance57
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance58 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance58
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance58
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance59 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                                    .addChild(ProtoInstance60 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance61 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                                    .addChild(ProtoInstance62 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                                    .addChild(ProtoInstance63 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance59
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance59
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance60
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance60
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance61
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance61
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance62
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance62
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance63
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance63
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance64
                              .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance64
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance65 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                                .addChild(ProtoInstance66 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                                .addChild(ProtoInstance67 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance68 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance65
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance65
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance66
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance66
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance67
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance67
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance68
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance68
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance69
                          .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance69
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance70 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance70
                              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance70
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance71
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance72 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow"))
                        .addChild(ProtoInstance85 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance72
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance72
                          .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance72
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance72
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance73 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal"))
                            .addChild(ProtoInstance80 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance73
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance73
                              .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance73
                              .addFieldValue(new fieldValue().setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance73
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance74 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance74
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance74
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance75 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                                    .addChild(ProtoInstance76 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance77 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                                    .addChild(ProtoInstance78 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                                    .addChild(ProtoInstance79 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance75
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance75
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance76
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance76
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance77
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance77
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance78
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance78
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance79
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance79
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance80
                              .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance80
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance81 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                                .addChild(ProtoInstance82 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                                .addChild(ProtoInstance83 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance84 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance81
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance81
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance82
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance82
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance83
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance83
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance84
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance84
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance85
                          .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance85
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance86 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance86
                              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance86
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance87
                      .addFieldValue(new fieldValue().setName("name").setValue("l5"));
ProtoInstance87
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance88 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                        .addChild(ProtoInstance89 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                        .addChild(ProtoInstance90 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                        .addChild(ProtoInstance91 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                        .addChild(ProtoInstance92 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                        .addChild(ProtoInstance93 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                        .addChild(ProtoInstance94 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                        .addChild(ProtoInstance95 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                        .addChild(ProtoInstance96 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                        .addChild(ProtoInstance97 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                        .addChild(ProtoInstance98 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                        .addChild(ProtoInstance99 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                        .addChild(ProtoInstance100 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                        .addChild(ProtoInstance101 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                        .addChild(ProtoInstance102 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                        .addChild(ProtoInstance103 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                        .addChild(ProtoInstance104 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                        .addChild(ProtoInstance105 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                        .addChild(ProtoInstance106 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                        .addChild(ProtoInstance107 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance88
                          .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance88
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance89
                          .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance89
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance90
                          .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance90
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance91
                          .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance91
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance92
                          .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance92
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance93
                          .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance93
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance94
                          .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance94
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance95
                          .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance95
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance96
                          .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance96
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance97
                          .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance97
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance98
                          .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance98
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance99
                          .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance99
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance100
                          .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance100
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance101
                          .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance101
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance102
                          .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance102
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance103
                          .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance103
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance104
                          .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance104
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance105
                          .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance105
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance106
                          .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance106
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance107
                          .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance107
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance108
                  .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance108
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance109 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
                    .addChild(ProtoInstance110 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
                    .addChild(ProtoInstance111 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
                    .addChild(ProtoInstance112 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
                    .addChild(ProtoInstance113 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
                    .addChild(ProtoInstance114 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
                    .addChild(ProtoInstance115 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
                    .addChild(ProtoInstance116 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
                    .addChild(ProtoInstance117 = new ProtoInstance().setName("Site").setDEF("hanim_crotch")));
ProtoInstance109
                      .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance109
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance110
                      .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance110
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance111
                      .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance111
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance112
                      .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance112
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance113
                      .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance113
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance114
                      .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance114
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance115
                      .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance115
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance116
                      .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance116
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance117
                      .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance117
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance118
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance118
              .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance118
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.8240000009536743 0.027699999511241913"));
ProtoInstance118
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance119 = new ProtoInstance().setName("Joint").setDEF("hanim_sacroiliac"))
                .addChild(ProtoInstance159 = new ProtoInstance().setName("Joint").setDEF("hanim_vl5"))
                .addChild(ProtoInstance225 = new ProtoInstance().setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance119
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance119
                  .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"));
ProtoInstance119
                  .addFieldValue(new fieldValue().setName("center").setValue("0 0.914900004863739 0.0015999999595806003"));
ProtoInstance119
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance120 = new ProtoInstance().setName("Joint").setDEF("hanim_l_hip"))
                    .addChild(ProtoInstance139 = new ProtoInstance().setName("Joint").setDEF("hanim_r_hip"))
                    .addChild(ProtoInstance158 = new ProtoInstance().setName("Segment").setDEF("hanim_pelvis")));
ProtoInstance120
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance120
                      .addFieldValue(new fieldValue().setName("name").setValue("l_hip"));
ProtoInstance120
                      .addFieldValue(new fieldValue().setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance120
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance121 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee"))
                        .addChild(ProtoInstance135 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance121
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance121
                          .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance121
                          .addFieldValue(new fieldValue().setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance121
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance122 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural"))
                            .addChild(ProtoInstance134 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance122
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance122
                              .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance122
                              .addFieldValue(new fieldValue().setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance122
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance123 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                                .addChild(ProtoInstance129 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance123
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance123
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance123
                                  .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance123
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance124 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance124
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance124
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance125 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                                        .addChild(ProtoInstance126 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance127 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance128 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance125
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance125
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance126
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance126
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance127
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance127
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance128
                                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance128
                                          .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance129
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance129
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance130 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                                    .addChild(ProtoInstance131 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                                    .addChild(ProtoInstance132 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                                    .addChild(ProtoInstance133 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance130
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance130
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance131
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance131
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance132
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance132
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance133
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance133
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance134
                              .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance135
                          .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance135
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance136 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                            .addChild(ProtoInstance137 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance138 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance136
                              .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance136
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance137
                              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance137
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance138
                              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance138
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance139
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance139
                      .addFieldValue(new fieldValue().setName("name").setValue("r_hip"));
ProtoInstance139
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance139
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance140 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee"))
                        .addChild(ProtoInstance154 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance140
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance140
                          .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance140
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance140
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance141 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural"))
                            .addChild(ProtoInstance153 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance141
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance141
                              .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance141
                              .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance141
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance142 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                                .addChild(ProtoInstance148 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance142
                                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance142
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance142
                                  .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance142
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance143 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance143
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance143
                                      .addFieldValue(new fieldValue().setName("children")
                                        .addChild(ProtoInstance144 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                                        .addChild(ProtoInstance145 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance146 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance147 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance144
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance144
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance145
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance145
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance146
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance146
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance147
                                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance147
                                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance148
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance148
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance149 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                                    .addChild(ProtoInstance150 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                                    .addChild(ProtoInstance151 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                                    .addChild(ProtoInstance152 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance149
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance149
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance150
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance150
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance151
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance151
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance152
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance152
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance153
                              .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance154
                          .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance154
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance155 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                            .addChild(ProtoInstance156 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance157 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance155
                              .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance155
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance156
                              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance156
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance157
                              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance157
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance158
                      .addFieldValue(new fieldValue().setName("name").setValue("pelvis"));
ProtoInstance159
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance159
                  .addFieldValue(new fieldValue().setName("name").setValue("vl5"));
ProtoInstance159
                  .addFieldValue(new fieldValue().setName("center").setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836"));
ProtoInstance159
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance160 = new ProtoInstance().setName("Joint").setDEF("hanim_skullbase"))
                    .addChild(ProtoInstance172 = new ProtoInstance().setName("Joint").setDEF("hanim_l_shoulder"))
                    .addChild(ProtoInstance188 = new ProtoInstance().setName("Joint").setDEF("hanim_r_shoulder"))
                    .addChild(ProtoInstance204 = new ProtoInstance().setName("Segment").setDEF("hanim_l5")));
ProtoInstance160
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance160
                      .addFieldValue(new fieldValue().setName("name").setValue("skullbase"));
ProtoInstance160
                      .addFieldValue(new fieldValue().setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance160
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance161 = new ProtoInstance().setName("Segment").setDEF("hanim_skull")));
ProtoInstance161
                          .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance161
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance162 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                            .addChild(ProtoInstance163 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                            .addChild(ProtoInstance164 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                            .addChild(ProtoInstance165 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                            .addChild(ProtoInstance166 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                            .addChild(ProtoInstance167 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                            .addChild(ProtoInstance168 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                            .addChild(ProtoInstance169 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                            .addChild(ProtoInstance170 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                            .addChild(ProtoInstance171 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale")));
ProtoInstance162
                              .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance162
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance163
                              .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance163
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance164
                              .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance164
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance165
                              .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance165
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance166
                              .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance166
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance167
                              .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance167
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance168
                              .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance168
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance169
                              .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance169
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance170
                              .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance170
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance171
                              .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance171
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance172
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance172
                      .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"));
ProtoInstance172
                      .addFieldValue(new fieldValue().setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance172
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance173 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow"))
                        .addChild(ProtoInstance186 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance173
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance173
                          .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance173
                          .addFieldValue(new fieldValue().setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance173
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance174 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal"))
                            .addChild(ProtoInstance181 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance174
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance174
                              .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance174
                              .addFieldValue(new fieldValue().setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance174
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance175 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance175
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance175
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance176 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                                    .addChild(ProtoInstance177 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance178 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                                    .addChild(ProtoInstance179 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                                    .addChild(ProtoInstance180 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance176
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance176
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance177
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance177
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance178
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance178
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance179
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance179
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance180
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance180
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance181
                              .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance181
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance182 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                                .addChild(ProtoInstance183 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                                .addChild(ProtoInstance184 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance185 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance182
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance182
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance183
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance183
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance184
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance184
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance185
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance185
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance186
                          .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance186
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance187 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance187
                              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance187
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance188
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance188
                      .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"));
ProtoInstance188
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance188
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance189 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow"))
                        .addChild(ProtoInstance202 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance189
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance189
                          .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance189
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance189
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance190 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal"))
                            .addChild(ProtoInstance197 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance190
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance190
                              .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance190
                              .addFieldValue(new fieldValue().setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance190
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance191 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance191
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance191
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance192 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                                    .addChild(ProtoInstance193 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance194 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                                    .addChild(ProtoInstance195 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                                    .addChild(ProtoInstance196 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance192
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance192
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance193
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance193
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance194
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance194
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance195
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance195
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance196
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance196
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance197
                              .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance197
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance198 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                                .addChild(ProtoInstance199 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                                .addChild(ProtoInstance200 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance201 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance198
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance198
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance199
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance199
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance200
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance200
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance201
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance201
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance202
                          .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance202
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance203 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance203
                              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance203
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance204
                      .addFieldValue(new fieldValue().setName("name").setValue("l5"));
ProtoInstance204
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance205 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                        .addChild(ProtoInstance206 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                        .addChild(ProtoInstance207 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                        .addChild(ProtoInstance208 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                        .addChild(ProtoInstance209 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                        .addChild(ProtoInstance210 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                        .addChild(ProtoInstance211 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                        .addChild(ProtoInstance212 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                        .addChild(ProtoInstance213 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                        .addChild(ProtoInstance214 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                        .addChild(ProtoInstance215 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                        .addChild(ProtoInstance216 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                        .addChild(ProtoInstance217 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                        .addChild(ProtoInstance218 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                        .addChild(ProtoInstance219 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                        .addChild(ProtoInstance220 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                        .addChild(ProtoInstance221 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                        .addChild(ProtoInstance222 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                        .addChild(ProtoInstance223 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                        .addChild(ProtoInstance224 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance205
                          .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance205
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance206
                          .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance206
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance207
                          .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance207
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance208
                          .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance208
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance209
                          .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance209
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance210
                          .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance210
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance211
                          .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance211
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance212
                          .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance212
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance213
                          .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance213
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance214
                          .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance214
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance215
                          .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance215
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance216
                          .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance216
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance217
                          .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance217
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance218
                          .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance218
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance219
                          .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance219
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance220
                          .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance220
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance221
                          .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance221
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance222
                          .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance222
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance223
                          .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance223
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance224
                          .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance224
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance225
                  .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance225
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance226 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
                    .addChild(ProtoInstance227 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
                    .addChild(ProtoInstance228 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
                    .addChild(ProtoInstance229 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
                    .addChild(ProtoInstance230 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
                    .addChild(ProtoInstance231 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
                    .addChild(ProtoInstance232 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
                    .addChild(ProtoInstance233 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
                    .addChild(ProtoInstance234 = new ProtoInstance().setName("Site").setDEF("hanim_crotch")));
ProtoInstance226
                      .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance226
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance227
                      .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance227
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance228
                      .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance228
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance229
                      .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance229
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance230
                      .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance230
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance231
                      .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance231
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance232
                      .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance232
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance233
                      .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance233
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance234
                      .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance234
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance235
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance235
              .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"));
ProtoInstance235
              .addFieldValue(new fieldValue().setName("center").setValue("0 0.914900004863739 0.0015999999595806003"));
ProtoInstance235
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance236 = new ProtoInstance().setName("Joint").setDEF("hanim_l_hip"))
                .addChild(ProtoInstance255 = new ProtoInstance().setName("Joint").setDEF("hanim_r_hip"))
                .addChild(ProtoInstance274 = new ProtoInstance().setName("Segment").setDEF("hanim_pelvis")));
ProtoInstance236
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance236
                  .addFieldValue(new fieldValue().setName("name").setValue("l_hip"));
ProtoInstance236
                  .addFieldValue(new fieldValue().setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance236
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance237 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee"))
                    .addChild(ProtoInstance251 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance237
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance237
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance237
                      .addFieldValue(new fieldValue().setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance237
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance238 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural"))
                        .addChild(ProtoInstance250 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance238
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance238
                          .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance238
                          .addFieldValue(new fieldValue().setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance238
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance239 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                            .addChild(ProtoInstance245 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance239
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance239
                              .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance239
                              .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance239
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance240 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance240
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance240
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance241 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                                    .addChild(ProtoInstance242 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                    .addChild(ProtoInstance243 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                    .addChild(ProtoInstance244 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance241
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance241
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance242
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance242
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance243
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance243
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance244
                                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance244
                                      .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance245
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance245
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance246 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                                .addChild(ProtoInstance247 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                                .addChild(ProtoInstance248 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                                .addChild(ProtoInstance249 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance246
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance246
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance247
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance247
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance248
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance248
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance249
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance249
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance250
                          .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance251
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance251
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance252 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                        .addChild(ProtoInstance253 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                        .addChild(ProtoInstance254 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance252
                          .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance252
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance253
                          .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance253
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance254
                          .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance254
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance255
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance255
                  .addFieldValue(new fieldValue().setName("name").setValue("r_hip"));
ProtoInstance255
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance255
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance256 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee"))
                    .addChild(ProtoInstance270 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance256
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance256
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance256
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance256
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance257 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural"))
                        .addChild(ProtoInstance269 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance257
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance257
                          .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance257
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance257
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance258 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                            .addChild(ProtoInstance264 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance258
                              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance258
                              .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance258
                              .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance258
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance259 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance259
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance259
                                  .addFieldValue(new fieldValue().setName("children")
                                    .addChild(ProtoInstance260 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                                    .addChild(ProtoInstance261 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                    .addChild(ProtoInstance262 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                    .addChild(ProtoInstance263 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance260
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance260
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance261
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance261
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance262
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance262
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance263
                                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance263
                                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance264
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance264
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance265 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                                .addChild(ProtoInstance266 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                                .addChild(ProtoInstance267 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                                .addChild(ProtoInstance268 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance265
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance265
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance266
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance266
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance267
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance267
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance268
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance268
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance269
                          .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance270
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance270
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance271 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                        .addChild(ProtoInstance272 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                        .addChild(ProtoInstance273 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance271
                          .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance271
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance272
                          .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance272
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance273
                          .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance273
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance274
                  .addFieldValue(new fieldValue().setName("name").setValue("pelvis"));
ProtoInstance275
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance275
              .addFieldValue(new fieldValue().setName("name").setValue("l_hip"));
ProtoInstance275
              .addFieldValue(new fieldValue().setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance275
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance276 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee"))
                .addChild(ProtoInstance290 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance276
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance276
                  .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance276
                  .addFieldValue(new fieldValue().setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance276
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance277 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural"))
                    .addChild(ProtoInstance289 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance277
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance277
                      .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance277
                      .addFieldValue(new fieldValue().setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance277
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance278 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                        .addChild(ProtoInstance284 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance278
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance278
                          .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance278
                          .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance278
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance279 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance279
                              .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance279
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance280 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                                .addChild(ProtoInstance281 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                .addChild(ProtoInstance282 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                .addChild(ProtoInstance283 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance280
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance280
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance281
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance281
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance282
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance282
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance283
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance283
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance284
                          .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance284
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance285 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                            .addChild(ProtoInstance286 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                            .addChild(ProtoInstance287 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                            .addChild(ProtoInstance288 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance285
                              .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance285
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance286
                              .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance286
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance287
                              .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance287
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance288
                              .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance288
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance289
                      .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance290
                  .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance290
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance291 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                    .addChild(ProtoInstance292 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance293 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance291
                      .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance291
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance292
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance292
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance293
                      .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance293
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance294
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance294
              .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance294
              .addFieldValue(new fieldValue().setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance294
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance295 = new ProtoInstance().setName("Joint").setDEF("hanim_l_talocrural"))
                .addChild(ProtoInstance307 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance295
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance295
                  .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance295
                  .addFieldValue(new fieldValue().setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance295
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance296 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                    .addChild(ProtoInstance302 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance296
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance296
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance296
                      .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance296
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance297 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance297
                          .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance297
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance298 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                            .addChild(ProtoInstance299 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                            .addChild(ProtoInstance300 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                            .addChild(ProtoInstance301 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance298
                              .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance298
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance299
                              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance299
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance300
                              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance300
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance301
                              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance301
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance302
                      .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance302
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance303 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                        .addChild(ProtoInstance304 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                        .addChild(ProtoInstance305 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                        .addChild(ProtoInstance306 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance303
                          .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance303
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance304
                          .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance304
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance305
                          .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance305
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance306
                          .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance306
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance307
                  .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance308
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance308
              .addFieldValue(new fieldValue().setName("name").setValue("l_talocrural"));
ProtoInstance308
              .addFieldValue(new fieldValue().setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance308
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance309 = new ProtoInstance().setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                .addChild(ProtoInstance315 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance309
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance309
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance309
                  .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance309
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance310 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance310
                      .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance310
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance311 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                        .addChild(ProtoInstance312 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                        .addChild(ProtoInstance313 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                        .addChild(ProtoInstance314 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance311
                          .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance311
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance312
                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance312
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance313
                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance313
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance314
                          .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance314
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance315
                  .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance315
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance316 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                    .addChild(ProtoInstance317 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                    .addChild(ProtoInstance318 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                    .addChild(ProtoInstance319 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance316
                      .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance316
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance317
                      .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance317
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance318
                      .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance318
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance319
                      .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance319
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance320
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance320
              .addFieldValue(new fieldValue().setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance320
              .addFieldValue(new fieldValue().setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance320
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance321 = new ProtoInstance().setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance321
                  .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance321
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance322 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                    .addChild(ProtoInstance323 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance324 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance325 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance322
                      .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance322
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance323
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance323
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance324
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance324
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance325
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance325
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance326
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance326
              .addFieldValue(new fieldValue().setName("name").setValue("r_hip"));
ProtoInstance326
              .addFieldValue(new fieldValue().setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance326
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance327 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee"))
                .addChild(ProtoInstance341 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance327
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance327
                  .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance327
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance327
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance328 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural"))
                    .addChild(ProtoInstance340 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance328
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance328
                      .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance328
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance328
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance329 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                        .addChild(ProtoInstance335 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance329
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance329
                          .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance329
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance329
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance330 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance330
                              .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance330
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance331 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                                .addChild(ProtoInstance332 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                .addChild(ProtoInstance333 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                .addChild(ProtoInstance334 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance331
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance331
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance332
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance332
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance333
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance333
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance334
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance334
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance335
                          .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance335
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance336 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                            .addChild(ProtoInstance337 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                            .addChild(ProtoInstance338 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                            .addChild(ProtoInstance339 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance336
                              .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance336
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance337
                              .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance337
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance338
                              .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance338
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance339
                              .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance339
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance340
                      .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance341
                  .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance341
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance342 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                    .addChild(ProtoInstance343 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance344 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance342
                      .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance342
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance343
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance343
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance344
                      .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance344
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance345
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance345
              .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance345
              .addFieldValue(new fieldValue().setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance345
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance346 = new ProtoInstance().setName("Joint").setDEF("hanim_r_talocrural"))
                .addChild(ProtoInstance358 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance346
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance346
                  .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance346
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance346
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance347 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                    .addChild(ProtoInstance353 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance347
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance347
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance347
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance347
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance348 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance348
                          .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance348
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance349 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                            .addChild(ProtoInstance350 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                            .addChild(ProtoInstance351 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                            .addChild(ProtoInstance352 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance349
                              .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance349
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance350
                              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance350
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance351
                              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance351
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance352
                              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance352
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance353
                      .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance353
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance354 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                        .addChild(ProtoInstance355 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                        .addChild(ProtoInstance356 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                        .addChild(ProtoInstance357 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance354
                          .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance354
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance355
                          .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance355
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance356
                          .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance356
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance357
                          .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance357
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance358
                  .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance359
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance359
              .addFieldValue(new fieldValue().setName("name").setValue("r_talocrural"));
ProtoInstance359
              .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance359
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance360 = new ProtoInstance().setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                .addChild(ProtoInstance366 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance360
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance360
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance360
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance360
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance361 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance361
                      .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance361
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance362 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                        .addChild(ProtoInstance363 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                        .addChild(ProtoInstance364 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                        .addChild(ProtoInstance365 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance362
                          .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance362
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance363
                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance363
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance364
                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance364
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance365
                          .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance365
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance366
                  .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance366
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance367 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                    .addChild(ProtoInstance368 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                    .addChild(ProtoInstance369 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                    .addChild(ProtoInstance370 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance367
                      .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance367
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance368
                      .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance368
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance369
                      .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance369
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance370
                      .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance370
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance371
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance371
              .addFieldValue(new fieldValue().setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance371
              .addFieldValue(new fieldValue().setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance371
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance372 = new ProtoInstance().setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance372
                  .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance372
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance373 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                    .addChild(ProtoInstance374 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance375 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance376 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance373
                      .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance373
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance374
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance374
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance375
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance375
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance376
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance376
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance377
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance377
              .addFieldValue(new fieldValue().setName("name").setValue("vl5"));
ProtoInstance377
              .addFieldValue(new fieldValue().setName("center").setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836"));
ProtoInstance377
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance378 = new ProtoInstance().setName("Joint").setDEF("hanim_skullbase"))
                .addChild(ProtoInstance390 = new ProtoInstance().setName("Joint").setDEF("hanim_l_shoulder"))
                .addChild(ProtoInstance406 = new ProtoInstance().setName("Joint").setDEF("hanim_r_shoulder"))
                .addChild(ProtoInstance422 = new ProtoInstance().setName("Segment").setDEF("hanim_l5")));
ProtoInstance378
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance378
                  .addFieldValue(new fieldValue().setName("name").setValue("skullbase"));
ProtoInstance378
                  .addFieldValue(new fieldValue().setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance378
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance379 = new ProtoInstance().setName("Segment").setDEF("hanim_skull")));
ProtoInstance379
                      .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance379
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance380 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                        .addChild(ProtoInstance381 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                        .addChild(ProtoInstance382 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                        .addChild(ProtoInstance383 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                        .addChild(ProtoInstance384 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                        .addChild(ProtoInstance385 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                        .addChild(ProtoInstance386 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                        .addChild(ProtoInstance387 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                        .addChild(ProtoInstance388 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                        .addChild(ProtoInstance389 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale")));
ProtoInstance380
                          .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance380
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance381
                          .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance381
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance382
                          .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance382
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance383
                          .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance383
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance384
                          .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance384
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance385
                          .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance385
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance386
                          .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance386
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance387
                          .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance387
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance388
                          .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance388
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance389
                          .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance389
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance390
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance390
                  .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"));
ProtoInstance390
                  .addFieldValue(new fieldValue().setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance390
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance391 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow"))
                    .addChild(ProtoInstance404 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance391
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance391
                      .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance391
                      .addFieldValue(new fieldValue().setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance391
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance392 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal"))
                        .addChild(ProtoInstance399 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance392
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance392
                          .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance392
                          .addFieldValue(new fieldValue().setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance392
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance393 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance393
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance393
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance394 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                                .addChild(ProtoInstance395 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                                .addChild(ProtoInstance396 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                                .addChild(ProtoInstance397 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                                .addChild(ProtoInstance398 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance394
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance394
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance395
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance395
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance396
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance396
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance397
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance397
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance398
                                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance398
                                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance399
                          .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance399
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance400 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                            .addChild(ProtoInstance401 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                            .addChild(ProtoInstance402 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                            .addChild(ProtoInstance403 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance400
                              .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance400
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance401
                              .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance401
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance402
                              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance402
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance403
                              .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance403
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance404
                      .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance404
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance405 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance405
                          .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance405
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance406
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance406
                  .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"));
ProtoInstance406
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance406
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance407 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow"))
                    .addChild(ProtoInstance420 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance407
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance407
                      .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance407
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance407
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance408 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal"))
                        .addChild(ProtoInstance415 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance408
                          .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance408
                          .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance408
                          .addFieldValue(new fieldValue().setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance408
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance409 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance409
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance409
                              .addFieldValue(new fieldValue().setName("children")
                                .addChild(ProtoInstance410 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                                .addChild(ProtoInstance411 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                                .addChild(ProtoInstance412 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                                .addChild(ProtoInstance413 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                                .addChild(ProtoInstance414 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance410
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance410
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance411
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance411
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance412
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance412
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance413
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance413
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance414
                                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance414
                                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance415
                          .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance415
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance416 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                            .addChild(ProtoInstance417 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                            .addChild(ProtoInstance418 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                            .addChild(ProtoInstance419 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance416
                              .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance416
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance417
                              .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance417
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance418
                              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance418
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance419
                              .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance419
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance420
                      .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance420
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance421 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance421
                          .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance421
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance422
                  .addFieldValue(new fieldValue().setName("name").setValue("l5"));
ProtoInstance422
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance423 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                    .addChild(ProtoInstance424 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                    .addChild(ProtoInstance425 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                    .addChild(ProtoInstance426 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                    .addChild(ProtoInstance427 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                    .addChild(ProtoInstance428 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                    .addChild(ProtoInstance429 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                    .addChild(ProtoInstance430 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                    .addChild(ProtoInstance431 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                    .addChild(ProtoInstance432 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                    .addChild(ProtoInstance433 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                    .addChild(ProtoInstance434 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                    .addChild(ProtoInstance435 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                    .addChild(ProtoInstance436 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                    .addChild(ProtoInstance437 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                    .addChild(ProtoInstance438 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                    .addChild(ProtoInstance439 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                    .addChild(ProtoInstance440 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                    .addChild(ProtoInstance441 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                    .addChild(ProtoInstance442 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance423
                      .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance423
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance424
                      .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance424
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance425
                      .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance425
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance426
                      .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance426
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance427
                      .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance427
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance428
                      .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance428
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance429
                      .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance429
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance430
                      .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance430
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance431
                      .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance431
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance432
                      .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance432
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance433
                      .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance433
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance434
                      .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance434
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance435
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance435
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance436
                      .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance436
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance437
                      .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance437
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance438
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance438
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance439
                      .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance439
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance440
                      .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance440
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance441
                      .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance441
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance442
                      .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance442
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance443
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance443
              .addFieldValue(new fieldValue().setName("name").setValue("skullbase"));
ProtoInstance443
              .addFieldValue(new fieldValue().setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance443
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance444 = new ProtoInstance().setName("Segment").setDEF("hanim_skull")));
ProtoInstance444
                  .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance444
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance445 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                    .addChild(ProtoInstance446 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                    .addChild(ProtoInstance447 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                    .addChild(ProtoInstance448 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                    .addChild(ProtoInstance449 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                    .addChild(ProtoInstance450 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                    .addChild(ProtoInstance451 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                    .addChild(ProtoInstance452 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                    .addChild(ProtoInstance453 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                    .addChild(ProtoInstance454 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale")));
ProtoInstance445
                      .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance445
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance446
                      .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance446
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance447
                      .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance447
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance448
                      .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance448
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance449
                      .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance449
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance450
                      .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance450
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance451
                      .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance451
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance452
                      .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance452
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance453
                      .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance453
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance454
                      .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance454
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance455
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance455
              .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"));
ProtoInstance455
              .addFieldValue(new fieldValue().setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance455
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance456 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow"))
                .addChild(ProtoInstance469 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance456
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance456
                  .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance456
                  .addFieldValue(new fieldValue().setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance456
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance457 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal"))
                    .addChild(ProtoInstance464 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance457
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance457
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance457
                      .addFieldValue(new fieldValue().setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance457
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance458 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance458
                          .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance458
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance459 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                            .addChild(ProtoInstance460 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                            .addChild(ProtoInstance461 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                            .addChild(ProtoInstance462 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                            .addChild(ProtoInstance463 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance459
                              .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance459
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance460
                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance460
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance461
                              .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance461
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance462
                              .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance462
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance463
                              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance463
                              .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance464
                      .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance464
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance465 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                        .addChild(ProtoInstance466 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                        .addChild(ProtoInstance467 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                        .addChild(ProtoInstance468 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance465
                          .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance465
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance466
                          .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance466
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance467
                          .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance467
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance468
                          .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance468
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance469
                  .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance469
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance470 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance470
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance470
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance471
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance471
              .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance471
              .addFieldValue(new fieldValue().setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance471
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance472 = new ProtoInstance().setName("Joint").setDEF("hanim_l_radiocarpal"))
                .addChild(ProtoInstance479 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance472
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance472
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance472
                  .addFieldValue(new fieldValue().setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance472
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance473 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance473
                      .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance473
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance474 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                        .addChild(ProtoInstance475 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                        .addChild(ProtoInstance476 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                        .addChild(ProtoInstance477 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                        .addChild(ProtoInstance478 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance474
                          .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance474
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance475
                          .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance475
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance476
                          .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance476
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance477
                          .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance477
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance478
                          .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance478
                          .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance479
                  .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance479
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance480 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                    .addChild(ProtoInstance481 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                    .addChild(ProtoInstance482 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance483 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance480
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance480
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance481
                      .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance481
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance482
                      .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance482
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance483
                      .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance483
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance484
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance484
              .addFieldValue(new fieldValue().setName("name").setValue("l_radiocarpal"));
ProtoInstance484
              .addFieldValue(new fieldValue().setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance484
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance485 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance485
                  .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance485
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance486 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                    .addChild(ProtoInstance487 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance488 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                    .addChild(ProtoInstance489 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                    .addChild(ProtoInstance490 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance486
                      .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance486
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance487
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance487
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance488
                      .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance488
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance489
                      .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance489
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance490
                      .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance490
                      .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance491
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance491
              .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"));
ProtoInstance491
              .addFieldValue(new fieldValue().setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance491
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance492 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow"))
                .addChild(ProtoInstance505 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance492
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance492
                  .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance492
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance492
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance493 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal"))
                    .addChild(ProtoInstance500 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance493
                      .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance493
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance493
                      .addFieldValue(new fieldValue().setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance493
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance494 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance494
                          .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance494
                          .addFieldValue(new fieldValue().setName("children")
                            .addChild(ProtoInstance495 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                            .addChild(ProtoInstance496 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                            .addChild(ProtoInstance497 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                            .addChild(ProtoInstance498 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                            .addChild(ProtoInstance499 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance495
                              .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance495
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance496
                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance496
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance497
                              .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance497
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance498
                              .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance498
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance499
                              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance499
                              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance500
                      .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance500
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance501 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                        .addChild(ProtoInstance502 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                        .addChild(ProtoInstance503 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                        .addChild(ProtoInstance504 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance501
                          .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance501
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance502
                          .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance502
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance503
                          .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance503
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance504
                          .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance504
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance505
                  .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance505
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance506 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance506
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance506
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance507
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance507
              .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance507
              .addFieldValue(new fieldValue().setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance507
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance508 = new ProtoInstance().setName("Joint").setDEF("hanim_r_radiocarpal"))
                .addChild(ProtoInstance515 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance508
                  .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance508
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance508
                  .addFieldValue(new fieldValue().setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance508
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance509 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance509
                      .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance509
                      .addFieldValue(new fieldValue().setName("children")
                        .addChild(ProtoInstance510 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                        .addChild(ProtoInstance511 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                        .addChild(ProtoInstance512 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                        .addChild(ProtoInstance513 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                        .addChild(ProtoInstance514 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance510
                          .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance510
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance511
                          .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance511
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance512
                          .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance512
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance513
                          .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance513
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance514
                          .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance514
                          .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance515
                  .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance515
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance516 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                    .addChild(ProtoInstance517 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                    .addChild(ProtoInstance518 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance519 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance516
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance516
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance517
                      .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance517
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance518
                      .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance518
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance519
                      .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance519
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance520
              .addFieldValue(new fieldValue().setName("stiffness").setValue("1 1 1"));
ProtoInstance520
              .addFieldValue(new fieldValue().setName("name").setValue("r_radiocarpal"));
ProtoInstance520
              .addFieldValue(new fieldValue().setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance520
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance521 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance521
                  .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance521
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(ProtoInstance522 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                    .addChild(ProtoInstance523 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance524 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                    .addChild(ProtoInstance525 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                    .addChild(ProtoInstance526 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance522
                      .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance522
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance523
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance523
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance524
                      .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance524
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance525
                      .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance525
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance526
                      .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance526
                      .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance527
              .addFieldValue(new fieldValue().setName("name").setValue("l_middistal"));
ProtoInstance527
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance528 = new ProtoInstance().setName("Site").setDEF("hanim_l_middistal_tip"))
                .addChild(ProtoInstance529 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                .addChild(ProtoInstance530 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                .addChild(ProtoInstance531 = new ProtoInstance().setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance528
                  .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance528
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance529
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance529
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance530
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance530
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance531
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance531
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance532
              .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance532
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance533 = new ProtoInstance().setName("Site").setDEF("hanim_l_lateral_malleolus"))
                .addChild(ProtoInstance534 = new ProtoInstance().setName("Site").setDEF("hanim_l_medial_malleolus"))
                .addChild(ProtoInstance535 = new ProtoInstance().setName("Site").setDEF("hanim_l_sphyrion"))
                .addChild(ProtoInstance536 = new ProtoInstance().setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance533
                  .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance533
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance534
                  .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance534
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance535
                  .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance535
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance536
                  .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance536
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance537
              .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance538
              .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance538
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance539 = new ProtoInstance().setName("Site").setDEF("hanim_l_knee_crease"))
                .addChild(ProtoInstance540 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                .addChild(ProtoInstance541 = new ProtoInstance().setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance539
                  .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance539
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance540
                  .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance540
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance541
                  .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance541
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance542
              .addFieldValue(new fieldValue().setName("name").setValue("r_middistal"));
ProtoInstance542
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance543 = new ProtoInstance().setName("Site").setDEF("hanim_r_middistal_tip"))
                .addChild(ProtoInstance544 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                .addChild(ProtoInstance545 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                .addChild(ProtoInstance546 = new ProtoInstance().setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance543
                  .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance543
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance544
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance544
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance545
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance545
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance546
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance546
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance547
              .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance547
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance548 = new ProtoInstance().setName("Site").setDEF("hanim_r_lateral_malleolus"))
                .addChild(ProtoInstance549 = new ProtoInstance().setName("Site").setDEF("hanim_r_medial_malleolus"))
                .addChild(ProtoInstance550 = new ProtoInstance().setName("Site").setDEF("hanim_r_sphyrion"))
                .addChild(ProtoInstance551 = new ProtoInstance().setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance548
                  .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance548
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance549
                  .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance549
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance550
                  .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance550
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance551
                  .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance551
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance552
              .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance553
              .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance553
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance554 = new ProtoInstance().setName("Site").setDEF("hanim_r_knee_crease"))
                .addChild(ProtoInstance555 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                .addChild(ProtoInstance556 = new ProtoInstance().setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance554
                  .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance554
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance555
                  .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance555
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance556
                  .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance556
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance557
              .addFieldValue(new fieldValue().setName("name").setValue("pelvis"));
ProtoInstance558
              .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance558
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance559 = new ProtoInstance().setName("Site").setDEF("hanim_skull_tip"))
                .addChild(ProtoInstance560 = new ProtoInstance().setName("Site").setDEF("hanim_sellion"))
                .addChild(ProtoInstance561 = new ProtoInstance().setName("Site").setDEF("hanim_r_infraorbitale"))
                .addChild(ProtoInstance562 = new ProtoInstance().setName("Site").setDEF("hanim_l_infraorbitale"))
                .addChild(ProtoInstance563 = new ProtoInstance().setName("Site").setDEF("hanim_supramenton"))
                .addChild(ProtoInstance564 = new ProtoInstance().setName("Site").setDEF("hanim_r_tragion"))
                .addChild(ProtoInstance565 = new ProtoInstance().setName("Site").setDEF("hanim_r_gonion"))
                .addChild(ProtoInstance566 = new ProtoInstance().setName("Site").setDEF("hanim_l_tragion"))
                .addChild(ProtoInstance567 = new ProtoInstance().setName("Site").setDEF("hanim_l_gonion"))
                .addChild(ProtoInstance568 = new ProtoInstance().setName("Site").setDEF("hanim_nuchale")));
ProtoInstance559
                  .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance559
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance560
                  .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance560
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance561
                  .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance561
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance562
                  .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance562
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance563
                  .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance563
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance564
                  .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance564
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance565
                  .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance565
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance566
                  .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance566
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance567
                  .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance567
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance568
                  .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance568
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance569
              .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance569
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance570 = new ProtoInstance().setName("Site").setDEF("hanim_l_hand_tip"))
                .addChild(ProtoInstance571 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                .addChild(ProtoInstance572 = new ProtoInstance().setName("Site").setDEF("hanim_l_dactylion"))
                .addChild(ProtoInstance573 = new ProtoInstance().setName("Site").setDEF("hanim_l_ulnar_styloid"))
                .addChild(ProtoInstance574 = new ProtoInstance().setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance570
                  .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance570
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance571
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance571
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance572
                  .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance572
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance573
                  .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance573
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance574
                  .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance574
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance575
              .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance575
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance576 = new ProtoInstance().setName("Site").setDEF("hanim_l_radial_styloid"))
                .addChild(ProtoInstance577 = new ProtoInstance().setName("Site").setDEF("hanim_l_olecranon"))
                .addChild(ProtoInstance578 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                .addChild(ProtoInstance579 = new ProtoInstance().setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance576
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance576
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance577
                  .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance577
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance578
                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance578
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance579
                  .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance579
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance580
              .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance580
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance581 = new ProtoInstance().setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance581
                  .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance581
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance582
              .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance582
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance583 = new ProtoInstance().setName("Site").setDEF("hanim_r_hand_tip"))
                .addChild(ProtoInstance584 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                .addChild(ProtoInstance585 = new ProtoInstance().setName("Site").setDEF("hanim_r_dactylion"))
                .addChild(ProtoInstance586 = new ProtoInstance().setName("Site").setDEF("hanim_r_ulnar_styloid"))
                .addChild(ProtoInstance587 = new ProtoInstance().setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance583
                  .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance583
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance584
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance584
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance585
                  .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance585
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance586
                  .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance586
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance587
                  .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance587
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance588
              .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance588
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance589 = new ProtoInstance().setName("Site").setDEF("hanim_r_radial_styloid"))
                .addChild(ProtoInstance590 = new ProtoInstance().setName("Site").setDEF("hanim_r_olecranon"))
                .addChild(ProtoInstance591 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                .addChild(ProtoInstance592 = new ProtoInstance().setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance589
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance589
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance590
                  .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance590
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance591
                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance591
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance592
                  .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance592
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance593
              .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance593
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance594 = new ProtoInstance().setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance594
                  .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance594
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance595
              .addFieldValue(new fieldValue().setName("name").setValue("l5"));
ProtoInstance595
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance596 = new ProtoInstance().setName("Site").setDEF("hanim_r_clavicale"))
                .addChild(ProtoInstance597 = new ProtoInstance().setName("Site").setDEF("hanim_suprasternale"))
                .addChild(ProtoInstance598 = new ProtoInstance().setName("Site").setDEF("hanim_l_clavicale"))
                .addChild(ProtoInstance599 = new ProtoInstance().setName("Site").setDEF("hanim_r_thelion"))
                .addChild(ProtoInstance600 = new ProtoInstance().setName("Site").setDEF("hanim_l_thelion"))
                .addChild(ProtoInstance601 = new ProtoInstance().setName("Site").setDEF("hanim_substernale"))
                .addChild(ProtoInstance602 = new ProtoInstance().setName("Site").setDEF("hanim_r_rib10"))
                .addChild(ProtoInstance603 = new ProtoInstance().setName("Site").setDEF("hanim_l_rib10"))
                .addChild(ProtoInstance604 = new ProtoInstance().setName("Site").setDEF("hanim_cervicale"))
                .addChild(ProtoInstance605 = new ProtoInstance().setName("Site").setDEF("hanim_spine_2_lower_back"))
                .addChild(ProtoInstance606 = new ProtoInstance().setName("Site").setDEF("hanim_waist_preferred_posterior"))
                .addChild(ProtoInstance607 = new ProtoInstance().setName("Site").setDEF("hanim_r_acromion"))
                .addChild(ProtoInstance608 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_proximal"))
                .addChild(ProtoInstance609 = new ProtoInstance().setName("Site").setDEF("hanim_r_axilla_distal"))
                .addChild(ProtoInstance610 = new ProtoInstance().setName("Site").setDEF("hanim_l_acromion"))
                .addChild(ProtoInstance611 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_proximal"))
                .addChild(ProtoInstance612 = new ProtoInstance().setName("Site").setDEF("hanim_l_axilla_distal"))
                .addChild(ProtoInstance613 = new ProtoInstance().setName("Site").setDEF("hanim_r_neck_base"))
                .addChild(ProtoInstance614 = new ProtoInstance().setName("Site").setDEF("hanim_l_neck_base"))
                .addChild(ProtoInstance615 = new ProtoInstance().setName("Site").setDEF("hanim_navel")));
ProtoInstance596
                  .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance596
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance597
                  .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance597
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance598
                  .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance598
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance599
                  .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance599
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance600
                  .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance600
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance601
                  .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance601
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance602
                  .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance602
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance603
                  .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance603
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance604
                  .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance604
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance605
                  .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance605
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance606
                  .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance606
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance607
                  .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance607
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance608
                  .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance608
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance609
                  .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance609
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance610
                  .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance610
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance611
                  .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance611
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance612
                  .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance612
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance613
                  .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance613
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance614
                  .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance614
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance615
                  .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance615
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance616
              .addFieldValue(new fieldValue().setName("name").setValue("sacrum"));
ProtoInstance616
              .addFieldValue(new fieldValue().setName("children")
                .addChild(ProtoInstance617 = new ProtoInstance().setName("Site").setDEF("hanim_r_asis"))
                .addChild(ProtoInstance618 = new ProtoInstance().setName("Site").setDEF("hanim_l_asis"))
                .addChild(ProtoInstance619 = new ProtoInstance().setName("Site").setDEF("hanim_r_iliocristale"))
                .addChild(ProtoInstance620 = new ProtoInstance().setName("Site").setDEF("hanim_r_trochanterion"))
                .addChild(ProtoInstance621 = new ProtoInstance().setName("Site").setDEF("hanim_l_iliocristale"))
                .addChild(ProtoInstance622 = new ProtoInstance().setName("Site").setDEF("hanim_l_trochanterion"))
                .addChild(ProtoInstance623 = new ProtoInstance().setName("Site").setDEF("hanim_r_psis"))
                .addChild(ProtoInstance624 = new ProtoInstance().setName("Site").setDEF("hanim_l_psis"))
                .addChild(ProtoInstance625 = new ProtoInstance().setName("Site").setDEF("hanim_crotch")));
ProtoInstance617
                  .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance617
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance618
                  .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance618
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance619
                  .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance619
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance620
                  .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance620
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance621
                  .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance621
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance622
                  .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance622
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance623
                  .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance623
                  .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance624
                  .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance624
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance625
                  .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance625
                  .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance626
              .addFieldValue(new fieldValue().setName("name").setValue("l_middistal_tip"));
ProtoInstance626
              .addFieldValue(new fieldValue().setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance627
              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance627
              .addFieldValue(new fieldValue().setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance628
              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance628
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance629
              .addFieldValue(new fieldValue().setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance629
              .addFieldValue(new fieldValue().setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance630
              .addFieldValue(new fieldValue().setName("name").setValue("l_lateral_malleolus"));
ProtoInstance630
              .addFieldValue(new fieldValue().setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance631
              .addFieldValue(new fieldValue().setName("name").setValue("l_medial_malleolus"));
ProtoInstance631
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance632
              .addFieldValue(new fieldValue().setName("name").setValue("l_sphyrion"));
ProtoInstance632
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance633
              .addFieldValue(new fieldValue().setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance633
              .addFieldValue(new fieldValue().setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance634
              .addFieldValue(new fieldValue().setName("name").setValue("l_knee_crease"));
ProtoInstance634
              .addFieldValue(new fieldValue().setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance635
              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance635
              .addFieldValue(new fieldValue().setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance636
              .addFieldValue(new fieldValue().setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance636
              .addFieldValue(new fieldValue().setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance637
              .addFieldValue(new fieldValue().setName("name").setValue("r_middistal_tip"));
ProtoInstance637
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance638
              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance638
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance639
              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance639
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance640
              .addFieldValue(new fieldValue().setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance640
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance641
              .addFieldValue(new fieldValue().setName("name").setValue("r_lateral_malleolus"));
ProtoInstance641
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance642
              .addFieldValue(new fieldValue().setName("name").setValue("r_medial_malleolus"));
ProtoInstance642
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance643
              .addFieldValue(new fieldValue().setName("name").setValue("r_sphyrion"));
ProtoInstance643
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance644
              .addFieldValue(new fieldValue().setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance644
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance645
              .addFieldValue(new fieldValue().setName("name").setValue("r_knee_crease"));
ProtoInstance645
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance646
              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance646
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance647
              .addFieldValue(new fieldValue().setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance647
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance648
              .addFieldValue(new fieldValue().setName("name").setValue("skull_tip"));
ProtoInstance648
              .addFieldValue(new fieldValue().setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance649
              .addFieldValue(new fieldValue().setName("name").setValue("sellion"));
ProtoInstance649
              .addFieldValue(new fieldValue().setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance650
              .addFieldValue(new fieldValue().setName("name").setValue("r_infraorbitale"));
ProtoInstance650
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance651
              .addFieldValue(new fieldValue().setName("name").setValue("l_infraorbitale"));
ProtoInstance651
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance652
              .addFieldValue(new fieldValue().setName("name").setValue("supramenton"));
ProtoInstance652
              .addFieldValue(new fieldValue().setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance653
              .addFieldValue(new fieldValue().setName("name").setValue("r_tragion"));
ProtoInstance653
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance654
              .addFieldValue(new fieldValue().setName("name").setValue("r_gonion"));
ProtoInstance654
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance655
              .addFieldValue(new fieldValue().setName("name").setValue("l_tragion"));
ProtoInstance655
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance656
              .addFieldValue(new fieldValue().setName("name").setValue("l_gonion"));
ProtoInstance656
              .addFieldValue(new fieldValue().setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance657
              .addFieldValue(new fieldValue().setName("name").setValue("nuchale"));
ProtoInstance657
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance658
              .addFieldValue(new fieldValue().setName("name").setValue("l_hand_tip"));
ProtoInstance658
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance659
              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance659
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance660
              .addFieldValue(new fieldValue().setName("name").setValue("l_dactylion"));
ProtoInstance660
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance661
              .addFieldValue(new fieldValue().setName("name").setValue("l_ulnar_styloid"));
ProtoInstance661
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance662
              .addFieldValue(new fieldValue().setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance662
              .addFieldValue(new fieldValue().setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance663
              .addFieldValue(new fieldValue().setName("name").setValue("l_radial_styloid"));
ProtoInstance663
              .addFieldValue(new fieldValue().setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance664
              .addFieldValue(new fieldValue().setName("name").setValue("l_olecranon"));
ProtoInstance664
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance665
              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance665
              .addFieldValue(new fieldValue().setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance666
              .addFieldValue(new fieldValue().setName("name").setValue("l_radiale"));
ProtoInstance666
              .addFieldValue(new fieldValue().setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance667
              .addFieldValue(new fieldValue().setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance667
              .addFieldValue(new fieldValue().setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance668
              .addFieldValue(new fieldValue().setName("name").setValue("r_hand_tip"));
ProtoInstance668
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance669
              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance669
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance670
              .addFieldValue(new fieldValue().setName("name").setValue("r_dactylion"));
ProtoInstance670
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance671
              .addFieldValue(new fieldValue().setName("name").setValue("r_ulnar_styloid"));
ProtoInstance671
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance672
              .addFieldValue(new fieldValue().setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance672
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance673
              .addFieldValue(new fieldValue().setName("name").setValue("r_radial_styloid"));
ProtoInstance673
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance674
              .addFieldValue(new fieldValue().setName("name").setValue("r_olecranon"));
ProtoInstance674
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance675
              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance675
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance676
              .addFieldValue(new fieldValue().setName("name").setValue("r_radiale"));
ProtoInstance676
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance677
              .addFieldValue(new fieldValue().setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance677
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance678
              .addFieldValue(new fieldValue().setName("name").setValue("r_clavicale"));
ProtoInstance678
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance679
              .addFieldValue(new fieldValue().setName("name").setValue("suprasternale"));
ProtoInstance679
              .addFieldValue(new fieldValue().setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance680
              .addFieldValue(new fieldValue().setName("name").setValue("l_clavicale"));
ProtoInstance680
              .addFieldValue(new fieldValue().setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance681
              .addFieldValue(new fieldValue().setName("name").setValue("r_thelion"));
ProtoInstance681
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance682
              .addFieldValue(new fieldValue().setName("name").setValue("l_thelion"));
ProtoInstance682
              .addFieldValue(new fieldValue().setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance683
              .addFieldValue(new fieldValue().setName("name").setValue("substernale"));
ProtoInstance683
              .addFieldValue(new fieldValue().setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance684
              .addFieldValue(new fieldValue().setName("name").setValue("r_rib10"));
ProtoInstance684
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance685
              .addFieldValue(new fieldValue().setName("name").setValue("l_rib10"));
ProtoInstance685
              .addFieldValue(new fieldValue().setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance686
              .addFieldValue(new fieldValue().setName("name").setValue("cervicale"));
ProtoInstance686
              .addFieldValue(new fieldValue().setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance687
              .addFieldValue(new fieldValue().setName("name").setValue("spine_2_lower_back"));
ProtoInstance687
              .addFieldValue(new fieldValue().setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance688
              .addFieldValue(new fieldValue().setName("name").setValue("waist_preferred_posterior"));
ProtoInstance688
              .addFieldValue(new fieldValue().setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance689
              .addFieldValue(new fieldValue().setName("name").setValue("r_acromion"));
ProtoInstance689
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance690
              .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_proximal"));
ProtoInstance690
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance691
              .addFieldValue(new fieldValue().setName("name").setValue("r_axilla_distal"));
ProtoInstance691
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance692
              .addFieldValue(new fieldValue().setName("name").setValue("l_acromion"));
ProtoInstance692
              .addFieldValue(new fieldValue().setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance693
              .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_proximal"));
ProtoInstance693
              .addFieldValue(new fieldValue().setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance694
              .addFieldValue(new fieldValue().setName("name").setValue("l_axilla_distal"));
ProtoInstance694
              .addFieldValue(new fieldValue().setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance695
              .addFieldValue(new fieldValue().setName("name").setValue("r_neck_base"));
ProtoInstance695
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance696
              .addFieldValue(new fieldValue().setName("name").setValue("l_neck_base"));
ProtoInstance696
              .addFieldValue(new fieldValue().setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance697
              .addFieldValue(new fieldValue().setName("name").setValue("navel"));
ProtoInstance697
              .addFieldValue(new fieldValue().setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance698
              .addFieldValue(new fieldValue().setName("name").setValue("r_asis"));
ProtoInstance698
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance699
              .addFieldValue(new fieldValue().setName("name").setValue("l_asis"));
ProtoInstance699
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance700
              .addFieldValue(new fieldValue().setName("name").setValue("r_iliocristale"));
ProtoInstance700
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance701
              .addFieldValue(new fieldValue().setName("name").setValue("r_trochanterion"));
ProtoInstance701
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance702
              .addFieldValue(new fieldValue().setName("name").setValue("l_iliocristale"));
ProtoInstance702
              .addFieldValue(new fieldValue().setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance703
              .addFieldValue(new fieldValue().setName("name").setValue("l_trochanterion"));
ProtoInstance703
              .addFieldValue(new fieldValue().setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance704
              .addFieldValue(new fieldValue().setName("name").setValue("r_psis"));
ProtoInstance704
              .addFieldValue(new fieldValue().setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance705
              .addFieldValue(new fieldValue().setName("name").setValue("l_psis"));
ProtoInstance705
              .addFieldValue(new fieldValue().setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance706
              .addFieldValue(new fieldValue().setName("name").setValue("crotch"));
ProtoInstance706
              .addFieldValue(new fieldValue().setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "});
  }
}
protected class MFFloat1 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.25f,1.600000023841858f,0.75f});
  }
}
}
