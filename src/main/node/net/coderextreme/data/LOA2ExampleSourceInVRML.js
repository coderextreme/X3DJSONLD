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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta((new autoclass.meta()).setName("source").setContent("LOA2ExampleSourceInVRML.wrl")))
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
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
                .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
                .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
                .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
                .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))))))
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
          .addChild((new autoclass.WorldInfo()).setTitle("HANIM 200x Default Joint Centers, LOA&#8209;2").setInfo(java.newArray("java.lang.String", [" HANIM 200x Default Joint Centers, Level-Of-Articulation 2 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]))))
        .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.60000002384186), java.newFloat(0.75)])).setSpeed(java.newFloat(1.5))))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("humanoidBody")
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_humanoid_root_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("joints")
            .addChild(ProtoInstance232 = (new autoclass.ProtoInstance()).setUSE("hanim_humanoid_root_2"))
            .addChild(ProtoInstance233 = (new autoclass.ProtoInstance()).setUSE("hanim_sacroiliac_2"))
            .addChild(ProtoInstance234 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hip_2"))
            .addChild(ProtoInstance235 = (new autoclass.ProtoInstance()).setUSE("hanim_l_knee_2"))
            .addChild(ProtoInstance236 = (new autoclass.ProtoInstance()).setUSE("hanim_l_talocrural_2"))
            .addChild(ProtoInstance237 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsotarsal_interphalangeal__2"))
            .addChild(ProtoInstance238 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metatarsophalangeal__2"))
            .addChild(ProtoInstance239 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_interphalangeal__2"))
            .addChild(ProtoInstance240 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hip_2"))
            .addChild(ProtoInstance241 = (new autoclass.ProtoInstance()).setUSE("hanim_r_knee_2"))
            .addChild(ProtoInstance242 = (new autoclass.ProtoInstance()).setUSE("hanim_r_talocrural_2"))
            .addChild(ProtoInstance243 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsotarsal_interphalangeal__2"))
            .addChild(ProtoInstance244 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metatarsophalangeal__2"))
            .addChild(ProtoInstance245 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_interphalangeal__2"))
            .addChild(ProtoInstance246 = (new autoclass.ProtoInstance()).setUSE("hanim_vl5_2"))
            .addChild(ProtoInstance247 = (new autoclass.ProtoInstance()).setUSE("hanim_vl3_2"))
            .addChild(ProtoInstance248 = (new autoclass.ProtoInstance()).setUSE("hanim_vl1_2"))
            .addChild(ProtoInstance249 = (new autoclass.ProtoInstance()).setUSE("hanim_vt10_2"))
            .addChild(ProtoInstance250 = (new autoclass.ProtoInstance()).setUSE("hanim_vt6_2"))
            .addChild(ProtoInstance251 = (new autoclass.ProtoInstance()).setUSE("hanim_vt1_2"))
            .addChild(ProtoInstance252 = (new autoclass.ProtoInstance()).setUSE("hanim_vc4_2"))
            .addChild(ProtoInstance253 = (new autoclass.ProtoInstance()).setUSE("hanim_vc2_2"))
            .addChild(ProtoInstance254 = (new autoclass.ProtoInstance()).setUSE("hanim_skullbase_2"))
            .addChild(ProtoInstance255 = (new autoclass.ProtoInstance()).setUSE("hanim_l_sternoclavicular_2"))
            .addChild(ProtoInstance256 = (new autoclass.ProtoInstance()).setUSE("hanim_l_acromioclavicular_2"))
            .addChild(ProtoInstance257 = (new autoclass.ProtoInstance()).setUSE("hanim_l_shoulder_2"))
            .addChild(ProtoInstance258 = (new autoclass.ProtoInstance()).setUSE("hanim_l_elbow_2"))
            .addChild(ProtoInstance259 = (new autoclass.ProtoInstance()).setUSE("hanim_l_radiocarpal_2"))
            .addChild(ProtoInstance260 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpometacarpal2"))
            .addChild(ProtoInstance261 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpophalangeal2"))
            .addChild(ProtoInstance262 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_interphalangeal2"))
            .addChild(ProtoInstance263 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpometacarpal3"))
            .addChild(ProtoInstance264 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpophalangeal3"))
            .addChild(ProtoInstance265 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_proximal_interphalangeal3"))
            .addChild(ProtoInstance266 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_interphalangeal3"))
            .addChild(ProtoInstance267 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpometacarpal4"))
            .addChild(ProtoInstance268 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpophalangeal4"))
            .addChild(ProtoInstance269 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_proximal_interphalangeal4"))
            .addChild(ProtoInstance270 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_interphalangeal4"))
            .addChild(ProtoInstance271 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpometacarpal5"))
            .addChild(ProtoInstance272 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpophalangeal5"))
            .addChild(ProtoInstance273 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_proximal_interphalangeal5"))
            .addChild(ProtoInstance274 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_interphalangeal5"))
            .addChild(ProtoInstance275 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpometacarpal6"))
            .addChild(ProtoInstance276 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpophalangeal6"))
            .addChild(ProtoInstance277 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_proximal_interphalangeal6"))
            .addChild(ProtoInstance278 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_interphalangeal6"))
            .addChild(ProtoInstance279 = (new autoclass.ProtoInstance()).setUSE("hanim_r_sternoclavicular_2"))
            .addChild(ProtoInstance280 = (new autoclass.ProtoInstance()).setUSE("hanim_r_acromioclavicular_2"))
            .addChild(ProtoInstance281 = (new autoclass.ProtoInstance()).setUSE("hanim_r_shoulder_2"))
            .addChild(ProtoInstance282 = (new autoclass.ProtoInstance()).setUSE("hanim_r_elbow_2"))
            .addChild(ProtoInstance283 = (new autoclass.ProtoInstance()).setUSE("hanim_r_radiocarpal_2"))
            .addChild(ProtoInstance284 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpometacarpal2"))
            .addChild(ProtoInstance285 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpophalangeal2"))
            .addChild(ProtoInstance286 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_interphalangeal2"))
            .addChild(ProtoInstance287 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpometacarpal3"))
            .addChild(ProtoInstance288 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpophalangeal3"))
            .addChild(ProtoInstance289 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_proximal_interphalangeal3"))
            .addChild(ProtoInstance290 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_interphalangeal3"))
            .addChild(ProtoInstance291 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpometacarpal4"))
            .addChild(ProtoInstance292 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpophalangeal4"))
            .addChild(ProtoInstance293 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_proximal_interphalangeal4"))
            .addChild(ProtoInstance294 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_interphalangeal4"))
            .addChild(ProtoInstance295 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpometacarpal5"))
            .addChild(ProtoInstance296 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpophalangeal5"))
            .addChild(ProtoInstance297 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_proximal_interphalangeal5"))
            .addChild(ProtoInstance298 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_interphalangeal5"))
            .addChild(ProtoInstance299 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpometacarpal6"))
            .addChild(ProtoInstance300 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpophalangeal6"))
            .addChild(ProtoInstance301 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_proximal_interphalangeal6"))
            .addChild(ProtoInstance302 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_interphalangeal6")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("sites")
            .addChild(ProtoInstance303 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance304 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance305 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance306 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance307 = (new autoclass.ProtoInstance()).setUSE("hanim_l_lateral_malleolus_2"))
            .addChild(ProtoInstance308 = (new autoclass.ProtoInstance()).setUSE("hanim_l_medial_malleolus_2"))
            .addChild(ProtoInstance309 = (new autoclass.ProtoInstance()).setUSE("hanim_l_sphyrion_2"))
            .addChild(ProtoInstance310 = (new autoclass.ProtoInstance()).setUSE("hanim_l_calcaneus_posterior_2"))
            .addChild(ProtoInstance311 = (new autoclass.ProtoInstance()).setUSE("hanim_l_knee_crease_2"))
            .addChild(ProtoInstance312 = (new autoclass.ProtoInstance()).setUSE("hanim_l_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance313 = (new autoclass.ProtoInstance()).setUSE("hanim_l_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance314 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance315 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_interphalangeal_phalanx6"))
            .addChild(ProtoInstance316 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_distal_phalanx3"))
            .addChild(ProtoInstance317 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_interphalangeal_phalanx2"))
            .addChild(ProtoInstance318 = (new autoclass.ProtoInstance()).setUSE("hanim_r_lateral_malleolus_2"))
            .addChild(ProtoInstance319 = (new autoclass.ProtoInstance()).setUSE("hanim_r_medial_malleolus_2"))
            .addChild(ProtoInstance320 = (new autoclass.ProtoInstance()).setUSE("hanim_r_sphyrion_2"))
            .addChild(ProtoInstance321 = (new autoclass.ProtoInstance()).setUSE("hanim_r_calcaneus_posterior_2"))
            .addChild(ProtoInstance322 = (new autoclass.ProtoInstance()).setUSE("hanim_r_knee_crease_2"))
            .addChild(ProtoInstance323 = (new autoclass.ProtoInstance()).setUSE("hanim_r_femoral_lateral_epicondyles_2"))
            .addChild(ProtoInstance324 = (new autoclass.ProtoInstance()).setUSE("hanim_r_femoral_medial_epicondyles_2"))
            .addChild(ProtoInstance325 = (new autoclass.ProtoInstance()).setUSE("hanim_r_iliocristale_2"))
            .addChild(ProtoInstance326 = (new autoclass.ProtoInstance()).setUSE("hanim_r_trochanterion_2"))
            .addChild(ProtoInstance327 = (new autoclass.ProtoInstance()).setUSE("hanim_l_iliocristale_2"))
            .addChild(ProtoInstance328 = (new autoclass.ProtoInstance()).setUSE("hanim_l_trochanterion_2"))
            .addChild(ProtoInstance329 = (new autoclass.ProtoInstance()).setUSE("hanim_r_asis_2"))
            .addChild(ProtoInstance330 = (new autoclass.ProtoInstance()).setUSE("hanim_l_asis_2"))
            .addChild(ProtoInstance331 = (new autoclass.ProtoInstance()).setUSE("hanim_r_psis_2"))
            .addChild(ProtoInstance332 = (new autoclass.ProtoInstance()).setUSE("hanim_l_psis_2"))
            .addChild(ProtoInstance333 = (new autoclass.ProtoInstance()).setUSE("hanim_crotch_2"))
            .addChild(ProtoInstance334 = (new autoclass.ProtoInstance()).setUSE("hanim_skull_tip_2"))
            .addChild(ProtoInstance335 = (new autoclass.ProtoInstance()).setUSE("hanim_sellion_2"))
            .addChild(ProtoInstance336 = (new autoclass.ProtoInstance()).setUSE("hanim_r_infraorbitale_2"))
            .addChild(ProtoInstance337 = (new autoclass.ProtoInstance()).setUSE("hanim_l_infraorbitale_2"))
            .addChild(ProtoInstance338 = (new autoclass.ProtoInstance()).setUSE("hanim_supramenton_2"))
            .addChild(ProtoInstance339 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tragion_2"))
            .addChild(ProtoInstance340 = (new autoclass.ProtoInstance()).setUSE("hanim_r_gonion_2"))
            .addChild(ProtoInstance341 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tragion_2"))
            .addChild(ProtoInstance342 = (new autoclass.ProtoInstance()).setUSE("hanim_l_gonion_2"))
            .addChild(ProtoInstance343 = (new autoclass.ProtoInstance()).setUSE("hanim_nuchale_2"))
            .addChild(ProtoInstance344 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance345 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx_2_tip_2"))
            .addChild(ProtoInstance346 = (new autoclass.ProtoInstance()).setUSE("hanim_l_dactylion_2"))
            .addChild(ProtoInstance347 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx_3_tip_2"))
            .addChild(ProtoInstance348 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx_4_tip_2"))
            .addChild(ProtoInstance349 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx_5_tip_2"))
            .addChild(ProtoInstance350 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpal_phalanx3"))
            .addChild(ProtoInstance351 = (new autoclass.ProtoInstance()).setUSE("hanim_l_ulnar_styloid_2"))
            .addChild(ProtoInstance352 = (new autoclass.ProtoInstance()).setUSE("hanim_l_metacarpal_phalanx6"))
            .addChild(ProtoInstance353 = (new autoclass.ProtoInstance()).setUSE("hanim_l_radial_styloid_2"))
            .addChild(ProtoInstance354 = (new autoclass.ProtoInstance()).setUSE("hanim_l_olecranon_2"))
            .addChild(ProtoInstance355 = (new autoclass.ProtoInstance()).setUSE("hanim_l_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance356 = (new autoclass.ProtoInstance()).setUSE("hanim_l_radiale_2"))
            .addChild(ProtoInstance357 = (new autoclass.ProtoInstance()).setUSE("hanim_l_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance358 = (new autoclass.ProtoInstance()).setUSE("hanim_l_clavicale_2"))
            .addChild(ProtoInstance359 = (new autoclass.ProtoInstance()).setUSE("hanim_l_acromion_2"))
            .addChild(ProtoInstance360 = (new autoclass.ProtoInstance()).setUSE("hanim_l_axilla_proximal_2"))
            .addChild(ProtoInstance361 = (new autoclass.ProtoInstance()).setUSE("hanim_l_axilla_distal_2"))
            .addChild(ProtoInstance362 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx_1_tip_2"))
            .addChild(ProtoInstance363 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx_2_tip_2"))
            .addChild(ProtoInstance364 = (new autoclass.ProtoInstance()).setUSE("hanim_r_dactylion_2"))
            .addChild(ProtoInstance365 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx_3_tip_2"))
            .addChild(ProtoInstance366 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx_4_tip_2"))
            .addChild(ProtoInstance367 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx_5_tip_2"))
            .addChild(ProtoInstance368 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpal_phalanx3"))
            .addChild(ProtoInstance369 = (new autoclass.ProtoInstance()).setUSE("hanim_r_ulnar_styloid_2"))
            .addChild(ProtoInstance370 = (new autoclass.ProtoInstance()).setUSE("hanim_r_metacarpal_phalanx6"))
            .addChild(ProtoInstance371 = (new autoclass.ProtoInstance()).setUSE("hanim_r_radial_styloid_2"))
            .addChild(ProtoInstance372 = (new autoclass.ProtoInstance()).setUSE("hanim_r_olecranon_2"))
            .addChild(ProtoInstance373 = (new autoclass.ProtoInstance()).setUSE("hanim_r_humeral_medial_epicondyles_2"))
            .addChild(ProtoInstance374 = (new autoclass.ProtoInstance()).setUSE("hanim_r_radiale_2"))
            .addChild(ProtoInstance375 = (new autoclass.ProtoInstance()).setUSE("hanim_r_humeral_lateral_epicondyles_2"))
            .addChild(ProtoInstance376 = (new autoclass.ProtoInstance()).setUSE("hanim_r_clavicale_2"))
            .addChild(ProtoInstance377 = (new autoclass.ProtoInstance()).setUSE("hanim_r_acromion_2"))
            .addChild(ProtoInstance378 = (new autoclass.ProtoInstance()).setUSE("hanim_r_axilla_proximal_2"))
            .addChild(ProtoInstance379 = (new autoclass.ProtoInstance()).setUSE("hanim_r_axilla_distal_2"))
            .addChild(ProtoInstance380 = (new autoclass.ProtoInstance()).setUSE("hanim_r_neck_base_2"))
            .addChild(ProtoInstance381 = (new autoclass.ProtoInstance()).setUSE("hanim_l_neck_base_2"))
            .addChild(ProtoInstance382 = (new autoclass.ProtoInstance()).setUSE("hanim_suprasternale_2"))
            .addChild(ProtoInstance383 = (new autoclass.ProtoInstance()).setUSE("hanim_cervicale_2"))
            .addChild(ProtoInstance384 = (new autoclass.ProtoInstance()).setUSE("hanim_r_thelion_2"))
            .addChild(ProtoInstance385 = (new autoclass.ProtoInstance()).setUSE("hanim_l_thelion_2"))
            .addChild(ProtoInstance386 = (new autoclass.ProtoInstance()).setUSE("hanim_substernale_2"))
            .addChild(ProtoInstance387 = (new autoclass.ProtoInstance()).setUSE("hanim_r_rib10_2"))
            .addChild(ProtoInstance388 = (new autoclass.ProtoInstance()).setUSE("hanim_l_rib10_2"))
            .addChild(ProtoInstance389 = (new autoclass.ProtoInstance()).setUSE("hanim_spine_2_lower_back_2"))
            .addChild(ProtoInstance390 = (new autoclass.ProtoInstance()).setUSE("hanim_waist_preferred_posterior_2"))
            .addChild(ProtoInstance391 = (new autoclass.ProtoInstance()).setUSE("hanim_navel_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("segments")
            .addChild(ProtoInstance392 = (new autoclass.ProtoInstance()).setUSE("hanim_l_tarsal_distal_phalanx2"))
            .addChild(ProtoInstance393 = (new autoclass.ProtoInstance()).setUSE("hanim_l_middistal_2"))
            .addChild(ProtoInstance394 = (new autoclass.ProtoInstance()).setUSE("hanim_l_midproximal_2"))
            .addChild(ProtoInstance395 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hindfoot_2"))
            .addChild(ProtoInstance396 = (new autoclass.ProtoInstance()).setUSE("hanim_l_calf_2"))
            .addChild(ProtoInstance397 = (new autoclass.ProtoInstance()).setUSE("hanim_l_thigh_2"))
            .addChild(ProtoInstance398 = (new autoclass.ProtoInstance()).setUSE("hanim_r_tarsal_distal_phalanx2"))
            .addChild(ProtoInstance399 = (new autoclass.ProtoInstance()).setUSE("hanim_r_middistal_2"))
            .addChild(ProtoInstance400 = (new autoclass.ProtoInstance()).setUSE("hanim_r_midproximal_2"))
            .addChild(ProtoInstance401 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hindfoot_2"))
            .addChild(ProtoInstance402 = (new autoclass.ProtoInstance()).setUSE("hanim_r_calf_2"))
            .addChild(ProtoInstance403 = (new autoclass.ProtoInstance()).setUSE("hanim_r_thigh_2"))
            .addChild(ProtoInstance404 = (new autoclass.ProtoInstance()).setUSE("hanim_pelvis_2"))
            .addChild(ProtoInstance405 = (new autoclass.ProtoInstance()).setUSE("hanim_skull_2"))
            .addChild(ProtoInstance406 = (new autoclass.ProtoInstance()).setUSE("hanim_c2_2"))
            .addChild(ProtoInstance407 = (new autoclass.ProtoInstance()).setUSE("hanim_c4_2"))
            .addChild(ProtoInstance408 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx2"))
            .addChild(ProtoInstance409 = (new autoclass.ProtoInstance()).setUSE("hanim_l_index_proximal_6"))
            .addChild(ProtoInstance410 = (new autoclass.ProtoInstance()).setUSE("hanim_l_index_proximal_6"))
            .addChild(ProtoInstance411 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx3"))
            .addChild(ProtoInstance412 = (new autoclass.ProtoInstance()).setUSE("hanim_l_index_middle_2"))
            .addChild(ProtoInstance413 = (new autoclass.ProtoInstance()).setUSE("hanim_l_index_proximal_6"))
            .addChild(ProtoInstance414 = (new autoclass.ProtoInstance()).setUSE("hanim_l_index_metacarpal_2"))
            .addChild(ProtoInstance415 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx4"))
            .addChild(ProtoInstance416 = (new autoclass.ProtoInstance()).setUSE("hanim_l_middle_middle_2"))
            .addChild(ProtoInstance417 = (new autoclass.ProtoInstance()).setUSE("hanim_l_middle_proximal_2"))
            .addChild(ProtoInstance418 = (new autoclass.ProtoInstance()).setUSE("hanim_l_middle_metacarpal_2"))
            .addChild(ProtoInstance419 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx5"))
            .addChild(ProtoInstance420 = (new autoclass.ProtoInstance()).setUSE("hanim_l_ring_middle_2"))
            .addChild(ProtoInstance421 = (new autoclass.ProtoInstance()).setUSE("hanim_l_ring_proximal_2"))
            .addChild(ProtoInstance422 = (new autoclass.ProtoInstance()).setUSE("hanim_l_ring_metacarpal_2"))
            .addChild(ProtoInstance423 = (new autoclass.ProtoInstance()).setUSE("hanim_l_carpal_distal_phalanx6"))
            .addChild(ProtoInstance424 = (new autoclass.ProtoInstance()).setUSE("hanim_l_pinky_middle_2"))
            .addChild(ProtoInstance425 = (new autoclass.ProtoInstance()).setUSE("hanim_l_pinky_proximal_2"))
            .addChild(ProtoInstance426 = (new autoclass.ProtoInstance()).setUSE("hanim_l_pinky_metacarpal_2"))
            .addChild(ProtoInstance427 = (new autoclass.ProtoInstance()).setUSE("hanim_l_hand_2"))
            .addChild(ProtoInstance428 = (new autoclass.ProtoInstance()).setUSE("hanim_l_forearm_2"))
            .addChild(ProtoInstance429 = (new autoclass.ProtoInstance()).setUSE("hanim_l_upperarm_2"))
            .addChild(ProtoInstance430 = (new autoclass.ProtoInstance()).setUSE("hanim_l_scapula_2"))
            .addChild(ProtoInstance431 = (new autoclass.ProtoInstance()).setUSE("hanim_l_clavicle_2"))
            .addChild(ProtoInstance432 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx2"))
            .addChild(ProtoInstance433 = (new autoclass.ProtoInstance()).setUSE("hanim_r_index_proximal_6"))
            .addChild(ProtoInstance434 = (new autoclass.ProtoInstance()).setUSE("hanim_r_index_proximal_6"))
            .addChild(ProtoInstance435 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx3"))
            .addChild(ProtoInstance436 = (new autoclass.ProtoInstance()).setUSE("hanim_r_index_middle_2"))
            .addChild(ProtoInstance437 = (new autoclass.ProtoInstance()).setUSE("hanim_r_index_proximal_6"))
            .addChild(ProtoInstance438 = (new autoclass.ProtoInstance()).setUSE("hanim_r_index_metacarpal_2"))
            .addChild(ProtoInstance439 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx4"))
            .addChild(ProtoInstance440 = (new autoclass.ProtoInstance()).setUSE("hanim_r_middle_middle_2"))
            .addChild(ProtoInstance441 = (new autoclass.ProtoInstance()).setUSE("hanim_r_middle_proximal_2"))
            .addChild(ProtoInstance442 = (new autoclass.ProtoInstance()).setUSE("hanim_r_middle_metacarpal_2"))
            .addChild(ProtoInstance443 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx5"))
            .addChild(ProtoInstance444 = (new autoclass.ProtoInstance()).setUSE("hanim_r_ring_middle_2"))
            .addChild(ProtoInstance445 = (new autoclass.ProtoInstance()).setUSE("hanim_r_ring_proximal_2"))
            .addChild(ProtoInstance446 = (new autoclass.ProtoInstance()).setUSE("hanim_r_ring_metacarpal_2"))
            .addChild(ProtoInstance447 = (new autoclass.ProtoInstance()).setUSE("hanim_r_carpal_distal_phalanx6"))
            .addChild(ProtoInstance448 = (new autoclass.ProtoInstance()).setUSE("hanim_r_pinky_middle_2"))
            .addChild(ProtoInstance449 = (new autoclass.ProtoInstance()).setUSE("hanim_r_pinky_proximal_2"))
            .addChild(ProtoInstance450 = (new autoclass.ProtoInstance()).setUSE("hanim_r_pinky_metacarpal_2"))
            .addChild(ProtoInstance451 = (new autoclass.ProtoInstance()).setUSE("hanim_r_hand_2"))
            .addChild(ProtoInstance452 = (new autoclass.ProtoInstance()).setUSE("hanim_r_forearm_2"))
            .addChild(ProtoInstance453 = (new autoclass.ProtoInstance()).setUSE("hanim_r_upperarm_2"))
            .addChild(ProtoInstance454 = (new autoclass.ProtoInstance()).setUSE("hanim_r_scapula_2"))
            .addChild(ProtoInstance455 = (new autoclass.ProtoInstance()).setUSE("hanim_r_clavicle_2"))
            .addChild(ProtoInstance456 = (new autoclass.ProtoInstance()).setUSE("hanim_t1_2"))
            .addChild(ProtoInstance457 = (new autoclass.ProtoInstance()).setUSE("hanim_t6_2"))
            .addChild(ProtoInstance458 = (new autoclass.ProtoInstance()).setUSE("hanim_t10_2"))
            .addChild(ProtoInstance459 = (new autoclass.ProtoInstance()).setUSE("hanim_l1_2"))
            .addChild(ProtoInstance460 = (new autoclass.ProtoInstance()).setUSE("hanim_l3_2"))
            .addChild(ProtoInstance461 = (new autoclass.ProtoInstance()).setUSE("hanim_l5_2"))
            .addChild(ProtoInstance462 = (new autoclass.ProtoInstance()).setUSE("hanim_sacrum_2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("info").setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;2\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\""));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("humanoid_root"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.824000000953674 0.0276999995112419"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_sacroiliac_2"))
                .addChild(ProtoInstance59 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl5_2"))
                .addChild(ProtoInstance231 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_sacrum_2")));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacroiliac"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0 0.914900004863739 0.0015999999595806"));
ProtoInstance2
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_hip_2"))
                    .addChild(ProtoInstance26 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_hip_2"))
                    .addChild(ProtoInstance49 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_pelvis_2")));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hip"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.0961000025272369 0.912400007247925 -0.0000999999974737875"));
ProtoInstance3
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance4 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_knee_2"))
                        .addChild(ProtoInstance22 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_thigh_2")));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.104000002145767 0.486699998378754 0.030799999833107"));
ProtoInstance4
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance5 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_talocrural_2"))
                            .addChild(ProtoInstance21 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_calf_2")));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_talocrural"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.110100001096725 0.0656000003218651 -0.0736000016331673"));
ProtoInstance5
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance6 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_tarsotarsal_interphalangeal__2"))
                                .addChild(ProtoInstance16 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hindfoot_2")));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsotarsal_interphalangeal_"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.108599998056889 0.0000999999974737875 -0.0368000008165836"));
ProtoInstance6
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance7 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metatarsophalangeal__2"))
                                    .addChild(ProtoInstance15 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_midproximal_2")));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metatarsophalangeal_"));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.108599998056889 0.0000999999974737875 0.0368000008165836"));
ProtoInstance7
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance8 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_tarsal_interphalangeal__2"))
                                        .addChild(ProtoInstance13 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middistal_2")));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_"));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.108599998056889 0 0.0762000009417534"));
ProtoInstance8
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance9 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_tarsal_distal_phalanx2")));
ProtoInstance9
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_1"));
ProtoInstance9
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance10 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx_1_tip_2"))
                                                .addChild(ProtoInstance11 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx6"))
                                                .addChild(ProtoInstance12 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_distal_phalanx3")));
ProtoInstance10
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_1_tip"));
ProtoInstance10
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.135399997234344 0.0015999999595806 0.147599995136261"));
ProtoInstance11
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_5"));
ProtoInstance11
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.182500004768372 0.00700000021606684 0.092799998819828"));
ProtoInstance12
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_distal_phalanx_2"));
ProtoInstance12
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.119499996304512 0.00789999961853027 0.143299996852875"));
ProtoInstance13
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middistal"));
ProtoInstance13
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance14 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tarsal_interphalangeal_phalanx2")));
ProtoInstance14
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tarsal_interphalangeal_phalanx_1"));
ProtoInstance14
                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0816000029444695 0.023199999704957 0.0105999996885657"));
ProtoInstance15
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_midproximal"));
ProtoInstance16
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hindfoot"));
ProtoInstance16
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance17 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_lateral_malleolus_2"))
                                    .addChild(ProtoInstance18 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_medial_malleolus_2"))
                                    .addChild(ProtoInstance19 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_sphyrion_2"))
                                    .addChild(ProtoInstance20 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_calcaneus_posterior_2")));
ProtoInstance17
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_lateral_malleolus"));
ProtoInstance17
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.130799993872643 0.0597000010311604 -0.103200003504753"));
ProtoInstance18
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_medial_malleolus"));
ProtoInstance18
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348"));
ProtoInstance19
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sphyrion"));
ProtoInstance19
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649"));
ProtoInstance20
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calcaneus_posterior"));
ProtoInstance20
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.09740000218153 0.025900000706315 -0.11710000038147"));
ProtoInstance21
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_calf"));
ProtoInstance22
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thigh"));
ProtoInstance22
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance23 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_knee_crease_2"))
                            .addChild(ProtoInstance24 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_lateral_epicondyles_2"))
                            .addChild(ProtoInstance25 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_femoral_medial_epicondyles_2")));
ProtoInstance23
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_knee_crease"));
ProtoInstance23
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance24
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.159799993038177 0.496699988842011 0.0296999998390675"));
ProtoInstance25
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_femoral_lateral_epicondyles"));
ProtoInstance25
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0397999994456768 0.494599997997284 0.0303000006824732"));
ProtoInstance26
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance26
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hip"));
ProtoInstance26
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0949999988079071 0.917100012302399 0.00289999996311963"));
ProtoInstance26
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance27 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_knee_2"))
                        .addChild(ProtoInstance45 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_thigh_2")));
ProtoInstance27
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance27
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee"));
ProtoInstance27
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0866999998688698 0.491299986839294 0.0318000018596649"));
ProtoInstance27
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance28 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_talocrural_2"))
                            .addChild(ProtoInstance44 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_calf_2")));
ProtoInstance28
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance28
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_talocrural"));
ProtoInstance28
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0800999999046326 0.0711999982595444 -0.0766000002622604"));
ProtoInstance28
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance29 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_tarsotarsal_interphalangeal__2"))
                                .addChild(ProtoInstance39 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hindfoot_2")));
ProtoInstance29
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance29
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsotarsal_interphalangeal_"));
ProtoInstance29
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0800999999046326 0 -0.0368000008165836"));
ProtoInstance29
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance30 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metatarsophalangeal__2"))
                                    .addChild(ProtoInstance38 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_midproximal_2")));
ProtoInstance30
                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance30
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metatarsophalangeal_"));
ProtoInstance30
                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0800999999046326 0 0.0368000008165836"));
ProtoInstance30
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance31 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_tarsal_interphalangeal__2"))
                                        .addChild(ProtoInstance36 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middistal_2")));
ProtoInstance31
                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance31
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_"));
ProtoInstance31
                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0800999999046326 0.00389999989420176 0.0732000023126602"));
ProtoInstance31
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance32 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_tarsal_distal_phalanx2")));
ProtoInstance32
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_1"));
ProtoInstance32
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance33 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx_1_tip_2"))
                                                .addChild(ProtoInstance34 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx6"))
                                                .addChild(ProtoInstance35 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_distal_phalanx3")));
ProtoInstance33
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_1_tip"));
ProtoInstance33
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.104299999773502 -0.0227000005543232 0.144999995827675"));
ProtoInstance34
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_5"));
ProtoInstance34
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997"));
ProtoInstance35
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_distal_phalanx_2"));
ProtoInstance35
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.088299997150898 0.013399999588728 0.138300001621246"));
ProtoInstance36
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middistal"));
ProtoInstance36
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance37 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tarsal_interphalangeal_phalanx2")));
ProtoInstance37
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tarsal_interphalangeal_phalanx_1"));
ProtoInstance37
                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518"));
ProtoInstance38
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_midproximal"));
ProtoInstance39
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hindfoot"));
ProtoInstance39
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance40 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_lateral_malleolus_2"))
                                    .addChild(ProtoInstance41 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_medial_malleolus_2"))
                                    .addChild(ProtoInstance42 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_sphyrion_2"))
                                    .addChild(ProtoInstance43 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_calcaneus_posterior_2")));
ProtoInstance40
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_lateral_malleolus"));
ProtoInstance40
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139"));
ProtoInstance41
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_medial_malleolus"));
ProtoInstance41
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828"));
ProtoInstance42
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sphyrion"));
ProtoInstance42
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079"));
ProtoInstance43
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calcaneus_posterior"));
ProtoInstance43
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679"));
ProtoInstance44
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_calf"));
ProtoInstance45
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thigh"));
ProtoInstance45
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance46 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_knee_crease_2"))
                            .addChild(ProtoInstance47 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_lateral_epicondyles_2"))
                            .addChild(ProtoInstance48 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_femoral_medial_epicondyles_2")));
ProtoInstance46
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_knee_crease"));
ProtoInstance46
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679"));
ProtoInstance47
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance47
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.142100006341934 0.499199986457825 0.0309999994933605"));
ProtoInstance48
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_femoral_lateral_epicondyles"));
ProtoInstance48
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082"));
ProtoInstance49
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("pelvis"));
ProtoInstance49
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance50 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_iliocristale_2"))
                        .addChild(ProtoInstance51 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_trochanterion_2"))
                        .addChild(ProtoInstance52 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_iliocristale_2"))
                        .addChild(ProtoInstance53 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_trochanterion_2"))
                        .addChild(ProtoInstance54 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_asis_2"))
                        .addChild(ProtoInstance55 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_asis_2"))
                        .addChild(ProtoInstance56 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_psis_2"))
                        .addChild(ProtoInstance57 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_psis_2"))
                        .addChild(ProtoInstance58 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_crotch_2")));
ProtoInstance50
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_iliocristale"));
ProtoInstance50
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.152500003576279 1.0628000497818 0.00350000010803342"));
ProtoInstance51
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_trochanterion"));
ProtoInstance51
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.16889999806881 0.841899991035461 0.0351999998092651"));
ProtoInstance52
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_iliocristale"));
ProtoInstance52
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.161200001835823 1.05369997024536 0.0007999999797903"));
ProtoInstance53
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_trochanterion"));
ProtoInstance53
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.167699992656708 0.833599984645844 0.0303000006824732"));
ProtoInstance54
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_asis"));
ProtoInstance54
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.088699996471405 1.00209999084473 0.111199997365475"));
ProtoInstance55
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_asis"));
ProtoInstance55
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0925000011920929 0.998300015926361 0.105200000107288"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_psis"));
ProtoInstance56
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061"));
ProtoInstance57
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_psis"));
ProtoInstance57
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0773999989032745 1.01900005340576 -0.115099996328354"));
ProtoInstance58
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("crotch"));
ProtoInstance58
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00340000004507601 0.826600015163422 0.0256999991834164"));
ProtoInstance59
                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance59
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl5"));
ProtoInstance59
                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00279999990016222 1.05680000782013 -0.0776000022888184"));
ProtoInstance59
                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                    .addChild(ProtoInstance60 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl3_2"))
                    .addChild(ProtoInstance228 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l5_2")));
ProtoInstance60
                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance60
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl3"));
ProtoInstance60
                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00410000002011657 1.1275999546051 -0.0795999988913536"));
ProtoInstance60
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance61 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vl1_2"))
                        .addChild(ProtoInstance224 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l3_2")));
ProtoInstance61
                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance61
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vl1"));
ProtoInstance61
                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00480000022798777 1.19120001792908 -0.0804999992251396"));
ProtoInstance61
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance62 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vt10_2"))
                            .addChild(ProtoInstance223 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l1_2")));
ProtoInstance62
                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance62
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vt10"));
ProtoInstance62
                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00559999980032444 1.28480005264282 -0.0821999981999397"));
ProtoInstance62
                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                .addChild(ProtoInstance63 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vt6_2"))
                                .addChild(ProtoInstance219 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_t10_2")));
ProtoInstance63
                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance63
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vt6"));
ProtoInstance63
                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.0059000002220273 1.38660001754761 -0.0799999982118607"));
ProtoInstance63
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance64 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vt1_2"))
                                    .addChild(ProtoInstance218 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_t6_2")));
ProtoInstance64
                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance64
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vt1"));
ProtoInstance64
                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00650000013411045 1.4951000213623 -0.0386999994516373"));
ProtoInstance64
                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                        .addChild(ProtoInstance65 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vc4_2"))
                                        .addChild(ProtoInstance81 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_sternoclavicular_2"))
                                        .addChild(ProtoInstance147 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_sternoclavicular_2"))
                                        .addChild(ProtoInstance213 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_t1_2")));
ProtoInstance65
                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance65
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vc4"));
ProtoInstance65
                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00659999996423721 1.56620001792908 -0.00839999970048666"));
ProtoInstance65
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance66 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_vc2_2"))
                                            .addChild(ProtoInstance80 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_c4_2")));
ProtoInstance66
                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance66
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("vc2"));
ProtoInstance66
                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00659999996423721 1.59280002117157 -0.0103000001981854"));
ProtoInstance66
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance67 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_skullbase_2"))
                                                .addChild(ProtoInstance79 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_c2_2")));
ProtoInstance67
                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance67
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skullbase"));
ProtoInstance67
                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.00439999997615814 1.62090003490448 0.0236000008881092"));
ProtoInstance67
                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                    .addChild(ProtoInstance68 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_skull_2")));
ProtoInstance68
                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull"));
ProtoInstance68
                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                        .addChild(ProtoInstance69 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_skull_tip_2"))
                                                        .addChild(ProtoInstance70 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_sellion_2"))
                                                        .addChild(ProtoInstance71 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_infraorbitale_2"))
                                                        .addChild(ProtoInstance72 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_infraorbitale_2"))
                                                        .addChild(ProtoInstance73 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_supramenton_2"))
                                                        .addChild(ProtoInstance74 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_tragion_2"))
                                                        .addChild(ProtoInstance75 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_gonion_2"))
                                                        .addChild(ProtoInstance76 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_tragion_2"))
                                                        .addChild(ProtoInstance77 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_gonion_2"))
                                                        .addChild(ProtoInstance78 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_nuchale_2")));
ProtoInstance69
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("skull_tip"));
ProtoInstance69
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00499999988824129 1.75039994716644 0.00549999997019768"));
ProtoInstance70
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sellion"));
ProtoInstance70
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00579999992623925 1.63160002231598 0.0851999968290329"));
ProtoInstance71
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_infraorbitale"));
ProtoInstance71
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.023700000718236 1.61710000038147 0.0751999989151955"));
ProtoInstance72
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_infraorbitale"));
ProtoInstance72
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0340999998152256 1.61710000038147 0.0751999989151955"));
ProtoInstance73
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("supramenton"));
ProtoInstance73
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00609999988228083 1.54100000858307 0.0804999992251396"));
ProtoInstance74
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_tragion"));
ProtoInstance74
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464"));
ProtoInstance75
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_gonion"));
ProtoInstance75
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862"));
ProtoInstance76
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_tragion"));
ProtoInstance76
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0738999992609024 1.63479995727539 0.0282000005245209"));
ProtoInstance77
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_gonion"));
ProtoInstance77
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0631000027060509 1.55299997329712 0.0329999998211861"));
ProtoInstance78
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("nuchale"));
ProtoInstance78
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536"));
ProtoInstance79
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("c2"));
ProtoInstance80
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("c4"));
ProtoInstance81
                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance81
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_sternoclavicular"));
ProtoInstance81
                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.0820000022649765 1.44879996776581 -0.035300001502037"));
ProtoInstance81
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance82 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_acromioclavicular_2"))
                                            .addChild(ProtoInstance142 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_clavicle_2")));
ProtoInstance82
                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance82
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromioclavicular"));
ProtoInstance82
                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.0961999967694283 1.42690002918243 -0.0423999987542629"));
ProtoInstance82
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance83 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_shoulder_2"))
                                                .addChild(ProtoInstance141 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_scapula_2")));
ProtoInstance83
                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance83
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_shoulder"));
ProtoInstance83
                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.202900007367134 1.43760001659393 -0.0386999994516373"));
ProtoInstance83
                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                    .addChild(ProtoInstance84 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_elbow_2"))
                                                    .addChild(ProtoInstance139 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_upperarm_2")));
ProtoInstance84
                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance84
                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_elbow"));
ProtoInstance84
                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.201399996876717 1.1356999874115 -0.0681999996304512"));
ProtoInstance84
                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                        .addChild(ProtoInstance85 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_radiocarpal_2"))
                                                        .addChild(ProtoInstance134 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_forearm_2")));
ProtoInstance85
                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance85
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiocarpal"));
ProtoInstance85
                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198400005698204 0.866299986839294 -0.0582999996840954"));
ProtoInstance85
                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                            .addChild(ProtoInstance86 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpometacarpal2"))
                                                            .addChild(ProtoInstance93 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpometacarpal3"))
                                                            .addChild(ProtoInstance103 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpometacarpal4"))
                                                            .addChild(ProtoInstance112 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpometacarpal5"))
                                                            .addChild(ProtoInstance121 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpometacarpal6"))
                                                            .addChild(ProtoInstance130 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_hand_2")));
ProtoInstance86
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance86
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpometacarpal_1"));
ProtoInstance86
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.192399993538857 0.847199976444244 -0.0533999986946583"));
ProtoInstance86
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance87 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metacarpophalangeal2"))
                                                                .addChild(ProtoInstance92 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_index_proximal_4")));
ProtoInstance87
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance87
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpophalangeal_1"));
ProtoInstance87
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.195099994540215 0.82260000705719 0.0245999991893768"));
ProtoInstance87
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance88 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_interphalangeal2"))
                                                                    .addChild(ProtoInstance91 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_index_proximal_2")));
ProtoInstance88
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance88
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_interphalangeal_1"));
ProtoInstance88
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.195500001311302 0.815900027751923 0.046399999409914"));
ProtoInstance88
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance89 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_carpal_distal_phalanx2")));
ProtoInstance89
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_1"));
ProtoInstance89
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance90 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_carpal_distal_phalanx_1_tip_2")));
ProtoInstance90
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_1_tip"));
ProtoInstance90
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.19820000231266 0.806100010871887 0.0759000033140183"));
ProtoInstance91
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_index_proximal"));
ProtoInstance92
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_index_proximal"));
ProtoInstance93
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance93
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpometacarpal_2"));
ProtoInstance93
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198300004005432 0.80239999294281 -0.0280000008642673"));
ProtoInstance93
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance94 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metacarpophalangeal3"))
                                                                .addChild(ProtoInstance102 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_index_metacarpal_2")));
ProtoInstance94
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance94
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpophalangeal_2"));
ProtoInstance94
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198300004005432 0.781499981880188 -0.0280000008642673"));
ProtoInstance94
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance95 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal3"))
                                                                    .addChild(ProtoInstance101 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_index_proximal_6")));
ProtoInstance95
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance95
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_proximal_interphalangeal_2"));
ProtoInstance95
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.201700001955032 0.736299991607666 -0.0248000007122755"));
ProtoInstance95
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance96 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal3"))
                                                                        .addChild(ProtoInstance100 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_index_middle_2")));
ProtoInstance96
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance96
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_interphalangeal_2"));
ProtoInstance96
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.202800005674362 0.713900029659271 -0.0236000008881092"));
ProtoInstance96
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance97 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_carpal_distal_phalanx3")));
ProtoInstance97
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_2"));
ProtoInstance97
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance98 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_carpal_distal_phalanx_2_tip_2"))
                                                                                .addChild(ProtoInstance99 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_dactylion_2")));
ProtoInstance98
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_2_tip"));
ProtoInstance98
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.20890000462532 0.685800015926361 -0.0244999993592501"));
ProtoInstance99
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_dactylion"));
ProtoInstance99
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.205599993467331 0.674300014972687 -0.048200000077486"));
ProtoInstance100
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_index_middle"));
ProtoInstance101
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_index_proximal"));
ProtoInstance102
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_index_metacarpal"));
ProtoInstance103
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance103
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpometacarpal_3"));
ProtoInstance103
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198699995875359 0.802900016307831 -0.0529999993741512"));
ProtoInstance103
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance104 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metacarpophalangeal4"))
                                                                .addChild(ProtoInstance111 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middle_metacarpal_2")));
ProtoInstance104
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance104
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpophalangeal_3"));
ProtoInstance104
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198699995875359 0.781799972057343 -0.0529999993741512"));
ProtoInstance104
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance105 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal4"))
                                                                    .addChild(ProtoInstance110 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middle_proximal_2")));
ProtoInstance105
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance105
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_proximal_interphalangeal_3"));
ProtoInstance105
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.201299995183945 0.727299988269806 -0.0502999983727932"));
ProtoInstance105
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance106 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal4"))
                                                                        .addChild(ProtoInstance109 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_middle_middle_2")));
ProtoInstance106
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance106
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_interphalangeal_3"));
ProtoInstance106
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.202600002288818 0.701099991798401 -0.0494000017642975"));
ProtoInstance106
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance107 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_carpal_distal_phalanx4")));
ProtoInstance107
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_3"));
ProtoInstance107
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance108 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_carpal_distal_phalanx_3_tip_2")));
ProtoInstance108
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_3_tip"));
ProtoInstance108
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.208000004291534 0.673099994659424 -0.049100000411272"));
ProtoInstance109
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middle_middle"));
ProtoInstance110
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middle_proximal"));
ProtoInstance111
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_middle_metacarpal"));
ProtoInstance112
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance112
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpometacarpal_4"));
ProtoInstance112
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.195600003004074 0.801900029182434 -0.0794000029563904"));
ProtoInstance112
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance113 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metacarpophalangeal5"))
                                                                .addChild(ProtoInstance120 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_ring_metacarpal_2")));
ProtoInstance113
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance113
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpophalangeal_4"));
ProtoInstance113
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.195600003004074 0.781499981880188 -0.0794000029563904"));
ProtoInstance113
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance114 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal5"))
                                                                    .addChild(ProtoInstance119 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_ring_proximal_2")));
ProtoInstance114
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance114
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_proximal_interphalangeal_4"));
ProtoInstance114
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.197300001978874 0.72869998216629 -0.0776999965310097"));
ProtoInstance114
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance115 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal5"))
                                                                        .addChild(ProtoInstance118 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_ring_middle_2")));
ProtoInstance115
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance115
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_interphalangeal_4"));
ProtoInstance115
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.198300004005432 0.704500019550323 -0.0767000019550323"));
ProtoInstance115
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance116 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_carpal_distal_phalanx5")));
ProtoInstance116
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_4"));
ProtoInstance116
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance117 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_carpal_distal_phalanx_4_tip_2")));
ProtoInstance117
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_4_tip"));
ProtoInstance117
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.203500002622604 0.675000011920929 -0.0755999982357025"));
ProtoInstance118
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ring_middle"));
ProtoInstance119
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ring_proximal"));
ProtoInstance120
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ring_metacarpal"));
ProtoInstance121
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance121
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpometacarpal_5"));
ProtoInstance121
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.192499995231628 0.806599974632263 -0.10360000282526"));
ProtoInstance121
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance122 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_metacarpophalangeal6"))
                                                                .addChild(ProtoInstance129 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_pinky_metacarpal_2")));
ProtoInstance122
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance122
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpophalangeal_5"));
ProtoInstance122
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.192499995231628 0.78659999370575 -0.10360000282526"));
ProtoInstance122
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance123 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_proximal_interphalangeal6"))
                                                                    .addChild(ProtoInstance128 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_pinky_proximal_2")));
ProtoInstance123
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance123
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_proximal_interphalangeal_5"));
ProtoInstance123
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.193800002336502 0.745199978351593 -0.102399997413158"));
ProtoInstance123
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance124 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_l_carpal_distal_interphalangeal6"))
                                                                        .addChild(ProtoInstance127 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_pinky_middle_2")));
ProtoInstance124
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance124
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_interphalangeal_5"));
ProtoInstance124
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("0.19480000436306 0.727699995040894 -0.101700000464916"));
ProtoInstance124
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance125 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_l_carpal_distal_phalanx6")));
ProtoInstance125
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_5"));
ProtoInstance125
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance126 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_carpal_distal_phalanx_5_tip_2")));
ProtoInstance126
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_carpal_distal_phalanx_5_tip"));
ProtoInstance126
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.201399996876717 0.700900018215179 -0.101199999451637"));
ProtoInstance127
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_pinky_middle"));
ProtoInstance128
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_pinky_proximal"));
ProtoInstance129
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_pinky_metacarpal"));
ProtoInstance130
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_hand"));
ProtoInstance130
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance131 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx3"))
                                                                .addChild(ProtoInstance132 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_ulnar_styloid_2"))
                                                                .addChild(ProtoInstance133 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_metacarpal_phalanx6")));
ProtoInstance131
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_2"));
ProtoInstance131
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.200900003314018 0.813899993896484 -0.023700000718236"));
ProtoInstance132
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_ulnar_styloid"));
ProtoInstance132
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.214200004935265 0.85290002822876 -0.064800001680851"));
ProtoInstance133
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_metacarpal_phalanx_5"));
ProtoInstance133
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.192900002002716 0.78600001335144 -0.112199999392033"));
ProtoInstance134
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_forearm"));
ProtoInstance134
                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                            .addChild(ProtoInstance135 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radial_styloid_2"))
                                                            .addChild(ProtoInstance136 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_olecranon_2"))
                                                            .addChild(ProtoInstance137 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_medial_epicondyles_2"))
                                                            .addChild(ProtoInstance138 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_radiale_2")));
ProtoInstance135
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radial_styloid"));
ProtoInstance135
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.190099999308586 0.864499986171722 -0.0414999984204769"));
ProtoInstance136
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_olecranon"));
ProtoInstance136
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.196199998259544 1.13750004768372 -0.112300001084805"));
ProtoInstance137
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_medial_epicondyles"));
ProtoInstance137
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.173500001430511 1.12720000743866 -0.111299999058247"));
ProtoInstance138
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_radiale"));
ProtoInstance138
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.218199998140335 1.12119996547699 -0.116700001060963"));
ProtoInstance139
                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_upperarm"));
ProtoInstance139
                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                        .addChild(ProtoInstance140 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_humeral_lateral_epicondyles_2")));
ProtoInstance140
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_humeral_lateral_epicondyles"));
ProtoInstance140
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.228000000119209 1.14820003509521 -0.109999999403954"));
ProtoInstance141
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_scapula"));
ProtoInstance142
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicle"));
ProtoInstance142
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance143 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_clavicale_2"))
                                                .addChild(ProtoInstance144 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_acromion_2"))
                                                .addChild(ProtoInstance145 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_proximal_2"))
                                                .addChild(ProtoInstance146 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_axilla_distal_2")));
ProtoInstance143
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_clavicale"));
ProtoInstance143
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0271000005304813 1.49430000782013 0.0394000001251698"));
ProtoInstance144
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_acromion"));
ProtoInstance144
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.203199997544289 1.47599995136261 -0.0489999987185001"));
ProtoInstance145
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_proximal"));
ProtoInstance145
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.177699998021126 1.40649998188019 -0.00749999983236194"));
ProtoInstance146
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_axilla_distal"));
ProtoInstance146
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.17059999704361 1.40719997882843 -0.0874999985098839"));
ProtoInstance147
                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance147
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_sternoclavicular"));
ProtoInstance147
                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0693999975919724 1.46000003814697 -0.0329999998211861"));
ProtoInstance147
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance148 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_acromioclavicular_2"))
                                            .addChild(ProtoInstance208 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_clavicle_2")));
ProtoInstance148
                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance148
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromioclavicular"));
ProtoInstance148
                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.0835999995470047 1.42809998989105 -0.0401000007987022"));
ProtoInstance148
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance149 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_shoulder_2"))
                                                .addChild(ProtoInstance207 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_scapula_2")));
ProtoInstance149
                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance149
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_shoulder"));
ProtoInstance149
                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071"));
ProtoInstance149
                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                    .addChild(ProtoInstance150 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_elbow_2"))
                                                    .addChild(ProtoInstance205 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_upperarm_2")));
ProtoInstance150
                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance150
                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_elbow"));
ProtoInstance150
                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.194900006055832 1.13880002498627 -0.061999998986721"));
ProtoInstance150
                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                        .addChild(ProtoInstance151 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_radiocarpal_2"))
                                                        .addChild(ProtoInstance200 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_forearm_2")));
ProtoInstance151
                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance151
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiocarpal"));
ProtoInstance151
                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652"));
ProtoInstance151
                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                            .addChild(ProtoInstance152 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpometacarpal2"))
                                                            .addChild(ProtoInstance159 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpometacarpal3"))
                                                            .addChild(ProtoInstance169 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpometacarpal4"))
                                                            .addChild(ProtoInstance178 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpometacarpal5"))
                                                            .addChild(ProtoInstance187 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpometacarpal6"))
                                                            .addChild(ProtoInstance196 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_hand_2")));
ProtoInstance152
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance152
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpometacarpal_1"));
ProtoInstance152
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.189899995923042 0.850199997425079 -0.0472999997437"));
ProtoInstance152
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance153 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metacarpophalangeal2"))
                                                                .addChild(ProtoInstance158 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_index_proximal_4")));
ProtoInstance153
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance153
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpophalangeal_1"));
ProtoInstance153
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.187399998307228 0.825600028038025 0.0306000001728535"));
ProtoInstance153
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance154 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_interphalangeal2"))
                                                                    .addChild(ProtoInstance157 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_index_proximal_2")));
ProtoInstance154
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance154
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_interphalangeal_1"));
ProtoInstance154
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.18639999628067 0.819000005722046 0.0505999997258186"));
ProtoInstance154
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance155 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_carpal_distal_phalanx2")));
ProtoInstance155
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_1"));
ProtoInstance155
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance156 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_carpal_distal_phalanx_1_tip_2")));
ProtoInstance156
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_1_tip"));
ProtoInstance156
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.18690000474453 0.809000015258789 0.0820000022649765"));
ProtoInstance157
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_index_proximal"));
ProtoInstance158
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_index_proximal"));
ProtoInstance159
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance159
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpometacarpal_2"));
ProtoInstance159
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.196099996566772 0.805499970912933 -0.0218000002205372"));
ProtoInstance159
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance160 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metacarpophalangeal3"))
                                                                .addChild(ProtoInstance168 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_index_metacarpal_2")));
ProtoInstance160
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance160
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpophalangeal_2"));
ProtoInstance160
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.196099996566772 0.784600019454956 -0.0218000002205372"));
ProtoInstance160
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance161 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal3"))
                                                                    .addChild(ProtoInstance167 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_index_proximal_6")));
ProtoInstance161
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance161
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_proximal_interphalangeal_2"));
ProtoInstance161
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19539999961853 0.739300012588501 -0.0185000002384186"));
ProtoInstance161
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance162 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal3"))
                                                                        .addChild(ProtoInstance166 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_index_middle_2")));
ProtoInstance162
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance162
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_interphalangeal_2"));
ProtoInstance162
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.194499999284744 0.716899991035461 -0.0173000004142523"));
ProtoInstance162
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance163 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_carpal_distal_phalanx3")));
ProtoInstance163
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_2"));
ProtoInstance163
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance164 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_carpal_distal_phalanx_2_tip_2"))
                                                                                .addChild(ProtoInstance165 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_dactylion_2")));
ProtoInstance164
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_2_tip"));
ProtoInstance164
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.197999998927116 0.688300013542175 -0.0179999992251396"));
ProtoInstance165
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_dactylion"));
ProtoInstance165
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813"));
ProtoInstance166
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_index_middle"));
ProtoInstance167
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_index_proximal"));
ProtoInstance168
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_index_metacarpal"));
ProtoInstance169
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance169
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpometacarpal_3"));
ProtoInstance169
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.197200000286102 0.805999994277954 -0.0467999987304211"));
ProtoInstance169
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance170 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metacarpophalangeal4"))
                                                                .addChild(ProtoInstance177 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middle_metacarpal_2")));
ProtoInstance170
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance170
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpophalangeal_3"));
ProtoInstance170
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.197200000286102 0.784900009632111 -0.0467999987304211"));
ProtoInstance170
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance171 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal4"))
                                                                    .addChild(ProtoInstance176 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middle_proximal_2")));
ProtoInstance171
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance171
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_proximal_interphalangeal_3"));
ProtoInstance171
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.194999992847443 0.730400025844574 -0.0441000014543533"));
ProtoInstance171
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance172 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal4"))
                                                                        .addChild(ProtoInstance175 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_middle_middle_2")));
ProtoInstance172
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance172
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_interphalangeal_3"));
ProtoInstance172
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.193900004029274 0.704200029373169 -0.0432000011205673"));
ProtoInstance172
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance173 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_carpal_distal_phalanx4")));
ProtoInstance173
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_3"));
ProtoInstance173
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance174 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_carpal_distal_phalanx_3_tip_2")));
ProtoInstance174
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_3_tip"));
ProtoInstance174
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884"));
ProtoInstance175
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middle_middle"));
ProtoInstance176
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middle_proximal"));
ProtoInstance177
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_middle_metacarpal"));
ProtoInstance178
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance178
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpometacarpal_4"));
ProtoInstance178
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.195099994540215 0.804899990558624 -0.0732000023126602"));
ProtoInstance178
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance179 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metacarpophalangeal5"))
                                                                .addChild(ProtoInstance186 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_ring_metacarpal_2")));
ProtoInstance179
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance179
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpophalangeal_4"));
ProtoInstance179
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.195099994540215 0.784500002861023 -0.0732000023126602"));
ProtoInstance179
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance180 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal5"))
                                                                    .addChild(ProtoInstance185 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_ring_proximal_2")));
ProtoInstance180
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance180
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_proximal_interphalangeal_4"));
ProtoInstance180
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.19200000166893 0.731800019741058 -0.0715999975800514"));
ProtoInstance180
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance181 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal5"))
                                                                        .addChild(ProtoInstance184 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_ring_middle_2")));
ProtoInstance181
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance181
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_interphalangeal_4"));
ProtoInstance181
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.190799996256828 0.70770001411438 -0.0706000030040741"));
ProtoInstance181
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance182 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_carpal_distal_phalanx5")));
ProtoInstance182
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_4"));
ProtoInstance182
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance183 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_carpal_distal_phalanx_4_tip_2")));
ProtoInstance183
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_4_tip"));
ProtoInstance183
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.193399995565414 0.677799999713898 -0.069300003349781"));
ProtoInstance184
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ring_middle"));
ProtoInstance185
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ring_proximal"));
ProtoInstance186
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ring_metacarpal"));
ProtoInstance187
                                                              .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance187
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpometacarpal_5"));
ProtoInstance187
                                                              .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1925999969244 0.809599995613098 -0.0974999964237213"));
ProtoInstance187
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance188 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_metacarpophalangeal6"))
                                                                .addChild(ProtoInstance195 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_pinky_metacarpal_2")));
ProtoInstance188
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance188
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpophalangeal_5"));
ProtoInstance188
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.1925999969244 0.789600014686584 -0.0974999964237213"));
ProtoInstance188
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                    .addChild(ProtoInstance189 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_proximal_interphalangeal6"))
                                                                    .addChild(ProtoInstance194 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_pinky_proximal_2")));
ProtoInstance189
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance189
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_proximal_interphalangeal_5"));
ProtoInstance189
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.190200001001358 0.748300015926361 -0.0962999984622002"));
ProtoInstance189
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                        .addChild(ProtoInstance190 = (new autoclass.ProtoInstance()).setName("Joint").setDEF("hanim_r_carpal_distal_interphalangeal6"))
                                                                        .addChild(ProtoInstance193 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_pinky_middle_2")));
ProtoInstance190
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("stiffness").setValue("1 1 1"));
ProtoInstance190
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_interphalangeal_5"));
ProtoInstance190
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("center").setValue("-0.190799996256828 0.754000008106232 -0.096000000834465"));
ProtoInstance190
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                            .addChild(ProtoInstance191 = (new autoclass.ProtoInstance()).setName("Segment").setDEF("hanim_r_carpal_distal_phalanx6")));
ProtoInstance191
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_5"));
ProtoInstance191
                                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                                .addChild(ProtoInstance192 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_carpal_distal_phalanx_5_tip_2")));
ProtoInstance192
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_carpal_distal_phalanx_5_tip"));
ProtoInstance192
                                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.193800002336502 0.703499972820282 -0.0948999971151352"));
ProtoInstance193
                                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_pinky_middle"));
ProtoInstance194
                                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_pinky_proximal"));
ProtoInstance195
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_pinky_metacarpal"));
ProtoInstance196
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_hand"));
ProtoInstance196
                                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                                .addChild(ProtoInstance197 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx3"))
                                                                .addChild(ProtoInstance198 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_ulnar_styloid_2"))
                                                                .addChild(ProtoInstance199 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_metacarpal_phalanx6")));
ProtoInstance197
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_2"));
ProtoInstance197
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593"));
ProtoInstance198
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_ulnar_styloid"));
ProtoInstance198
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673"));
ProtoInstance199
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_metacarpal_phalanx_5"));
ProtoInstance199
                                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.192900002002716 0.788999974727631 -0.10639999806881"));
ProtoInstance200
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_forearm"));
ProtoInstance200
                                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                            .addChild(ProtoInstance201 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radial_styloid_2"))
                                                            .addChild(ProtoInstance202 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_olecranon_2"))
                                                            .addChild(ProtoInstance203 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_medial_epicondyles_2"))
                                                            .addChild(ProtoInstance204 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_radiale_2")));
ProtoInstance201
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radial_styloid"));
ProtoInstance201
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792"));
ProtoInstance202
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_olecranon"));
ProtoInstance202
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.190699994564056 1.14049994945526 -0.106499999761581"));
ProtoInstance203
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_medial_epicondyles"));
ProtoInstance203
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.167999997735024 1.12979996204376 -0.106200002133846"));
ProtoInstance204
                                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_radiale"));
ProtoInstance204
                                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.212999999523163 1.130499958992 -0.109099999070168"));
ProtoInstance205
                                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_upperarm"));
ProtoInstance205
                                                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                        .addChild(ProtoInstance206 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_humeral_lateral_epicondyles_2")));
ProtoInstance206
                                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_humeral_lateral_epicondyles"));
ProtoInstance206
                                                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.222399994730949 1.15170001983643 -0.103299997746944"));
ProtoInstance207
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_scapula"));
ProtoInstance208
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicle"));
ProtoInstance208
                                              .addFieldValue((new autoclass.fieldValue()).setName("children")
                                                .addChild(ProtoInstance209 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_clavicale_2"))
                                                .addChild(ProtoInstance210 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_acromion_2"))
                                                .addChild(ProtoInstance211 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_proximal_2"))
                                                .addChild(ProtoInstance212 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_axilla_distal_2")));
ProtoInstance209
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_clavicale"));
ProtoInstance209
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303"));
ProtoInstance210
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_acromion"));
ProtoInstance210
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954"));
ProtoInstance211
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_proximal"));
ProtoInstance211
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444"));
ProtoInstance212
                                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_axilla_distal"));
ProtoInstance212
                                                  .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468"));
ProtoInstance213
                                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("t1"));
ProtoInstance213
                                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                                            .addChild(ProtoInstance214 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_neck_base_2"))
                                            .addChild(ProtoInstance215 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_neck_base_2"))
                                            .addChild(ProtoInstance216 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_suprasternale_2"))
                                            .addChild(ProtoInstance217 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_cervicale_2")));
ProtoInstance214
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_neck_base"));
ProtoInstance214
                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907"));
ProtoInstance215
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_neck_base"));
ProtoInstance215
                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048"));
ProtoInstance216
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("suprasternale"));
ProtoInstance216
                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00839999970048666 1.47140002250671 0.0551000013947487"));
ProtoInstance217
                                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("cervicale"));
ProtoInstance217
                                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975"));
ProtoInstance218
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("t6"));
ProtoInstance219
                                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("t10"));
ProtoInstance219
                                  .addFieldValue((new autoclass.fieldValue()).setName("children")
                                    .addChild(ProtoInstance220 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_thelion_2"))
                                    .addChild(ProtoInstance221 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_thelion_2"))
                                    .addChild(ProtoInstance222 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_substernale_2")));
ProtoInstance220
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_thelion"));
ProtoInstance220
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0736000016331673 1.33850002288818 0.121699996292591"));
ProtoInstance221
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_thelion"));
ProtoInstance221
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0917999967932701 1.33819997310638 0.119199998676777"));
ProtoInstance222
                                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("substernale"));
ProtoInstance222
                                      .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.008500000461936 1.29949998855591 0.114699997007847"));
ProtoInstance223
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l1"));
ProtoInstance224
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l3"));
ProtoInstance224
                          .addFieldValue((new autoclass.fieldValue()).setName("children")
                            .addChild(ProtoInstance225 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_r_rib10_2"))
                            .addChild(ProtoInstance226 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_l_rib10_2"))
                            .addChild(ProtoInstance227 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_spine_2_lower_back_2")));
ProtoInstance225
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("r_rib10"));
ProtoInstance225
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-0.0710999965667725 1.19410002231598 0.101599998772144"));
ProtoInstance226
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l_rib10"));
ProtoInstance226
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.0870999991893768 1.19249999523163 0.099200002849102"));
ProtoInstance227
                              .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("spine_2_lower_back"));
ProtoInstance227
                              .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00490000005811453 1.19079995155334 -0.111299999058247"));
ProtoInstance228
                      .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("l5"));
ProtoInstance228
                      .addFieldValue((new autoclass.fieldValue()).setName("children")
                        .addChild(ProtoInstance229 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_waist_preferred_posterior_2"))
                        .addChild(ProtoInstance230 = (new autoclass.ProtoInstance()).setName("Site").setDEF("hanim_navel_2")));
ProtoInstance229
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("waist_preferred_posterior"));
ProtoInstance229
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.28999999165535 1.09150004386902 -0.109099999070168"));
ProtoInstance230
                          .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("navel"));
ProtoInstance230
                          .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("0.00689999992027879 1.09660005569458 0.101700000464916"));
ProtoInstance231
                  .addFieldValue((new autoclass.fieldValue()).setName("name").setValue("sacrum"));
    X3D0.toFileX3D("../data/LOA2ExampleSourceInVRML.new.x3d");
