// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('MainStage.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Main stage for HAnim scene Winter and Spring.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe Williams')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe Williams and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('25 May 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 May 2023')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/0MainStageScene0525.x3dv')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('MainStage.x3d')),

            NavigationInfo(
              headlight_ : false),

            DirectionalLight(
              ambientIntensity_ : 1,
              direction_ : SFVec3f([SFDouble(-0.5), SFDouble(-0.5), SFDouble(-0.5)]),
              global_ : true),

            DirectionalLight(
              ambientIntensity_ : 1,
              direction_ : SFVec3f([SFDouble(-1), SFDouble(-1), SFDouble(-1)]),
              global_ : true),

            DirectionalLight(
              ambientIntensity_ : 1,
              direction_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(-1)]),
              global_ : true,
              intensity_ : 0.5),

            Viewpoint(
              DEF_ : SFString('Scene_StageFrontViewFar'),
              description_ : SFString('hanim_Stage Front View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.449999988)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(4), SFDouble(10)])),

            Viewpoint(
              DEF_ : SFString('Scene_InclinedView'),
              description_ : SFString('hanim_Inclined View'),
              orientation_ : SFRotation([SFDouble(-0.112999998), SFDouble(0.992999971), SFDouble(0.034699999), SFDouble(0.671000004)]),
              position_ : SFVec3f([SFDouble(2.619999886), SFDouble(1.049999952), SFDouble(4.059999943)])),

            Viewpoint(
              DEF_ : SFString('Scene_StageFrontView'),
              description_ : SFString('hanim_Stage Front View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(5)])),

            Viewpoint(
              DEF_ : SFString('Scene_FeetStageBottomView'),
              description_ : SFString('hanim_feet View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.570000052)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(-10), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_HeadTopView'),
              description_ : SFString('hanim_Head Top View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.570000052)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(15), SFDouble(0)])),

            Viewpoint(
              DEF_ : SFString('Scene_TopFrontCloseView'),
              description_ : SFString('hanim_Head Top View'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.100000024)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(8), SFDouble(3)])),

            Group(
              DEF_ : SFString('HAnimStage'),
              children_ : [
                Transform(
                  DEF_ : SFString('cordsysfloor'),
                  scale_ : SFVec3f([SFDouble(0.174999997), SFDouble(0.174999997), SFDouble(0.174999997)]),
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("JointCoordinateAxes.x3dv")]))]),

                Transform(
                  DEF_ : SFString('StageGeometry'),
                  scale_ : SFVec3f([SFDouble(1), SFDouble(0.01), SFDouble(1)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-0.01), SFDouble(0)]),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              transparency_ : 0.6)),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(9), SFDouble(1), SFDouble(9)]))),
                  children_ : [
                    Transform(
                      DEF_ : SFString('Circle0'),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              DEF_ : SFString('LineColor'),
                              material_ : 
                                Material(
                                  ambientIntensity_ : 1,
                                  diffuseColor_ : SFColor([SFDouble(0.699999988), SFDouble(0), SFDouble(0.899999976)]),
                                  emissiveColor_ : SFColor([SFDouble(0.449999988), SFDouble(0.449999988), SFDouble(1)]),
                                  shininess_ : 1,
                                  specularColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                          geometry_ : 
                            IndexedLineSet(
                              DEF_ : SFString('Orbit1'),
                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(13), SFInt32(14), SFInt32(15), SFInt32(16), SFInt32(17), SFInt32(18), SFInt32(19), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(24), SFInt32(25), SFInt32(26), SFInt32(27), SFInt32(28), SFInt32(29), SFInt32(30), SFInt32(31), SFInt32(32), SFInt32(33), SFInt32(34), SFInt32(35), SFInt32(36), SFInt32(37), SFInt32(38), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(43), SFInt32(44), SFInt32(45), SFInt32(46), SFInt32(47), SFInt32(48), SFInt32(49), SFInt32(50), SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(55), SFInt32(56), SFInt32(57), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(-1)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([1,0,0]),SFVec3f([0.995000005,0,-0.104999997]),SFVec3f([0.978999972,0,-0.208000004]),SFVec3f([0.950999975,0,-0.308999985]),SFVec3f([0.913999975,0,-0.407000005]),SFVec3f([0.865999997,0,-0.5]),SFVec3f([0.809000015,0,-0.588]),SFVec3f([0.742999971,0,-0.66900003]),SFVec3f([0.66900003,0,-0.742999971]),SFVec3f([0.588,0,-0.809000015]),SFVec3f([0.5,0,-0.865999997]),SFVec3f([0.407000005,0,-0.913999975]),SFVec3f([0.308999985,0,-0.950999975]),SFVec3f([0.208000004,0,-0.977999985]),SFVec3f([0.104999997,0,-0.995000005]),SFVec3f([0,0,-1]),SFVec3f([-0.104999997,0,-0.994521976]),SFVec3f([-0.208000004,0,-0.977999985]),SFVec3f([-0.308999985,0,-0.950999975]),SFVec3f([-0.407000005,0,-0.913999975]),SFVec3f([-0.5,0,-0.865999997]),SFVec3f([-0.588,0,-0.809000015]),SFVec3f([-0.66900003,0,-0.742999971]),SFVec3f([-0.742999971,0,-0.66900003]),SFVec3f([-0.809000015,0,-0.588]),SFVec3f([-0.865999997,0,-0.5]),SFVec3f([-0.913999975,0,-0.407000005]),SFVec3f([-0.950999975,0,-0.308999985]),SFVec3f([-0.977999985,0,-0.208000004]),SFVec3f([-0.995000005,0,-0.104999997]),SFVec3f([-1,0,0]),SFVec3f([-0.995000005,0,0.104999997]),SFVec3f([-0.977999985,0,0.208000004]),SFVec3f([-0.950999975,0,0.308999985]),SFVec3f([-0.913999975,0,0.407000005]),SFVec3f([-0.865999997,0,0.5]),SFVec3f([-0.809000015,0,0.588]),SFVec3f([-0.742999971,0,0.66900003]),SFVec3f([-0.66900003,0,0.742999971]),SFVec3f([-0.588,0,0.809000015]),SFVec3f([-0.5,0,0.865999997]),SFVec3f([-0.407000005,0,0.913999975]),SFVec3f([-0.308999985,0,0.950999975]),SFVec3f([-0.208000004,0,0.977999985]),SFVec3f([-0.104999997,0,0.995000005]),SFVec3f([0,0,1]),SFVec3f([0.104999997,0,0.995000005]),SFVec3f([0.208000004,0,0.977999985]),SFVec3f([0.308999985,0,0.950999975]),SFVec3f([0.407000005,0,0.913999975]),SFVec3f([0.5,0,0.865999997]),SFVec3f([0.588,0,0.809000015]),SFVec3f([0.66900003,0,0.742999971]),SFVec3f([0.742999971,0,0.66900003]),SFVec3f([0.809000015,0,0.588]),SFVec3f([0.865999997,0,0.5]),SFVec3f([0.913999975,0,0.407000005]),SFVec3f([0.950999975,0,0.308999985]),SFVec3f([0.977999985,0,0.208000004]),SFVec3f([0.995000005,0,0.104000002]),SFVec3f([1,0,0])]))))),

                    Transform(
                      DEF_ : SFString('Circle1'),
                      scale_ : SFVec3f([SFDouble(0.5), SFDouble(1), SFDouble(0.5)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('LineColor')),
                          geometry_ : 
                            IndexedLineSet(
                              USE_ : SFString('Orbit1')))),

                    Transform(
                      DEF_ : SFString('Circle2'),
                      scale_ : SFVec3f([SFDouble(0.25), SFDouble(1), SFDouble(0.25)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('LineColor')),
                          geometry_ : 
                            IndexedLineSet(
                              USE_ : SFString('Orbit1')))),

                    Transform(
                      DEF_ : SFString('Circle3'),
                      scale_ : SFVec3f([SFDouble(2), SFDouble(1), SFDouble(2)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('LineColor')),
                          geometry_ : 
                            IndexedLineSet(
                              USE_ : SFString('Orbit1')))),

                    Transform(
                      DEF_ : SFString('Circle4'),
                      scale_ : SFVec3f([SFDouble(3), SFDouble(1), SFDouble(3)]),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('LineColor')),
                          geometry_ : 
                            IndexedLineSet(
                              USE_ : SFString('Orbit1'))))])])]));
void main() { exit(0); }
