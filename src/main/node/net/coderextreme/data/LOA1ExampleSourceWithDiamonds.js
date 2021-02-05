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
var ProtoInstance235 = null;
var ProtoInstance236 = null;
var ProtoInstance237 = null;
var ProtoInstance238 = null;
var ProtoInstance239 = null;
var ProtoInstance240 = null;
var ProtoInstance241 = null;
var ProtoInstance242 = null;
var ProtoInstance243 = null;
var ProtoInstance244 = null;
var ProtoInstance245 = null;
var ProtoInstance246 = null;
var ProtoInstance247 = null;
var ProtoInstance248 = null;
var ProtoInstance249 = null;
var ProtoInstance250 = null;
var ProtoInstance251 = null;
var ProtoInstance252 = null;
var ProtoInstance253 = null;
var ProtoInstance254 = null;
var ProtoInstance255 = null;
var ProtoInstance256 = null;
var ProtoInstance257 = null;
var ProtoInstance258 = null;
var ProtoInstance259 = null;
var ProtoInstance260 = null;
var ProtoInstance261 = null;
var ProtoInstance262 = null;
var ProtoInstance263 = null;
var ProtoInstance264 = null;
var ProtoInstance265 = null;
var ProtoInstance266 = null;
var ProtoInstance267 = null;
var ProtoInstance268 = null;
var ProtoInstance269 = null;
var ProtoInstance270 = null;
var ProtoInstance271 = null;
var ProtoInstance272 = null;
var ProtoInstance273 = null;
var ProtoInstance274 = null;
var ProtoInstance275 = null;
var ProtoInstance276 = null;
var ProtoInstance277 = null;
var ProtoInstance278 = null;
var ProtoInstance279 = null;
var ProtoInstance280 = null;
var ProtoInstance281 = null;
var ProtoInstance282 = null;
var ProtoInstance283 = null;
var ProtoInstance284 = null;
var ProtoInstance285 = null;
var ProtoInstance286 = null;
var ProtoInstance287 = null;
var ProtoInstance288 = null;
var ProtoInstance289 = null;
var ProtoInstance290 = null;
var ProtoInstance291 = null;
var ProtoInstance292 = null;
var ProtoInstance293 = null;
var ProtoInstance294 = null;
var ProtoInstance295 = null;
var ProtoInstance296 = null;
var ProtoInstance297 = null;
var ProtoInstance298 = null;
var ProtoInstance299 = null;
var ProtoInstance300 = null;
var ProtoInstance301 = null;
var ProtoInstance302 = null;
var ProtoInstance303 = null;
var ProtoInstance304 = null;
var ProtoInstance305 = null;
var ProtoInstance306 = null;
var ProtoInstance307 = null;
var ProtoInstance308 = null;
var ProtoInstance309 = null;
var ProtoInstance310 = null;
var ProtoInstance311 = null;
var ProtoInstance312 = null;
var ProtoInstance313 = null;
var ProtoInstance314 = null;
var ProtoInstance315 = null;
var ProtoInstance316 = null;
var ProtoInstance317 = null;
var ProtoInstance318 = null;
var ProtoInstance319 = null;
var ProtoInstance320 = null;
var ProtoInstance321 = null;
var ProtoInstance322 = null;
var ProtoInstance323 = null;
var ProtoInstance324 = null;
var ProtoInstance325 = null;
var ProtoInstance326 = null;
var ProtoInstance327 = null;
var ProtoInstance328 = null;
var ProtoInstance329 = null;
var ProtoInstance330 = null;
var ProtoInstance331 = null;
var ProtoInstance332 = null;
var ProtoInstance333 = null;
var ProtoInstance334 = null;
var ProtoInstance335 = null;
var ProtoInstance336 = null;
var ProtoInstance337 = null;
var ProtoInstance338 = null;
var ProtoInstance339 = null;
var ProtoInstance340 = null;
var ProtoInstance341 = null;
var ProtoInstance342 = null;
var ProtoInstance343 = null;
var ProtoInstance344 = null;
var ProtoInstance345 = null;
var ProtoInstance346 = null;
var ProtoInstance347 = null;
var ProtoInstance348 = null;
var ProtoInstance349 = null;
var ProtoInstance350 = null;
var ProtoInstance351 = null;
var ProtoInstance352 = null;
var ProtoInstance353 = null;
var ProtoInstance354 = null;
var ProtoInstance355 = null;
var ProtoInstance356 = null;
var ProtoInstance357 = null;
var ProtoInstance358 = null;
var ProtoInstance359 = null;
var ProtoInstance360 = null;
var ProtoInstance361 = null;
var ProtoInstance362 = null;
var ProtoInstance363 = null;
var ProtoInstance364 = null;
var ProtoInstance365 = null;
var ProtoInstance366 = null;
var ProtoInstance367 = null;
var ProtoInstance368 = null;
var ProtoInstance369 = null;
var ProtoInstance370 = null;
var ProtoInstance371 = null;
var ProtoInstance372 = null;
var ProtoInstance373 = null;
var ProtoInstance374 = null;
var ProtoInstance375 = null;
var ProtoInstance376 = null;
var ProtoInstance377 = null;
var ProtoInstance378 = null;
var ProtoInstance379 = null;
var ProtoInstance380 = null;
var ProtoInstance381 = null;
var ProtoInstance382 = null;
var ProtoInstance383 = null;
var ProtoInstance384 = null;
var ProtoInstance385 = null;
var ProtoInstance386 = null;
var ProtoInstance387 = null;
var ProtoInstance388 = null;
var ProtoInstance389 = null;
var ProtoInstance390 = null;
var ProtoInstance391 = null;
var ProtoInstance392 = null;
var ProtoInstance393 = null;
var ProtoInstance394 = null;
var ProtoInstance395 = null;
var ProtoInstance396 = null;
var ProtoInstance397 = null;
var ProtoInstance398 = null;
var ProtoInstance399 = null;
var ProtoInstance400 = null;
var ProtoInstance401 = null;
var ProtoInstance402 = null;
var ProtoInstance403 = null;
var ProtoInstance404 = null;
var ProtoInstance405 = null;
var ProtoInstance406 = null;
var ProtoInstance407 = null;
var ProtoInstance408 = null;
var ProtoInstance409 = null;
var ProtoInstance410 = null;
var ProtoInstance411 = null;
var ProtoInstance412 = null;
var ProtoInstance413 = null;
var ProtoInstance414 = null;
var ProtoInstance415 = null;
var ProtoInstance416 = null;
var ProtoInstance417 = null;
var ProtoInstance418 = null;
var ProtoInstance419 = null;
var ProtoInstance420 = null;
var ProtoInstance421 = null;
var ProtoInstance422 = null;
var ProtoInstance423 = null;
var ProtoInstance424 = null;
var ProtoInstance425 = null;
var ProtoInstance426 = null;
var ProtoInstance427 = null;
var ProtoInstance428 = null;
var ProtoInstance429 = null;
var ProtoInstance430 = null;
var ProtoInstance431 = null;
var ProtoInstance432 = null;
var ProtoInstance433 = null;
var ProtoInstance434 = null;
var ProtoInstance435 = null;
var ProtoInstance436 = null;
var ProtoInstance437 = null;
var ProtoInstance438 = null;
var ProtoInstance439 = null;
var ProtoInstance440 = null;
var ProtoInstance441 = null;
var ProtoInstance442 = null;
var ProtoInstance443 = null;
var ProtoInstance444 = null;
var ProtoInstance445 = null;
var ProtoInstance446 = null;
var ProtoInstance447 = null;
var ProtoInstance448 = null;
var ProtoInstance449 = null;
var ProtoInstance450 = null;
var ProtoInstance451 = null;
var ProtoInstance452 = null;
var ProtoInstance453 = null;
var ProtoInstance454 = null;
var ProtoInstance455 = null;
var ProtoInstance456 = null;
var ProtoInstance457 = null;
var ProtoInstance458 = null;
var ProtoInstance459 = null;
var ProtoInstance460 = null;
var ProtoInstance461 = null;
var ProtoInstance462 = null;
var ProtoInstance463 = null;
var ProtoInstance464 = null;
var ProtoInstance465 = null;
var ProtoInstance466 = null;
var ProtoInstance467 = null;
var ProtoInstance468 = null;
var ProtoInstance469 = null;
var ProtoInstance470 = null;
var ProtoInstance471 = null;
var ProtoInstance472 = null;
var ProtoInstance473 = null;
var ProtoInstance474 = null;
var ProtoInstance475 = null;
var ProtoInstance476 = null;
var ProtoInstance477 = null;
var ProtoInstance478 = null;
var ProtoInstance479 = null;
var ProtoInstance480 = null;
var ProtoInstance481 = null;
var ProtoInstance482 = null;
var ProtoInstance483 = null;
var ProtoInstance484 = null;
var ProtoInstance485 = null;
var ProtoInstance486 = null;
var ProtoInstance487 = null;
var ProtoInstance488 = null;
var ProtoInstance489 = null;
var ProtoInstance490 = null;
var ProtoInstance491 = null;
var ProtoInstance492 = null;
var ProtoInstance493 = null;
var ProtoInstance494 = null;
var ProtoInstance495 = null;
var ProtoInstance496 = null;
var ProtoInstance497 = null;
var ProtoInstance498 = null;
var ProtoInstance499 = null;
var ProtoInstance500 = null;
var ProtoInstance501 = null;
var ProtoInstance502 = null;
var ProtoInstance503 = null;
var ProtoInstance504 = null;
var ProtoInstance505 = null;
var ProtoInstance506 = null;
var ProtoInstance507 = null;
var ProtoInstance508 = null;
var ProtoInstance509 = null;
var ProtoInstance510 = null;
var ProtoInstance511 = null;
var ProtoInstance512 = null;
var ProtoInstance513 = null;
var ProtoInstance514 = null;
var ProtoInstance515 = null;
var ProtoInstance516 = null;
var ProtoInstance517 = null;
var ProtoInstance518 = null;
var ProtoInstance519 = null;
var ProtoInstance520 = null;
var ProtoInstance521 = null;
var ProtoInstance522 = null;
var ProtoInstance523 = null;
var ProtoInstance524 = null;
var ProtoInstance525 = null;
var ProtoInstance526 = null;
var ProtoInstance527 = null;
var ProtoInstance528 = null;
var ProtoInstance529 = null;
var ProtoInstance530 = null;
var ProtoInstance531 = null;
var ProtoInstance532 = null;
var ProtoInstance533 = null;
var ProtoInstance534 = null;
var ProtoInstance535 = null;
var ProtoInstance536 = null;
var ProtoInstance537 = null;
var ProtoInstance538 = null;
var ProtoInstance539 = null;
var ProtoInstance540 = null;
var ProtoInstance541 = null;
var ProtoInstance542 = null;
var ProtoInstance543 = null;
var ProtoInstance544 = null;
var ProtoInstance545 = null;
var ProtoInstance546 = null;
var ProtoInstance547 = null;
var ProtoInstance548 = null;
var ProtoInstance549 = null;
var ProtoInstance550 = null;
var ProtoInstance551 = null;
var ProtoInstance552 = null;
var ProtoInstance553 = null;
var ProtoInstance554 = null;
var ProtoInstance555 = null;
var ProtoInstance556 = null;
var ProtoInstance557 = null;
var ProtoInstance558 = null;
var ProtoInstance559 = null;
var ProtoInstance560 = null;
var ProtoInstance561 = null;
var ProtoInstance562 = null;
var ProtoInstance563 = null;
var ProtoInstance564 = null;
var ProtoInstance565 = null;
var ProtoInstance566 = null;
var ProtoInstance567 = null;
var ProtoInstance568 = null;
var ProtoInstance569 = null;
var ProtoInstance570 = null;
var ProtoInstance571 = null;
var ProtoInstance572 = null;
var ProtoInstance573 = null;
var ProtoInstance574 = null;
var ProtoInstance575 = null;
var ProtoInstance576 = null;
var ProtoInstance577 = null;
var ProtoInstance578 = null;
var ProtoInstance579 = null;
var ProtoInstance580 = null;
var ProtoInstance581 = null;
var ProtoInstance582 = null;
var ProtoInstance583 = null;
var ProtoInstance584 = null;
var ProtoInstance585 = null;
var ProtoInstance586 = null;
var ProtoInstance587 = null;
var ProtoInstance588 = null;
var ProtoInstance589 = null;
var ProtoInstance590 = null;
var ProtoInstance591 = null;
var ProtoInstance592 = null;
var ProtoInstance593 = null;
var ProtoInstance594 = null;
var ProtoInstance595 = null;
var ProtoInstance596 = null;
var ProtoInstance597 = null;
var ProtoInstance598 = null;
var ProtoInstance599 = null;
var ProtoInstance600 = null;
var ProtoInstance601 = null;
var ProtoInstance602 = null;
var ProtoInstance603 = null;
var ProtoInstance604 = null;
var ProtoInstance605 = null;
var ProtoInstance606 = null;
var ProtoInstance607 = null;
var ProtoInstance608 = null;
var ProtoInstance609 = null;
var ProtoInstance610 = null;
var ProtoInstance611 = null;
var ProtoInstance612 = null;
var ProtoInstance613 = null;
var ProtoInstance614 = null;
var ProtoInstance615 = null;
var ProtoInstance616 = null;
var ProtoInstance617 = null;
var ProtoInstance618 = null;
var ProtoInstance619 = null;
var ProtoInstance620 = null;
var ProtoInstance621 = null;
var ProtoInstance622 = null;
var ProtoInstance623 = null;
var ProtoInstance624 = null;
var ProtoInstance625 = null;
var ProtoInstance626 = null;
var ProtoInstance627 = null;
var ProtoInstance628 = null;
var ProtoInstance629 = null;
var ProtoInstance630 = null;
var ProtoInstance631 = null;
var ProtoInstance632 = null;
var ProtoInstance633 = null;
var ProtoInstance634 = null;
var ProtoInstance635 = null;
var ProtoInstance636 = null;
var ProtoInstance637 = null;
var ProtoInstance638 = null;
var ProtoInstance639 = null;
var ProtoInstance640 = null;
var ProtoInstance641 = null;
var ProtoInstance642 = null;
var ProtoInstance643 = null;
var ProtoInstance644 = null;
var ProtoInstance645 = null;
var ProtoInstance646 = null;
var ProtoInstance647 = null;
var ProtoInstance648 = null;
var ProtoInstance649 = null;
var ProtoInstance650 = null;
var ProtoInstance651 = null;
var ProtoInstance652 = null;
var ProtoInstance653 = null;
var ProtoInstance654 = null;
var ProtoInstance655 = null;
var ProtoInstance656 = null;
var ProtoInstance657 = null;
var ProtoInstance658 = null;
var ProtoInstance659 = null;
var ProtoInstance660 = null;
var ProtoInstance661 = null;
var ProtoInstance662 = null;
var ProtoInstance663 = null;
var ProtoInstance664 = null;
var ProtoInstance665 = null;
var ProtoInstance666 = null;
var ProtoInstance667 = null;
var ProtoInstance668 = null;
var ProtoInstance669 = null;
var ProtoInstance670 = null;
var ProtoInstance671 = null;
var ProtoInstance672 = null;
var ProtoInstance673 = null;
var ProtoInstance674 = null;
var ProtoInstance675 = null;
var ProtoInstance676 = null;
var ProtoInstance677 = null;
var ProtoInstance678 = null;
var ProtoInstance679 = null;
var ProtoInstance680 = null;
var ProtoInstance681 = null;
var ProtoInstance682 = null;
var ProtoInstance683 = null;
var ProtoInstance684 = null;
var ProtoInstance685 = null;
var ProtoInstance686 = null;
var ProtoInstance687 = null;
var ProtoInstance688 = null;
var ProtoInstance689 = null;
var ProtoInstance690 = null;
var ProtoInstance691 = null;
var ProtoInstance692 = null;
var ProtoInstance693 = null;
var ProtoInstance694 = null;
var ProtoInstance695 = null;
var ProtoInstance696 = null;
var ProtoInstance697 = null;
var ProtoInstance698 = null;
var ProtoInstance699 = null;
var ProtoInstance700 = null;
var ProtoInstance701 = null;
var ProtoInstance702 = null;
var ProtoInstance703 = null;
var ProtoInstance704 = null;
var ProtoInstance705 = null;
var ProtoInstance706 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
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
                    .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.009999999776482582), java.newFloat(0), java.newFloat(-0.009999999776482582), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.009999999776482582), java.newFloat(0.009999999776482582), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-0.009999999776482582), java.newFloat(0), java.newFloat(-0.009999999776482582), java.newFloat(0)]))))
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
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("Humanoid").setDEF("humanoid"))
        .addChild((new autoclass.Group()).setDEF("JointCenters_WorldInfo")
          .addChild((new autoclass.WorldInfo()).setTitle("HANIM 200x Default Joint Centers, LOA&#8209;1").setInfo(java.newArray("java.lang.String", [" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]))))
        .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.600000023841858), java.newFloat(0.75)])).setSpeed(java.newFloat(1.5))))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("humanoidBody")
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_humanoid_root")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("joints")
            .addChild(ProtoInstance118 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_humanoid_root"))
            .addChild(ProtoInstance235 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_sacroiliac"))
            .addChild(ProtoInstance275 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_hip"))
            .addChild(ProtoInstance294 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee"))
            .addChild(ProtoInstance308 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural"))
            .addChild(ProtoInstance320 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
            .addChild(ProtoInstance326 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_hip"))
            .addChild(ProtoInstance345 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee"))
            .addChild(ProtoInstance359 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural"))
            .addChild(ProtoInstance371 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
            .addChild(ProtoInstance377 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl5"))
            .addChild(ProtoInstance443 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_skullbase"))
            .addChild(ProtoInstance455 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_shoulder"))
            .addChild(ProtoInstance471 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow"))
            .addChild(ProtoInstance484 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal"))
            .addChild(ProtoInstance491 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_shoulder"))
            .addChild(ProtoInstance507 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow"))
            .addChild(ProtoInstance520 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("segments")
            .addChild(ProtoInstance527 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal"))
            .addChild(ProtoInstance532 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot"))
            .addChild(ProtoInstance537 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf"))
            .addChild(ProtoInstance538 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh"))
            .addChild(ProtoInstance542 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal"))
            .addChild(ProtoInstance547 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot"))
            .addChild(ProtoInstance552 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf"))
            .addChild(ProtoInstance553 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh"))
            .addChild(ProtoInstance557 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_pelvis"))
            .addChild(ProtoInstance558 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull"))
            .addChild(ProtoInstance569 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand"))
            .addChild(ProtoInstance575 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm"))
            .addChild(ProtoInstance580 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm"))
            .addChild(ProtoInstance582 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand"))
            .addChild(ProtoInstance588 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm"))
            .addChild(ProtoInstance593 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm"))
            .addChild(ProtoInstance595 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l5"))
            .addChild(ProtoInstance616 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("sites")
            .addChild(ProtoInstance626 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
            .addChild(ProtoInstance627 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
            .addChild(ProtoInstance628 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
            .addChild(ProtoInstance629 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2"))
            .addChild(ProtoInstance630 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
            .addChild(ProtoInstance631 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
            .addChild(ProtoInstance632 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
            .addChild(ProtoInstance633 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior"))
            .addChild(ProtoInstance634 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease"))
            .addChild(ProtoInstance635 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
            .addChild(ProtoInstance636 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles"))
            .addChild(ProtoInstance637 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
            .addChild(ProtoInstance638 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
            .addChild(ProtoInstance639 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
            .addChild(ProtoInstance640 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2"))
            .addChild(ProtoInstance641 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
            .addChild(ProtoInstance642 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
            .addChild(ProtoInstance643 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
            .addChild(ProtoInstance644 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior"))
            .addChild(ProtoInstance645 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease"))
            .addChild(ProtoInstance646 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
            .addChild(ProtoInstance647 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles"))
            .addChild(ProtoInstance648 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip"))
            .addChild(ProtoInstance649 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion"))
            .addChild(ProtoInstance650 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale"))
            .addChild(ProtoInstance651 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale"))
            .addChild(ProtoInstance652 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton"))
            .addChild(ProtoInstance653 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion"))
            .addChild(ProtoInstance654 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion"))
            .addChild(ProtoInstance655 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion"))
            .addChild(ProtoInstance656 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion"))
            .addChild(ProtoInstance657 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale"))
            .addChild(ProtoInstance658 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
            .addChild(ProtoInstance659 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
            .addChild(ProtoInstance660 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
            .addChild(ProtoInstance661 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
            .addChild(ProtoInstance662 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5"))
            .addChild(ProtoInstance663 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
            .addChild(ProtoInstance664 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
            .addChild(ProtoInstance665 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
            .addChild(ProtoInstance666 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale"))
            .addChild(ProtoInstance667 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles"))
            .addChild(ProtoInstance668 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
            .addChild(ProtoInstance669 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
            .addChild(ProtoInstance670 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
            .addChild(ProtoInstance671 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
            .addChild(ProtoInstance672 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5"))
            .addChild(ProtoInstance673 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
            .addChild(ProtoInstance674 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
            .addChild(ProtoInstance675 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
            .addChild(ProtoInstance676 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale"))
            .addChild(ProtoInstance677 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles"))
            .addChild(ProtoInstance678 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale"))
            .addChild(ProtoInstance679 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale"))
            .addChild(ProtoInstance680 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale"))
            .addChild(ProtoInstance681 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion"))
            .addChild(ProtoInstance682 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion"))
            .addChild(ProtoInstance683 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale"))
            .addChild(ProtoInstance684 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10"))
            .addChild(ProtoInstance685 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10"))
            .addChild(ProtoInstance686 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale"))
            .addChild(ProtoInstance687 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back"))
            .addChild(ProtoInstance688 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior"))
            .addChild(ProtoInstance689 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion"))
            .addChild(ProtoInstance690 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal"))
            .addChild(ProtoInstance691 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal"))
            .addChild(ProtoInstance692 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion"))
            .addChild(ProtoInstance693 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal"))
            .addChild(ProtoInstance694 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal"))
            .addChild(ProtoInstance695 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base"))
            .addChild(ProtoInstance696 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base"))
            .addChild(ProtoInstance697 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel"))
            .addChild(ProtoInstance698 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_asis"))
            .addChild(ProtoInstance699 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_asis"))
            .addChild(ProtoInstance700 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_iliocristale"))
            .addChild(ProtoInstance701 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_trochanterion"))
            .addChild(ProtoInstance702 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_iliocristale"))
            .addChild(ProtoInstance703 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_trochanterion"))
            .addChild(ProtoInstance704 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_psis"))
            .addChild(ProtoInstance705 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_psis"))
            .addChild(ProtoInstance706 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_crotch")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.8240000009536743 0.027699999511241913"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_sacroiliac"))
                .addChild(ProtoInstance42 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl5"))
                .addChild(ProtoInstance108 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacroiliac"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.914900004863739 0.0015999999595806003"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_hip"))
                    .addChild(ProtoInstance22 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_hip"))
                    .addChild(ProtoInstance41 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_pelvis")));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hip"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee"))
                        .addChild(ProtoInstance18 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural"))
                            .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                                .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                                        .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance9
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance9
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance10
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance10
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance11
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance11
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance12
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance12
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                                    .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                                    .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                                    .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance13
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance13
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance14
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance14
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance15
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance15
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance16
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance16
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance17
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance18
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance18
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance19 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease"))
                            .addChild(ProtoInstance20 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance21 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance19
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance19
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance20
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance20
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance21
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance21
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hip"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance22
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance23 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee"))
                        .addChild(ProtoInstance37 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance23
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance24 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural"))
                            .addChild(ProtoInstance36 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance25 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                                .addChild(ProtoInstance31 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance25
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance26 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance26
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance26
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance27 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                                        .addChild(ProtoInstance28 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance29 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance30 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance27
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance27
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance28
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance28
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance29
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance29
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance30
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance30
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance31
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance31
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance32 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                                    .addChild(ProtoInstance33 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                                    .addChild(ProtoInstance34 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                                    .addChild(ProtoInstance35 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance32
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance32
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance33
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance33
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance34
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance34
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance35
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance35
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance36
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance37
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance37
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance38 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease"))
                            .addChild(ProtoInstance39 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance40 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance38
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance38
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance39
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance39
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance40
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance40
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance41
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("pelvis"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl5"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836"));
ProtoInstance42
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance43 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_skullbase"))
                    .addChild(ProtoInstance55 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_shoulder"))
                    .addChild(ProtoInstance71 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_shoulder"))
                    .addChild(ProtoInstance87 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l5")));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skullbase"));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance43
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance44 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull")));
ProtoInstance44
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance44
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance45 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip"))
                            .addChild(ProtoInstance46 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion"))
                            .addChild(ProtoInstance47 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale"))
                            .addChild(ProtoInstance48 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale"))
                            .addChild(ProtoInstance49 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton"))
                            .addChild(ProtoInstance50 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion"))
                            .addChild(ProtoInstance51 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion"))
                            .addChild(ProtoInstance52 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion"))
                            .addChild(ProtoInstance53 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion"))
                            .addChild(ProtoInstance54 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale")));
ProtoInstance45
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance45
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance46
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance46
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance47
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance47
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance48
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance48
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance49
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance49
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance50
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance50
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance51
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance51
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance52
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance52
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance53
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance53
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance54
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance54
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_shoulder"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance55
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance56 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow"))
                        .addChild(ProtoInstance69 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance57 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal"))
                            .addChild(ProtoInstance64 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance57
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance58 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance58
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance58
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance59 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                                    .addChild(ProtoInstance60 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance61 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                                    .addChild(ProtoInstance62 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                                    .addChild(ProtoInstance63 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance59
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance59
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance60
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance60
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance61
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance61
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance62
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance62
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance63
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance63
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance64
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance64
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance65 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
                                .addChild(ProtoInstance66 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
                                .addChild(ProtoInstance67 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance68 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance65
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance65
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance66
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance66
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance67
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance67
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance68
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance68
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance69
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance69
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance70 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance70
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance70
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_shoulder"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance71
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance72 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow"))
                        .addChild(ProtoInstance85 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance72
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance73 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal"))
                            .addChild(ProtoInstance80 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance73
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance74 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance74
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance74
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance75 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                                    .addChild(ProtoInstance76 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance77 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                                    .addChild(ProtoInstance78 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                                    .addChild(ProtoInstance79 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance75
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance75
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance76
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance76
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance77
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance77
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance78
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance78
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance79
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance79
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance80
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance80
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance81 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
                                .addChild(ProtoInstance82 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
                                .addChild(ProtoInstance83 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance84 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance81
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance81
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance82
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance82
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance83
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance83
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance84
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance84
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance85
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance85
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance86 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance86
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance86
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance87
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l5"));
ProtoInstance87
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance88 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale"))
                        .addChild(ProtoInstance89 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale"))
                        .addChild(ProtoInstance90 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale"))
                        .addChild(ProtoInstance91 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion"))
                        .addChild(ProtoInstance92 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion"))
                        .addChild(ProtoInstance93 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale"))
                        .addChild(ProtoInstance94 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10"))
                        .addChild(ProtoInstance95 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10"))
                        .addChild(ProtoInstance96 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale"))
                        .addChild(ProtoInstance97 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back"))
                        .addChild(ProtoInstance98 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior"))
                        .addChild(ProtoInstance99 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion"))
                        .addChild(ProtoInstance100 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal"))
                        .addChild(ProtoInstance101 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal"))
                        .addChild(ProtoInstance102 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion"))
                        .addChild(ProtoInstance103 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal"))
                        .addChild(ProtoInstance104 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal"))
                        .addChild(ProtoInstance105 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base"))
                        .addChild(ProtoInstance106 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base"))
                        .addChild(ProtoInstance107 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel")));
ProtoInstance88
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance88
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance89
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance89
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance90
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance90
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance91
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance91
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance92
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance92
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance93
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance93
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance94
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance94
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance95
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance95
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance96
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance96
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance97
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance97
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance98
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance98
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance99
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance99
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance100
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance100
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance101
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance101
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance102
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance102
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance103
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance103
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance104
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance104
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance105
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance105
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance106
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance106
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance107
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance107
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance108
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacrum"));
ProtoInstance108
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance109 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_asis"))
                    .addChild(ProtoInstance110 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_asis"))
                    .addChild(ProtoInstance111 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_iliocristale"))
                    .addChild(ProtoInstance112 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_trochanterion"))
                    .addChild(ProtoInstance113 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_iliocristale"))
                    .addChild(ProtoInstance114 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_trochanterion"))
                    .addChild(ProtoInstance115 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_psis"))
                    .addChild(ProtoInstance116 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_psis"))
                    .addChild(ProtoInstance117 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_crotch")));
ProtoInstance109
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_asis"));
ProtoInstance109
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance110
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_asis"));
ProtoInstance110
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance111
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_iliocristale"));
ProtoInstance111
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance112
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_trochanterion"));
ProtoInstance112
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance113
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_iliocristale"));
ProtoInstance113
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance114
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_trochanterion"));
ProtoInstance114
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance115
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_psis"));
ProtoInstance115
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance116
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_psis"));
ProtoInstance116
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance117
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("crotch"));
ProtoInstance117
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance118
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance118
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid_root"));
ProtoInstance118
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.8240000009536743 0.027699999511241913"));
ProtoInstance118
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance119 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_sacroiliac"))
                .addChild(ProtoInstance159 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl5"))
                .addChild(ProtoInstance225 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_sacrum")));
ProtoInstance119
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance119
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacroiliac"));
ProtoInstance119
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.914900004863739 0.0015999999595806003"));
ProtoInstance119
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance120 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_hip"))
                    .addChild(ProtoInstance139 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_hip"))
                    .addChild(ProtoInstance158 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_pelvis")));
ProtoInstance120
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance120
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hip"));
ProtoInstance120
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance120
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance121 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee"))
                        .addChild(ProtoInstance135 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance121
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance121
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance121
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance121
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance122 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural"))
                            .addChild(ProtoInstance134 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance122
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance122
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance122
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance122
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance123 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                                .addChild(ProtoInstance129 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance123
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance123
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance123
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance123
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance124 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance124
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance124
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance125 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                                        .addChild(ProtoInstance126 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance127 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance128 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance125
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance125
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance126
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance126
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance127
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance127
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance128
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance128
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance129
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance129
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance130 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                                    .addChild(ProtoInstance131 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                                    .addChild(ProtoInstance132 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                                    .addChild(ProtoInstance133 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance130
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance130
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance131
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance131
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance132
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance132
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance133
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance133
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance134
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance135
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance135
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance136 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease"))
                            .addChild(ProtoInstance137 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance138 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance136
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance136
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance137
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance137
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance138
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance138
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance139
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance139
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hip"));
ProtoInstance139
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance139
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance140 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee"))
                        .addChild(ProtoInstance154 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance140
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance140
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance140
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance140
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance141 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural"))
                            .addChild(ProtoInstance153 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance141
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance141
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance141
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance141
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance142 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                                .addChild(ProtoInstance148 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance142
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance142
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance142
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance142
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance143 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance143
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance143
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance144 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                                        .addChild(ProtoInstance145 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                        .addChild(ProtoInstance146 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                        .addChild(ProtoInstance147 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance144
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance144
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance145
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance145
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance146
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance146
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance147
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance147
                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance148
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance148
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance149 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                                    .addChild(ProtoInstance150 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                                    .addChild(ProtoInstance151 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                                    .addChild(ProtoInstance152 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance149
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance149
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance150
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance150
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance151
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance151
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance152
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance152
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance153
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance154
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance154
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance155 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease"))
                            .addChild(ProtoInstance156 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                            .addChild(ProtoInstance157 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance155
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance155
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance156
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance156
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance157
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance157
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance158
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("pelvis"));
ProtoInstance159
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance159
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl5"));
ProtoInstance159
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836"));
ProtoInstance159
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance160 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_skullbase"))
                    .addChild(ProtoInstance172 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_shoulder"))
                    .addChild(ProtoInstance188 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_shoulder"))
                    .addChild(ProtoInstance204 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l5")));
ProtoInstance160
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance160
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skullbase"));
ProtoInstance160
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance160
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance161 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull")));
ProtoInstance161
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance161
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance162 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip"))
                            .addChild(ProtoInstance163 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion"))
                            .addChild(ProtoInstance164 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale"))
                            .addChild(ProtoInstance165 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale"))
                            .addChild(ProtoInstance166 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton"))
                            .addChild(ProtoInstance167 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion"))
                            .addChild(ProtoInstance168 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion"))
                            .addChild(ProtoInstance169 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion"))
                            .addChild(ProtoInstance170 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion"))
                            .addChild(ProtoInstance171 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale")));
ProtoInstance162
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance162
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance163
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance163
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance164
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance164
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance165
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance165
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance166
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance166
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance167
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance167
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance168
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance168
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance169
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance169
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance170
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance170
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance171
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance171
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance172
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance172
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_shoulder"));
ProtoInstance172
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance172
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance173 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow"))
                        .addChild(ProtoInstance186 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance173
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance173
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance173
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance173
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance174 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal"))
                            .addChild(ProtoInstance181 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance174
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance174
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance174
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance174
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance175 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance175
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance175
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance176 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                                    .addChild(ProtoInstance177 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance178 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                                    .addChild(ProtoInstance179 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                                    .addChild(ProtoInstance180 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance176
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance176
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance177
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance177
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance178
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance178
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance179
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance179
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance180
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance180
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance181
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance181
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance182 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
                                .addChild(ProtoInstance183 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
                                .addChild(ProtoInstance184 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance185 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance182
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance182
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance183
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance183
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance184
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance184
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance185
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance185
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance186
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance186
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance187 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance187
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance187
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance188
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance188
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_shoulder"));
ProtoInstance188
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance188
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance189 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow"))
                        .addChild(ProtoInstance202 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance189
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance189
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance189
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance189
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance190 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal"))
                            .addChild(ProtoInstance197 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance190
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance190
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance190
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance190
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance191 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance191
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance191
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance192 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                                    .addChild(ProtoInstance193 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                                    .addChild(ProtoInstance194 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                                    .addChild(ProtoInstance195 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                                    .addChild(ProtoInstance196 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance192
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance192
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance193
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance193
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance194
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance194
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance195
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance195
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance196
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance196
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance197
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance197
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance198 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
                                .addChild(ProtoInstance199 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
                                .addChild(ProtoInstance200 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                                .addChild(ProtoInstance201 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance198
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance198
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance199
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance199
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance200
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance200
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance201
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance201
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance202
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance202
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance203 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance203
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance203
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance204
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l5"));
ProtoInstance204
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance205 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale"))
                        .addChild(ProtoInstance206 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale"))
                        .addChild(ProtoInstance207 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale"))
                        .addChild(ProtoInstance208 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion"))
                        .addChild(ProtoInstance209 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion"))
                        .addChild(ProtoInstance210 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale"))
                        .addChild(ProtoInstance211 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10"))
                        .addChild(ProtoInstance212 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10"))
                        .addChild(ProtoInstance213 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale"))
                        .addChild(ProtoInstance214 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back"))
                        .addChild(ProtoInstance215 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior"))
                        .addChild(ProtoInstance216 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion"))
                        .addChild(ProtoInstance217 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal"))
                        .addChild(ProtoInstance218 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal"))
                        .addChild(ProtoInstance219 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion"))
                        .addChild(ProtoInstance220 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal"))
                        .addChild(ProtoInstance221 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal"))
                        .addChild(ProtoInstance222 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base"))
                        .addChild(ProtoInstance223 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base"))
                        .addChild(ProtoInstance224 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel")));
ProtoInstance205
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance205
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance206
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance206
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance207
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance207
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance208
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance208
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance209
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance209
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance210
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance210
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance211
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance211
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance212
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance212
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance213
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance213
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance214
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance214
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance215
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance215
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance216
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance216
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance217
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance217
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance218
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance218
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance219
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance219
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance220
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance220
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance221
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance221
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance222
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance222
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance223
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance223
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance224
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance224
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance225
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacrum"));
ProtoInstance225
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance226 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_asis"))
                    .addChild(ProtoInstance227 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_asis"))
                    .addChild(ProtoInstance228 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_iliocristale"))
                    .addChild(ProtoInstance229 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_trochanterion"))
                    .addChild(ProtoInstance230 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_iliocristale"))
                    .addChild(ProtoInstance231 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_trochanterion"))
                    .addChild(ProtoInstance232 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_psis"))
                    .addChild(ProtoInstance233 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_psis"))
                    .addChild(ProtoInstance234 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_crotch")));
ProtoInstance226
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_asis"));
ProtoInstance226
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance227
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_asis"));
ProtoInstance227
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance228
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_iliocristale"));
ProtoInstance228
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance229
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_trochanterion"));
ProtoInstance229
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance230
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_iliocristale"));
ProtoInstance230
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance231
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_trochanterion"));
ProtoInstance231
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance232
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_psis"));
ProtoInstance232
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance233
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_psis"));
ProtoInstance233
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance234
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("crotch"));
ProtoInstance234
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance235
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance235
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacroiliac"));
ProtoInstance235
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.914900004863739 0.0015999999595806003"));
ProtoInstance235
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance236 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_hip"))
                .addChild(ProtoInstance255 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_hip"))
                .addChild(ProtoInstance274 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_pelvis")));
ProtoInstance236
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance236
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hip"));
ProtoInstance236
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance236
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance237 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee"))
                    .addChild(ProtoInstance251 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance237
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance237
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance237
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance237
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance238 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural"))
                        .addChild(ProtoInstance250 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance238
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance238
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance238
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance238
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance239 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                            .addChild(ProtoInstance245 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance239
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance239
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance239
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance239
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance240 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance240
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance240
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance241 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                                    .addChild(ProtoInstance242 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                    .addChild(ProtoInstance243 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                    .addChild(ProtoInstance244 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance241
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance241
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance242
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance242
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance243
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance243
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance244
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance244
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance245
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance245
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance246 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                                .addChild(ProtoInstance247 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                                .addChild(ProtoInstance248 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                                .addChild(ProtoInstance249 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance246
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance246
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance247
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance247
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance248
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance248
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance249
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance249
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance250
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance251
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance251
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance252 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease"))
                        .addChild(ProtoInstance253 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                        .addChild(ProtoInstance254 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance252
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance252
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance253
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance253
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance254
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance254
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance255
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance255
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hip"));
ProtoInstance255
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance255
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance256 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee"))
                    .addChild(ProtoInstance270 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance256
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance256
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance256
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance256
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance257 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural"))
                        .addChild(ProtoInstance269 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance257
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance257
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance257
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance257
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance258 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                            .addChild(ProtoInstance264 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance258
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance258
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance258
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance258
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance259 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance259
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance259
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance260 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                                    .addChild(ProtoInstance261 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                    .addChild(ProtoInstance262 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                    .addChild(ProtoInstance263 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance260
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance260
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance261
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance261
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance262
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance262
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance263
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance263
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance264
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance264
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance265 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                                .addChild(ProtoInstance266 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                                .addChild(ProtoInstance267 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                                .addChild(ProtoInstance268 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance265
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance265
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance266
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance266
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance267
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance267
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance268
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance268
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance269
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance270
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance270
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance271 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease"))
                        .addChild(ProtoInstance272 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                        .addChild(ProtoInstance273 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance271
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance271
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance272
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance272
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance273
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance273
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance274
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("pelvis"));
ProtoInstance275
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance275
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hip"));
ProtoInstance275
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752"));
ProtoInstance275
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance276 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee"))
                .addChild(ProtoInstance290 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh")));
ProtoInstance276
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance276
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance276
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance276
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance277 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural"))
                    .addChild(ProtoInstance289 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance277
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance277
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance277
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance277
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance278 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                        .addChild(ProtoInstance284 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance278
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance278
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance278
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance278
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance279 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance279
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance279
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance280 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                                .addChild(ProtoInstance281 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                                .addChild(ProtoInstance282 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                                .addChild(ProtoInstance283 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance280
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance280
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance281
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance281
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance282
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance282
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance283
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance283
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance284
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance284
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance285 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                            .addChild(ProtoInstance286 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                            .addChild(ProtoInstance287 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                            .addChild(ProtoInstance288 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance285
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance285
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance286
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance286
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance287
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance287
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance288
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance288
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance289
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance290
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance290
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance291 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease"))
                    .addChild(ProtoInstance292 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance293 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance291
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance291
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance292
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance292
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance293
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance293
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance294
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance294
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance294
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995"));
ProtoInstance294
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance295 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural"))
                .addChild(ProtoInstance307 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf")));
ProtoInstance295
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance295
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance295
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance295
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance296 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                    .addChild(ProtoInstance302 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance296
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance296
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance296
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance296
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance297 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance297
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance297
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance298 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                            .addChild(ProtoInstance299 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                            .addChild(ProtoInstance300 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                            .addChild(ProtoInstance301 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance298
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance298
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance299
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance299
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance300
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance300
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance301
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance301
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance302
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance302
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance303 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                        .addChild(ProtoInstance304 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                        .addChild(ProtoInstance305 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                        .addChild(ProtoInstance306 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance303
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance303
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance304
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance304
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance305
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance305
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance306
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance306
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance307
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance308
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance308
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance308
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727"));
ProtoInstance308
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance309 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal_"))
                .addChild(ProtoInstance315 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance309
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance309
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance309
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance309
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance310 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance310
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance310
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance311 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                        .addChild(ProtoInstance312 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                        .addChild(ProtoInstance313 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                        .addChild(ProtoInstance314 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance311
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance311
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance312
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance312
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance313
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance313
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance314
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance314
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance315
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance315
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance316 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                    .addChild(ProtoInstance317 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                    .addChild(ProtoInstance318 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                    .addChild(ProtoInstance319 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance316
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance316
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance317
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance317
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance318
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance318
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance319
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance319
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance320
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance320
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance320
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363"));
ProtoInstance320
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance321 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal")));
ProtoInstance321
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance321
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance322 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                    .addChild(ProtoInstance323 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance324 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance325 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance322
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance322
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance323
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance323
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance324
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance324
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance325
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance325
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance326
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance326
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hip"));
ProtoInstance326
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626"));
ProtoInstance326
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance327 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee"))
                .addChild(ProtoInstance341 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh")));
ProtoInstance327
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance327
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance327
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance327
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance328 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural"))
                    .addChild(ProtoInstance340 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance328
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance328
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance328
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance328
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance329 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                        .addChild(ProtoInstance335 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance329
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance329
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance329
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance329
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance330 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance330
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance330
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance331 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                                .addChild(ProtoInstance332 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                                .addChild(ProtoInstance333 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                                .addChild(ProtoInstance334 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance331
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance331
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance332
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance332
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance333
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance333
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance334
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance334
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance335
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance335
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance336 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                            .addChild(ProtoInstance337 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                            .addChild(ProtoInstance338 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                            .addChild(ProtoInstance339 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance336
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance336
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance337
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance337
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance338
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance338
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance339
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance339
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance340
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance341
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance341
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance342 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease"))
                    .addChild(ProtoInstance343 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                    .addChild(ProtoInstance344 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance342
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance342
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance343
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance343
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance344
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance344
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance345
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance345
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance345
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492"));
ProtoInstance345
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance346 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural"))
                .addChild(ProtoInstance358 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf")));
ProtoInstance346
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance346
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance346
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance346
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance347 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                    .addChild(ProtoInstance353 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance347
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance347
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance347
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance347
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance348 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance348
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance348
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance349 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                            .addChild(ProtoInstance350 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                            .addChild(ProtoInstance351 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                            .addChild(ProtoInstance352 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance349
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance349
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance350
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance350
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance351
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance351
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance352
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance352
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance353
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance353
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance354 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                        .addChild(ProtoInstance355 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                        .addChild(ProtoInstance356 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                        .addChild(ProtoInstance357 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance354
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance354
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance355
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance355
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance356
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance356
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance357
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance357
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance358
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance359
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance359
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance359
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044"));
ProtoInstance359
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance360 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal_"))
                .addChild(ProtoInstance366 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance360
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance360
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance360
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance360
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance361 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance361
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance361
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance362 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                        .addChild(ProtoInstance363 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                        .addChild(ProtoInstance364 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                        .addChild(ProtoInstance365 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance362
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance362
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance363
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance363
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance364
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance364
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance365
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance365
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance366
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance366
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance367 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                    .addChild(ProtoInstance368 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                    .addChild(ProtoInstance369 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                    .addChild(ProtoInstance370 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance367
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance367
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance368
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance368
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance369
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance369
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance370
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance370
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance371
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance371
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance371
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.08009999990463257 0 0.03680000081658363"));
ProtoInstance371
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance372 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal")));
ProtoInstance372
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance372
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance373 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                    .addChild(ProtoInstance374 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                    .addChild(ProtoInstance375 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                    .addChild(ProtoInstance376 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance373
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance373
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance374
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance374
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance375
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance375
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance376
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance376
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance377
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance377
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl5"));
ProtoInstance377
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836"));
ProtoInstance377
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance378 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_skullbase"))
                .addChild(ProtoInstance390 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_shoulder"))
                .addChild(ProtoInstance406 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_shoulder"))
                .addChild(ProtoInstance422 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l5")));
ProtoInstance378
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance378
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skullbase"));
ProtoInstance378
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance378
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance379 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull")));
ProtoInstance379
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance379
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance380 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip"))
                        .addChild(ProtoInstance381 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion"))
                        .addChild(ProtoInstance382 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale"))
                        .addChild(ProtoInstance383 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale"))
                        .addChild(ProtoInstance384 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton"))
                        .addChild(ProtoInstance385 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion"))
                        .addChild(ProtoInstance386 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion"))
                        .addChild(ProtoInstance387 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion"))
                        .addChild(ProtoInstance388 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion"))
                        .addChild(ProtoInstance389 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale")));
ProtoInstance380
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance380
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance381
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance381
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance382
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance382
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance383
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance383
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance384
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance384
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance385
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance385
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance386
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance386
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance387
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance387
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance388
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance388
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance389
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance389
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance390
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance390
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_shoulder"));
ProtoInstance390
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance390
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance391 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow"))
                    .addChild(ProtoInstance404 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance391
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance391
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance391
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance391
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance392 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal"))
                        .addChild(ProtoInstance399 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance392
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance392
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance392
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance392
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance393 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance393
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance393
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance394 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                                .addChild(ProtoInstance395 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                                .addChild(ProtoInstance396 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                                .addChild(ProtoInstance397 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                                .addChild(ProtoInstance398 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance394
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance394
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance395
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance395
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance396
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance396
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance397
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance397
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance398
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance398
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance399
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance399
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance400 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
                            .addChild(ProtoInstance401 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
                            .addChild(ProtoInstance402 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                            .addChild(ProtoInstance403 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance400
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance400
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance401
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance401
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance402
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance402
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance403
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance403
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance404
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance404
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance405 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance405
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance405
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance406
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance406
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_shoulder"));
ProtoInstance406
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance406
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance407 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow"))
                    .addChild(ProtoInstance420 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance407
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance407
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance407
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance407
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance408 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal"))
                        .addChild(ProtoInstance415 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance408
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance408
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance408
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance408
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance409 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance409
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance409
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance410 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                                .addChild(ProtoInstance411 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                                .addChild(ProtoInstance412 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                                .addChild(ProtoInstance413 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                                .addChild(ProtoInstance414 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance410
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance410
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance411
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance411
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance412
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance412
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance413
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance413
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance414
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance414
                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance415
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance415
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance416 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
                            .addChild(ProtoInstance417 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
                            .addChild(ProtoInstance418 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                            .addChild(ProtoInstance419 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance416
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance416
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance417
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance417
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance418
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance418
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance419
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance419
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance420
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance420
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance421 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance421
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance421
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance422
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l5"));
ProtoInstance422
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance423 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale"))
                    .addChild(ProtoInstance424 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale"))
                    .addChild(ProtoInstance425 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale"))
                    .addChild(ProtoInstance426 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion"))
                    .addChild(ProtoInstance427 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion"))
                    .addChild(ProtoInstance428 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale"))
                    .addChild(ProtoInstance429 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10"))
                    .addChild(ProtoInstance430 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10"))
                    .addChild(ProtoInstance431 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale"))
                    .addChild(ProtoInstance432 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back"))
                    .addChild(ProtoInstance433 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior"))
                    .addChild(ProtoInstance434 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion"))
                    .addChild(ProtoInstance435 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal"))
                    .addChild(ProtoInstance436 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal"))
                    .addChild(ProtoInstance437 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion"))
                    .addChild(ProtoInstance438 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal"))
                    .addChild(ProtoInstance439 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal"))
                    .addChild(ProtoInstance440 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base"))
                    .addChild(ProtoInstance441 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base"))
                    .addChild(ProtoInstance442 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel")));
ProtoInstance423
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance423
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance424
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance424
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance425
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance425
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance426
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance426
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance427
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance427
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance428
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance428
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance429
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance429
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance430
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance430
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance431
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance431
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance432
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance432
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance433
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance433
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance434
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance434
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance435
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance435
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance436
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance436
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance437
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance437
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance438
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance438
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance439
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance439
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance440
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance440
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance441
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance441
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance442
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance442
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance443
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance443
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skullbase"));
ProtoInstance443
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.004399999976158142 1.62090003490448 0.023600000888109207"));
ProtoInstance443
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance444 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull")));
ProtoInstance444
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance444
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance445 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip"))
                    .addChild(ProtoInstance446 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion"))
                    .addChild(ProtoInstance447 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale"))
                    .addChild(ProtoInstance448 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale"))
                    .addChild(ProtoInstance449 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton"))
                    .addChild(ProtoInstance450 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion"))
                    .addChild(ProtoInstance451 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion"))
                    .addChild(ProtoInstance452 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion"))
                    .addChild(ProtoInstance453 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion"))
                    .addChild(ProtoInstance454 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale")));
ProtoInstance445
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance445
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance446
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance446
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance447
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance447
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance448
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance448
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance449
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance449
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance450
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance450
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance451
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance451
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance452
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance452
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance453
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance453
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance454
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance454
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance455
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance455
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_shoulder"));
ProtoInstance455
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727"));
ProtoInstance455
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance456 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow"))
                .addChild(ProtoInstance469 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm")));
ProtoInstance456
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance456
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance456
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance456
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance457 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal"))
                    .addChild(ProtoInstance464 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance457
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance457
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance457
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance457
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance458 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance458
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance458
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance459 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                            .addChild(ProtoInstance460 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                            .addChild(ProtoInstance461 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                            .addChild(ProtoInstance462 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                            .addChild(ProtoInstance463 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance459
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance459
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance460
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance460
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance461
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance461
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance462
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance462
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance463
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance463
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance464
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance464
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance465 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
                        .addChild(ProtoInstance466 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
                        .addChild(ProtoInstance467 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                        .addChild(ProtoInstance468 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance465
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance465
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance466
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance466
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance467
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance467
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance468
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance468
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance469
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance469
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance470 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance470
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance470
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance471
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance471
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance471
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512"));
ProtoInstance471
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance472 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal"))
                .addChild(ProtoInstance479 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm")));
ProtoInstance472
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance472
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance472
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance472
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance473 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance473
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance473
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance474 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                        .addChild(ProtoInstance475 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                        .addChild(ProtoInstance476 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                        .addChild(ProtoInstance477 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                        .addChild(ProtoInstance478 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance474
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance474
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance475
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance475
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance476
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance476
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance477
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance477
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance478
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance478
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance479
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance479
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance480 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
                    .addChild(ProtoInstance481 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
                    .addChild(ProtoInstance482 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance483 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance480
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance480
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance481
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance481
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance482
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance482
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance483
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance483
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance484
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance484
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance484
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538"));
ProtoInstance484
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance485 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance485
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance485
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance486 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                    .addChild(ProtoInstance487 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance488 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                    .addChild(ProtoInstance489 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                    .addChild(ProtoInstance490 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance486
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance486
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance487
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance487
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance488
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance488
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance489
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance489
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance490
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance490
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance491
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance491
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_shoulder"));
ProtoInstance491
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104"));
ProtoInstance491
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance492 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow"))
                .addChild(ProtoInstance505 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm")));
ProtoInstance492
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance492
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance492
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance492
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance493 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal"))
                    .addChild(ProtoInstance500 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance493
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance493
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance493
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance493
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance494 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance494
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance494
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance495 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                            .addChild(ProtoInstance496 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                            .addChild(ProtoInstance497 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                            .addChild(ProtoInstance498 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                            .addChild(ProtoInstance499 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance495
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance495
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance496
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance496
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance497
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance497
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance498
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance498
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance499
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance499
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance500
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance500
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance501 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
                        .addChild(ProtoInstance502 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
                        .addChild(ProtoInstance503 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                        .addChild(ProtoInstance504 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance501
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance501
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance502
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance502
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance503
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance503
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance504
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance504
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance505
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance505
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance506 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance506
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance506
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance507
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance507
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance507
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104"));
ProtoInstance507
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance508 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal"))
                .addChild(ProtoInstance515 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm")));
ProtoInstance508
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance508
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance508
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance508
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance509 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance509
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance509
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance510 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                        .addChild(ProtoInstance511 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                        .addChild(ProtoInstance512 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                        .addChild(ProtoInstance513 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                        .addChild(ProtoInstance514 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance510
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance510
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance511
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance511
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance512
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance512
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance513
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance513
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance514
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance514
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance515
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance515
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance516 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
                    .addChild(ProtoInstance517 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
                    .addChild(ProtoInstance518 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                    .addChild(ProtoInstance519 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance516
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance516
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance517
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance517
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance518
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance518
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance519
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance519
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance520
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance520
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance520
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522"));
ProtoInstance520
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance521 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance521
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance521
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance522 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                    .addChild(ProtoInstance523 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                    .addChild(ProtoInstance524 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                    .addChild(ProtoInstance525 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                    .addChild(ProtoInstance526 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance522
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance522
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance523
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance523
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance524
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance524
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance525
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance525
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance526
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance526
                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance527
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance527
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance528 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_middistal_tip"))
                .addChild(ProtoInstance529 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_5"))
                .addChild(ProtoInstance530 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx_1"))
                .addChild(ProtoInstance531 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_2")));
ProtoInstance528
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance528
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance529
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance529
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance530
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance530
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance531
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance531
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance532
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance532
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance533 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus"))
                .addChild(ProtoInstance534 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus"))
                .addChild(ProtoInstance535 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion"))
                .addChild(ProtoInstance536 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior")));
ProtoInstance533
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance533
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance534
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance534
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance535
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance535
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance536
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance536
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance537
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance538
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance538
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance539 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease"))
                .addChild(ProtoInstance540 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles"))
                .addChild(ProtoInstance541 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles")));
ProtoInstance539
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance539
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance540
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance540
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance541
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance541
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance542
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance542
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance543 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_middistal_tip"))
                .addChild(ProtoInstance544 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_5"))
                .addChild(ProtoInstance545 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx_1"))
                .addChild(ProtoInstance546 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_2")));
ProtoInstance543
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance543
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance544
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance544
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance545
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance545
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance546
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance546
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance547
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance547
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance548 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus"))
                .addChild(ProtoInstance549 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus"))
                .addChild(ProtoInstance550 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion"))
                .addChild(ProtoInstance551 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior")));
ProtoInstance548
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance548
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance549
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance549
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance550
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance550
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance551
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance551
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance552
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance553
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance553
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance554 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease"))
                .addChild(ProtoInstance555 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles"))
                .addChild(ProtoInstance556 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles")));
ProtoInstance554
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance554
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance555
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance555
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance556
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance556
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance557
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("pelvis"));
ProtoInstance558
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance558
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance559 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip"))
                .addChild(ProtoInstance560 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion"))
                .addChild(ProtoInstance561 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale"))
                .addChild(ProtoInstance562 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale"))
                .addChild(ProtoInstance563 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton"))
                .addChild(ProtoInstance564 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion"))
                .addChild(ProtoInstance565 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion"))
                .addChild(ProtoInstance566 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion"))
                .addChild(ProtoInstance567 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion"))
                .addChild(ProtoInstance568 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale")));
ProtoInstance559
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance559
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance560
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance560
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance561
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance561
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance562
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance562
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance563
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance563
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance564
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance564
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance565
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance565
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance566
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance566
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance567
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance567
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance568
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance568
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance569
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance569
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance570 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_hand_tip"))
                .addChild(ProtoInstance571 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_2"))
                .addChild(ProtoInstance572 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion"))
                .addChild(ProtoInstance573 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid"))
                .addChild(ProtoInstance574 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx_5")));
ProtoInstance570
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance570
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance571
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance571
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance572
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance572
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance573
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance573
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance574
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance574
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance575
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance575
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance576 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid"))
                .addChild(ProtoInstance577 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon"))
                .addChild(ProtoInstance578 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles"))
                .addChild(ProtoInstance579 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale")));
ProtoInstance576
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance576
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance577
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance577
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance578
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance578
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance579
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance579
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance580
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance580
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance581 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles")));
ProtoInstance581
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance581
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance582
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance582
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance583 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_hand_tip"))
                .addChild(ProtoInstance584 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_2"))
                .addChild(ProtoInstance585 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion"))
                .addChild(ProtoInstance586 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid"))
                .addChild(ProtoInstance587 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx_5")));
ProtoInstance583
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance583
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance584
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance584
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance585
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance585
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance586
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance586
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance587
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance587
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance588
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance588
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance589 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid"))
                .addChild(ProtoInstance590 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon"))
                .addChild(ProtoInstance591 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles"))
                .addChild(ProtoInstance592 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale")));
ProtoInstance589
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance589
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance590
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance590
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance591
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance591
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance592
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance592
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance593
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance593
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance594 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles")));
ProtoInstance594
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance594
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance595
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l5"));
ProtoInstance595
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance596 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale"))
                .addChild(ProtoInstance597 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale"))
                .addChild(ProtoInstance598 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale"))
                .addChild(ProtoInstance599 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion"))
                .addChild(ProtoInstance600 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion"))
                .addChild(ProtoInstance601 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale"))
                .addChild(ProtoInstance602 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10"))
                .addChild(ProtoInstance603 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10"))
                .addChild(ProtoInstance604 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale"))
                .addChild(ProtoInstance605 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back"))
                .addChild(ProtoInstance606 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior"))
                .addChild(ProtoInstance607 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion"))
                .addChild(ProtoInstance608 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal"))
                .addChild(ProtoInstance609 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal"))
                .addChild(ProtoInstance610 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion"))
                .addChild(ProtoInstance611 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal"))
                .addChild(ProtoInstance612 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal"))
                .addChild(ProtoInstance613 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base"))
                .addChild(ProtoInstance614 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base"))
                .addChild(ProtoInstance615 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel")));
ProtoInstance596
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance596
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance597
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance597
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance598
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance598
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance599
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance599
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance600
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance600
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance601
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance601
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance602
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance602
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance603
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance603
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance604
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance604
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance605
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance605
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance606
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance606
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance607
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance607
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance608
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance608
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance609
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance609
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance610
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance610
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance611
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance611
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance612
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance612
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance613
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance613
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance614
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance614
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance615
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance615
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance616
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacrum"));
ProtoInstance616
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance617 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_asis"))
                .addChild(ProtoInstance618 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_asis"))
                .addChild(ProtoInstance619 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_iliocristale"))
                .addChild(ProtoInstance620 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_trochanterion"))
                .addChild(ProtoInstance621 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_iliocristale"))
                .addChild(ProtoInstance622 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_trochanterion"))
                .addChild(ProtoInstance623 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_psis"))
                .addChild(ProtoInstance624 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_psis"))
                .addChild(ProtoInstance625 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_crotch")));
ProtoInstance617
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_asis"));
ProtoInstance617
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance618
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_asis"));
ProtoInstance618
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance619
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_iliocristale"));
ProtoInstance619
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance620
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_trochanterion"));
ProtoInstance620
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance621
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_iliocristale"));
ProtoInstance621
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance622
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_trochanterion"));
ProtoInstance622
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance623
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_psis"));
ProtoInstance623
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance624
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_psis"));
ProtoInstance624
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance625
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("crotch"));
ProtoInstance625
                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
ProtoInstance626
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal_tip"));
ProtoInstance626
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261"));
ProtoInstance627
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance627
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803"));
ProtoInstance628
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance628
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731"));
ProtoInstance629
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance629
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476"));
ProtoInstance630
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance630
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311"));
ProtoInstance631
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance631
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475"));
ProtoInstance632
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance632
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492"));
ProtoInstance633
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance633
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973"));
ProtoInstance634
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance634
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757"));
ProtoInstance635
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance635
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746"));
ProtoInstance636
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance636
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183"));
ProtoInstance637
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal_tip"));
ProtoInstance637
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487"));
ProtoInstance638
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance638
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973"));
ProtoInstance639
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance639
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804"));
ProtoInstance640
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance640
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634"));
ProtoInstance641
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance641
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934"));
ProtoInstance642
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance642
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803"));
ProtoInstance643
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance643
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935"));
ProtoInstance644
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance644
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874"));
ProtoInstance645
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance645
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016"));
ProtoInstance646
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance646
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052"));
ProtoInstance647
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance647
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821"));
ProtoInstance648
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance648
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678"));
ProtoInstance649
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance649
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.005799999926239252 1.631600022315979 0.0851999968290329"));
ProtoInstance650
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance650
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547"));
ProtoInstance651
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance651
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547"));
ProtoInstance652
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance652
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962"));
ProtoInstance653
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance653
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642"));
ProtoInstance654
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance654
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176"));
ProtoInstance655
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance655
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874"));
ProtoInstance656
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance656
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066"));
ProtoInstance657
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance657
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361"));
ProtoInstance658
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand_tip"));
ProtoInstance658
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205"));
ProtoInstance659
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance659
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597"));
ProtoInstance660
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance660
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604"));
ProtoInstance661
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance661
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098"));
ProtoInstance662
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance662
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262"));
ProtoInstance663
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance663
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691"));
ProtoInstance664
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance664
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453"));
ProtoInstance665
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance665
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661"));
ProtoInstance666
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance666
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268"));
ProtoInstance667
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance667
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355"));
ProtoInstance668
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand_tip"));
ProtoInstance668
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836"));
ProtoInstance669
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance669
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933"));
ProtoInstance670
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance670
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131"));
ProtoInstance671
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance671
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294"));
ProtoInstance672
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance672
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951"));
ProtoInstance673
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance673
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236"));
ProtoInstance674
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance674
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142"));
ProtoInstance675
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance675
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628"));
ProtoInstance676
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance676
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754"));
ProtoInstance677
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance677
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443"));
ProtoInstance678
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance678
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033"));
ProtoInstance679
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance679
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869"));
ProtoInstance680
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance680
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754"));
ProtoInstance681
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance681
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911"));
ProtoInstance682
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance682
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689"));
ProtoInstance683
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance683
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683"));
ProtoInstance684
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance684
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432"));
ProtoInstance685
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance685
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202"));
ProtoInstance686
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance686
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754"));
ProtoInstance687
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance687
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661"));
ProtoInstance688
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance688
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754"));
ProtoInstance689
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance689
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541"));
ProtoInstance690
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance690
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438"));
ProtoInstance691
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance691
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678"));
ProtoInstance692
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance692
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014"));
ProtoInstance693
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance693
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937"));
ProtoInstance694
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance694
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388"));
ProtoInstance695
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance695
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071"));
ProtoInstance696
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance696
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478"));
ProtoInstance697
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance697
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.006899999920278788 1.09660005569458 0.10170000046491623"));
ProtoInstance698
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_asis"));
ProtoInstance698
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747"));
ProtoInstance699
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_asis"));
ProtoInstance699
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836"));
ProtoInstance700
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_iliocristale"));
ProtoInstance700
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187"));
ProtoInstance701
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_trochanterion"));
ProtoInstance701
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514"));
ProtoInstance702
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_iliocristale"));
ProtoInstance702
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001"));
ProtoInstance703
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_trochanterion"));
ProtoInstance703
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183"));
ProtoInstance704
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_psis"));
ProtoInstance704
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082"));
ProtoInstance705
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_psis"));
ProtoInstance705
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388"));
ProtoInstance706
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("crotch"));
ProtoInstance706
              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367"));
    X3D0.toFileX3D("../data/LOA1ExampleSourceWithDiamonds.new.x3d");
