'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Menu.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("X3D scene with a Switch of Inlines controlled by a menu")})])})),
      Scene : new SFNode(
        new Scene({
          /*Viewpoint and any other scene setup*/
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,20,110])}),

            new Group({
              children : new MFNode([
                new Switch({
                  DEF : new SFString("SceneSwitcher"),
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice0"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 0;
      }
      , function touchTime(value) {
          choice = 0;
      })}),

                        new Inline({
                          DEF : new SFString("JinBlink"),
                          url : new MFString(["../resources/JinBlink.x3d","JinBlink.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice1"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 1;
      }
      , function touchTime(value) {
          choice = 1;
      })}),

                        new Inline({
                          DEF : new SFString("JinBrowLowerer"),
                          url : new MFString(["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice2"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 2;
      }
      , function touchTime(value) {
          choice = 2;
      })}),

                        new Inline({
                          DEF : new SFString("JinCheekPuffer"),
                          url : new MFString(["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice3"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 3;
      }
      , function touchTime(value) {
          choice = 3;
      })}),

                        new Inline({
                          DEF : new SFString("JinCheekRaiser"),
                          url : new MFString(["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice4"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 4;
      }
      , function touchTime(value) {
          choice = 4;
      })}),

                        new Inline({
                          DEF : new SFString("JinChinRaiser"),
                          url : new MFString(["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice5"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 5;
      }
      , function touchTime(value) {
          choice = 5;
      })}),

                        new Inline({
                          DEF : new SFString("JinDimpler"),
                          url : new MFString(["../resources/JinDimpler.x3d","JinDimpler.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice6"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 6;
      }
      , function touchTime(value) {
          choice = 6;
      })}),

                        new Inline({
                          DEF : new SFString("JinEyesClosed"),
                          url : new MFString(["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice7"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 7;
      }
      , function touchTime(value) {
          choice = 7;
      })}),

                        new Inline({
                          DEF : new SFString("JinInnerBrowRaiser"),
                          url : new MFString(["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice8"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 8;
      }
      , function touchTime(value) {
          choice = 8;
      })}),

                        new Inline({
                          DEF : new SFString("JinJawDrop"),
                          url : new MFString(["../resources/JinJawDrop.x3d","JinJawDrop.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice9"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 9;
      }
      , function touchTime(value) {
          choice = 9;
      })}),

                        new Inline({
                          DEF : new SFString("JinLidDroop"),
                          url : new MFString(["../resources/JinLidDroop.x3d","JinLidDroop.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice10"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 10;
      }
      , function touchTime(value) {
          choice = 10;
      })}),

                        new Inline({
                          DEF : new SFString("JinLidTightener"),
                          url : new MFString(["../resources/JinLidTightener.x3d","JinLidTightener.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice11"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 11;
      }
      , function touchTime(value) {
          choice = 11;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipCornerDepressor"),
                          url : new MFString(["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice12"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 12;
      }
      , function touchTime(value) {
          choice = 12;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipCornerPuller"),
                          url : new MFString(["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice13"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 13;
      }
      , function touchTime(value) {
          choice = 13;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipFunneler"),
                          url : new MFString(["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice14"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 14;
      }
      , function touchTime(value) {
          choice = 14;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipPressor"),
                          url : new MFString(["../resources/JinLipPressor.x3d","JinLipPressor.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice15"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 15;
      }
      , function touchTime(value) {
          choice = 15;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipPuckerer"),
                          url : new MFString(["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice16"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 16;
      }
      , function touchTime(value) {
          choice = 16;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipsPart"),
                          url : new MFString(["../resources/JinLipsPart.x3d","JinLipsPart.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice17"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 17;
      }
      , function touchTime(value) {
          choice = 17;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipStretcher"),
                          url : new MFString(["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice18"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 18;
      }
      , function touchTime(value) {
          choice = 18;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipSuck"),
                          url : new MFString(["../resources/JinLipSuck.x3d","JinLipSuck.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice19"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 19;
      }
      , function touchTime(value) {
          choice = 19;
      })}),

                        new Inline({
                          DEF : new SFString("JinLipTightener"),
                          url : new MFString(["../resources/JinLipTightener.x3d","JinLipTightener.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice20"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 20;
      }
      , function touchTime(value) {
          choice = 20;
      })}),

                        new Inline({
                          DEF : new SFString("JinLowerLipDepressor"),
                          url : new MFString(["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice21"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 21;
      }
      , function touchTime(value) {
          choice = 21;
      })}),

                        new Inline({
                          DEF : new SFString("JinMouthStretch"),
                          url : new MFString(["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice22"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 22;
      }
      , function touchTime(value) {
          choice = 22;
      })}),

                        new Inline({
                          DEF : new SFString("JinNasolabialDeepener"),
                          url : new MFString(["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice23"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 23;
      }
      , function touchTime(value) {
          choice = 23;
      })}),

                        new Inline({
                          DEF : new SFString("JinNoseWrinkler"),
                          url : new MFString(["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice24"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 24;
      }
      , function touchTime(value) {
          choice = 24;
      })}),

                        new Inline({
                          DEF : new SFString("JinOuterBrowRaiser"),
                          url : new MFString(["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice25"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 25;
      }
      , function touchTime(value) {
          choice = 25;
      })}),

                        new Inline({
                          DEF : new SFString("JinSlit"),
                          url : new MFString(["../resources/JinSlit.x3d","JinSlit.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice26"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 26;
      }
      , function touchTime(value) {
          choice = 26;
      })}),

                        new Inline({
                          DEF : new SFString("JinSquint"),
                          url : new MFString(["../resources/JinSquint.x3d","JinSquint.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice27"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 27;
      }
      , function touchTime(value) {
          choice = 27;
      })}),

                        new Inline({
                          DEF : new SFString("JinUpperLidRaiser"),
                          url : new MFString(["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice28"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 28;
      }
      , function touchTime(value) {
          choice = 28;
      })}),

                        new Inline({
                          DEF : new SFString("JinUpperLipRaiser"),
                          url : new MFString(["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"])})])}),

                    new Group({
                      children : new MFNode([
                        new Script({
                          DEF : new SFString("Choice29"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("touchTime"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("choice"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                          ]),
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 29;
      }
      , function touchTime(value) {
          choice = 29;
      })}),

                        new Inline({
                          DEF : new SFString("JinWink"),
                          url : new MFString(["../resources/JinWink.x3d","JinWink.x3d"])})])})])}),

                new Transform({
                  translation : new SFVec3f([48,63.4,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinBlink"),
                      DEF : new SFString("JinBlink_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinBlink"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinBlink_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice0"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice0"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,60.4,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinBrowLowerer"),
                      DEF : new SFString("JinBrowLowerer_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinBrowLowerer"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinBrowLowerer_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice1"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice1"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,57.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinCheekPuffer"),
                      DEF : new SFString("JinCheekPuffer_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinCheekPuffer"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinCheekPuffer_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice2"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice2"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,54.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinCheekRaiser"),
                      DEF : new SFString("JinCheekRaiser_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinCheekRaiser"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinCheekRaiser_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice3"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice3"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,51.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinChinRaiser"),
                      DEF : new SFString("JinChinRaiser_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinChinRaiser"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinChinRaiser_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice4"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice4"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,48.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinDimpler"),
                      DEF : new SFString("JinDimpler_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinDimpler"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinDimpler_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice5"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice5"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,45.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinEyesClosed"),
                      DEF : new SFString("JinEyesClosed_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinEyesClosed"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinEyesClosed_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice6"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice6"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,42.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinInnerBrowRaiser"),
                      DEF : new SFString("JinInnerBrowRaiser_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinInnerBrowRaiser"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinInnerBrowRaiser_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice7"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice7"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,39.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinJawDrop"),
                      DEF : new SFString("JinJawDrop_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinJawDrop"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinJawDrop_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice8"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice8"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,36.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLidDroop"),
                      DEF : new SFString("JinLidDroop_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLidDroop"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLidDroop_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice9"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice9"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,33.39999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLidTightener"),
                      DEF : new SFString("JinLidTightener_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLidTightener"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLidTightener_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice10"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice10"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,30.399999999999995,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipCornerDepressor"),
                      DEF : new SFString("JinLipCornerDepressor_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipCornerDepressor"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipCornerDepressor_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice11"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice11"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,27.399999999999995,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipCornerPuller"),
                      DEF : new SFString("JinLipCornerPuller_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipCornerPuller"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipCornerPuller_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice12"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice12"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,24.399999999999995,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipFunneler"),
                      DEF : new SFString("JinLipFunneler_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipFunneler"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipFunneler_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice13"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice13"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,21.399999999999995,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipPressor"),
                      DEF : new SFString("JinLipPressor_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipPressor"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipPressor_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice14"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice14"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,18.4,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipPuckerer"),
                      DEF : new SFString("JinLipPuckerer_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipPuckerer"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipPuckerer_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice15"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice15"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,15.399999999999997,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipsPart"),
                      DEF : new SFString("JinLipsPart_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipsPart"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipsPart_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice16"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice16"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,12.399999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipStretcher"),
                      DEF : new SFString("JinLipStretcher_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipStretcher"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipStretcher_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice17"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice17"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,9.399999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipSuck"),
                      DEF : new SFString("JinLipSuck_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipSuck"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipSuck_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice18"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice18"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,6.399999999999999,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLipTightener"),
                      DEF : new SFString("JinLipTightener_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLipTightener"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLipTightener_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice19"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice19"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,3.399999999999995,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinLowerLipDepressor"),
                      DEF : new SFString("JinLowerLipDepressor_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinLowerLipDepressor"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinLowerLipDepressor_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice20"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice20"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,0.399999999999995,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinMouthStretch"),
                      DEF : new SFString("JinMouthStretch_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinMouthStretch"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinMouthStretch_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice21"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice21"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-2.6000000000000085,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinNasolabialDeepener"),
                      DEF : new SFString("JinNasolabialDeepener_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinNasolabialDeepener"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinNasolabialDeepener_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice22"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice22"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-5.6000000000000085,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinNoseWrinkler"),
                      DEF : new SFString("JinNoseWrinkler_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinNoseWrinkler"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinNoseWrinkler_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice23"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice23"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-8.600000000000009,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinOuterBrowRaiser"),
                      DEF : new SFString("JinOuterBrowRaiser_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinOuterBrowRaiser"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinOuterBrowRaiser_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice24"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice24"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-11.600000000000009,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinSlit"),
                      DEF : new SFString("JinSlit_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinSlit"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinSlit_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice25"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice25"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-14.600000000000001,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinSquint"),
                      DEF : new SFString("JinSquint_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinSquint"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinSquint_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice26"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice26"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-17.6,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinUpperLidRaiser"),
                      DEF : new SFString("JinUpperLidRaiser_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinUpperLidRaiser"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinUpperLidRaiser_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice27"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice27"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-20.6,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinUpperLipRaiser"),
                      DEF : new SFString("JinUpperLipRaiser_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinUpperLipRaiser"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinUpperLipRaiser_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice28"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice28"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")}),

                new Transform({
                  translation : new SFVec3f([48,-23.599999999999994,0]),
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("TSJinWink"),
                      DEF : new SFString("JinWink_Sensor")}),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,1])}))})),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["JinWink"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              size : new SFFloat(2.4),
                              spacing : new SFFloat(1.2),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1])}))}))}))}),

                new ROUTE({
                  fromNode : new SFString("JinWink_Sensor"),
                  fromField : new SFString("touchTime"),
                  toNode : new SFString("Choice29"),
                  toField : new SFString("touchTime")}),

                new ROUTE({
                  fromNode : new SFString("Choice29"),
                  fromField : new SFString("choice"),
                  toNode : new SFString("SceneSwitcher"),
                  toField : new SFString("whichChoice")})])})])}))});
console.log(X3D0.toXMLNode());
