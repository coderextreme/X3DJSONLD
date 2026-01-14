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
          /*Menu prototype declaration*/

            ProtoDeclare(
              name_ : SFString('Menu'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('menuItems'),
                      accessType_ : SFString("initializeOnly"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      children_ : [
                        Transform(
                          DEF_ : SFString('TextMenuTransform'),
                          translation_ : SFVec3f([SFDouble(48), SFDouble(27), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('MenuTouchSensor')),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                Text(
                                  DEF_ : SFString('MenuText'),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('string'),
                                          protoField_ : SFString('menuItems'))]),
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
                                  DEF_ : SFString('Backing'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([25,36,-0.01]),SFVec3f([-25,36,-0.01]),SFVec3f([-25,-51,-0.01]),SFVec3f([25,-51,-0.01])]))))),

                        Switch(
                          DEF_ : SFString('SceneSwitcher'),
                          whichChoice_ : 0,
                          children_ : [
                            Inline(
                              DEF_ : SFString('OPTION1'),
                              url_ : MFString([SFString("../resources/JinInnerBrowRaiser.x3d"), SFString("JinInnerBrowRaiser.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION2'),
                              url_ : MFString([SFString("../resources/JinOuterBrowRaiser.x3d"), SFString("JinOuterBrowRaiser.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION3'),
                              url_ : MFString([SFString("../resources/JinBrowLowerer.x3d"), SFString("JinBrowLowerer.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION4'),
                              url_ : MFString([SFString("../resources/JinUpperLidRaiser.x3d"), SFString("JinUpperLidRaiser.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION5'),
                              url_ : MFString([SFString("../resources/JinCheekRaiser.x3d"), SFString("JinCheekRaiser.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION6'),
                              url_ : MFString([SFString("../resources/JinLidTightener.x3d"), SFString("JinLidTightener.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION7'),
                              url_ : MFString([SFString("../resources/JinNoseWrinkler.x3d"), SFString("JinNoseWrinkler.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION8'),
                              url_ : MFString([SFString("../resources/JinUpperLipRaiser.x3d"), SFString("JinUpperLipRaiser.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION9'),
                              url_ : MFString([SFString("../resources/JinNasolabialDeepener.x3d"), SFString("JinNasolabialDeepener.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION10'),
                              url_ : MFString([SFString("../resources/JinLipCornerPuller.x3d"), SFString("JinLipCornerPuller.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION11'),
                              url_ : MFString([SFString("../resources/JinCheekPuffer.x3d"), SFString("JinCheekPuffer.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION12'),
                              url_ : MFString([SFString("../resources/JinDimpler.x3d"), SFString("JinDimpler.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION13'),
                              url_ : MFString([SFString("../resources/JinLipCornerDepressor.x3d"), SFString("JinLipCornerDepressor.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION14'),
                              url_ : MFString([SFString("../resources/JinLowerLipDepressor.x3d"), SFString("JinLowerLipDepressor.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION15'),
                              url_ : MFString([SFString("../resources/JinChinRaiser.x3d"), SFString("JinChinRaiser.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION16'),
                              url_ : MFString([SFString("../resources/JinLipPuckerer.x3d"), SFString("JinLipPuckerer.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION17'),
                              url_ : MFString([SFString("../resources/JinLipStretcher.x3d"), SFString("JinLipStretcher.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION18'),
                              url_ : MFString([SFString("../resources/JinLipFunneler.x3d"), SFString("JinLipFunneler.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION19'),
                              url_ : MFString([SFString("../resources/JinLipTightener.x3d"), SFString("JinLipTightener.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION20'),
                              url_ : MFString([SFString("../resources/JinLipPressor.x3d"), SFString("JinLipPressor.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION21'),
                              url_ : MFString([SFString("../resources/JinLipsPart.x3d"), SFString("JinLipsPart.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION22'),
                              url_ : MFString([SFString("../resources/JinJawDrop.x3d"), SFString("JinJawDrop.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION23'),
                              url_ : MFString([SFString("../resources/JinMouthStretch.x3d"), SFString("JinMouthStretch.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION24'),
                              url_ : MFString([SFString("../resources/JinLipSuck.x3d"), SFString("JinLipSuck.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION25'),
                              url_ : MFString([SFString("../resources/JinLidDroop.x3d"), SFString("JinLidDroop.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION26'),
                              url_ : MFString([SFString("../resources/JinSlit.x3d"), SFString("JinSlit.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION27'),
                              url_ : MFString([SFString("../resources/JinEyesClosed.x3d"), SFString("JinEyesClosed.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION28'),
                              url_ : MFString([SFString("../resources/JinSquint.x3d"), SFString("JinSquint.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION29'),
                              url_ : MFString([SFString("../resources/JinBlink.x3d"), SFString("JinBlink.x3d")])),

                            Inline(
                              DEF_ : SFString('OPTION30'),
                              url_ : MFString([SFString("../resources/JinWink.x3d"), SFString("JinWink.x3d")]))]),
                      /*Script to handle selection logic*/

                        Script(
                          DEF_ : SFString('MenuScript'),
                          field_ : [
                            field(
                              type_ : SFString("MFString"),
                              name_ : SFString('menuItems'),
                              accessType_ : SFString("initializeOnly")),

                            field(
                              type_ : SFString("SFInt32"),
                              name_ : SFString('selection'),
                              accessType_ : SFString("outputOnly")),

                            field(
                              type_ : SFString("SFVec3f"),
                              name_ : SFString('touchPoint'),
                              accessType_ : SFString("inputOnly")),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('spacing'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('1.2')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('size'),
                              accessType_ : SFString("initializeOnly"),
                              value_ : SFString('2.4')),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('menuCenterY'),
                              accessType_ : SFString("initializeOnly")),

                            field(
                              type_ : SFString("SFFloat"),
                              name_ : SFString('itemHeight'),
                              accessType_ : SFString("initializeOnly"))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('menuItems'),
                                  protoField_ : SFString('menuItems'))]),
                          ,
ecmascript:eval (0
        , function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        , function touchPoint(value) {
          Browser.print("Hit "+value+" "+selection+"
");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print("Selected "+value+" "+selection+" "+menuItems[selection]+"
");
          }
        })),
                      /*ROUTEs to connect everything*/

                        ROUTE(
                          fromNode_ : SFString('MenuTouchSensor'),
                          fromField_ : SFString('hitPoint_changed'),
                          toNode_ : SFString('MenuScript'),
                          toField_ : SFString('touchPoint')),

                        ROUTE(
                          fromNode_ : SFString('MenuScript'),
                          fromField_ : SFString('selection'),
                          toNode_ : SFString('SceneSwitcher'),
                          toField_ : SFString('whichChoice'))])])),

            ProtoInstance(
              name_ : SFString('Menu'),
              DEF_ : SFString('MainMenu'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('menuItems'),
                  value_ : SFString('\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"'))])]));
void main() { exit(0); }
