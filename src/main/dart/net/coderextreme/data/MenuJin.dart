// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('Menu.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('X3D scene with a Switch of Inlines controlled by a menu'))]),
      Scene_ : 
        Scene(
          /*Viewpoint and any other scene setup*/
          children_ : [
            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(20), SFDouble(110)])),

            Group(
              children_ : [
                Switch(
                  DEF_ : SFString('SceneSwitcher'),
                  whichChoice_ : 0,
                  children_ : [
                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice0'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 0;
      }
      , function touchTime(value) {
          choice = 0;
      })),

                        Inline(
                          DEF_ : SFString('JinBlink'),
                          url_ : MFString([SFString("../resources/JinBlink.x3d"), SFString("JinBlink.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice1'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 1;
      }
      , function touchTime(value) {
          choice = 1;
      })),

                        Inline(
                          DEF_ : SFString('JinBrowLowerer'),
                          url_ : MFString([SFString("../resources/JinBrowLowerer.x3d"), SFString("JinBrowLowerer.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice2'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 2;
      }
      , function touchTime(value) {
          choice = 2;
      })),

                        Inline(
                          DEF_ : SFString('JinCheekPuffer'),
                          url_ : MFString([SFString("../resources/JinCheekPuffer.x3d"), SFString("JinCheekPuffer.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice3'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 3;
      }
      , function touchTime(value) {
          choice = 3;
      })),

                        Inline(
                          DEF_ : SFString('JinCheekRaiser'),
                          url_ : MFString([SFString("../resources/JinCheekRaiser.x3d"), SFString("JinCheekRaiser.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice4'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 4;
      }
      , function touchTime(value) {
          choice = 4;
      })),

                        Inline(
                          DEF_ : SFString('JinChinRaiser'),
                          url_ : MFString([SFString("../resources/JinChinRaiser.x3d"), SFString("JinChinRaiser.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice5'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 5;
      }
      , function touchTime(value) {
          choice = 5;
      })),

                        Inline(
                          DEF_ : SFString('JinDimpler'),
                          url_ : MFString([SFString("../resources/JinDimpler.x3d"), SFString("JinDimpler.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice6'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 6;
      }
      , function touchTime(value) {
          choice = 6;
      })),

                        Inline(
                          DEF_ : SFString('JinEyesClosed'),
                          url_ : MFString([SFString("../resources/JinEyesClosed.x3d"), SFString("JinEyesClosed.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice7'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 7;
      }
      , function touchTime(value) {
          choice = 7;
      })),

                        Inline(
                          DEF_ : SFString('JinInnerBrowRaiser'),
                          url_ : MFString([SFString("../resources/JinInnerBrowRaiser.x3d"), SFString("JinInnerBrowRaiser.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice8'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 8;
      }
      , function touchTime(value) {
          choice = 8;
      })),

                        Inline(
                          DEF_ : SFString('JinJawDrop'),
                          url_ : MFString([SFString("../resources/JinJawDrop.x3d"), SFString("JinJawDrop.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice9'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 9;
      }
      , function touchTime(value) {
          choice = 9;
      })),

                        Inline(
                          DEF_ : SFString('JinLidDroop'),
                          url_ : MFString([SFString("../resources/JinLidDroop.x3d"), SFString("JinLidDroop.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice10'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 10;
      }
      , function touchTime(value) {
          choice = 10;
      })),

                        Inline(
                          DEF_ : SFString('JinLidTightener'),
                          url_ : MFString([SFString("../resources/JinLidTightener.x3d"), SFString("JinLidTightener.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice11'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 11;
      }
      , function touchTime(value) {
          choice = 11;
      })),

                        Inline(
                          DEF_ : SFString('JinLipCornerDepressor'),
                          url_ : MFString([SFString("../resources/JinLipCornerDepressor.x3d"), SFString("JinLipCornerDepressor.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice12'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 12;
      }
      , function touchTime(value) {
          choice = 12;
      })),

                        Inline(
                          DEF_ : SFString('JinLipCornerPuller'),
                          url_ : MFString([SFString("../resources/JinLipCornerPuller.x3d"), SFString("JinLipCornerPuller.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice13'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 13;
      }
      , function touchTime(value) {
          choice = 13;
      })),

                        Inline(
                          DEF_ : SFString('JinLipFunneler'),
                          url_ : MFString([SFString("../resources/JinLipFunneler.x3d"), SFString("JinLipFunneler.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice14'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 14;
      }
      , function touchTime(value) {
          choice = 14;
      })),

                        Inline(
                          DEF_ : SFString('JinLipPressor'),
                          url_ : MFString([SFString("../resources/JinLipPressor.x3d"), SFString("JinLipPressor.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice15'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 15;
      }
      , function touchTime(value) {
          choice = 15;
      })),

                        Inline(
                          DEF_ : SFString('JinLipPuckerer'),
                          url_ : MFString([SFString("../resources/JinLipPuckerer.x3d"), SFString("JinLipPuckerer.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice16'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 16;
      }
      , function touchTime(value) {
          choice = 16;
      })),

                        Inline(
                          DEF_ : SFString('JinLipsPart'),
                          url_ : MFString([SFString("../resources/JinLipsPart.x3d"), SFString("JinLipsPart.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice17'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 17;
      }
      , function touchTime(value) {
          choice = 17;
      })),

                        Inline(
                          DEF_ : SFString('JinLipStretcher'),
                          url_ : MFString([SFString("../resources/JinLipStretcher.x3d"), SFString("JinLipStretcher.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice18'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 18;
      }
      , function touchTime(value) {
          choice = 18;
      })),

                        Inline(
                          DEF_ : SFString('JinLipSuck'),
                          url_ : MFString([SFString("../resources/JinLipSuck.x3d"), SFString("JinLipSuck.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice19'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 19;
      }
      , function touchTime(value) {
          choice = 19;
      })),

                        Inline(
                          DEF_ : SFString('JinLipTightener'),
                          url_ : MFString([SFString("../resources/JinLipTightener.x3d"), SFString("JinLipTightener.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice20'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 20;
      }
      , function touchTime(value) {
          choice = 20;
      })),

                        Inline(
                          DEF_ : SFString('JinLowerLipDepressor'),
                          url_ : MFString([SFString("../resources/JinLowerLipDepressor.x3d"), SFString("JinLowerLipDepressor.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice21'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 21;
      }
      , function touchTime(value) {
          choice = 21;
      })),

                        Inline(
                          DEF_ : SFString('JinMouthStretch'),
                          url_ : MFString([SFString("../resources/JinMouthStretch.x3d"), SFString("JinMouthStretch.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice22'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 22;
      }
      , function touchTime(value) {
          choice = 22;
      })),

                        Inline(
                          DEF_ : SFString('JinNasolabialDeepener'),
                          url_ : MFString([SFString("../resources/JinNasolabialDeepener.x3d"), SFString("JinNasolabialDeepener.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice23'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 23;
      }
      , function touchTime(value) {
          choice = 23;
      })),

                        Inline(
                          DEF_ : SFString('JinNoseWrinkler'),
                          url_ : MFString([SFString("../resources/JinNoseWrinkler.x3d"), SFString("JinNoseWrinkler.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice24'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 24;
      }
      , function touchTime(value) {
          choice = 24;
      })),

                        Inline(
                          DEF_ : SFString('JinOuterBrowRaiser'),
                          url_ : MFString([SFString("../resources/JinOuterBrowRaiser.x3d"), SFString("JinOuterBrowRaiser.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice25'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 25;
      }
      , function touchTime(value) {
          choice = 25;
      })),

                        Inline(
                          DEF_ : SFString('JinSlit'),
                          url_ : MFString([SFString("../resources/JinSlit.x3d"), SFString("JinSlit.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice26'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 26;
      }
      , function touchTime(value) {
          choice = 26;
      })),

                        Inline(
                          DEF_ : SFString('JinSquint'),
                          url_ : MFString([SFString("../resources/JinSquint.x3d"), SFString("JinSquint.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice27'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 27;
      }
      , function touchTime(value) {
          choice = 27;
      })),

                        Inline(
                          DEF_ : SFString('JinUpperLidRaiser'),
                          url_ : MFString([SFString("../resources/JinUpperLidRaiser.x3d"), SFString("JinUpperLidRaiser.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice28'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 28;
      }
      , function touchTime(value) {
          choice = 28;
      })),

                        Inline(
                          DEF_ : SFString('JinUpperLipRaiser'),
                          url_ : MFString([SFString("../resources/JinUpperLipRaiser.x3d"), SFString("JinUpperLipRaiser.x3d")]))]),

                    Group(
                      children_ : [
                        Script(
                          DEF_ : SFString('Choice29'),
                          field_ : [
                            field(
                              type_ : SFString("SFTime"),
                              name_ : SFString('touchTime'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('choice'),
                              accessType_ : SFString("outputOnly")),
                          ],
ecmascript:eval (0
      , function set_touchTime(value) {
          choice = 29;
      }
      , function touchTime(value) {
          choice = 29;
      })),

                        Inline(
                          DEF_ : SFString('JinWink'),
                          url_ : MFString([SFString("../resources/JinWink.x3d"), SFString("JinWink.x3d")]))])]),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(63.4), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinBlink'),
                      DEF_ : SFString('JinBlink_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinBlink")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinBlink_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice0'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice0'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(60.4), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinBrowLowerer'),
                      DEF_ : SFString('JinBrowLowerer_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinBrowLowerer")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinBrowLowerer_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice1'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice1'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(57.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinCheekPuffer'),
                      DEF_ : SFString('JinCheekPuffer_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinCheekPuffer")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinCheekPuffer_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice2'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice2'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(54.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinCheekRaiser'),
                      DEF_ : SFString('JinCheekRaiser_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinCheekRaiser")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinCheekRaiser_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice3'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice3'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(51.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinChinRaiser'),
                      DEF_ : SFString('JinChinRaiser_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinChinRaiser")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinChinRaiser_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice4'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice4'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(48.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinDimpler'),
                      DEF_ : SFString('JinDimpler_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinDimpler")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinDimpler_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice5'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice5'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(45.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinEyesClosed'),
                      DEF_ : SFString('JinEyesClosed_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinEyesClosed")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinEyesClosed_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice6'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice6'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(42.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinInnerBrowRaiser'),
                      DEF_ : SFString('JinInnerBrowRaiser_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinInnerBrowRaiser")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinInnerBrowRaiser_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice7'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice7'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(39.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinJawDrop'),
                      DEF_ : SFString('JinJawDrop_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinJawDrop")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinJawDrop_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice8'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice8'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(36.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLidDroop'),
                      DEF_ : SFString('JinLidDroop_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLidDroop")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLidDroop_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice9'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice9'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(33.39999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLidTightener'),
                      DEF_ : SFString('JinLidTightener_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLidTightener")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLidTightener_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice10'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice10'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(30.399999999999995), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipCornerDepressor'),
                      DEF_ : SFString('JinLipCornerDepressor_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipCornerDepressor")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipCornerDepressor_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice11'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice11'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(27.399999999999995), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipCornerPuller'),
                      DEF_ : SFString('JinLipCornerPuller_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipCornerPuller")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipCornerPuller_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice12'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice12'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(24.399999999999995), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipFunneler'),
                      DEF_ : SFString('JinLipFunneler_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipFunneler")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipFunneler_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice13'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice13'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(21.399999999999995), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipPressor'),
                      DEF_ : SFString('JinLipPressor_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipPressor")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipPressor_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice14'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice14'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(18.4), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipPuckerer'),
                      DEF_ : SFString('JinLipPuckerer_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipPuckerer")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipPuckerer_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice15'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice15'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(15.399999999999997), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipsPart'),
                      DEF_ : SFString('JinLipsPart_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipsPart")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipsPart_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice16'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice16'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(12.399999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipStretcher'),
                      DEF_ : SFString('JinLipStretcher_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipStretcher")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipStretcher_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice17'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice17'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(9.399999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipSuck'),
                      DEF_ : SFString('JinLipSuck_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipSuck")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipSuck_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice18'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice18'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(6.399999999999999), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLipTightener'),
                      DEF_ : SFString('JinLipTightener_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLipTightener")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLipTightener_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice19'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice19'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(3.399999999999995), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinLowerLipDepressor'),
                      DEF_ : SFString('JinLowerLipDepressor_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinLowerLipDepressor")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinLowerLipDepressor_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice20'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice20'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(0.399999999999995), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinMouthStretch'),
                      DEF_ : SFString('JinMouthStretch_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinMouthStretch")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinMouthStretch_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice21'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice21'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-2.6000000000000085), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinNasolabialDeepener'),
                      DEF_ : SFString('JinNasolabialDeepener_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinNasolabialDeepener")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinNasolabialDeepener_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice22'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice22'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-5.6000000000000085), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinNoseWrinkler'),
                      DEF_ : SFString('JinNoseWrinkler_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinNoseWrinkler")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinNoseWrinkler_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice23'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice23'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-8.600000000000009), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinOuterBrowRaiser'),
                      DEF_ : SFString('JinOuterBrowRaiser_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinOuterBrowRaiser")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinOuterBrowRaiser_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice24'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice24'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-11.600000000000009), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinSlit'),
                      DEF_ : SFString('JinSlit_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinSlit")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinSlit_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice25'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice25'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-14.600000000000001), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinSquint'),
                      DEF_ : SFString('JinSquint_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinSquint")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinSquint_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice26'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice26'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-17.6), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinUpperLidRaiser'),
                      DEF_ : SFString('JinUpperLidRaiser_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinUpperLidRaiser")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinUpperLidRaiser_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice27'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice27'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-20.6), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinUpperLipRaiser'),
                      DEF_ : SFString('JinUpperLipRaiser_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinUpperLipRaiser")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinUpperLipRaiser_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice28'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice28'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice')),

                Transform(
                  translation_ : SFVec3f([SFDouble(48), SFDouble(-23.599999999999994), SFDouble(0)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('TSJinWink'),
                      DEF_ : SFString('JinWink_Sensor')),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("JinWink")]),
                          fontStyle_ : 
                            FontStyle(
                              size_ : 2.4,
                              spacing_ : 1.2,
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))],
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([20,1.3833333333333333,-0.1]),SFVec3f([-20,1.3833333333333333,-0.1]),SFVec3f([-20,-1.616666666666667,-0.1]),SFVec3f([20,-1.616666666666667,-0.1])]))))),

                ROUTE(
                  fromNode_ : SFString('JinWink_Sensor'),
                  fromField_ : SFString('touchTime'),
                  toNode_ : SFString('Choice29'),
                  toField_ : SFString('touchTime')),

                ROUTE(
                  fromNode_ : SFString('Choice29'),
                  fromField_ : SFString('choice'),
                  toNode_ : SFString('SceneSwitcher'),
                  toField_ : SFString('whichChoice'))])]));
void main() { exit(0); }
